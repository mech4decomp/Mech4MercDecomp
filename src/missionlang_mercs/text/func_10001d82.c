/*
 * FUN_10001d82 (141 B) — allocate a zeroed buffer of param_1*param_2 bytes,
 * using the private heap (or the CRT allocator for small sizes).
 *
 * __cdecl, 2 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10005340;                                /* 0x10005340 small-alloc threshold */
extern void *g_100057a8;                              /* 0x100057a8 heap handle */
extern int g_1000553c;                                /* 0x1000553c alloc-fallback flag */

extern void *(__stdcall *g_HeapAlloc)(void *, unsigned int, unsigned int); /* IAT 0x10004074 */

extern void __cdecl FUN_10001d0c(int);
extern void *__cdecl FUN_10002b19(int);
extern void __cdecl FUN_10001d6d(int);
extern int __cdecl FUN_100031b8(unsigned int);
extern void *__cdecl FUN_10003160(void *, int, int);  /* _memset */

__declspec(naked) void *__cdecl FUN_10001d82(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        imul    esi, dword ptr [esp + 0x14]
        cmp     esi, -0x20
        mov     ebx, esi
        ja      L_da2
        test    esi, esi
        jnz     L_d9c
        push    1
        pop     esi
L_d9c:
        add     esi, 0xf
        and     esi, 0xfffffff0
L_da2:
        xor     edi, edi
        cmp     esi, -0x20
        ja      L_de3
        cmp     ebx, dword ptr [g_10005340]
        ja      L_dce
        push    9
        call    FUN_10001d0c
        push    ebx
        call    FUN_10002b19
        push    9
        mov     edi, eax
        call    FUN_10001d6d
        add     esp, 0xc
        test    edi, edi
        jnz     L_df9
L_dce:
        push    esi
        push    8
        push    dword ptr [g_100057a8]
        call    dword ptr [g_HeapAlloc]
        mov     edi, eax
        test    edi, edi
        jnz     L_e05
L_de3:
        cmp     dword ptr [g_1000553c], 0
        jz      L_e05
        push    esi
        call    FUN_100031b8
        test    eax, eax
        pop     ecx
        jz      L_e0b
        jmp     L_da2
L_df9:
        push    ebx
        push    0
        push    edi
        call    FUN_10003160
        add     esp, 0xc
L_e05:
        mov     eax, edi
L_e07:
        pop     edi
        pop     esi
        pop     ebx
        ret
L_e0b:
        xor     eax, eax
        jmp     L_e07
    }
}
