/*
 * FUN_10041a40 (53 B) - __cdecl. Bit-field remapping: maps input bits to
 * output bits (1->0x10, 4->8, 8->4, 0x10->2, 0x20->1, 2->0x80000).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10041a40(void)
{
    __asm {
        mov     cl, byte ptr [esp + 4]
        xor     eax, eax
        test    cl, 1
        jz      L_4e
        push    0x10
        pop     eax
L_4e:
        test    cl, 4
        jz      L_55
        or      al, 8
L_55:
        test    cl, 8
        jz      L_5c
        or      al, 4
L_5c:
        test    cl, 0x10
        jz      L_63
        or      al, 2
L_63:
        test    cl, 0x20
        jz      L_6a
        or      al, 1
L_6a:
        test    cl, 2
        jz      L_74
        or      eax, 0x80000
L_74:
        ret
    }
}
