/*
 * FUN_00557DD0 (395 B) — __thiscall method on some game object.
 * Complex function with global data XOR obfuscation, multiple checks,
 * and calls to FUN_0061ACF0, FUN_0061AD20, FUN_00553510, FUN_00415230,
 * FUN_00559BE0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0061acf0(int param);
extern int __cdecl FUN_0061ad20(int param);
extern int __cdecl FUN_00553510(void);
extern int __cdecl FUN_00415230(int param);
extern void __cdecl FUN_00559be0(int param);

__declspec(naked) void __stdcall FUN_00557dd0(void)
{
    __asm {
        PUSH EBX
        PUSH ESI
        PUSH EDI
        MOV  EDI, ECX
        MOV  EAX, dword ptr [EDI + 0x384]
        MOV  ECX, dword ptr [EAX + 0x10]
        SHR  ECX, 0x13
        TEST CL, 0x1
        JNZ  L_return
        MOV  AL, byte ptr [EDI + 0x589]
        TEST AL, AL
        JNZ  L_return
        MOV  AL, byte ptr [EDI + 0x5ac]
        TEST AL, AL
        JNZ  L_return
        PUSH 0x40
        CALL FUN_0061acf0
        MOV  ECX, EAX
        CALL FUN_0061ad20
        TEST AL, AL
        JZ   L_return
        /* _emit: MOV EDX, [0x007dab44] — MSVC6 encodes mov reg, imm32 as immediate load, not memory deref */
        _emit 0x8B
        _emit 0x15
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        MOV  EAX, dword ptr [EDX]
        /* _emit: XOR EAX, [0x007dab40] — MSVC6 can't encode XOR with absolute address */
        _emit 0x33
        _emit 0x05
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        MOV  ECX, dword ptr [EAX + 0xc]
        XOR  ECX, 0x85739531
        MOV  EDX, dword ptr [ECX + 0x50]
        MOV  ECX, dword ptr [EDX + 0x58]
        TEST ECX, ECX
        JZ   L_return
        MOV  ECX, dword ptr [EAX + 0x40]
        XOR  ECX, 0x85739531
        JZ   L_check_param
        MOV  EDX, dword ptr [EAX + 0x40]
        XOR  EDX, 0x85739531
        MOV  EAX, dword ptr [EDX + 0x50]
        MOV  CL, byte ptr [EAX + 0x28]
        TEST CL, CL
        JNZ  L_return

L_check_param:
        MOV  ECX, dword ptr [ESP + 0x10]
        MOV  EAX, dword ptr [ECX + 0x10]
        TEST EAX, EAX
        JLE  L_return
        MOV  ECX, EDI
        CALL FUN_00553510
        TEST AL, AL
        JZ   L_return
        MOV  ESI, dword ptr [EDI + 0x384]
        TEST ESI, ESI
        JZ   L_after_checks
        MOV  EDX, dword ptr [ESI + 0x410]
        MOV  ECX, dword ptr [ESI + 0x40c]
        SUB  EDX, ECX
        SAR  EDX, 0x2
        JZ   L_after_checks
        MOV  EAX, ECX
        CMP  dword ptr [EAX], 0x0
        JZ   L_after_checks
        MOV  ECX, dword ptr [ESI + 0x410]
        MOV  EDX, EAX
        SUB  ECX, EDX
        SAR  ECX, 0x2
        JZ   L_get_null_1
        MOV  EAX, dword ptr [EDX]
        JMP  L_check_type_1
L_get_null_1:
        XOR  EAX, EAX
L_check_type_1:
        CMP  dword ptr [EAX + 0x1e0], 0x4
        JZ   L_return
        MOV  EAX, dword ptr [ESI + 0x410]
        MOV  EDX, dword ptr [ESI + 0x40c]
        SUB  EAX, EDX
        SAR  EAX, 0x2
        JZ   L_get_null_2
        MOV  ECX, EDX
        MOV  EAX, dword ptr [ECX]
        JMP  L_check_type_2
L_get_null_2:
        XOR  EAX, EAX
L_check_type_2:
        CMP  dword ptr [EAX + 0x1e0], 0x5
        JZ   L_return

L_after_checks:
        /* _emit: MOV EAX, [0x007f268c] — MSVC6 encodes mov reg, imm32 as immediate load, not memory deref */
        _emit 0xA1
        _emit 0x8C
        _emit 0x26
        _emit 0x7F
        _emit 0x00
        MOV  ECX, dword ptr [ESI + 0x4]
        PUSH EAX
        XOR  BL, BL
        CALL FUN_00415230
        TEST AL, AL
        JZ   L_set_flags
        MOV  EAX, dword ptr [ESI + 0x3e4]
        TEST EAX, EAX
        JZ   L_set_flags
        MOV  BL, 0x1

L_set_flags:
        MOV  AL, byte ptr [EDI + 0x584]
        TEST AL, AL
        MOV  byte ptr [EDI + 0x585], 0x1
        JNZ  L_skip_action
        MOV  AL, byte ptr [EDI + 0x586]
        TEST AL, AL
        JNZ  L_skip_action
        TEST BL, BL
        JZ   L_do_action
        MOV  byte ptr [EDI + 0x587], 0x1

L_do_action:
        PUSH 0x11
        MOV  ECX, EDI
        CALL FUN_00559be0
        MOV  byte ptr [EDI + 0x588], 0x1
        POP  EDI
        POP  ESI
        POP  EBX
        RET  0x4

L_skip_action:
        MOV  byte ptr [EDI + 0x588], 0x0
        MOV  byte ptr [EDI + 0x587], 0x0

L_return:
        POP  EDI
        POP  ESI
        POP  EBX
        RET  0x4
    }
}
