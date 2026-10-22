/* func_004db180.c - FUN_004db180 (141 B) - __thiscall, RET 0x8
 * Squared distance between this+0xd8 and arg+0xd8; if arg2 nonzero, replaces
 * the z-difference with a constant before summing squares.
 */
#include <stddef.h>

extern float g_76c5b0;   /* [0x0076c5b0] */

__declspec(naked) void func_004db180(void)
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
        MOV AL,byte ptr [ESP + 0x20]
        TEST AL,AL
        MOV dword ptr [ESP + 0x4],ECX
        FLD dword ptr [ESP + 0x4]
        FSUB dword ptr [ESP + 0x10]
        MOV dword ptr [ESP + 0x8],EDX
        FLD dword ptr [ESP + 0x8]
        FSUB dword ptr [ESP + 0x14]
        FSTP dword ptr [ESP + 0x14]
        JZ skip_const
        FSTP ST(0)
        FLD dword ptr [g_76c5b0]
skip_const:
        FLD dword ptr [ESP + 0x14]
        FMUL dword ptr [ESP + 0x14]
        FLD ST(2)
        FMUL ST(0),ST(3)
        FADDP ST(1),ST(0)
        FLD ST(1)
        FMUL ST(0),ST(2)
        FADDP ST(1),ST(0)
        FSTP ST(2)
        FSTP ST(0)
        ADD ESP,0x18
        RET 0x8
    }
}
