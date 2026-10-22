/*
 * FUN_0074ea60 (45 B) — __stdcall, RET 4.
 *
 * Returns a string name for a D3DFILLMODE enum:
 *   1 -> "D3DFILL_POINT" (0x7ac338), 2 -> "D3DFILL_WIREFRAME" (0x7ac348),
 *   3 -> "D3DFILL_SOLID" (0x7ac35c), else "Unknown" (0x79e7f8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0074ea60(int param)
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
        mov     eax, 0x7ac35c
        ret     4
L2:
        mov     eax, 0x7ac348
        ret     4
L1:
        mov     eax, 0x7ac338
        ret     4
    }
}
