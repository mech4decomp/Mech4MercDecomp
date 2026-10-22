/* FUN_00584ac0 - __thiscall, 44 bytes */
extern int FUN_006fab90(const char *);
extern void FUN_005f3760(int, int);

__declspec(naked) void FUN_00584ac0(void)
{
    
__asm {
PUSH EBP
        MOV  EBP, ESP
        PUSH ESI
        PUSH 0x00782224
        MOV  ESI, ECX
        CALL FUN_006fab90
        ADD  ESP, 0x4
        TEST EAX, EAX
        JZ   no_assert
        int     3
no_assert:
        MOV  EAX, DWORD PTR [EBP + 0xc]
        MOV  ECX, DWORD PTR [EBP + 0x8]
        PUSH EAX
        PUSH ECX
        MOV  ECX, ESI
        CALL FUN_005f3760
        POP  ESI
        POP  EBP
        RET  0x8
    }


}
