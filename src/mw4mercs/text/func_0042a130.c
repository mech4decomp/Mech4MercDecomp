/* FUN_0042a130 - MLR copy 6 dwords from stack params to [ecx+0xc] (__thiscall, RET 0x18) */
__declspec(naked) void func_0042a130(void)
{
    __asm {
        push esi
        push edi
        lea edi, [ecx + 0xc]
        mov ecx, 0x6
        lea esi, [esp + 0xc]
        rep movsd
        pop edi
        pop esi
        ret 0x18
    }
}
