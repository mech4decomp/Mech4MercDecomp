/*
 * FUN_00583db0 (54 B) — FPU interpolation / blending function.
 *
 * __fastcall (ECX = param_1), RET (no stack params).
 * Computes a weighted blend between two values using a factor
 * derived from [this+0x440] / [obj+0x2bc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00583db0(void)
{
    extern float DAT_0076d064;
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  EAX, dword ptr [ESI + 0x78]
        LEA  ECX, [ESI + 0x78]
        CALL dword ptr [EAX + 0x4]          ; virtual getter
        FLD  dword ptr [ESI + 0x440]
        FDIV dword ptr [EAX + 0x2bc]
        POP  ESI
        FLD  dword ptr [EAX + 0x2b4]
        FLD  dword ptr [DAT_0076d064]
        FSUB ST(0), ST(2)
        FMULP ST(1), ST(0)
        FLD  dword ptr [EAX + 0x2b0]
        FMUL ST(0), ST(2)
        FADDP ST(1), ST(0)
        FSTP ST(1)
        RET
    }
}
