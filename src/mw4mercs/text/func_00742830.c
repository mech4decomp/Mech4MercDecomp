/*
 * FUN_00742830 (26 B) — Wrapper: calls FUN_007412E0([0x008aaae4], 0,
 * 0x742800, 0x8aab0c, 0).
 *
 * Match: target 100%
 */

extern int __stdcall FUN_007412E0(int a, int b, int c, int d, int e);

extern int g_8aaae4;   /* 0x008aaae4 */

__declspec(naked) void FUN_00742830(void)
{
    __asm {
        mov     eax, dword ptr [g_8aaae4]
        push    0
        push    0x8aab0c
        push    0x742800
        push    0
        push    eax
        call    FUN_007412E0
        ret
    }
}
