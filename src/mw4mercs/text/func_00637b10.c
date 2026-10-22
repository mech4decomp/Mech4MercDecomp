/*
 * FUN_00637b10 (47 B) — decrements the singleton refcount at [obj+0x4a0];
 * when it hits 0, destroys the object (FUN_00637990 + operator delete)
 * and clears g_007f2d1c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2d1c;   /* DAT_007f2d1c */

extern void __cdecl FUN_00637990(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00637b10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007f2d1c]
        dec     dword ptr [esi + 0x4a0]
        jnz     L_b3d
        test    esi, esi
        jz      L_b33
        mov     ecx, esi
        call    FUN_00637990
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_b33:
        mov     dword ptr [g_007f2d1c], 0x0
L_b3d:
        pop     esi
        ret
    }
}
