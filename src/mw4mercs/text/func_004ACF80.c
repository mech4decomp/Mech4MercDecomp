/*
 * FUN_004ACF80 (468 B) — in-.text data block: a __thiscall (this in ecx)
 * jump-table dispatcher (RET 0xc) at 0xCF80 + 1 nop pad + a 12-entry
 * in-.text jump table at 0xAD124. Dispatches on [ecx] (0..0xb) to 12
 * case handlers that copy a float (fld/fstp) or call one of
 * FUN_004ade60 / FUN_004ae0c0 / FUN_004aec80 with a this+offset.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ade60(void);
extern void __cdecl FUN_004ae0c0(void);
extern void __cdecl FUN_004aec80(void);

__declspec(naked) void __stdcall FUN_004ACF80(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        cmp     eax, 0xb
        ja      L_ad120
        __emit 0xFF  /* jmp dword ptr [eax*4 + 0x4ad124] — MSVC6 re-bases via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x24
        __emit 0xD1
        __emit 0x4A
        __emit 0x00
        /* --- case 0 @ 0xCF92 --- */
        fld     dword ptr [ecx + 4]
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        fld     st(0)
        fstp    dword ptr [eax]
        fstp    dword ptr [ecx]
        ret     0xc
        /* --- case 1 @ 0xCFA6 --- */
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 4]
        push    edx
        push    eax
        call    FUN_004ade60
        ret     0xc
        /* --- case 2 @ 0xCFB8 --- */
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 4]
        push    edx
        push    eax
        call    FUN_004ae0c0
        ret     0xc
        /* --- case 3 @ 0xCFCA --- */
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 4]
        push    edx
        push    eax
        call    FUN_004aec80
        ret     0xc
        /* --- case 4 @ 0xCFDC --- */
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        test    eax, eax
        mov     eax, dword ptr [esp + 4]
        push    edx
        push    eax
        jne     L_cff9
        add     ecx, 4
        call    FUN_004aec80
        ret     0xc
    L_cff9:
        add     ecx, 0x10
        call    FUN_004ade60
        ret     0xc
        /* --- case 5 @ 0xD004 --- */
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        test    eax, eax
        mov     eax, dword ptr [esp + 4]
        push    edx
        push    eax
        jne     L_d021
        add     ecx, 4
        call    FUN_004aec80
        ret     0xc
    L_d021:
        add     ecx, 0x10
        call    FUN_004aec80
        ret     0xc
        /* --- case 6 @ 0xD02C --- */
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        test    eax, eax
        mov     eax, dword ptr [esp + 4]
        push    edx
        push    eax
        jne     L_d049
        add     ecx, 4
        call    FUN_004aec80
        ret     0xc
    L_d049:
        add     ecx, 0x10
        call    FUN_004ae0c0
        ret     0xc
        /* --- case 7 @ 0xD054 --- */
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_d0aa
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        push    eax
        push    edx
        add     ecx, 0xc
        call    FUN_004aec80
        ret     0xc
        /* --- case 8 @ 0xD071 --- */
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jne     L_d08d
        fld     dword ptr [ecx + 8]
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        fld     st(0)
        fstp    dword ptr [eax]
        fstp    dword ptr [ecx]
        ret     0xc
    L_d08d:
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 4]
        push    edx
        push    eax
        add     ecx, 0xc
        call    FUN_004ade60
        ret     0xc
        /* --- case 9 @ 0xD0A2 --- */
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jne     L_d0be
    L_d0aa:
        fld     dword ptr [ecx + 8]
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        fld     st(0)
        fstp    dword ptr [ecx]
        fstp    dword ptr [edx]
        ret     0xc
    L_d0be:
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        push    eax
        push    edx
        add     ecx, 0xc
        call    FUN_004ae0c0
        ret     0xc
        /* --- case 10 @ 0xD0D3 --- */
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 4]
        test    eax, eax
        mov     eax, dword ptr [esp + 8]
        push    eax
        push    edx
        jne     L_d0f0
        add     ecx, 4
        call    FUN_004ae0c0
        ret     0xc
    L_d0f0:
        add     ecx, 0x18
        call    FUN_004ade60
        ret     0xc
        /* --- case 11 @ 0xD0FB --- */
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 4]
        test    eax, eax
        mov     eax, dword ptr [esp + 8]
        push    eax
        push    edx
        jne     L_d118
        add     ecx, 4
        call    FUN_004ae0c0
        ret     0xc
    L_d118:
        add     ecx, 0x18
        call    FUN_004ae0c0
    L_ad120:
        ret     0xc
        nop
        /* --- in-.text jump table (12 relocated dword entries) @ 0xAD124 --- */
        __emit 0x92  /* entry 0: 0x4ACF92 */
        __emit 0xCF
        __emit 0x4A
        __emit 0x00
        __emit 0xA6  /* entry 1: 0x4ACFA6 */
        __emit 0xCF
        __emit 0x4A
        __emit 0x00
        __emit 0xB8  /* entry 2: 0x4ACFB8 */
        __emit 0xCF
        __emit 0x4A
        __emit 0x00
        __emit 0xCA  /* entry 3: 0x4ACFCA */
        __emit 0xCF
        __emit 0x4A
        __emit 0x00
        __emit 0xDC  /* entry 4: 0x4ACFDC */
        __emit 0xCF
        __emit 0x4A
        __emit 0x00
        __emit 0x04  /* entry 5: 0x4AD004 */
        __emit 0xD0
        __emit 0x4A
        __emit 0x00
        __emit 0x2C  /* entry 6: 0x4AD02C */
        __emit 0xD0
        __emit 0x4A
        __emit 0x00
        __emit 0x54  /* entry 7: 0x4AD054 */
        __emit 0xD0
        __emit 0x4A
        __emit 0x00
        __emit 0x71  /* entry 8: 0x4AD071 */
        __emit 0xD0
        __emit 0x4A
        __emit 0x00
        __emit 0xA2  /* entry 9: 0x4AD0A2 */
        __emit 0xD0
        __emit 0x4A
        __emit 0x00
        __emit 0xD3  /* entry 10: 0x4AD0D3 */
        __emit 0xD0
        __emit 0x4A
        __emit 0x00
        __emit 0xFB  /* entry 11: 0x4AD0FB */
        __emit 0xD0
        __emit 0x4A
        __emit 0x00
    }
}
