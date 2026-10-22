/*
 * FUN_5e031fe9 (98 B) - locale validation helper. Calls the locale-info
 * function pointer (DAT_5e77aaf8), compares the returned codepage against
 * the requested one, and returns 1 on match (or when param_2 is 0).
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77aaf8;   /* DAT_5e77aaf8 (locale-info fn ptr) */
extern int g_5e77aae8;   /* DAT_5e77aae8 */
extern int __cdecl FUN_5e032167(void *);
extern int __cdecl FUN_5e0321a0(void *);
extern int __cdecl FUN_5e02e6b0(void);

__declspec(naked) void FUN_5e031fe9(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x78
        lea     eax, [ebp-0x78]
        push    0x78
        push    eax
        mov     eax, dword ptr [ebp+0x8]
        and     eax, 0x3ff
        push    0x1
        or      ah, 0x4
        push    eax
        call    dword ptr [g_5e77aaf8]
        test    eax, eax
        jz      L2042
        lea     eax, [ebp-0x78]
        push    eax
        call    FUN_5e032167
        cmp     dword ptr [ebp+0x8], eax
        pop     ecx
        jz      L2046
        cmp     dword ptr [ebp+0xc], 0x0
        jz      L2046
        push    esi
        push    dword ptr [g_5e77aae8]
        call    FUN_5e0321a0
        push    dword ptr [g_5e77aae8]
        mov     esi, eax
        call    FUN_5e02e6b0
        pop     ecx
        cmp     esi, eax
        pop     ecx
        pop     esi
        jnz     L2046
    L2042:
        xor     eax, eax
        leave
        ret
    L2046:
        push    0x1
        pop     eax
        leave
        ret
    }
}
