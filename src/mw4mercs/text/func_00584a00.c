/* FUN_00584a00 - __thiscall, 62 bytes */
__declspec(naked) void FUN_00584a00(void)
{
    __asm {
        PUSH ESI
        MOV  ESI, ECX
        MOV  EAX, DWORD PTR [ESI + 0x78]
        LEA  ECX, [ESI + 0x78]
        PUSH EDI
        CALL DWORD PTR [EAX + 0x4]
        MOV  EDX, DWORD PTR [ESI]
        MOV  ECX, ESI
        MOV  EDI, EAX
        CALL DWORD PTR [EDX + 0x114]
        FDIVR DWORD PTR [EDI + 0x2b8]
        MOV  EAX, DWORD PTR [ESP + 0xc]
        MOV  ECX, DWORD PTR [ESP + 0x10]
        FSTP DWORD PTR [EAX]
        FLD  DWORD PTR [EDI + 0x2c0]
        FDIV DWORD PTR [EDI + 0x2c4]
        POP  EDI
        POP  ESI
        FCHS
        FSTP DWORD PTR [ECX]
        RET  0x8
    }
}
