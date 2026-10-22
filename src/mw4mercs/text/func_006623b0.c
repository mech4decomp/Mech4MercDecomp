/*
 * FUN_006623B0 (84 B) — Accumulates four scaled function results on the
 * FPU stack and returns the sum.
 *
 * __cdecl-style (one stack param), RET 4. Returns x87 ST(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d598;
extern float g_0076d070;
extern float __cdecl FUN_006622b0(void *p);
extern float __cdecl FUN_00662290(void *p);
extern float __cdecl FUN_006621d0(void *p);
extern float __cdecl FUN_006620b0(void *p);

__declspec(naked) float __fastcall FUN_006623b0(void *param1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_006622b0
        fmul    dword ptr [g_0076d598]
        push    esi
        fstp    dword ptr [esp + 0x10]
        call    FUN_00662290
        fmul    dword ptr [g_0076d598]
        push    esi
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        call    FUN_006621d0
        fmul    dword ptr [g_0076d598]
        push    esi
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        call    FUN_006620b0
        fmul    dword ptr [g_0076d070]
        add     esp, 0x10
        pop     esi
        fadd    dword ptr [esp + 4]
        ret     4
    }
}
