/*
 * FUN_5e003960 (8 B) — DirectDraw wrapper: OR 0x2 into the byte at
 * obj+0x45a8.
 *
 * __thiscall-style (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e003960(void)
{
    __asm {
        or      byte ptr [ecx + 0x45a8], 0x2
        ret
    }
}
