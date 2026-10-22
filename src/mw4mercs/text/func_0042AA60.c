/*
 * FUN_0042AA60 (9 B) — __stdcall getter: returns dword at [ecx+0x9c], ret 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0042AA60(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x9c]
        ret     4
    }
}
