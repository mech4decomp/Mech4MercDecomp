/* FUN_00584800 - __thiscall destructor-like, 341 bytes */
extern void FUN_004084e0(void *);
extern int  FUN_0041fd80(void *);
extern void FUN_004169c0(void *);
extern void FUN_0041fc90(void *);
extern void FUN_005f36e0(void *);

__declspec(naked) void FUN_00584800(void)
{
    __asm {
        PUSH EBX
        PUSH EBP
        PUSH ESI
        MOV  ESI, ECX
        MOV  EAX, DWORD PTR [ESI + 0x8a4]
        TEST EAX, EAX
        PUSH EDI
        MOV  DWORD PTR [ESI], 0x00782060
        JZ   skip_free_a4
        PUSH EAX
        CALL FUN_004084e0
        ADD  ESP, 0x4
        MOV  DWORD PTR [ESI + 0x8a4], 0x0
skip_free_a4:
        MOV  ECX, DWORD PTR [ESI + 0x9ac]
        TEST ECX, ECX
        JZ   skip_release_9ac
        MOV  EAX, DWORD PTR [ECX]
        PUSH 0x1
        CALL DWORD PTR [EAX]
skip_release_9ac:
        MOV  ECX, DWORD PTR [ESI + 0x9a0]
        TEST ECX, ECX
        JZ   skip_release_9a0
        MOV  EDX, DWORD PTR [ECX]
        PUSH 0x1
        CALL DWORD PTR [EDX]
skip_release_9a0:
        MOV  EAX, DWORD PTR [ESI + 0x5bc]
        PUSH EAX
        CALL FUN_004084e0
        MOV  ECX, DWORD PTR [ESI + 0x970]
        ADD  ESP, 0x4
        TEST ECX, ECX
        JZ   skip_release_970
        MOV  EDX, DWORD PTR [ECX]
        PUSH 0x1
        CALL DWORD PTR [EDX]
skip_release_970:
        MOV  EAX, DWORD PTR [ESI + 0x974]
        LEA  EBP, [ESI + 0x974]
        MOV  ECX, EBP
        CALL DWORD PTR [EAX + 0x8]
        LEA  EBX, [ESI + 0x8dc]
        MOV  ECX, EBX
        CALL FUN_0041fd80
        TEST EAX, EAX
        JZ   skip_iter_8dc
        MOV  ECX, EBX
        CALL FUN_0041fd80
        TEST EAX, EAX
        JZ   skip_iter_8dc
        MOV  EDX, DWORD PTR [EAX]
        PUSH 0x1
        MOV  ECX, EAX
        CALL DWORD PTR [EDX]
skip_iter_8dc:
        LEA  EDI, [ESI + 0x8e4]
        MOV  ECX, EDI
        CALL FUN_0041fd80
        TEST EAX, EAX
        JZ   skip_iter_8e4
        MOV  ECX, EDI
        CALL FUN_0041fd80
        TEST EAX, EAX
        JZ   skip_iter_8e4
        MOV  EDX, DWORD PTR [EAX]
        PUSH 0x1
        MOV  ECX, EAX
        CALL DWORD PTR [EDX]
skip_iter_8e4:
        MOV  ECX, EBP
        CALL FUN_004169c0
        MOV  ECX, EDI
        CALL FUN_0041fc90
        MOV  ECX, EBX
        CALL FUN_0041fc90
        MOV  EAX, DWORD PTR [ESI + 0x880]
        PUSH EAX
        CALL FUN_004084e0
        MOV  ECX, DWORD PTR [ESI + 0x874]
        PUSH ECX
        CALL FUN_004084e0
        ADD  ESP, 0x8
        LEA  ECX, [ESI + 0x594]
        CALL FUN_004169c0
        LEA  ECX, [ESI + 0x588]
        CALL FUN_0041fc90
        LEA  ECX, [ESI + 0x580]
        CALL FUN_0041fc90
        LEA  ECX, [ESI + 0x55c]
        CALL FUN_0041fc90
        LEA  ECX, [ESI + 0x554]
        CALL FUN_0041fc90
        LEA  ECX, [ESI + 0x54c]
        CALL FUN_0041fc90
        LEA  ECX, [ESI + 0x544]
        CALL FUN_0041fc90
        LEA  ECX, [ESI + 0x51c]
        CALL FUN_0041fc90
        MOV  ECX, ESI
        CALL FUN_005f36e0
        POP  EDI
        POP  ESI
        POP  EBP
        POP  EBX
        RET
    }
}
