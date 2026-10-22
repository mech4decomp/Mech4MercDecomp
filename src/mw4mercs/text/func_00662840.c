/*
 * FUN_00662840 (92 B) — FPU math helper.
 *
 * __stdcall, one stack param (RET 4). Chains five __cdecl calls
 * (FUN_00662290/006621D0/006620B0/006622B0/00662130), scaling each
 * result by a global float and accumulating on the FPU stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076df00;
extern float g_0076d070;
extern void __cdecl FUN_00662290(void);
extern void __cdecl FUN_006621d0(void);
extern void __cdecl FUN_006620b0(void);
extern void __cdecl FUN_006622b0(void);
extern void __cdecl FUN_00662130(void);

__declspec(naked) void __stdcall FUN_00662840(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_00662290
        fmul    dword ptr [g_0076df00]
        push    esi
        fstp    dword ptr [esp + 0x10]
        call    FUN_006621d0
        fmul    dword ptr [g_0076d070]
        push    esi
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        call    FUN_006620b0
        fmul    dword ptr [g_0076d070]
        push    esi
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        call    FUN_006622b0
        fadd    dword ptr [esp + 0x18]
        push    esi
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00662130
        fadd    dword ptr [esp + 0x1c]
        add     esp, 0x14
        pop     esi
        ret     4
    }
}
