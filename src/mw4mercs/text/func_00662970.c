/*
 * FUN_00662970 (98 B) — __stdcall (RET 0x4), 1 param.
 *
 * Nested FPU accumulation: calls 5 helpers with param_1, multiplies each
 * result by a global constant, and sums them into the stack frame.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076df00;
extern float g_0076d598;
extern void __cdecl FUN_006622b0(void *p);
extern void __cdecl FUN_00662290(void *p);
extern void __cdecl FUN_006621d0(void *p);
extern void __cdecl FUN_006621a0(void *p);
extern void __cdecl FUN_006620b0(void *p);

__declspec(naked) void FUN_00662970(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    esi
        call    FUN_006622b0
        fmul    dword ptr [g_0076df00]
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
        call    FUN_006621a0
        fmul    dword ptr [g_0076d598]
        push    esi
        fadd    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x1c]
        call    FUN_006620b0
        fadd    dword ptr [esp + 0x1c]
        add     esp, 0x14
        pop     esi
        ret     0x4
    }
}
