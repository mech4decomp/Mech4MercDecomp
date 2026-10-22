/*
 * FUN_10001d5e (339 B) — runtime-error / message emitter. Looks up param_1
 * in the message table at 0x10006060 (8-byte entries: id + string ptr).
 * If the language-init state is active, writes the message string to
 * stderr via WriteFile; otherwise (and param_1 != 0xfc) builds a
 * "Runtime Error!" box: gets the module filename (or "<program name
 * unknown>"), truncates to 60 chars, concatenates the message, and calls
 * the CRT runtime-error reporter FUN_10003e14.
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_10002320(void);              /* _strcpy */
extern void *__cdecl FUN_10002330(void);              /* _strcat */
extern int __cdecl FUN_10002410(void);                /* _strlen */
extern void *__cdecl FUN_10003ea0(void);              /* _strncpy */
extern void __cdecl FUN_10003e14(void);               /* CRT runtime-error reporter */

extern char g_10006060;                               /* 0x10006060 message table base */
extern char g_10006064;                               /* 0x10006064 message strings */
extern char g_100060f0;                               /* 0x100060f0 message table end */

extern int g_10008a44;                                /* 0x10008a44 init state */
extern int g_10008a48;                                /* 0x10008a48 state flag */

extern char g_str_100053d8[];                         /* "<program name unknown>" */
extern char g_str_100053d4[];                         /* "..." */
extern char g_str_100053b8[];                         /* "Runtime Error!\n\nProgram: " */
extern char g_str_100053b4[];                         /* message prefix */
extern char g_str_1000538c[];                         /* "Microsoft Visual C++ Runtime Library" */

extern void *(__stdcall *g_GetModuleFileNameA)(void *); /* IAT 0x10005044 */
extern void *(__stdcall *g_GetStdHandle)(void *);       /* IAT 0x10005034 */
extern void *(__stdcall *g_WriteFile)(void *);          /* IAT 0x10005078 */

__declspec(naked) void __cdecl FUN_10001d5e(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1a4
        mov     edx, dword ptr [ebp + 8]
        xor     ecx, ecx
        mov     eax, offset g_10006060
L_1d71:
        cmp     edx, dword ptr [eax]
        jz      L_1d80
        add     eax, 8
        inc     ecx
        cmp     eax, offset g_100060f0
        jl      L_1d71
L_1d80:
        push    esi
        mov     esi, ecx
        shl     esi, 3
        cmp     edx, dword ptr [esi + g_10006060]
        jnz     L_1eae
        mov     eax, dword ptr [g_10008a44]
        cmp     eax, 1
        jz      L_1e88
        test    eax, eax
        jnz     L_1db1
        cmp     dword ptr [g_10008a48], 1
        jz      L_1e88
L_1db1:
        cmp     edx, 0xfc
        jz      L_1eae
        lea     eax, [ebp - 0x1a4]
        push    0x104
        push    eax
        push    0
        call    dword ptr [g_GetModuleFileNameA]
        test    eax, eax
        jnz     L_1de8
        lea     eax, [ebp - 0x1a4]
        push    offset g_str_100053d8
        push    eax
        call    FUN_10002320
        pop     ecx
        pop     ecx
L_1de8:
        lea     eax, [ebp - 0x1a4]
        push    edi
        push    eax
        lea     edi, [ebp - 0x1a4]
        call    FUN_10002410
        inc     eax
        pop     ecx
        cmp     eax, 0x3c
        jbe     L_1e2b
        lea     eax, [ebp - 0x1a4]
        push    eax
        call    FUN_10002410
        mov     edi, eax
        lea     eax, [ebp - 0x1a4]
        sub     eax, 0x3b
        push    3
        add     edi, eax
        push    offset g_str_100053d4
        push    edi
        call    FUN_10003ea0
        add     esp, 0x10
L_1e2b:
        lea     eax, [ebp - 0xa0]
        push    offset g_str_100053b8
        push    eax
        call    FUN_10002320
        lea     eax, [ebp - 0xa0]
        push    edi
        push    eax
        call    FUN_10002330
        lea     eax, [ebp - 0xa0]
        push    offset g_str_100053b4
        push    eax
        call    FUN_10002330
        push    dword ptr [esi + g_10006064]
        lea     eax, [ebp - 0xa0]
        push    eax
        call    FUN_10002330
        push    0x12010
        lea     eax, [ebp - 0xa0]
        push    offset g_str_1000538c
        push    eax
        call    FUN_10003e14
        add     esp, 0x2c
        pop     edi
        jmp     L_1eae
L_1e88:
        lea     eax, [ebp + 8]
        lea     esi, [esi + g_10006064]
        push    0
        push    eax
        push    dword ptr [esi]
        call    FUN_10002410
        pop     ecx
        push    eax
        push    dword ptr [esi]
        push    -0xc
        call    dword ptr [g_GetStdHandle]
        push    eax
        call    dword ptr [g_WriteFile]
L_1eae:
        pop     esi
        leave
        ret
    }
}
