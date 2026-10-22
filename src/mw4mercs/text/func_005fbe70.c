/*
 * FUN_005fbe70 (7 B) — __thiscall getter: returns byte flag at [this+0x3f0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005fbe70(void)
{
    __asm {
        mov     al, byte ptr [ecx+0x3f0]
        ret
    }
}
