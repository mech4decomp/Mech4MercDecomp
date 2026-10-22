// FUN_00530110 (7 bytes)
// mov al, [ecx+0xCC]; ret
// __thiscall: returns byte at this+0xCC.
__declspec(naked) void func_00530110(void)
{
    __asm {
        mov al, byte ptr [ecx + 0xCC]
        ret
    }
}
