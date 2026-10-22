/*
 * FUN_00662620 (58 B) — Computes a weighted sum of three function results
 * scaled by a global float constant.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __cdecl FUN_006622b0(void *param);
extern float __cdecl FUN_00662290(void *param);
extern float __cdecl FUN_006620b0(void *param);
extern float g_76d598; /* _DAT_0076d598 */

__declspec(naked) void __stdcall FUN_00662620(void *param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_006622b0
        fmul    dword ptr [g_76d598]
        push    esi
        fstp    dword ptr [esp + 0x10]
        call    FUN_00662290
        fmul    dword ptr [g_76d598]
        push    esi
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        call    FUN_006620b0
        fadd    dword ptr [esp + 0x14]
        add     esp, 0xc
        pop     esi
        ret     0x4
    }
}
