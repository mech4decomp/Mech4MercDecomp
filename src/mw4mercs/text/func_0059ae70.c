/*
 * FUN_0059ae70 (208 B) — Game object update/check method.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param.
 * Checks various conditions and performs FPU-based distance
 * comparison. Returns bool (AL).
 *
 * CFLAGS: /O1
 */

#include <stddef.h>

extern int __cdecl FUN_005ef5a0(void);
extern int __cdecl FUN_005ef7f0(void);
extern double __cdecl FUN_00707e70(int param);

extern int DAT_007db090;
extern float DAT_0078235c;
extern float DAT_007704c0;

__declspec(naked) void __stdcall FUN_0059ae70(void)
{
    __asm {
        PUSH    ESI
        MOV     ESI, ECX                    ; this
        MOV     ECX, DWORD PTR [DAT_007db090] ; load global pointer at 0x7DB090
        MOV     AL, [ESI + 0x14]
        CMP     AL, [ECX + 0x28]
        JNE     l_check_type7
        MOV     ECX, ESI
        CALL    FUN_005ef5a0
        TEST    AL, AL
        JE      l_return_false
        MOV     EDX, [ESI + 0xE0]
        MOV     EAX, [EDX + 0x14]
        CMP     EAX, 1
        JE      l_call_check
        CMP     EAX, 9
        JNE     l_return_false
    l_call_check:
        MOV     ECX, ESI
        CALL    FUN_005ef7f0
        TEST    AL, AL
        JE      l_return_false
        MOV     AL, 1
        POP     ESI
        RET     4
    l_check_type7:
        MOV     EAX, [ESI + 0xE0]
        MOV     EAX, [EAX + 0x14]
        CMP     EAX, 7
        JNE     l_check_type1or9
        MOV     EDX, [ESI + 0x78]
        LEA     ECX, [ESI + 0x78]
        PUSH    EDI
        CALL    DWORD PTR [EDX + 4]         ; virtual call
        PUSH    0
        MOV     EDI, EAX
        CALL    FUN_00707e70                ; get double based on param
        FSUB    QWORD PTR [ESI + 0xEC]
        FILD    DWORD PTR [ESP + 0x0C]
        FMUL    DWORD PTR [DAT_0078235c]
        FLD     DWORD PTR [EDI + 0x6C]
        FMUL    DWORD PTR [DAT_007704c0]
        FADDP   ST(1), ST(0)
        FSUBR   DWORD PTR [EDI + 0x6C]
        POP     EDI
        FCOMPP
        /* __emit: MSVC6 inserts 9B WAIT prefix before fstsw ax; ref uses no-WAIT DF E0 */
        __emit   0xDF
        __emit   0xE0
        /* __emit: MSVC6 rejects test ah,imm8 (F6 C4 41) */
        __emit   0xF6
        __emit   0xC4
        __emit   0x41
        JE      l_skip_virtual
        MOV     ECX, [ESI + 0xE0]
        MOV     EAX, [ECX]
        PUSH    0
        PUSH    9
        CALL    DWORD PTR [EAX + 4]         ; virtual call
    l_skip_virtual:
        MOV     ECX, ESI
        CALL    FUN_005ef7f0
        POP     ESI
        RET     4
    l_check_type1or9:
        CMP     EAX, 1
        JE      l_call_check2
        CMP     EAX, 9
        JNE     l_return_false
    l_call_check2:
        MOV     ECX, ESI
        CALL    FUN_005ef7f0
        TEST    AL, AL
        JE      l_return_false
        MOV     AL, 1
        POP     ESI
        RET     4
    l_return_false:
        XOR     AL, AL
        POP     ESI
        RET     4
    }
}
