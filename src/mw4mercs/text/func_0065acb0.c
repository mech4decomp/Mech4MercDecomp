/*
 * FUN_0065acb0 (7 B) - __thiscall constructor. Sets the object's vtable
 * pointer to 0x794aa0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065acb0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x794aa0
        ret
    }
}
