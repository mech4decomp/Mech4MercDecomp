/*
 * func_005efd50 - __thiscall
 * Stores a byte argument into [ecx+0x1c4].
 */
__declspec(naked) void func_005efd50()
{
    __asm {
        mov     al, [esp + 4]
        mov     [ecx + 0x1c4], al
        ret     4
    }
}
