/*
 * FUN_00661d80 (4 B) — __thiscall getter. Returns byte at [this+0xc].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00661d80(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0xc]
        ret
    }
}
