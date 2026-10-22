void __fastcall FUN_004179B0(void *this, void *arg);

__declspec(naked) void __stdcall func_00593FC0(void)
{
    __asm {
        mov eax, [esp+4]
        push eax
        add ecx, 0x24
        call FUN_004179B0
        ret 4
    }
}
