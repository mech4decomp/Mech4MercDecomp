/*
 * FUN_00630cc0 (9 B) — __thiscall: zeroes [this+0x30] and [this+0x34].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00630cc0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 0x30], eax
        mov     dword ptr [ecx + 0x34], eax
        ret
    }
}
