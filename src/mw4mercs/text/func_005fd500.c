/*
 * FUN_005fd500 (7 B) — __thiscall getter: returns this->[0x280].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005fd500(void)
{
    __asm {
        mov     eax, dword ptr [ecx+0x280]
        ret
    }
}
