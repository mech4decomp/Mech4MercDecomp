// FUN_0064fe70 - ABL refcount increment (0x64fe70, 11 B)

__declspec(naked) void func_0064fe70(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x4]
        TEST EAX, EAX
        JZ loc_64fe7a
        INC dword ptr [EAX]
loc_64fe7a:
        RET
    }
}
