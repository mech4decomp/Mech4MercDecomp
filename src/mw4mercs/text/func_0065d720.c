/*
 * FUN_0065d720 (4 B) — __fastcall getter: returns byte at [ECX+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d720(void)
{
    __asm {
        mov     al, byte ptr [ecx + 4]
        ret
    }
}
