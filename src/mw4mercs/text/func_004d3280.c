__declspec(naked) void __fastcall FUN_004D3280(int this, int dummy_edx, char param1)
{
    __asm {
        mov     dl, [esp + 4]
        xor     eax, eax
        cmp     dl, al
        mov     [ecx + 0x10], eax
        jz      l_skip
        mov     [ecx + 0x14], eax
    l_skip:
        mov     dword ptr [ecx + 0x18], 0x10
        mov     [ecx + 0x1c], eax
        ret     4
    }
}
