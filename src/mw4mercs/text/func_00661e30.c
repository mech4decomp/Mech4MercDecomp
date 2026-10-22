/*
 * FUN_00661e30 (10 B) — __thiscall setter. Stores a dword arg into [this+0x20].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00661e30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [ecx + 0x20], eax
        ret     0x4
    }
}
