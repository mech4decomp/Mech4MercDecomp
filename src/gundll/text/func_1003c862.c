/*
 * FUN_1003c862 (51 B) — __cdecl.
 * Switch on param_1: 0x3a4->0x411, 0x3a8->0x804, 0x3b5->0x412,
 * 0x3b6->0x404, default 0.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003c862(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     eax, 0x3a4
        jz      L4
        sub     eax, 0x4
        jz      L3
        sub     eax, 0xd
        jz      L2
        dec     eax
        jz      L1
        xor     eax, eax
        ret
    L1:
        mov     eax, 0x404
        ret
    L2:
        mov     eax, 0x412
        ret
    L3:
        mov     eax, 0x804
        ret
    L4:
        mov     eax, 0x411
        ret
    }
}
