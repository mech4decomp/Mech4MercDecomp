void __fastcall FUN_005A30D0(void *this);

__declspec(naked) int func_00590380(void)
{
    __asm {
        mov ecx, [ecx+0x9A0]
        push 0
        push 4
        call FUN_005A30D0
        ret
    }
}
