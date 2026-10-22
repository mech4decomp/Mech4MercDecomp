/*
 * FUN_00662af0 (78 B) — __cdecl, RET 4 (one stack param).
 *
 * FPU chain: calls four float-returning functions (FUN_006622b0,
 * FUN_00662290, FUN_006621d0, FUN_006620b0), scaling each result by a
 * global float constant and accumulating into the param slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00662af0_float_76df00;   /* _DAT_0076df00 */
extern float g_00662af0_float_78b950;   /* _DAT_0078b950 */
extern float g_00662af0_float_76d598;   /* _DAT_0076d598 */

extern void __cdecl FUN_006622b0(void);
extern void __cdecl FUN_00662290(void);
extern void __cdecl FUN_006621d0(void);
extern void __cdecl FUN_006620b0(void);

__declspec(naked) void __stdcall FUN_00662af0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_006622b0
        fmul    dword ptr [g_00662af0_float_76df00]
        push    esi
        fstp    dword ptr [esp + 0x10]
        call    FUN_00662290
        fmul    dword ptr [g_00662af0_float_78b950]
        push    esi
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        call    FUN_006621d0
        fmul    dword ptr [g_00662af0_float_76d598]
        push    esi
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        call    FUN_006620b0
        fadd    dword ptr [esp + 0x18]
        add     esp, 0x10
        pop     esi
        ret     0x4
    }
}
