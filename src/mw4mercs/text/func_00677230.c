/*
 * FUN_00677230 (13 B) — HUD map/hud4 family thunk. Forwards its single
 * argument to FUN_0066ab00 (__stdcall, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0066ab00(void);

__declspec(naked) void FUN_00677230(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        call    FUN_0066ab00
        ret     0x4
    }
}
