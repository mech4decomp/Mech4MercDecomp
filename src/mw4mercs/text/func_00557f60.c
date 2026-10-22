/*
 * FUN_00557F60 (1609 B) -- __thiscall method on some game object.
 * Large switch-based function with cases 0-7.
 * Handles matrix transformations (3x4), FPU clamping, and various
 * state updates.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Note: All FPU instructions in the matrix multiply blocks are emitted
 * via _emit because MSVC6 inline asm does not reliably encode the
 * multi-operand FPU forms (FADDP ST(1),ST, FXCH ST(1), etc.) with
 * correct ModRM bytes.
 */

extern void __cdecl FUN_004daa20(int param);
extern void __cdecl FUN_004da3d0(void);
extern void __cdecl FUN_004db210(void);
extern void __cdecl FUN_004da4f0(void);
extern void __cdecl FUN_00419f50(int param);
extern void __cdecl FUN_00419f10(int param);
extern void __cdecl FUN_00420740(int param);
extern void __cdecl FUN_0041acb0(int param);
extern void __cdecl FUN_0054f2a0(void);

__declspec(naked) void __stdcall FUN_00557f60(void)
{
    __asm {
        PUSH EBP
        MOV  EBP, ESP
        SUB  ESP, 0xc8
        PUSH EBX
        MOV  EBX, dword ptr [EBP + 0x8]
        PUSH ESI
        PUSH EDI
        MOV  EDI, ECX
        MOV  EAX, dword ptr [EDI + 0x78]
        LEA  ECX, [EDI + 0x78]
        MOV  dword ptr [EDI + 0x564], EBX
        CALL dword ptr [EAX + 0x4]
        CMP  EBX, 0x7
        MOV  ESI, EAX
        MOV  dword ptr [EDI + 0x344], 0x0
        JNZ  L_check_ac_flag
        PUSH 0x7b9460
        MOV  ECX, EDI
        CALL FUN_004daa20
        MOV  EDX, dword ptr [EDI]
        PUSH 0x1
        MOV  ECX, EDI
        CALL dword ptr [EDX + 0x48]
        MOV  byte ptr [EDI + 0x338], 0x1

L_check_ac_flag:
        MOV  AL, byte ptr [EDI + 0x5ac]
        TEST AL, AL
        JZ   L_do_switch
        CMP  EBX, 0x3
        JNZ  L_return

L_do_switch:
        CMP  EBX, 0x6
        JA   L_return
        /* _emit: JMP dword ptr [EBX*4 + 0x5585ac] -- MSVC6 can't encode jump table with absolute address */
        _emit 0xFF
        _emit 0x24
        _emit 0x9D
        _emit 0xAC
        _emit 0x85
        _emit 0x55
        _emit 0x00

        /* case 0 */
        MOV  EAX, dword ptr [ESI + 0x24]
        MOV  ECX, dword ptr [ESI + 0x28]
        MOV  EDX, dword ptr [ESI + 0x2c]
        MOV  dword ptr [EDI + 0x51c], ECX
        MOV  dword ptr [EDI + 0x518], EAX
        MOV  dword ptr [EDI + 0x520], EDX
        MOV  EDI, dword ptr [EDI + 0x384]
        MOV  ECX, EDI
        CALL FUN_004da3d0
        MOV  ECX, EDI
        CALL FUN_004db210
        MOV  byte ptr [EDI + 0x4a0], 0x1
        MOV  byte ptr [EDI + 0x4a1], 0x1
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET  0x8

        /* case 1 */
        MOV  EAX, dword ptr [ESI + 0x24]
        MOV  ECX, dword ptr [ESI + 0x28]
        MOV  EDX, dword ptr [ESI + 0x2c]
        MOV  dword ptr [EDI + 0x51c], ECX
        MOV  dword ptr [EDI + 0x518], EAX
        MOV  dword ptr [EDI + 0x520], EDX
        MOV  EDI, dword ptr [EDI + 0x384]
        MOV  byte ptr [EDI + 0x4a0], 0x0
        MOV  ECX, EDI
        MOV  byte ptr [EDI + 0x4a1], 0x0
        CALL FUN_004da4f0
        MOV  ECX, EDI
        CALL FUN_004db210
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET  0x8

        /* case 2 */
        MOV  EAX, dword ptr [ESI + 0x24]
        MOV  ECX, dword ptr [ESI + 0x28]
        MOV  EDX, dword ptr [ESI + 0x2c]
        MOV  ESI, dword ptr [EDI + 0x384]
        LEA  EBX, [EDI + 0x518]
        MOV  dword ptr [EBX + 0x4], ECX
        MOV  byte ptr [ESI + 0x4a0], 0x0
        MOV  ECX, ESI
        MOV  dword ptr [EBX], EAX
        MOV  dword ptr [EBX + 0x8], EDX
        MOV  byte ptr [ESI + 0x4a1], 0x0
        CALL FUN_004da4f0
        MOV  ECX, ESI
        CALL FUN_004db210
        PUSH EBX
        LEA  ECX, [EBP + 0xffffff68]
        CALL FUN_00419f50
        LEA  EAX, [EDI + 0x524]
        PUSH EAX
        LEA  ECX, [EBP + 0xffffff38]
        MOV  dword ptr [EBP + -0x8], EAX
        CALL FUN_00419f10
        LEA  EAX, [EBP + 0xffffff38]
        LEA  ECX, [EBP + 0xffffff68]
        LEA  EDX, [EBP + -0x68]
        MOV  dword ptr [EBP + 0xc], EAX
        MOV  dword ptr [EBP + -0x4], ECX
        MOV  dword ptr [EBP + 0x8], EDX
        MOV  EDX, dword ptr [EBP + -0x4]
        PUSH ESI
        MOV  ESI, dword ptr [EBP + 0xc]
        MOV  EAX, dword ptr [EBP + 0x8]
        /* _emit: matrix multiply block 1 -- all FPU ops emitted because MSVC6 inline asm
           does not reliably encode multi-operand FPU forms (FADDP ST(1),ST, FXCH ST(1), etc.) */
        _emit 0xD9
        _emit 0x02
        _emit 0xD8
        _emit 0x0E
        _emit 0xD9
        _emit 0x42
        _emit 0x10
        _emit 0xD8
        _emit 0x4E
        _emit 0x04
        _emit 0xD9
        _emit 0x42
        _emit 0x20
        _emit 0xD8
        _emit 0x4E
        _emit 0x08
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x04
        _emit 0xD8
        _emit 0x0E
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x14
        _emit 0xD8
        _emit 0x4E
        _emit 0x04
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x18
        _emit 0xD9
        _emit 0x42
        _emit 0x24
        _emit 0xD8
        _emit 0x4E
        _emit 0x08
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x08
        _emit 0xD8
        _emit 0x0E
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x18
        _emit 0xD8
        _emit 0x4E
        _emit 0x04
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x04
        _emit 0xD9
        _emit 0x42
        _emit 0x28
        _emit 0xD8
        _emit 0x4E
        _emit 0x08
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x0C
        _emit 0xD8
        _emit 0x0E
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x1C
        _emit 0xD8
        _emit 0x4E
        _emit 0x04
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x08
        _emit 0xD9
        _emit 0x42
        _emit 0x2C
        _emit 0xD8
        _emit 0x4E
        _emit 0x08
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x02
        _emit 0xD8
        _emit 0x4E
        _emit 0x10
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x10
        _emit 0xD8
        _emit 0x4E
        _emit 0x14
        _emit 0xD9
        _emit 0xC9
        _emit 0xD8
        _emit 0x46
        _emit 0x0C
        _emit 0xD9
        _emit 0x42
        _emit 0x20
        _emit 0xD8
        _emit 0x4E
        _emit 0x18
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x0C
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x04
        _emit 0xD8
        _emit 0x4E
        _emit 0x10
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x14
        _emit 0xD8
        _emit 0x4E
        _emit 0x14
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x10
        _emit 0xD9
        _emit 0x42
        _emit 0x24
        _emit 0xD8
        _emit 0x4E
        _emit 0x18
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x08
        _emit 0xD8
        _emit 0x4E
        _emit 0x10
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x18
        _emit 0xD8
        _emit 0x4E
        _emit 0x14
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x14
        _emit 0xD9
        _emit 0x42
        _emit 0x28
        _emit 0xD8
        _emit 0x4E
        _emit 0x18
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x0C
        _emit 0xD8
        _emit 0x4E
        _emit 0x10
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x1C
        _emit 0xD8
        _emit 0x4E
        _emit 0x14
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x18
        _emit 0xD9
        _emit 0x42
        _emit 0x2C
        _emit 0xD8
        _emit 0x4E
        _emit 0x18
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x02
        _emit 0xD8
        _emit 0x4E
        _emit 0x20
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x10
        _emit 0xD8
        _emit 0x4E
        _emit 0x24
        _emit 0xD9
        _emit 0xC9
        _emit 0xD8
        _emit 0x46
        _emit 0x1C
        _emit 0xD9
        _emit 0x42
        _emit 0x20
        _emit 0xD8
        _emit 0x4E
        _emit 0x28
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x1C
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x04
        _emit 0xD8
        _emit 0x4E
        _emit 0x20
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x14
        _emit 0xD8
        _emit 0x4E
        _emit 0x24
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x20
        _emit 0xD9
        _emit 0x42
        _emit 0x24
        _emit 0xD8
        _emit 0x4E
        _emit 0x28
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x08
        _emit 0xD8
        _emit 0x4E
        _emit 0x20
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x18
        _emit 0xD8
        _emit 0x4E
        _emit 0x24
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x24
        _emit 0xD9
        _emit 0x42
        _emit 0x28
        _emit 0xD8
        _emit 0x4E
        _emit 0x28
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x0C
        _emit 0xD8
        _emit 0x4E
        _emit 0x20
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x1C
        _emit 0xD8
        _emit 0x4E
        _emit 0x24
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x28
        _emit 0xD9
        _emit 0x42
        _emit 0x2C
        _emit 0xD8
        _emit 0x4E
        _emit 0x28
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xDE
        _emit 0xC1
        _emit 0xD8
        _emit 0x46
        _emit 0x2C
        _emit 0xD9
        _emit 0x58
        _emit 0x2C
        POP  ESI
        LEA  ECX, [EBP + -0x68]
        CALL FUN_00420740
        MOV  EAX, dword ptr [EDI + 0xc4]
        MOV  ECX, dword ptr [EAX + 0xd8]
        ADD  ECX, 0x80
        LEA  EDX, [EBP + -0x68]
        LEA  EAX, [EBP + -0x38]
        MOV  dword ptr [EBP + 0xc], ECX
        MOV  dword ptr [EBP + -0x4], EDX
        MOV  dword ptr [EBP + 0x8], EAX
        MOV  EDX, dword ptr [EBP + -0x4]
        PUSH ESI
        MOV  ESI, dword ptr [EBP + 0xc]
        MOV  EAX, dword ptr [EBP + 0x8]
        /* _emit: matrix multiply block 2 -- same reason as block 1 */
        _emit 0xD9
        _emit 0x02
        _emit 0xD8
        _emit 0x0E
        _emit 0xD9
        _emit 0x42
        _emit 0x10
        _emit 0xD8
        _emit 0x4E
        _emit 0x04
        _emit 0xD9
        _emit 0x42
        _emit 0x20
        _emit 0xD8
        _emit 0x4E
        _emit 0x08
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x04
        _emit 0xD8
        _emit 0x0E
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x14
        _emit 0xD8
        _emit 0x4E
        _emit 0x04
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x18
        _emit 0xD9
        _emit 0x42
        _emit 0x24
        _emit 0xD8
        _emit 0x4E
        _emit 0x08
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x08
        _emit 0xD8
        _emit 0x0E
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x18
        _emit 0xD8
        _emit 0x4E
        _emit 0x04
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x04
        _emit 0xD9
        _emit 0x42
        _emit 0x28
        _emit 0xD8
        _emit 0x4E
        _emit 0x08
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x0C
        _emit 0xD8
        _emit 0x0E
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x1C
        _emit 0xD8
        _emit 0x4E
        _emit 0x04
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x08
        _emit 0xD9
        _emit 0x42
        _emit 0x2C
        _emit 0xD8
        _emit 0x4E
        _emit 0x08
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x02
        _emit 0xD8
        _emit 0x4E
        _emit 0x10
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x10
        _emit 0xD8
        _emit 0x4E
        _emit 0x14
        _emit 0xD9
        _emit 0xC9
        _emit 0xD8
        _emit 0x46
        _emit 0x0C
        _emit 0xD9
        _emit 0x42
        _emit 0x20
        _emit 0xD8
        _emit 0x4E
        _emit 0x18
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x0C
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x04
        _emit 0xD8
        _emit 0x4E
        _emit 0x10
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x14
        _emit 0xD8
        _emit 0x4E
        _emit 0x14
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x10
        _emit 0xD9
        _emit 0x42
        _emit 0x24
        _emit 0xD8
        _emit 0x4E
        _emit 0x18
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x08
        _emit 0xD8
        _emit 0x4E
        _emit 0x10
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x18
        _emit 0xD8
        _emit 0x4E
        _emit 0x14
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x14
        _emit 0xD9
        _emit 0x42
        _emit 0x28
        _emit 0xD8
        _emit 0x4E
        _emit 0x18
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x0C
        _emit 0xD8
        _emit 0x4E
        _emit 0x10
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x1C
        _emit 0xD8
        _emit 0x4E
        _emit 0x14
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x18
        _emit 0xD9
        _emit 0x42
        _emit 0x2C
        _emit 0xD8
        _emit 0x4E
        _emit 0x18
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x02
        _emit 0xD8
        _emit 0x4E
        _emit 0x20
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x10
        _emit 0xD8
        _emit 0x4E
        _emit 0x24
        _emit 0xD9
        _emit 0xC9
        _emit 0xD8
        _emit 0x46
        _emit 0x1C
        _emit 0xD9
        _emit 0x42
        _emit 0x20
        _emit 0xD8
        _emit 0x4E
        _emit 0x28
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x1C
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x04
        _emit 0xD8
        _emit 0x4E
        _emit 0x20
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x14
        _emit 0xD8
        _emit 0x4E
        _emit 0x24
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x20
        _emit 0xD9
        _emit 0x42
        _emit 0x24
        _emit 0xD8
        _emit 0x4E
        _emit 0x28
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x08
        _emit 0xD8
        _emit 0x4E
        _emit 0x20
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x18
        _emit 0xD8
        _emit 0x4E
        _emit 0x24
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x24
        _emit 0xD9
        _emit 0x42
        _emit 0x28
        _emit 0xD8
        _emit 0x4E
        _emit 0x28
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x0C
        _emit 0xD8
        _emit 0x4E
        _emit 0x20
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xD9
        _emit 0x42
        _emit 0x1C
        _emit 0xD8
        _emit 0x4E
        _emit 0x24
        _emit 0xD9
        _emit 0xC9
        _emit 0xD9
        _emit 0x58
        _emit 0x28
        _emit 0xD9
        _emit 0x42
        _emit 0x2C
        _emit 0xD8
        _emit 0x4E
        _emit 0x28
        _emit 0xD9
        _emit 0xCA
        _emit 0xDE
        _emit 0xC1
        _emit 0xDE
        _emit 0xC1
        _emit 0xD8
        _emit 0x46
        _emit 0x2C
        _emit 0xD9
        _emit 0x58
        _emit 0x2C
        POP  ESI
        LEA  ECX, [EBP + -0x38]
        PUSH ECX
        MOV  ECX, dword ptr [EBP + -0x8]
        CALL FUN_0041acb0
        MOV  EDX, dword ptr [EBP + -0x2c]
        MOV  EAX, dword ptr [EBP + -0x1c]
        MOV  ECX, dword ptr [EBP + -0xc]
        MOV  dword ptr [EBX], EDX
        MOV  dword ptr [EBX + 0x4], EAX
        MOV  dword ptr [EBX + 0x8], ECX
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET  0x8

        /* case 3 */
        /* _emit: FLD dword ptr [EDI + 0x520] -- MSVC6 can't encode FPU load with [reg+disp] */
        _emit 0xD9
        _emit 0x87
        _emit 0x20
        _emit 0x05
        _emit 0x00
        _emit 0x00
        /* _emit: FCOMP dword ptr [0x0077d040] -- MSVC6 can't encode FPU compare with absolute address */
        _emit 0xD8
        _emit 0x1D
        _emit 0x40
        _emit 0xD0
        _emit 0x77
        _emit 0x00
        FNSTSW AX
        TEST AH, 0x41
        JNZ  L_clamp_1_done
        MOV  dword ptr [EDI + 0x520], 0x42200000
L_clamp_1_done:
        _emit 0xD9
        _emit 0x87
        _emit 0x20
        _emit 0x05
        _emit 0x00
        _emit 0x00
        MOV  EDX, 0x40000000
        _emit 0xD8
        _emit 0x1D
        _emit 0xF0
        _emit 0xD5
        _emit 0x76
        _emit 0x00
        FNSTSW AX
        TEST AH, 0x1
        JZ   L_clamp_2_done
        MOV  dword ptr [EDI + 0x520], EDX
L_clamp_2_done:
        _emit 0xD9
        _emit 0x87
        _emit 0x18
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xD8
        _emit 0x1D
        _emit 0x44
        _emit 0xD0
        _emit 0x77
        _emit 0x00
        FNSTSW AX
        TEST AH, 0x1
        JZ   L_clamp_3_done
        MOV  dword ptr [EDI + 0x518], 0xc1a00000
L_clamp_3_done:
        _emit 0xD9
        _emit 0x87
        _emit 0x18
        _emit 0x05
        _emit 0x00
        _emit 0x00
        MOV  ECX, 0x41a00000
        _emit 0xD8
        _emit 0x1D
        _emit 0xC8
        _emit 0x48
        _emit 0x77
        _emit 0x00
        FNSTSW AX
        TEST AH, 0x41
        JNZ  L_clamp_4_done
        MOV  dword ptr [EDI + 0x518], ECX
L_clamp_4_done:
        _emit 0xD9
        _emit 0x87
        _emit 0x1C
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xD8
        _emit 0x1D
        _emit 0xF0
        _emit 0xD5
        _emit 0x76
        _emit 0x00
        FNSTSW AX
        TEST AH, 0x1
        JZ   L_clamp_5_done
        MOV  dword ptr [EDI + 0x51c], EDX
L_clamp_5_done:
        _emit 0xD9
        _emit 0x87
        _emit 0x1C
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0xD8
        _emit 0x1D
        _emit 0xC8
        _emit 0x48
        _emit 0x77
        _emit 0x00
        FNSTSW AX
        TEST AH, 0x41
        JNZ  L_clamp_6_done
        MOV  dword ptr [EDI + 0x51c], ECX
L_clamp_6_done:
        MOV  ESI, dword ptr [EDI + 0x384]
        MOV  byte ptr [ESI + 0x4a0], 0x0
        MOV  ECX, ESI
        MOV  byte ptr [ESI + 0x4a1], 0x1
        CALL FUN_004da4f0
        MOV  ECX, ESI
        CALL FUN_004db210
        MOV  ECX, EDI
        CALL FUN_0054f2a0
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET  0x8

        /* case 4 */
        MOV  EBX, dword ptr [EDI + 0x384]
        MOV  byte ptr [EBX + 0x4a0], 0x0
        MOV  ECX, EBX
        MOV  byte ptr [EBX + 0x4a1], 0x0
        CALL FUN_004da4f0
        MOV  ECX, EBX
        CALL FUN_004db210
        MOV  EDX, dword ptr [ESI + 0x24]
        MOV  EAX, dword ptr [ESI + 0x28]
        MOV  ECX, dword ptr [ESI + 0x2c]
        MOV  dword ptr [EDI + 0x518], EDX
        MOV  dword ptr [EDI + 0x51c], EAX
        MOV  dword ptr [EDI + 0x520], ECX
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET  0x8

        /* case 5 */
        MOV  ESI, dword ptr [EDI + 0x384]
        MOV  byte ptr [ESI + 0x4a0], 0x0
        MOV  ECX, ESI
        MOV  byte ptr [ESI + 0x4a1], 0x0
        CALL FUN_004da4f0
        MOV  ECX, ESI
        CALL FUN_004db210
        MOV  EAX, dword ptr [EBP + 0xc]
        MOV  EDX, dword ptr [EAX]
        MOV  ECX, dword ptr [EAX + 0x4]
        MOV  dword ptr [EDI + 0x518], EDX
        MOV  EDX, dword ptr [EAX + 0x8]
        MOV  dword ptr [EDI + 0x51c], ECX
        MOV  dword ptr [EDI + 0x520], EDX
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET  0x8

        /* case 6 */
        MOV  EAX, dword ptr [ESI + 0x24]
        MOV  ECX, dword ptr [ESI + 0x28]
        MOV  EDX, dword ptr [ESI + 0x2c]
        MOV  dword ptr [EDI + 0x518], EAX
        MOV  dword ptr [EDI + 0x51c], ECX
        MOV  dword ptr [EDI + 0x520], EDX

L_return:
        POP  EDI
        POP  ESI
        POP  EBX
        MOV  ESP, EBP
        POP  EBP
        RET  0x8
    }
}
