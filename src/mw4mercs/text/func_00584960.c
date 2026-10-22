/* FUN_00584960 - __thiscall, 36 bytes */
__declspec(naked) void FUN_00584960(void)
{
    __asm {
        MOV  ECX, DWORD PTR [ECX + 0x2fc]
        TEST ECX, ECX
        JZ   ret_one
        MOV  EDX, DWORD PTR [ESP + 0x8]
        MOV  EAX, DWORD PTR [ECX]
        PUSH EDX
        MOV  EDX, DWORD PTR [ESP + 0x8]
        PUSH EDX
        CALL DWORD PTR [EAX + 0xbc]
        RET  0x8
ret_one:
        MOV  AL, 0x1
        RET  0x8
    }
}
