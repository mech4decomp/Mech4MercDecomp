/* FUN_00580660 - 16 bytes, __cdecl */
extern void FUN_004084e0(int);

void __declspec(naked) __cdecl FUN_00580660(void)
{
    __asm {
        MOV EAX, [ESP + 0x4]
        TEST EAX, EAX
        JZ skip
        PUSH EAX
        CALL FUN_004084e0
        POP ECX
skip:
        RET
    }
}
