/*
 * FUN_0066e000 (11 B) — writes 0xffff0000 to [this+0xb4].
 * Animation/GameData holder field init.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0066e000(void)
{
    __asm {
        mov     dword ptr [ecx+0xb4], 0FFFF0000h
        ret
    }
}
