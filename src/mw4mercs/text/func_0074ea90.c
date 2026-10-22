/*
 * FUN_0074ea90 (45 B) — __stdcall, RET 4.
 *
 * Returns a string name for a D3DSHADEMODE enum:
 *   1 -> "D3DSHADE_FLAT" (0x7ac36c), 2 -> "D3DSHADE_GOURAUD" (0x7ac37c),
 *   3 -> "D3DSHADE_PHONG" (0x7ac390), else "Unknown" (0x79e7f8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0074ea90(int param)
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
        mov     eax, 0x7ac390
        ret     4
L2:
        mov     eax, 0x7ac37c
        ret     4
L1:
        mov     eax, 0x7ac36c
        ret     4
    }
}
