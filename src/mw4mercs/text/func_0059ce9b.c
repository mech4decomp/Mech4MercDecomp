/* Residual/gap function at 0x0059CE9B (78 B).
 * Structure: 1 NOP, 12 jump-table dword entries, 4 NOPs, then a small
 * __thiscall body. The body's `jmp +0x91` (E9 91 00 00 00) targets code
 * outside the 78-byte extent, so it is emitted raw. Table dwords are
 * literal patched addresses, one byte per __emit line (C4405 if multiple). */
__declspec(naked) void func_0059ce9b(void) {
    __asm {
        /* leading NOP */
        nop
        /* jump-table dword entry 0x0059CB50 */
        __emit 0x50
        __emit 0xCB
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CB74 */
        __emit 0x74
        __emit 0xCB
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CB98 */
        __emit 0x98
        __emit 0xCB
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CBBC */
        __emit 0xBC
        __emit 0xCB
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CBE0 */
        __emit 0xE0
        __emit 0xCB
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CC04 */
        __emit 0x04
        __emit 0xCC
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CC28 */
        __emit 0x28
        __emit 0xCC
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CC4C */
        __emit 0x4C
        __emit 0xCC
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CC70 */
        __emit 0x70
        __emit 0xCC
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CC91 */
        __emit 0x91
        __emit 0xCC
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CCB2 */
        __emit 0xB2
        __emit 0xCC
        __emit 0x59
        __emit 0x00
        /* jump-table dword entry 0x0059CCD3 */
        __emit 0xD3
        __emit 0xCC
        __emit 0x59
        __emit 0x00
        /* 4 NOP alignment bytes */
        nop
        nop
        nop
        nop

        /* ---- real code ---- */
        mov     eax, dword ptr [ecx + 0x10]
        and     eax, 1
        cmp     al, 1
        jz      done
        /* __emit: near-jmp E9 91 00 00 00 targets code outside the
           78-byte extent (0x0059CF70); no in-function label possible */
        __emit 0xE9
        __emit 0x91
        __emit 0x00
        __emit 0x00
        __emit 0x00
done:
        mov     edx, dword ptr [ecx + 0x28]
        mov     eax, dword ptr [ecx + 0x54]
        mov     eax, dword ptr [eax + edx*4]
        ret
    }
}
