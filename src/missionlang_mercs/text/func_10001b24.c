/*
 * FUN_10001b24 (339 B) — runtime error / message dispatcher. Looks up the
 * message id in the table at 0x10005060; if the table is loaded, writes the
 * message to stderr; otherwise formats a "Runtime Error!" dialog message.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10005060;                                /* 0x10005060 msg table base (id) */
extern int g_10005064;                                /* 0x10005064 msg table string ptr */
extern int g_1000536c;                                /* 0x1000536c state */
extern int g_10005370;                                /* 0x10005370 pending flag */

extern int (__stdcall *g_GetModuleFileNameA)(void *, char *, unsigned int); /* IAT 0x1000403c */
extern void *(__stdcall *g_GetStdHandle)(int);        /* IAT 0x1000402c */
extern int (__stdcall *g_WriteFile)(void *, void *, unsigned int, void *, void *); /* IAT 0x10004064 */

extern void __cdecl FUN_10001ef0(void *, void *);
extern int __cdecl FUN_10001fe0(void *);
extern void *__cdecl FUN_10003060(void *, void *, int);
extern void *__cdecl FUN_10001f00(void *, void *);
extern void __cdecl FUN_10002fce(void *, void *, int);

__declspec(naked) void __cdecl FUN_10001b24(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1a4
        mov     edx, dword ptr [ebp + 8]
        xor     ecx, ecx
        mov     eax, 0x10005060
L_b37:
        cmp     edx, dword ptr [eax]
        jz      L_b46
        add     eax, 8
        inc     ecx
        cmp     eax, 0x100050f0
        jl      L_b37
L_b46:
        push    esi
        mov     esi, ecx
        shl     esi, 3
        cmp     edx, dword ptr [esi + g_10005060]
        jnz     L_c74
        mov     eax, dword ptr [g_1000536c]
        cmp     eax, 1
        jz      L_c4e
        test    eax, eax
        jnz     L_b77
        cmp     dword ptr [g_10005370], 1
        jz      L_c4e
L_b77:
        cmp     edx, 0xfc
        jz      L_c74
        lea     eax, [ebp - 0x1a4]
        push    0x104
        push    eax
        push    0
        call    dword ptr [g_GetModuleFileNameA]
        test    eax, eax
        jnz     L_bae
        lea     eax, [ebp - 0x1a4]
        push    0x10004388
        push    eax
        call    FUN_10001ef0
        pop     ecx
        pop     ecx
L_bae:
        lea     eax, [ebp - 0x1a4]
        push    edi
        push    eax
        lea     edi, [ebp - 0x1a4]
        call    FUN_10001fe0
        inc     eax
        pop     ecx
        cmp     eax, 0x3c
        jbe     L_bf1
        lea     eax, [ebp - 0x1a4]
        push    eax
        call    FUN_10001fe0
        mov     edi, eax
        lea     eax, [ebp - 0x1a4]
        sub     eax, 0x3b
        push    3
        add     edi, eax
        push    0x10004384
        push    edi
        call    FUN_10003060
        add     esp, 0x10
L_bf1:
        lea     eax, [ebp - 0xa0]
        push    0x10004368
        push    eax
        call    FUN_10001ef0
        lea     eax, [ebp - 0xa0]
        push    edi
        push    eax
        call    FUN_10001f00
        lea     eax, [ebp - 0xa0]
        push    0x10004364
        push    eax
        call    FUN_10001f00
        push    dword ptr [esi + g_10005064]
        lea     eax, [ebp - 0xa0]
        push    eax
        call    FUN_10001f00
        push    0x12010
        lea     eax, [ebp - 0xa0]
        push    0x1000433c
        push    eax
        call    FUN_10002fce
        add     esp, 0x2c
        pop     edi
        jmp     L_c74
L_c4e:
        lea     eax, [ebp + 8]
        lea     esi, [esi + g_10005064]
        push    0
        push    eax
        push    dword ptr [esi]
        call    FUN_10001fe0
        pop     ecx
        push    eax
        push    dword ptr [esi]
        push    -0xc
        call    dword ptr [g_GetStdHandle]
        push    eax
        call    dword ptr [g_WriteFile]
L_c74:
        pop     esi
        leave
        ret
    }
}
