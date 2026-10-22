/*
 * FUN_10002863 (28 B, __stdcall) — one-time init: if DAT_10009108 is 0,
 * call FUN_1000248b(-3) (setup ACP) and set DAT_10009108 = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10002863 (28 B) -- __stdcall. One-time init: if
 * g_10009108 is clear, run FUN_1000248b(-3) (setup ACP) and set it.
 */

extern void __cdecl FUN_1000248b(int);

extern int g_10009108;

__declspec(naked) void __stdcall FUN_10002863(void)
{
    __asm {
        cmp     dword ptr [g_10009108], 0
        jnz     L_287e
        push    -3
        call    FUN_1000248b
        pop     ecx
        mov     dword ptr [g_10009108], 1
L_287e:
        ret
    }
}
