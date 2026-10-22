/*
 * FUN_004BA3B0 (12 B) — __thiscall (RET 0). Clears bit 2 of [this+0x18]
 * and stores 0x4c6f00 into [this+0x1c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004BA3B0(void)
{
    __asm {
        and     dword ptr [ecx + 0x18], 0xfffffffd
        mov     dword ptr [ecx + 0x1c], 0x4c6f00
        ret
    }
}
