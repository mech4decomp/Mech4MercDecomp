/*
 * FUN_005b9560 (497 B) — __thiscall (ECX = this), RET (no stack params).
 * Returns this + 0x1d4 in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00707e70(void);
extern void __stdcall FUN_005f07c0(void);
extern void __stdcall FUN_005ba2a0(void);
extern void __stdcall FUN_0075db4a(void);   /* _ftol */
extern void __stdcall FUN_005b9510(void);

__declspec(naked) void __stdcall FUN_005b9560(void)
{
    

extern int DAT_0076d5f0;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_00786ddc;
extern int DAT_00786dd8;
extern int DAT_00786dd4;
extern int DAT_007f2130;
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        fld     dword ptr [edi + 0x194]
        push    0x0
        fadd dword ptr [DAT_0076d5f0]
        mov     dword ptr [esp + 0x14], edi
        fstp    dword ptr [esp + 0x1c]
        call    FUN_00707e70
        fcomp   dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_9743
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ebx, dword ptr [ecx + 0x20]
        mov     ecx, edi
        xor     ebx, 0x85739531
        call    FUN_005f07c0
        mov     esi, dword ptr [eax + 0xd8]
        mov     ecx, edi
        add     esi, 0x80
        call    FUN_005ba2a0
        fld     dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x2c]
        fld     st(0)
        fsub    st, st(2)
        mov     dword ptr [esp + 0x14], edx
        fcom dword ptr [DAT_00786ddc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_95e6
        fstp    st(0)
        fld dword ptr [DAT_00786ddc]
L_95e6:
        fadd dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        fadd    st, st(1)
        mov     esi, eax
        sar     esi, 0x8
        fcom dword ptr [DAT_00786dd4]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_960d
        fstp    st(0)
        fld dword ptr [DAT_00786dd4]
L_960d:
        fadd dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x14]
        fsub    st, st(1)
        mov     ebp, eax
        sar     ebp, 0x8
        fcom dword ptr [DAT_00786ddc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_9638
        fstp    st(0)
        fld dword ptr [DAT_00786ddc]
L_9638:
        fadd dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        fadd    dword ptr [esp + 0x14]
        sar     eax, 0x8
        mov     dword ptr [esp + 0x18], eax
        fcom dword ptr [DAT_00786dd4]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_9663
        fstp    st(0)
        fld dword ptr [DAT_00786dd4]
L_9663:
        fadd dword ptr [DAT_00786dd8]
        call    FUN_0075db4a
        mov     edi, dword ptr [edi + 0x2e0]
        sar     eax, 0x8
        mov     ecx, ebp
        sub     ecx, esi
        mov     edx, eax
        sub     edx, dword ptr [esp + 0x18]
        inc     ecx
        inc     edx
        imul    ecx, edx
        mov     edx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edx + 0x2e4]
        sub     edx, edi
        sar     edx, 0x2
        cmp     edx, ecx
        jnz     L_96ee
        cmp     esi, ebp
        mov     dword ptr [esp + 0x14], esi
        jg      L_9730
        lea     ecx, [esi + esi*0x4]
        mov     esi, dword ptr [esp + 0x18]
        lea     edx, [esi + ecx*0x4]
        lea     edx, [ebx + edx*0x8 + 0x2bc]
        mov     dword ptr [esp + 0x18], edx
L_96ba:
        cmp     esi, eax
        mov     ecx, esi
        jg      L_96d1
L_96c0:
        mov     ebx, dword ptr [edx]
        cmp     ebx, dword ptr [edi]
        jnz     L_96ee
        add     edi, 0x4
        inc     ecx
        add     edx, 0x8
        cmp     ecx, eax
        jle     L_96c0
L_96d1:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        inc     ecx
        add     edx, 0xa0
        cmp     ecx, ebp
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
        jle     L_96ba
        jmp     L_9730
L_96ee:
        push    0x0
        call    FUN_00707e70
        fcomp qword ptr [DAT_007f2130]
        fnstsw  ax
        test    ah, 0x40
        jz      L_971a
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [eax + 0x2ec], 0x1
        add     eax, 0x1d4
        pop     ebx
        add     esp, 0xc
        ret
L_971a:
        mov     ecx, dword ptr [esp + 0x10]
        call    FUN_005b9510
        push    0x0
        call    FUN_00707e70
        fstp qword ptr [DAT_007f2130]
L_9730:
        push    0x0
        call    FUN_00707e70
        mov     eax, dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x194]
        mov     edi, eax
L_9743:
        lea     eax, [edi + 0x1d4]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }


}
