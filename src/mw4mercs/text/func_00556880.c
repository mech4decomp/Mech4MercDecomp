/*
 * FUN_00556880 (180 B) — __thiscall method on some game object.
 * Manages a counter at +0x3e0, clamped to [0, 1].
 * If byte at +0x589 is nonzero: decrement counter when param->field_10 <= 0,
 * clamp to 0 and return early.
 * If byte at +0x589 is zero: increment/decrement counter based on param->field_10,
 * with additional checks on +0x384 and +0x5ac.
 * Calls FUN_00707E70(0) for a random value, subtracts a constant, stores at +0x420.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __cdecl FUN_00707e70(int param);

__declspec(naked) void __stdcall FUN_00556880(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  AL, byte ptr [ESI + 0x589]
        TEST AL, AL
        JZ   L_not_set
        MOV  EAX, dword ptr [ESP + 0x8]
        MOV  ECX, dword ptr [EAX + 0x10]
        TEST ECX, ECX
        JG   L_skip_dec
        DEC  dword ptr [ESI + 0x3e0]
L_skip_dec:
        MOV  EAX, dword ptr [ESI + 0x3e0]
        TEST EAX, EAX
        JGE  L_return
        MOV  dword ptr [ESI + 0x3e0], 0x0
        POP  ESI
        RET  0x4

L_not_set:
        MOV  ECX, dword ptr [ESP + 0x8]
        MOV  EAX, dword ptr [ECX + 0x10]
        TEST EAX, EAX
        JLE  L_dec_counter
        MOV  EDX, dword ptr [ESI + 0x384]
        MOV  EAX, dword ptr [EDX + 0x10]
        SHR  EAX, 0x13
        TEST AL, 0x1
        JZ   L_inc_counter
        MOV  AL, byte ptr [ESI + 0x5ac]
        TEST AL, AL
        JZ   L_return
L_inc_counter:
        MOV  ECX, dword ptr [ESI + 0x3e0]
        INC  ECX
        PUSH 0x0
        MOV  dword ptr [ESI + 0x3e0], ECX
        CALL FUN_00707e70
        /* _emit: FSUB qword ptr [0x0077d088] — MSVC6 can't encode FPU mem operand with absolute address */
        _emit 0xDC
        _emit 0x25
        _emit 0x88
        _emit 0xD0
        _emit 0x77
        _emit 0x00
        /* _emit: FSTP qword ptr [ESI + 0x420] — MSVC6 encodes wrong ModRM for this FPU store */
        _emit 0xDD
        _emit 0x9E
        _emit 0x20
        _emit 0x04
        _emit 0x00
        _emit 0x00
        JMP  L_check

L_dec_counter:
        DEC  dword ptr [ESI + 0x3e0]

L_check:
        MOV  EAX, dword ptr [ESI + 0x3e0]
        TEST EAX, EAX
        JGE  L_clamp_check
        MOV  dword ptr [ESI + 0x3e0], 0x0

L_clamp_check:
        MOV  ECX, dword ptr [ESI + 0x3e0]
        MOV  EAX, 0x1
        CMP  ECX, EAX
        JLE  L_return
        MOV  dword ptr [ESI + 0x3e0], EAX

L_return:
        POP  ESI
        RET  0x4
    }
}
