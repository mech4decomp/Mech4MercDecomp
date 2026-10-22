void __fastcall FUN_005A30D0(void *this);

__declspec(naked) int func_00590370(void)
{
    __asm {
        mov ecx, [ecx+0x9A0]
        push 0
        push 1
        call FUN_005A30D0
        ret
    }
}
