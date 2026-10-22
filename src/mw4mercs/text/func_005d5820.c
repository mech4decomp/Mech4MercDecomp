/*
 * FUN_005d5820 (407 B) — __thiscall, RET 8 (2 stack params).
 *
 * Early-out if this->[0x434] && this->[0x435]. Otherwise computes a
 * distance-squared check against a target and conditionally calls a
 * virtual method / helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00419480(void *a);
extern void __stdcall FUN_005d59d0(void);

__declspec(naked) void __stdcall FUN_005d5820(void)
{
    

extern int DAT_0076c5b0;
extern int DAT_00788158;
__asm {
sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x434]
        test    al, al
        push    edi
        jz      L_5848
        mov     al, byte ptr [esi + 0x435]
        test    al, al
        jz      L_5848
        call    FUN_005d59d0
        pop     edi
        pop     esi
        add     esp, 0x1c
        ret     8

L_5848:
        mov     edi, dword ptr [esi + 0x35c]
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00419480
        fld dword ptr [DAT_0076c5b0]
        mov     eax, dword ptr [esi + 0x41c]
        cmp     eax, 0x5
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x14], 0x0
        ja      L_58fd
        jmp     dword ptr [eax*4 + 0x5d59b8]

L_case0:
        mov     ecx, dword ptr [esi + 0x3f0]
        fstp    st(0)
        fld     dword ptr [esi + 0x3ec]
        mov     edx, dword ptr [esi + 0x3f4]
        mov     dword ptr [esp + 0x10], ecx
        jmp     L_58f9

L_case1:
        mov     eax, dword ptr [esi + 0x3fc]
        fstp    st(0)
        mov     ecx, dword ptr [esi + 0x400]
        fld     dword ptr [esi + 0x3f8]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_58fd

L_case2:
        mov     edx, dword ptr [esi + 0x408]
        fstp    st(0)
        mov     eax, dword ptr [esi + 0x40c]
        fld     dword ptr [esi + 0x404]
        mov     dword ptr [esp + 0x10], edx
        mov     dword ptr [esp + 0x14], eax
        jmp     L_58fd

L_case3:
        mov     ecx, dword ptr [esi + 0x414]
        fstp    st(0)
        fld     dword ptr [esi + 0x410]
        mov     edx, dword ptr [esi + 0x418]
        mov     dword ptr [esp + 0x10], ecx

L_58f9:
        mov     dword ptr [esp + 0x14], edx

L_58fd:
        fsub    dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0x440]
        fld     dword ptr [esp + 0x10]
        mov     dword ptr [esp + 0x8], eax
        fsub    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x20]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom dword ptr [DAT_00788158]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5953
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0x8]
        fxch    st(1)
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_5978
        jmp     L_5955

L_5953:
        fstp    st(0)

L_5955:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x1c4]
        cmp     dword ptr [esi + 0x41c], 0x1
        jnz     L_5971
        mov     byte ptr [esi + 0x434], 0x1
        jmp     L_5978

L_5971:
        mov     ecx, esi
        call    FUN_005d59d0

L_5978:
        cmp     dword ptr [esi + 0x41c], 0x3
        jnz     L_59af
        mov     eax, dword ptr [esi + 0x42c]
        cmp     eax, 0x4
        jz      L_59af
        mov     ecx, dword ptr [esi + 0x420]
        lea     eax, [ecx + eax*4 + 0x4]
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        jz      L_59af
        mov     edx, ecx
        pop     edi
        mov     byte ptr [edx + 0x435], 0x1
        pop     esi
        add     esp, 0x1c
        ret     8

L_59ad:
        fstp    st(0)

L_59af:
        pop     edi
        pop     esi
        add     esp, 0x1c
        ret     8
    }


}
