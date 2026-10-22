/* FUN_00584d80 - __thiscall, 76 bytes */
extern int FUN_005f97b0(int);
extern int FUN_00415230(int);

__declspec(naked) void FUN_00584d80(void)
{
    

extern int DAT_007f206c;
extern int DAT_007f20c4;
__asm {
PUSH EBX
        PUSH ESI
        PUSH EDI
        MOV  EDI, DWORD PTR [ESP + 0x10]
        MOV  ESI, ECX
        PUSH EDI
        CALL FUN_005f97b0
        mov eax, dword ptr [DAT_007f206c]
        MOV  EBX, DWORD PTR [EDI + 0x4]
        PUSH EAX
        MOV  ECX, EBX
        CALL FUN_00415230
        TEST AL, AL
        JZ   check_20c4
        MOV  DWORD PTR [ESI + 0x99c], EDI
        POP  EDI
        POP  ESI
        POP  EBX
        RET  0x4
check_20c4:
        mov eax, dword ptr [DAT_007f20c4]
        PUSH EAX
        MOV  ECX, EBX
        CALL FUN_00415230
        TEST AL, AL
        JZ   done
        inc     dword ptr [esi + 0x98c]
done:
        POP  EDI
        POP  ESI
        POP  EBX
        RET  0x4
    }


}
