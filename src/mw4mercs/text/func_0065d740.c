/*
 * FUN_0065d740 (4 B) — __fastcall getter: returns byte at [ECX+5].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d740(void)
{
    __asm {
        mov     al, byte ptr [ecx + 5]
        ret
    }
}
