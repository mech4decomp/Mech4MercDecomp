/*
 * FUN_006473c0 (59 B) — Lazily allocates/constructs a singleton object
 * (0x48 bytes) and bumps a reference counter.
 *
 * __cdecl, no params, RET (no cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned long size);
extern void *__cdecl FUN_00647130(void);
extern unsigned long g_7f2d2c; /* DAT_007f2d2c */
extern unsigned long g_7f2d30; /* _DAT_007f2d30 */

__declspec(naked) void __cdecl FUN_006473c0(void)
{
    __asm {
        mov     eax, dword ptr [g_7f2d2c]
        test    eax, eax
        jnz     L_inc
        push    0x48
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_zero
        mov     ecx, eax
        call    FUN_00647130
        mov     dword ptr [g_7f2d2c], eax
        inc     dword ptr [g_7f2d30]
        ret
    L_zero:
        mov     dword ptr [g_7f2d2c], 0x0
    L_inc:
        inc     dword ptr [g_7f2d30]
        ret
    }
}
