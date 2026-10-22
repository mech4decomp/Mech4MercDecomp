/*
 * FUN_0074ec60 (45 B) — __stdcall, RET 4.
 *
 * Returns a string name for a D3DCULLMODE enum:
 *   1 -> 0x7abf18, 2 -> 0x7ac4d0, 3 -> 0x7ac4d4, else "Unknown" (0x79e7f8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0074ec60(int param)
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
        mov     eax, 0x7ac4d4
        ret     4
L2:
        mov     eax, 0x7ac4d0
        ret     4
L1:
        mov     eax, 0x7abf18
        ret     4
    }
}
