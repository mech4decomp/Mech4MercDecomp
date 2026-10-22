/*
 * FUN_5e003950 (10 B) — DirectDraw wrapper: OR 0x1001 into the word at
 * obj+0x45a8.
 *
 * __thiscall-style (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e003950(void)
{
    __asm {
        or      word ptr [ecx + 0x45a8], 0x1001
        ret
    }
}
