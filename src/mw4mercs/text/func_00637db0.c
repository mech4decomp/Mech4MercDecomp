/*
 * FUN_00637db0 (26 B) — __stdcall float getter: returns
 * (g_0076d064 - param_1) + this[0x38] * param_1. RET 0x4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00637a20(void);
extern float g_0076d064;

__declspec(naked) void FUN_00637db0(void)
{
    __asm {
        push    0x38
        call    FUN_00637a20
        fmul    dword ptr [esp + 0x4]
        fld     dword ptr [g_0076d064]
        fsub    dword ptr [esp + 0x4]
        faddp   st(1), st(0)
        ret     0x4
    }
}
