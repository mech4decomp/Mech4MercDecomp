// FUN_00524B80 (8 bytes)
// mov eax, 1; ret 8
// __stdcall: returns 1, RET 8 (2 params).
__declspec(naked) void func_00524b80(void)
{
    __asm {
        mov eax, 1
        ret 8
    }
}
