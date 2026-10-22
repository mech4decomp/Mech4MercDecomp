/*
 * FUN_10033ad0 (4 B) - __thiscall.
 * Getter: returns dword at this+0xc.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10033ad0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        ret
    }
}
