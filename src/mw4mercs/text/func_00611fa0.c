/*
 * FUN_00611fa0 (13 B) — clears a global dword to 0 and returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f28b4;

__declspec(naked) void FUN_00611fa0(void)
{
    __asm {
        mov     dword ptr [g_007f28b4], 0
        xor     eax, eax
        ret
    }
}
