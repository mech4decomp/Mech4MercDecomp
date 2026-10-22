/*
 * FUN_004da490 (86 B) — __thiscall. MLR/Adept core: remaps [this+0x158]
 * (0/2/0x20 -> 0xe; 1/3/0x31 -> 0xf), then recursively walks a linked
 * list at [this+0xbc], calling itself for each non-null node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004da490(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x158]
        test    eax, eax
        jz      L1
        cmp     eax, 0x2
        jz      L1
        cmp     eax, 0x20
        jz      L1
        cmp     eax, 0x1
        jz      L2
        cmp     eax, 0x3
        jz      L2
        cmp     eax, 0x31
        jnz     L3
L2:
        mov     dword ptr [ecx + 0x158], 0xf
        jmp     L3
L1:
        mov     dword ptr [ecx + 0x158], 0xe
L3:
        push    esi
        mov     esi, dword ptr [ecx + 0xbc]
        test    esi, esi
        jz      L4
L5:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L4
        call    FUN_004da490
        __emit 0xEB  /* __emit: backward jmp after call-reloc miscomputed off-by-4 (EB F0); ref needs EB EC */
        __emit 0xEC
L4:
        pop     esi
        ret
    }
}
