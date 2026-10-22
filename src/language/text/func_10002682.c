/*
 * FUN_10002682 (51 B, __cdecl) — maps a codepage to a "display" codepage:
 * 0x3a4->0x411, 0x3a8->0x804, 0x3b5->0x412, 0x3b6->0x404, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * Language.dll FUN_10002682 (51 B) -- __cdecl. Maps an ANSI codepage to its
 * "display" (system) codepage: 0x3a4->0x411 (JP), 0x3a8->0x804 (SC),
 * 0x3b5->0x412 (KR), 0x3b6->0x404 (TC), else 0.
 */

__declspec(naked) int __cdecl FUN_10002682(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        sub     eax, 0x3a4
        jz      L_26af
        sub     eax, 4
        jz      L_26a9
        sub     eax, 0xd
        jz      L_26a3
        dec     eax
        jz      L_269d
        xor     eax, eax
        ret
L_269d:
        mov     eax, 0x404
        ret
L_26a3:
        mov     eax, 0x412
        ret
L_26a9:
        mov     eax, 0x804
        ret
L_26af:
        mov     eax, 0x411
        ret
    }
}
