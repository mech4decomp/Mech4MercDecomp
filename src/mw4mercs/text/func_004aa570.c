/*
 * FUN_004aa570 (39 B) — MLR subsystem cleanup: if a global object pointer
 * (g_007da99c) is non-null, destroy it (thiscall FUN_00415200) and free it
 * (FUN_004084e0), then null the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da99c;
extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void FUN_004aa570(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007da99c]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        mov     dword ptr [g_007da99c], 0
        pop     esi
        ret
    }
}
