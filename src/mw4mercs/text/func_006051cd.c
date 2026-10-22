/*
 * Residual/gap function at 0x006051CD (257 B). Ghidra missed this entry.
 * Structure:
 *   - 3-byte alignment pad (lea ecx,[ecx+0])
 *   - 13 dword jump-table entries (tail of FUN_00604f30's jump table)
 *   - 12 NOPs + a lone `ret` + 15 NOPs
 *   - 4 small __thiscall functions (vtable-pointer installers + a
 *     flag-checked deleter).
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void);

extern int g_007b8810;

__declspec(naked) void __cdecl func_006051cd(void)
{
    __asm {
        /* 3-byte alignment pad: lea ecx,[ecx+0] (MSVC6 drops the 0-disp) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* jump-table dword entry 0x00604F9E */
        __emit 0x9E
        __emit 0x4F
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00604FA6 */
        __emit 0xA6
        __emit 0x4F
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00604FB4 */
        __emit 0xB4
        __emit 0x4F
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00604FD4 */
        __emit 0xD4
        __emit 0x4F
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00604FEC */
        __emit 0xEC
        __emit 0x4F
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00604FFF */
        __emit 0xFF
        __emit 0x4F
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00605012 */
        __emit 0x12
        __emit 0x50
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00605025 */
        __emit 0x25
        __emit 0x50
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00605038 */
        __emit 0x38
        __emit 0x50
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00605081 */
        __emit 0x81
        __emit 0x50
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x006050CA */
        __emit 0xCA
        __emit 0x50
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00605113 */
        __emit 0x13
        __emit 0x51
        __emit 0x60
        __emit 0x00
        /* jump-table dword entry 0x00605156 */
        __emit 0x56
        __emit 0x51
        __emit 0x60
        __emit 0x00
        /* 12 NOP alignment bytes */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        /* lone ret */
        ret
        /* 15 NOP alignment bytes */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- block 1: vtable installer (0x0078B8E0) ---- */
        mov     eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0x0c
        mov     esi, ecx
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      b1_fail
        mov     ecx, dword ptr [esi + 4]
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x0078B8E0
        pop     esi
        ret
b1_fail:
        xor     eax, eax
        pop     esi
        ret
        nop

        /* ---- block 2: vtable installer (0x0078B8DC) ---- */
        mov     eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0x0c
        mov     esi, ecx
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      b2_fail
        mov     ecx, dword ptr [esi + 4]
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x0078B8DC
        pop     esi
        ret
b2_fail:
        xor     eax, eax
        pop     esi
        ret
        nop

        /* ---- block 3: vtable installer (0x0078B8D8) ---- */
        mov     eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0x0c
        mov     esi, ecx
        call    FUN_004084c0
        add     esp, 8
        test    eax, eax
        jz      b3_fail
        mov     ecx, dword ptr [esi + 4]
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax], 0x0078B8D8
        pop     esi
        ret
b3_fail:
        xor     eax, eax
        pop     esi
        ret
        nop

        /* ---- block 4: flag-checked deleter ---- */
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        jz      b4_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
b4_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
