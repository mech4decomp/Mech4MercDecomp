/*
 * FUN_10035ee0 (4 B) - __thiscall.
 * Getter: returns dword at this+0x18.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10035ee0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        ret
    }
}
