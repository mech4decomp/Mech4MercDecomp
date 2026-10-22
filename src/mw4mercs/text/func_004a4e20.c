/*
 * FUN_004a4e20 (39 B) — MLR subsystem. Destroys the CardCloud singleton
 * (FUN_00415200 + free) and clears the global pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void);
extern int g_007da988;

__declspec(naked) void FUN_004a4e20(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da988]
        test    esi, esi
        jz      L_4e3b
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_4e3b:
        mov     dword ptr [g_007da988], 0x0
        pop     esi
        ret
    }
}
