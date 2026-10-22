void __fastcall FUN_005A30D0(void *this);

__declspec(naked) int func_005903A0(void)
{
    __asm {
        mov ecx, [ecx+0x9A0]
        push 0
        push 2
        call FUN_005A30D0
        ret
    }
}
