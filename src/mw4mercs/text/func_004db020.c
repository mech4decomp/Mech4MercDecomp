/* func_004db020.c - FUN_004db020 (224 B) - __thiscall, RET 0xc
 * Distance-squared check between two objects (this+0xd8 vs arg+0xd8) against
 * a squared radius; returns 1 if within range, 0 otherwise.
 */
#include <stddef.h>

extern float g_773464;   /* [0x00773464] */

__declspec(naked) void func_004db020(void)
{
    __asm {
        SUB ESP,0x18
        MOV EAX,dword ptr [ECX + 0xd8]
        MOV ECX,dword ptr [EAX + 0x8c]
        FLD dword ptr [EAX + 0x9c]
        MOV EDX,dword ptr [EAX + 0xac]
        FST dword ptr [ESP + 0x10]
        FCOMP dword ptr [g_773464]
        ADD EAX,0x80
        MOV EAX,dword ptr [ESP + 0x1c]
        MOV EAX,dword ptr [EAX + 0xd8]
        ADD EAX,0x80
        MOV dword ptr [ESP + 0xc],ECX
        MOV ECX,dword ptr [EAX + 0xc]
        MOV dword ptr [ESP + 0x14],EDX
        MOV EDX,dword ptr [EAX + 0x1c]
        MOV EAX,dword ptr [EAX + 0x2c]
        MOV dword ptr [ESP + 0x8],EAX
        FNSTSW AX
        __emit 0x89  /* __emit: MSVC6 drops 00 disp for mov [esp],ecx; ref needs 89 4C 24 00 */
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        TEST AH,0x1
        MOV dword ptr [ESP + 0x4],EDX
        JNZ ret_false
        FLD dword ptr [ESP + 0x4]
        FCOMP dword ptr [g_773464]
        FNSTSW AX
        TEST AH,0x1
        JNZ ret_false
        MOV AL,byte ptr [ESP + 0x24]
        TEST AL,AL
        JZ skip_zero
        MOV dword ptr [ESP + 0x10],0x0
        MOV dword ptr [ESP + 0x4],0x0
skip_zero:
        __emit 0xD9  /* __emit: MSVC6 drops 00 disp for fld [esp]; ref needs D9 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        FSUB dword ptr [ESP + 0xc]
        FLD dword ptr [ESP + 0x4]
        FSUB dword ptr [ESP + 0x10]
        FLD dword ptr [ESP + 0x8]
        FSUB dword ptr [ESP + 0x14]
        FLD ST(0)
        FMUL ST(0),ST(1)
        FLD ST(2)
        FMUL ST(0),ST(3)
        FADDP ST(1),ST(0)
        FLD ST(3)
        FMUL ST(0),ST(4)
        FADDP ST(1),ST(0)
        FLD dword ptr [ESP + 0x20]
        FMUL dword ptr [ESP + 0x20]
        FCOMPP
        FSTP ST(0)
        FNSTSW AX
        FSTP ST(0)
        TEST AH,0x1
        FSTP ST(0)
        JNZ ret_zero
        MOV EAX,0x1
        ADD ESP,0x18
        RET 0xc
ret_zero:
        XOR EAX,EAX
        ADD ESP,0x18
        RET 0xc
ret_false:
        XOR AL,AL
        ADD ESP,0x18
        RET 0xc
    }
}
