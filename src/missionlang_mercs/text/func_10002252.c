/*
 * FUN_10002252 (51 B) — map a sentinel value to a codepage id via a
 * cascaded subtract/compare chain.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10002252 (51 B) -- id remap table: maps 0x3a4/3a8/3b5/3b6 to their
 * rebuilt ids. Written as a switch so MSVC6 emits the SUB-chain dispatch the
 * reference uses.
 */

__declspec(naked) int __cdecl FUN_10002252(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     eax, 0x3a4
        jz      L227F
        sub     eax, 4
        jz      L2279
        sub     eax, 0xd
        jz      L2273
        dec     eax
        jz      L226D
        xor     eax, eax
        ret
L226D:
        mov     eax, 0x404
        ret
L2273:
        mov     eax, 0x412
        ret
L2279:
        mov     eax, 0x804
        ret
L227F:
        mov     eax, 0x411
        ret
    }
}
