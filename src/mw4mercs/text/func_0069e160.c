/*
 * FUN_0069e160 (24 B) — __stdcall, 2 params (RET 0x8).
 *
 * Sets *param_1 = 0 then calls FUN_0041eb40(param_1, param_2).
 * HUD element constructor-ish helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041eb40(void);

__declspec(naked) void __stdcall FUN_0069e160(int param_1, int param_2)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        push    edx
        push    eax
        mov     dword ptr [eax], 0x0
        call    FUN_0041eb40
        ret     0x8
    }
}
