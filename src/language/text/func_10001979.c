/*
 * FUN_10001979 (306 B) — CRT environment-string getter: fetch the
 * environment block (W or A depending on mode), convert to a single
 * malloc'd ANSI string, free the source block, return the copy.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_10008b94;   /* 0x10008b94 mode flag */

extern void *(__stdcall *g_GetEnvironmentStringsW)(void); /* IAT 0x10005058 */
extern void *(__stdcall *g_GetEnvironmentStrings)(void);  /* IAT 0x10005054 */
extern int (__stdcall *g_WideCharToMultiByte)(unsigned int, unsigned int, void *, int, char *, int, void *, void *); /* IAT 0x10005050 */
extern void (__stdcall *g_FreeEnvironmentStringsW)(void *); /* IAT 0x1000504c */
extern void (__stdcall *g_FreeEnvironmentStringsA)(void *); /* IAT 0x10005048 */

extern void *__cdecl FUN_100021e2(unsigned int);   /* _malloc */
extern void __cdecl FUN_100020f9(void *);          /* free */
extern void __cdecl FUN_10002880(void *, void *, unsigned int); /* memcpy */

__declspec(naked) void __stdcall FUN_10001979(void)
{
    __asm {
        push    ecx
        push    ecx
        mov     eax, dword ptr [g_10008b94]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_GetEnvironmentStringsW]
        push    esi
        push    edi
        xor     ebx, ebx
        xor     esi, esi
        xor     edi, edi
        cmp     eax, ebx
        jnz     L_19c7
        call    ebp
        mov     esi, eax
        cmp     esi, ebx
        jz      L_19a8
        mov     dword ptr [g_10008b94], 1
        jmp     L_19d0
L_19a8:
        call    dword ptr [g_GetEnvironmentStrings]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_1aa2
        mov     dword ptr [g_10008b94], 2
        jmp     L_1a56
L_19c7:
        cmp     eax, 1
        jnz     L_1a51
L_19d0:
        cmp     esi, ebx
        jnz     L_19e0
        call    ebp
        mov     esi, eax
        cmp     esi, ebx
        jz      L_1aa2
L_19e0:
        cmp     word ptr [esi], bx
        mov     eax, esi
        jz      L_19f5
L_19e7:
        inc     eax
        inc     eax
        cmp     word ptr [eax], bx
        jnz     L_19e7
        inc     eax
        inc     eax
        cmp     word ptr [eax], bx
        jnz     L_19e7
L_19f5:
        sub     eax, esi
        mov     edi, dword ptr [g_WideCharToMultiByte]
        sar     eax, 1
        push    ebx
        push    ebx
        inc     eax
        push    ebx
        push    ebx
        push    eax
        push    esi
        push    ebx
        push    ebx
        mov     dword ptr [esp + 0x34], eax
        call    edi
        mov     ebp, eax
        cmp     ebp, ebx
        jz      L_1a46
        push    ebp
        call    FUN_100021e2
        cmp     eax, ebx
        pop     ecx
        mov     dword ptr [esp + 0x10], eax
        jz      L_1a46
        push    ebx
        push    ebx
        push    ebp
        push    eax
        push    dword ptr [esp + 0x24]
        push    esi
        push    ebx
        push    ebx
        call    edi
        test    eax, eax
        jnz     L_1a42
        push    dword ptr [esp + 0x10]
        call    FUN_100020f9
        pop     ecx
        mov     dword ptr [esp + 0x10], ebx
L_1a42:
        mov     ebx, dword ptr [esp + 0x10]
L_1a46:
        push    esi
        call    dword ptr [g_FreeEnvironmentStringsW]
        mov     eax, ebx
        jmp     L_1aa4
L_1a51:
        cmp     eax, 2
        jnz     L_1aa2
L_1a56:
        cmp     edi, ebx
        jnz     L_1a66
        call    dword ptr [g_GetEnvironmentStrings]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_1aa2
L_1a66:
        cmp     byte ptr [edi], bl
        mov     eax, edi
        jz      L_1a76
L_1a6c:
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_1a6c
        inc     eax
        cmp     byte ptr [eax], bl
        jnz     L_1a6c
L_1a76:
        sub     eax, edi
        inc     eax
        mov     ebp, eax
        push    ebp
        call    FUN_100021e2
        mov     esi, eax
        pop     ecx
        cmp     esi, ebx
        jnz     L_1a8c
        xor     esi, esi
        jmp     L_1a97
L_1a8c:
        push    ebp
        push    edi
        push    esi
        call    FUN_10002880
        add     esp, 0xc
L_1a97:
        push    edi
        call    dword ptr [g_FreeEnvironmentStringsA]
        mov     eax, esi
        jmp     L_1aa4
L_1aa2:
        xor     eax, eax
L_1aa4:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        pop     ecx
        ret
    }
}
