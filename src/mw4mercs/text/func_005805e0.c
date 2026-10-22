/* FUN_005805e0 - 18 bytes, __stdcall */
extern void FUN_004084e0(int);

void __declspec(naked) __stdcall FUN_005805e0(void)
{
    __asm {
        MOV EAX, [ESP + 0x4]
        TEST EAX, EAX
        JZ skip
        PUSH EAX
        CALL FUN_004084e0
        POP ECX
skip:
        RET 0x8
    }
}
