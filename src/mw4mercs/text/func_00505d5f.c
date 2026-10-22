/*
 * Residual/gap function at 0x00505D5F (952 B). Ghidra missed this entry.
 * Structure:
 *   - 1 NOP
 *   - 5 small __thiscall functions (iterate/query a 5-slot vtable array
 *     at [ecx+0x24..0x30], calling [vtbl+0xc] on each non-null slot)
 *   - NOP alignment padding between them
 *   - FUN_00505e10 body (771 B, sound channel update)
 *   - 4 trailing NOPs
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00722660(void);
extern void __cdecl FUN_007225b0(void);
extern void __cdecl FUN_00505d30(void);

extern float g_76d598;
extern float g_773948;
extern float g_773954;
extern float g_773950;
extern float g_77394c;

__declspec(naked) void func_00505d5f(void)
{
    __asm {
        /* leading NOP */
        nop

        /* ---- fn 1: iterate 5-slot vtable array at [ecx+0x24] ---- */
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        lea     esi, [ecx + 0x24]
        mov     edi, 5
l1_loop:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      l1_done
        mov     eax, dword ptr [ecx]
        push    ebx
        call    dword ptr [eax + 0xc]
l1_done:
        add     esi, 4
        dec     edi
        jnz     l1_loop
        pop     edi
        pop     esi
        pop     ebx
        ret     4

        /* 9 NOP alignment bytes */
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop
        nop

        /* ---- fn 2: query slot [ecx+0x24] ---- */
        mov     ecx, dword ptr [ecx + 0x24]
        test    ecx, ecx
        jz      l2_done
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0xc]
l2_done:
        ret     4

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

        /* ---- fn 3: query slot [ecx+0x28] ---- */
        mov     ecx, dword ptr [ecx + 0x28]
        test    ecx, ecx
        jz      l3_done
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0xc]
l3_done:
        ret     4

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

        /* ---- fn 4: query slot [ecx+0x2c] ---- */
        mov     ecx, dword ptr [ecx + 0x2c]
        test    ecx, ecx
        jz      l4_done
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0xc]
l4_done:
        ret     4

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

        /* ---- fn 5: query slot [ecx+0x30] ---- */
        mov     ecx, dword ptr [ecx + 0x30]
        test    ecx, ecx
        jz      l5_done
        mov     edx, dword ptr [esp + 4]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0xc]
