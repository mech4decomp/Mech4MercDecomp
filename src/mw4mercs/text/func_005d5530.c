/*
 * FUN_005d5530 (659 B) — __thiscall, RET 8 (2 stack params).
 *
 * Initializes a set of float/vector fields on `this` from a source object,
 * then applies a per-case (switch on param_1) float adjustment.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00417d80(void *a, void *b);
extern void __stdcall FUN_00420840(void *a);

__declspec(naked) void __stdcall FUN_005d5530(void)
{
    

extern int DAT_00787ecc;
extern int DAT_0076d070;
extern int DAT_0076d3c8;
__asm {
sub     esp, 0x58
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x64]
        mov     eax, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        fstp    dword ptr [esi + 0x404]
        mov     dword ptr [esp + 0x8], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esi + 0x40c], eax
        mov     eax, dword ptr [ecx + 0x128]
        test    eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x64]
        mov     dword ptr [esi + 0x430], ecx
        mov     dword ptr [esi + 0x408], edx
        mov     dword ptr [esi + 0x42c], edi
        jnz     L_skip
        mov     eax, dword ptr [ecx + 0x124]
L_skip:
        mov     ecx, dword ptr [esi + 0x35c]
        mov     edx, dword ptr [ecx + 0xd8]
        add     edx, 0x80
        push    edx
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_00417d80
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_00420840
        cmp     edi, 0x4
        mov     ecx, dword ptr [esi + 0x404]
        mov     edx, dword ptr [esi + 0x408]
        mov     eax, dword ptr [esi + 0x40c]
        mov     dword ptr [esi + 0x3ec], ecx
        mov     ecx, dword ptr [esi + 0x404]
        mov     dword ptr [esi + 0x3f0], edx
        mov     edx, dword ptr [esi + 0x408]
        mov     dword ptr [esi + 0x3f4], eax
        mov     eax, dword ptr [esi + 0x40c]
        mov     dword ptr [esi + 0x3f8], ecx
        mov     ecx, dword ptr [esi + 0x404]
        mov     dword ptr [esi + 0x3fc], edx
        mov     edx, dword ptr [esi + 0x408]
        mov     dword ptr [esi + 0x400], eax
        mov     eax, dword ptr [esi + 0x40c]
        mov     dword ptr [esi + 0x410], ecx
        mov     dword ptr [esi + 0x414], edx
        mov     dword ptr [esi + 0x418], eax
        ja      L_end
        jmp     dword ptr [edi*4 + 0x5d57c4]

L_case0:
        fld dword ptr [DAT_00787ecc]
        fmul    dword ptr [esp + 0x5c]
        fld     dword ptr [esi + 0x3f4]
        fsub    st, st(1)
        fstp    dword ptr [esi + 0x3f4]
        fld     dword ptr [esi + 0x3ec]
        fsub    st, st(1)
        fstp    dword ptr [esi + 0x3ec]
        fld     dword ptr [esi + 0x400]
        fsub    st, st(1)
        fstp    dword ptr [esi + 0x400]
        fstp    st(0)
        fld     dword ptr [esp + 0x5c]
        fmul dword ptr [DAT_0076d070]
        fsubr   dword ptr [esi + 0x418]

L_epi_sub:
        fstp    dword ptr [esi + 0x418]
        pop     edi
        fld     dword ptr [esp + 0x58]
        fmul dword ptr [DAT_0076d3c8]
        fsubr   dword ptr [esi + 0x410]
        fstp    dword ptr [esi + 0x410]
        pop     esi
        add     esp, 0x58
        ret     8

L_case1:
        fld dword ptr [DAT_00787ecc]
        fmul    dword ptr [esp + 0x5c]
        fld     st(0)
        fadd    dword ptr [esi + 0x3f4]
        fstp    dword ptr [esi + 0x3f4]
        fld     dword ptr [esi + 0x3ec]
        fsub    st, st(1)
        fstp    dword ptr [esi + 0x3ec]
        fadd    dword ptr [esi + 0x400]
        fstp    dword ptr [esi + 0x400]
        fld     dword ptr [esp + 0x5c]
        fmul dword ptr [DAT_0076d070]
        fadd    dword ptr [esi + 0x418]
        jmp     L_epi_sub

L_case2:
        fld dword ptr [DAT_00787ecc]
        fmul    dword ptr [esp + 0x5c]
        fld     dword ptr [esi + 0x3f4]
        fsub    st, st(1)
        fstp    dword ptr [esi + 0x3f4]
        fld     st(0)
        fadd    dword ptr [esi + 0x3ec]
        fstp    dword ptr [esi + 0x3ec]
        fld     dword ptr [esi + 0x400]
        fsub    st, st(1)
        fstp    dword ptr [esi + 0x400]
        fstp    st(0)
        fld     dword ptr [esp + 0x5c]
        fmul dword ptr [DAT_0076d070]
        fsubr   dword ptr [esi + 0x418]
        jmp     L_epi_add

L_case3:
        fld dword ptr [DAT_00787ecc]
        fmul    dword ptr [esp + 0x5c]
        fld     st(0)
        fadd    dword ptr [esi + 0x3f4]
        fstp    dword ptr [esi + 0x3f4]
        fld     st(0)
        fadd    dword ptr [esi + 0x3ec]
        fstp    dword ptr [esi + 0x3ec]
        fadd    dword ptr [esi + 0x400]
        fstp    dword ptr [esi + 0x400]
        fld     dword ptr [esp + 0x5c]
        fmul dword ptr [DAT_0076d070]
        fadd    dword ptr [esi + 0x418]

L_epi_add:
        fstp    dword ptr [esi + 0x418]
        pop     edi
        fld     dword ptr [esp + 0x58]
        fmul dword ptr [DAT_0076d3c8]
        fadd    dword ptr [esi + 0x410]
        fstp    dword ptr [esi + 0x410]
        pop     esi
        add     esp, 0x58
        ret     8

L_case4:
        fld dword ptr [DAT_00787ecc]
        fmul    dword ptr [esp + 0x5c]
        fld     st(0)
        fadd    st, st(0)
        fadd    dword ptr [esi + 0x3f4]
        fstp    dword ptr [esi + 0x3f4]
        fadd    dword ptr [esi + 0x400]
        fstp    dword ptr [esi + 0x400]

L_end:
        pop     edi
        pop     esi
        add     esp, 0x58
        ret     8
    }


}
