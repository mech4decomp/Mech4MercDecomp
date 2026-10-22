/*
 * FUN_00557360 (335 B) — __thiscall method on some game object.
 * Complex function with FPU operations, switch on +0x368 value.
 * Reads from +0x384->+0x410/+0x40c, calls FUN_00420840,
 * calls vtable method at +0x78, copies fields based on switch value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00420840(int param);

__declspec(naked) void __stdcall FUN_00557360(void)
{
    __asm {
        SUB  ESP, 0x30
        PUSH EBX
        MOV  EBX, ECX
        MOV  ECX, dword ptr [EBX + 0x384]
        MOV  EAX, dword ptr [ECX + 0x410]
        PUSH ESI
        MOV  ESI, dword ptr [ECX + 0x40c]
        SUB  EAX, ESI
        SAR  EAX, 0x2
        JZ   L_check_124
        MOV  EDX, ESI
        MOV  EAX, dword ptr [EDX]
        TEST EAX, EAX
        JZ   L_check_124
        MOV  EAX, dword ptr [EAX + 0x124]
        TEST EAX, EAX
        JNZ  L_have_ptr
L_check_124:
        MOV  EAX, dword ptr [ECX + 0x124]
        TEST EAX, EAX
        JZ   L_no_ptr
L_have_ptr:
        PUSH EDI
        ADD  EAX, 0x10
        PUSH EAX
        LEA  ECX, [ESP + 0x28]
        CALL FUN_00420840
        FLD  dword ptr [ESP + 0x34]
        /* _emit: FSUB dword ptr [0x0076d3c8] — MSVC6 can't encode FPU mem operand with absolute address */
        _emit 0xD8
        _emit 0x25
        _emit 0xC8
        _emit 0xD3
        _emit 0x76
        _emit 0x00
        MOV  ECX, 0x6
        LEA  ESI, [ESP + 0x24]
        LEA  EDI, [ESP + 0xc]
        REP MOVSD
        /* _emit: FSTP dword ptr [EBX + 0x530] — MSVC6 encodes wrong ModRM for this FPU store */
        _emit 0xD9
        _emit 0x9B
        _emit 0x30
        _emit 0x05
        _emit 0x00
        _emit 0x00
        POP  EDI
        JMP  L_after_ptr

L_no_ptr:
        MOV  dword ptr [EBX + 0x530], 0xc0000000
        MOV  dword ptr [ESP + 0xc], 0x0
        MOV  dword ptr [ESP + 0x14], 0x0
        MOV  dword ptr [ESP + 0x8], 0x0
        MOV  dword ptr [ESP + 0x18], 0x0

L_after_ptr:
        MOV  EAX, dword ptr [EBX + 0x78]
        LEA  ECX, [EBX + 0x78]
        CALL dword ptr [EAX + 0x4]
        MOV  ECX, dword ptr [EBX + 0x368]
        SUB  ECX, 0x0
        JZ   L_case_0
        DEC  ECX
        JZ   L_case_1
        DEC  ECX
        JNZ  L_epilogue
        /* case 2 */
        MOV  ECX, dword ptr [EAX + 0x48]
        FLD  dword ptr [ESP + 0xc]
        MOV  EDX, dword ptr [EAX + 0x4c]
        MOV  EAX, dword ptr [EAX + 0x50]
        MOV  dword ptr [EBX + 0x518], ECX
        /* _emit: FADD dword ptr [EBX + 0x518] — MSVC6 can't encode FPU add with [reg+disp] */
        _emit 0xD8
        _emit 0x83
        _emit 0x18
        _emit 0x05
        _emit 0x00
        _emit 0x00
        MOV  dword ptr [EBX + 0x51c], EDX
        MOV  dword ptr [EBX + 0x520], EAX
        /* _emit: FSTP dword ptr [EBX + 0x518] — MSVC6 encodes wrong ModRM for this FPU store */
        _emit 0xD9
        _emit 0x9B
        _emit 0x18
        _emit 0x05
        _emit 0x00
        _emit 0x00
        JMP  L_merge

L_case_1:
        MOV  ECX, dword ptr [EAX + 0x3c]
        FLD  dword ptr [ESP + 0x8]
        MOV  EDX, dword ptr [EAX + 0x40]
        MOV  EAX, dword ptr [EAX + 0x44]
        MOV  dword ptr [EBX + 0x518], ECX
        /* _emit: FADD dword ptr [EBX + 0x518] — MSVC6 can't encode FPU add with [reg+disp] */
        _emit 0xD8
        _emit 0x83
        _emit 0x18
        _emit 0x05
        _emit 0x00
        _emit 0x00
        MOV  dword ptr [EBX + 0x51c], EDX
        MOV  dword ptr [EBX + 0x520], EAX
        /* _emit: FSTP dword ptr [EBX + 0x518] — MSVC6 encodes wrong ModRM for this FPU store */
        _emit 0xD9
        _emit 0x9B
        _emit 0x18
        _emit 0x05
        _emit 0x00
        _emit 0x00
        JMP  L_merge

L_case_0:
        MOV  ECX, dword ptr [EAX + 0x30]
        MOV  EDX, dword ptr [EAX + 0x34]
        MOV  EAX, dword ptr [EAX + 0x38]
        MOV  dword ptr [EBX + 0x518], ECX
        MOV  dword ptr [EBX + 0x51c], EDX
        MOV  dword ptr [EBX + 0x520], EAX

L_merge:
        FLD  dword ptr [ESP + 0x14]
        /* _emit: FADD dword ptr [EBX + 0x51c] — MSVC6 can't encode FPU add with [reg+disp] */
        _emit 0xD8
        _emit 0x83
        _emit 0x1C
        _emit 0x05
        _emit 0x00
        _emit 0x00
        /* _emit: FSTP dword ptr [EBX + 0x51c] — MSVC6 encodes wrong ModRM for this FPU store */
        _emit 0xD9
        _emit 0x9B
        _emit 0x1C
        _emit 0x05
        _emit 0x00
        _emit 0x00

L_epilogue:
        /* _emit: FLD dword ptr [EBX + 0x520] — MSVC6 can't encode FPU load with [reg+disp] */
        _emit 0xD9
        _emit 0x83
        _emit 0x20
        _emit 0x05
        _emit 0x00
        _emit 0x00
        POP  ESI
        /* _emit: FSUB dword ptr [ESP + 0x14] — MSVC6 can't encode FPU sub with [ESP+disp] */
        _emit 0xD8
        _emit 0x64
        _emit 0x24
        _emit 0x14
        /* _emit: FSTP dword ptr [EBX + 0x520] — MSVC6 encodes wrong ModRM for this FPU store */
        _emit 0xD9
        _emit 0x9B
        _emit 0x20
        _emit 0x05
        _emit 0x00
        _emit 0x00
        POP  EBX
        ADD  ESP, 0x30
        RET
    }
}
