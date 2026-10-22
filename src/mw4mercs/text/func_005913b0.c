/* Auto-generated inline asm for FUN_005913b0 (0x005913B0) */

extern float DAT_0076c5b0;
extern float DAT_0076d064;

__declspec(naked) void FUN_005913b0(void)
{
    __asm {
        FLD  dword ptr [ECX + 0x8]
        FLD  dword ptr [ECX + 0x4]
        FCOMP dword ptr [ECX]
        FNSTSW AX
        TEST AH, 0x1
        JNZ  not_less_or_equal
        FSTP ST(0)
        FLD  dword ptr [ECX + 0xC]
        RET
not_less_or_equal:
        FLD  dword ptr [ECX + 0x4]
        FCOMP dword ptr [DAT_0076c5b0]
        FNSTSW AX
        TEST AH, 0x40
        JNZ  done
        FSTP ST(0)
        FLD  dword ptr [ECX + 0x4]
        FDIV dword ptr [ECX]
        FLD  dword ptr [DAT_0076d064]
        FSUB ST(0), ST(1)
        FMUL dword ptr [ECX + 0x8]
        FXCH
        FMUL dword ptr [ECX + 0xC]
        FADDP ST(1), ST(0)
done:
        RET
    }
}
