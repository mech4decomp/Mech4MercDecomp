/* Auto-generated inline asm for FUN_00591690 (0x00591690) */

extern void * __stdcall FUN_004084d0(int);
extern void __stdcall FUN_00501a20(void);
extern void __stdcall FUN_005008e0(void);
extern void __stdcall FUN_00500ec0(void *);

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f1fa4;

__declspec(naked) void FUN_00591690(void)
{
    __asm {
        PUSH ESI
        PUSH 0xA8
        CALL FUN_004084d0
        MOV  ESI, EAX
        ADD  ESP, 0x4
        TEST ESI, ESI
        JZ   alloc1_fail
        MOV  EAX, dword ptr [DAT_007f25b0]
        MOV  ECX, dword ptr [DAT_007f25b4]
        PUSH 0x502C60
        PUSH 0x5028B0
        PUSH 0x674A40
        PUSH 0x0
        PUSH 0x674A20
        PUSH EAX
        PUSH 0x6746E0
        PUSH 0x591780
        PUSH 0x0
        PUSH 0x0
        PUSH ECX
        PUSH 0x7823D8
        PUSH 0x4CC
        MOV  ECX, ESI
        CALL FUN_00501a20
        MOV  dword ptr [ESI + 0xA4], 0x005F0A60
        MOV  dword ptr [DAT_007f1fa4], ESI
        JMP  alloc2
alloc1_fail:
        MOV  dword ptr [DAT_007f1fa4], 0
alloc2:
        PUSH 0x20
        CALL FUN_004084d0
        MOV  ESI, EAX
        ADD  ESP, 0x4
        TEST ESI, ESI
        JZ   alloc2_fail
        PUSH 0x34
        PUSH 0x2
        PUSH 0x7823BC
        PUSH 0xB
        MOV  ECX, ESI
        CALL FUN_005008e0
        MOV  EDX, dword ptr [DAT_007f1fa4]
        PUSH ESI
        LEA  ECX, [EDX + 0x74]
        MOV  dword ptr [ESI], 0x00775948
        CALL FUN_00500ec0
        POP  ESI
        RET
alloc2_fail:
        MOV  EDX, dword ptr [DAT_007f1fa4]
        XOR  ESI, ESI
        PUSH ESI
        LEA  ECX, [EDX + 0x74]
        CALL FUN_00500ec0
        POP  ESI
        RET
    }
}
