/*
 * FUN_0074c690 (45 B) — __stdcall, RET 4.
 *
 * Returns a string name for a transform-space enum:
 *   1 -> "WORLD" (0x7ab620), 2 -> "VIEW" (0x7ab628),
 *   3 -> "PROJECTION" (0x7ab630), else "Unknown" (0x79e7f8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0074c690(int param)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        dec     eax
        jz      L1
        dec     eax
        jz      L2
        dec     eax
        jz      L3
        mov     eax, 0x79e7f8
        ret     4
L3:
        mov     eax, 0x7ab630
        ret     4
L2:
        mov     eax, 0x7ab628
        ret     4
L1:
        mov     eax, 0x7ab620
        ret     4
    }
}