l5_done:
        ret     4

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

        /* ---- FUN_00505e10 body ---- */
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        xor     edi, edi
        test    eax, eax
        jbe     l_81
        mov     ebp, dword ptr [esp + 0x1c]
    l_22:
        cmp     edi, dword ptr [esi + 0x54]
        jz      l_77
        mov     ecx, dword ptr [esi + 0x38]
        push    edi
        lea     eax, [edi + 0x100]
        push    ecx
        mov     dword ptr [esp + 0x24], eax
        call    FUN_00722660
        mov     bl, al
        test    bl, bl
        jz      l_55
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebp]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 0xc]
        jmp     l_71
    l_55:
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [ebp]
        push    0xffff
        lea     ecx, [esp + 0x20]
        neg     edx
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x24], edx
        call    dword ptr [eax + 0xc]
    l_71:
        mov     edx, dword ptr [esi + 0x4c]
        mov     byte ptr [edx + edi], bl
    l_77:
        mov     eax, dword ptr [esi]
        inc     edi
        add     ebp, 0x1c
        cmp     edi, eax
        jc      l_22
    l_81:
        mov     eax, dword ptr [esi + 0x3c]
        mov     ecx, dword ptr [esi + 0x38]
        push    eax
        push    ecx
        call    FUN_007225b0
        push    ecx
        fstp    dword ptr [esp]
        push    0
        mov     ecx, esi
        call    FUN_00505d30
        mov     edi, dword ptr [esp + 0x18]
        mov     edx, dword ptr [edi]
        mov     ebp, 1
        push    ebp
        lea     eax, [esi + 4]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esi + 0x40]
        mov     edx, dword ptr [esi + 0x38]
        push    ecx
        push    edx
        call    FUN_007225b0
        push    ecx
        fstp    dword ptr [esp]
        push    ebp
        mov     ecx, esi
        call    FUN_00505d30
        mov     eax, dword ptr [edi + 0x1c]
        lea     ecx, [edi + 0x1c]
        push    ebp
        lea     edx, [esi + 8]
        push    edx
        call    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esi + 0x44]
        cmp     eax, 7
        ja      l_04
        push    eax
        mov     eax, dword ptr [esi + 0x38]
        push    eax
        call    FUN_007225b0
        push    ecx
        fstp    dword ptr [esp]
        push    2
        mov     ecx, esi
        call    FUN_00505d30
        mov     edx, dword ptr [edi + 0x38]
        lea     ecx, [edi + 0x38]
        push    ebp
        lea     eax, [esi + 0xc]
        push    eax
        call    dword ptr [edx + 0xc]
    l_04:
        mov     eax, dword ptr [esi + 0x48]
        cmp     eax, 7
        ja      l_31
        mov     ecx, dword ptr [esi + 0x38]
        push    eax
        push    ecx
        call    FUN_007225b0
        push    ecx
        fstp    dword ptr [esp]
        push    3
        mov     ecx, esi
        call    FUN_00505d30
        mov     edx, dword ptr [edi + 0x54]
        lea     ecx, [edi + 0x54]
        push    ebp
        lea     eax, [esi + 0x10]
        push    eax
        call    dword ptr [edx + 0xc]
    l_31:
        cmp     dword ptr [esi + 0x20], ebp
        jnz     l_105
        mov     ecx, dword ptr [esi + 0x38]
        push    8
        push    ecx
        lea     ebx, [esi + 0x14]
        call    FUN_007225b0
        fstp    dword ptr [ebx]
        mov     edx, dword ptr [edi + 0x70]
        lea     ecx, [edi + 0x70]
        push    ebp
        push    ebx
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [ebx]
        mov     dword ptr [esp + 0x1c], eax
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [esi + 0x1c]
        mov     ecx, eax
        mov     dword ptr [esi + 0x18], ecx
        fnstsw  ax
        test    ah, 0x40
        jnz     l_10c
        fld     dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76d598]
        mov     dword ptr [esp + 0x14], ebp
        fnstsw  ax
        test    ah, 0x40
        jnz     l_2f
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_773948]
        fnstsw  ax
        test    ah, 1
        jnz     l_bd
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_773954]
        fnstsw  ax
        test    ah, 0x41
        jz      l_bd
        mov     edx, dword ptr [edi]
        push    ebp
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        jmp     l_2c
    l_bd:
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_773950]
        fld     dword ptr [esp + 0x1c]
        fnstsw  ax
        fcomp   dword ptr [g_77394c]
        test    ah, 1
        fnstsw  ax
        jnz     l_e4
        test    ah, 0x41
        jz      l_e9
        lea     ecx, [edi + 0x1c]
        jmp     l_24
    l_e4:
        test    ah, 0x41
        jnz     l_ff
    l_e9:
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_773948]
        fnstsw  ax
        test    ah, 1
        jz      l_ff
        lea     ecx, [edi + 0x54]
        jmp     l_24
    l_ff:
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_773954]
        fnstsw  ax
        test    ah, 0x41
        jz      l_21
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [g_773950]
        fnstsw  ax
        test    ah, 1
        jz      l_2f
    l_21:
        lea     ecx, [edi + 0x38]
    l_24:
        mov     edx, dword ptr [ecx]
        push    ebp
        lea     eax, [esp + 0x18]
        push    eax
    l_2c:
        call    dword ptr [edx + 0xc]
    l_2f:
        cmp     dword ptr [esi + 0x1c], 0xbf800000
        mov     dword ptr [esp + 0x14], 0
        jz      l_f7
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_773948]
        fnstsw  ax
        test    ah, 1
        jnz     l_7f
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_773954]
        fnstsw  ax
        test    ah, 0x41
        jz      l_7f
        mov     edx, dword ptr [edi]
        push    ebp
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        mov     dword ptr [esi + 0x1c], ecx
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    l_7f:
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_773950]
        fnstsw  ax
        test    ah, 1
        jnz     l_a4
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_77394c]
        fnstsw  ax
        test    ah, 0x41
        jz      l_a4
        lea     ecx, [edi + 0x1c]
        jmp     l_ec
    l_a4:
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_77394c]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_c9
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_773948]
        fnstsw  ax
        test    ah, 1
        jz      l_c9
        lea     ecx, [edi + 0x54]
        jmp     l_ec
    l_c9:
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_773954]
        fnstsw  ax
        test    ah, 0x41
        jz      l_e9b
        fld     dword ptr [esi + 0x1c]
        fcomp   dword ptr [g_773950]
        fnstsw  ax
        test    ah, 1
        jz      l_f7
    l_e9b:
        lea     ecx, [edi + 0x38]
    l_ec:
        mov     edx, dword ptr [ecx]
        push    ebp
        lea     eax, [esp + 0x18]
        push    eax
        call    dword ptr [edx + 0xc]
    l_f7:
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        mov     dword ptr [esi + 0x1c], ecx
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    l_105:
        mov     dword ptr [esi + 0x18], 0xbf800000
    l_10c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10

        /* 4 trailing NOPs */
        nop
        nop
        nop
        nop
    }
}
