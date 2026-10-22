/*
 * FUN_1001cb00 (7 B) - __thiscall.
 * Constructor: stores vtable pointer 0x1004a8dc at this+0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1001cb00(void)
{
    __asm {
        mov     dword ptr [ecx], 0x1004a8dc
        ret
    }
}
