/* FUN_005849c0 - __thiscall, 60 bytes */
__declspec(naked) void FUN_005849c0(void)
{
    

extern int DAT_0077d0fc;
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
        fmul dword ptr [DAT_0077d0fc]
        MOV  EAX, DWORD PTR [ESP + 0xc]
        MOV  ECX, DWORD PTR [ESP + 0x10]
        FSTP DWORD PTR [EAX]
        FLD  DWORD PTR [EDI + 0x2c4]
        POP  EDI
        fmul dword ptr [DAT_0077d0fc]
        POP  ESI
        FSTP DWORD PTR [ECX]
        RET  0x8
    }


}
