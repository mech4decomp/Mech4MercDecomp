/*
 * FUN_00733390 (24 B) — Wrapper: calls FUN_006F4710(0x770078, 0,
 * [0x00849300]) and stores the result at 0x008aa284.
 *
 * Match: target 100%
 */

extern int __stdcall FUN_006F4710(int a, int b, int c);

extern int g_849300;    /* 0x00849300 */
extern int g_8aa284;    /* 0x008aa284 */

__declspec(naked) void FUN_00733390(void)
{
    __asm {
        mov     eax, dword ptr [g_849300]
        push    eax
        push    0
        push    0x770078
        call    FUN_006F4710
        mov     dword ptr [g_8aa284], eax
        ret
    }
}
