/* FUN_0055e440 ??? FPU: call helper, then fsubr/fmul/fadd with constants */
#include "mw4/common.h"

__declspec(naked) void func_0055e440(void)
{
    

extern void __cdecl FUN_00415020(void);
extern float DAT_0076d070;
extern float DAT_007dddb8;
__asm {
        call FUN_00415020
        fsub    dword ptr [DAT_0076d070]
        fmul    dword ptr [DAT_007dddb8]
        fadd    dword ptr [esp + 4]
        ret
    }
}
