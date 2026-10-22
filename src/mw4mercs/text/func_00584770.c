/* FUN_00584770 - __thiscall, 129 bytes */
extern void FUN_005f3990(int);
extern void FUN_00583ed0(int);
extern void FUN_005ac000(void);
extern void FUN_005a2f50(void);
extern void FUN_006f2f30(int);

__declspec(naked) void FUN_00584770(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
PUSH ESI
        MOV  ESI, ECX
        MOV  EAX, DWORD PTR [ESI + 0x8d8]
        AND  EAX, 0x1
        CMP  AL, 0x1
        PUSH EDI
        JNZ  skip_clear
        MOV  EAX, DWORD PTR [ESI + 0x3b0]
        XOR  ECX, ECX
        CMP  EAX, ECX
        JZ   skip_zero
        MOV  BYTE PTR [EAX + 0x6bc], CL
skip_zero:
        MOV  DWORD PTR [ESI + 0x8d8], ECX
skip_clear:
        MOV  EDI, DWORD PTR [ESP + 0xc]
        PUSH EDI
        MOV  ECX, ESI
        CALL FUN_005f3990
        PUSH EDI
        MOV  ECX, ESI
        CALL FUN_00583ed0
        MOV  ECX, DWORD PTR [ESI + 0x408]
        CALL FUN_005ac000
        MOV  ECX, DWORD PTR [ESI + 0x9ac]
        CALL FUN_005a2f50
        FLD  DWORD PTR [ESI + 0x9a8]
        mov ecx, dword ptr [DAT_007dab44]
        MOV  EDX, DWORD PTR [ECX]
        xor edx, dword ptr [DAT_007dab40]
        MOV  ECX, DWORD PTR [EDX + 0x24]
        FSTP DWORD PTR [ESI + 0x3b8]
        PUSH ESI
        XOR  ECX, 0x85739531
        CALL FUN_006f2f30
        POP  EDI
        POP  ESI
        RET  0x4
    }


}
