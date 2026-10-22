/* func_004db100.c - FUN_004db100 (125 B) - __thiscall, RET 0x4
 * Returns distance between this+0xd8 and arg+0xd8 (sqrt of sum of squared
 * component differences).
 */
#include <stddef.h>

__declspec(naked) void func_004db100(void)
{
    __asm {
        SUB ESP,0x18
        MOV EAX,dword ptr [ECX + 0xd8]
        MOV ECX,dword ptr [EAX + 0x9c]
        FLD dword ptr [EAX + 0x8c]
        MOV EDX,dword ptr [EAX + 0xac]
        ADD EAX,0x80
        MOV EAX,dword ptr [ESP + 0x1c]
        MOV EAX,dword ptr [EAX + 0xd8]
        FSUBR dword ptr [EAX + 0x8c]
        ADD EAX,0x80
        MOV dword ptr [ESP + 0x10],ECX
        MOV ECX,dword ptr [EAX + 0x1c]
        MOV dword ptr [ESP + 0x14],EDX
        MOV EDX,dword ptr [EAX + 0x2c]
        MOV dword ptr [ESP + 0x4],ECX
        FLD dword ptr [ESP + 0x4]
        FSUB dword ptr [ESP + 0x10]
        MOV dword ptr [ESP + 0x8],EDX
        FLD dword ptr [ESP + 0x8]
        FSUB dword ptr [ESP + 0x14]
        FST dword ptr [ESP + 0x14]
        FLD ST(0)
        FMUL ST(0),ST(1)
        FLD ST(2)
        FMUL ST(0),ST(3)
        FADDP ST(1),ST(0)
        FLD ST(3)
        FMUL ST(0),ST(4)
        FADDP ST(1),ST(0)
        FSQRT
        FSTP ST(3)
        FSTP ST(0)
        FSTP ST(0)
        ADD ESP,0x18
        RET 0x4
    }
}
