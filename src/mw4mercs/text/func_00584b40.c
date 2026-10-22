/* FUN_00584b40 - __thiscall, 563 bytes */
extern int  FUN_0040c0e0(void *);
extern int  FUN_00415230(int);
extern void FUN_00591450(int *, int *, int);
extern void FUN_005f00f0(void *);
extern int DAT_007f206c;
extern int DAT_007f2120;
extern int DAT_007f2124;
extern int DAT_007f20a8;
extern int DAT_007f1fa8;
extern int DAT_007f1fa4;
extern int DAT_007f1ff4;
extern int DAT_007f25ac;
extern int DAT_007f2584;
extern int DAT_007f2040;

__declspec(naked) void FUN_00584b40(void)
{
    __asm {
        SUB  ESP, 0x10
        PUSH EBX
        PUSH EBP
        MOV  EBP, ECX
        LEA  EAX, [EBP + 0x34c]
        MOV  DWORD PTR [ESP + 0x10], EAX
        MOV  EAX, DWORD PTR [EAX]
        LEA  ECX, [ESP + 0xc]
        MOV  DWORD PTR [ESP + 0x14], EAX
        MOV  DWORD PTR [ESP + 0xc], 0x00782234
        CALL FUN_0040c0e0
        MOV  EBX, EAX
        TEST EBX, EBX
        JZ   exit_func
        PUSH ESI
        PUSH EDI
loop_start:
        MOV  EDX, DWORD PTR [EBP + 0x78]
        LEA  ECX, [EBP + 0x78]
        CALL DWORD PTR [EDX + 0x4]
        MOV  ESI, DWORD PTR [EBX + 0x4]
        MOV  EDI, EAX
        mov     eax, dword ptr [DAT_007f206c]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_2120
        MOV  AL, BYTE PTR [EDI + 0x640]
        TEST AL, AL
        JZ   exit_loop
check_2120:
        mov     eax, dword ptr [DAT_007f2120]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_2124
        MOV  AL, BYTE PTR [EDI + 0x641]
        TEST AL, AL
        JZ   exit_loop
check_2124:
        mov     eax, dword ptr [DAT_007f2124]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_20a8
        MOV  AL, BYTE PTR [EDI + 0x642]
        TEST AL, AL
        JZ   exit_loop
check_20a8:
        mov     eax, dword ptr [DAT_007f20a8]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_1fa8
        MOV  AL, BYTE PTR [EDI + 0x645]
        TEST AL, AL
        JZ   exit_loop
check_1fa8:
        mov     eax, dword ptr [DAT_007f1fa8]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_1fa4
        MOV  AL, BYTE PTR [EDI + 0x668]
        TEST AL, AL
        JZ   exit_loop
check_1fa4:
        mov     eax, dword ptr [DAT_007f1fa4]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_1ff4
        MOV  AL, BYTE PTR [EDI + 0x669]
        TEST AL, AL
        JZ   exit_loop
check_1ff4:
        mov     eax, dword ptr [DAT_007f1ff4]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_25ac
        MOV  AL, BYTE PTR [EDI + 0x66a]
        TEST AL, AL
        JZ   exit_loop
check_25ac:
        mov     eax, dword ptr [DAT_007f25ac]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_2584
        MOV  DWORD PTR [EBP + 0x504], EBX
        JMP  call_virtual
check_2584:
        mov     eax, dword ptr [DAT_007f2584]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_2120_2
        MOV  EDX, DWORD PTR [EBP + 0x410]
        MOV  EAX, DWORD PTR [EBP + 0x40c]
        CMP  EAX, EDX
        LEA  ECX, [EBP + 0x40c]
        MOV  DWORD PTR [ESP + 0x10], EBX
        JZ   grow_array
find_slot:
        CMP  DWORD PTR [EAX], EBX
        JZ   L_found
        ADD  EAX, 0x4
        CMP  EAX, EDX
        JNZ  find_slot
    L_found:
        CMP  EAX, EDX
        JNZ  call_virtual
grow_array:
        MOV  EAX, DWORD PTR [ECX + 0x4]
        CMP  EAX, DWORD PTR [ECX + 0x8]
        JZ   grow_full
        TEST EAX, EAX
        JZ   store_null
        MOV  DWORD PTR [EAX], EBX
store_null:
        ADD  EAX, 0x4
        MOV  DWORD PTR [ECX + 0x4], EAX
        JMP  call_virtual
grow_full:
        PUSH 0x1
        LEA  EDX, [ESP + 0x14]
        PUSH EDX
        PUSH EAX
        CALL FUN_00591450
        JMP  call_virtual
check_2120_2:
        mov     eax, dword ptr [DAT_007f2120]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_206c
        MOV  DWORD PTR [EBP + 0x3e0], EBX
        JMP  call_virtual
check_206c:
        mov     eax, dword ptr [DAT_007f206c]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_1fa4_2
        MOV  DWORD PTR [EBP + 0x99c], EBX
        JMP  call_virtual
check_1fa4_2:
        mov     eax, dword ptr [DAT_007f1fa4]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_2040
        MOV  DWORD PTR [EBP + 0x3e8], EBX
        JMP  call_virtual
check_2040:
        mov     eax, dword ptr [DAT_007f2040]
        PUSH EAX
        MOV  ECX, ESI
        CALL FUN_00415230
        TEST AL, AL
        JZ   call_virtual
        MOV  DWORD PTR [EBP + 0x9a4], EBX
call_virtual:
        MOV  EAX, DWORD PTR [EBP]
        PUSH EBX
        MOV  ECX, EBP
        CALL DWORD PTR [EAX + 0x100]
exit_loop:
        LEA  ECX, [ESP + 0x14]
        CALL FUN_0040c0e0
        MOV  EBX, EAX
        TEST EBX, EBX
        JNZ  loop_start
        POP  EDI
        POP  ESI
exit_func:
        MOV  ECX, DWORD PTR [EBP + 0x504]
        TEST ECX, ECX
        JZ   skip_f00f0
        PUSH EBP
        CALL FUN_005f00f0
skip_f00f0:
        POP  EBP
        POP  EBX
        ADD  ESP, 0x10
        RET
    }
}
