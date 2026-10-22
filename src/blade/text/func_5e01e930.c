/*
 * FUN_5e01e930 (102 B) — __thiscall (ECX = this), RET 0x4.
 * Bit-rearrangement helper; behavior depends on this[4] (0x22b vs 0x235).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) unsigned int FUN_5e01e930(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        sub     eax, 0x22b
        jz      L_e96d
        sub     eax, 0xa
        jz      L_e944
        xor     eax, eax
        ret     0x4
    L_e944:
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, ecx
        mov     edx, ecx
        shr     eax, 0x3
        and     eax, 0x1f0000
        and     edx, 0xfc00
        or      eax, edx
        and     ecx, 0xf8
        shr     eax, 0x2
        or      eax, ecx
        shr     eax, 0x3
        ret     0x4
    L_e96d:
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, ecx
        mov     edx, ecx
        shr     eax, 0x3
        and     eax, 0x1f0000
        and     edx, 0xf800
        or      eax, edx
        and     ecx, 0xf8
        shr     eax, 0x3
        or      eax, ecx
        shr     eax, 0x3
        ret     0x4
    }
}
