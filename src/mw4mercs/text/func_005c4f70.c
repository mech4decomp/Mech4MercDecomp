/*
 * func_005c4f70 - FUN_005c4f70
 * __fastcall. Complex predicate with float magnitude checks and
 * multiple early-return paths.
 */
__declspec(naked) char func_005c4f70()
{
    

extern int DAT_0076c5b0;
extern int DAT_007f2104;
extern void __cdecl FUN_1004151b1(void);
extern int DAT_007f25c0;
extern void __cdecl FUN_100415199(void);
extern int DAT_007b220c;
extern void __cdecl FUN_10041c469(void);
extern int DAT_0076d070;
extern void __cdecl FUN_1004150e5(void);
extern void __cdecl FUN_1004150cf(void);
__asm {
sub     esp, 0xc
        push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x2f2], 0x1
        push    edi
        jnz     L5100
        mov     al, [esi + 0x2f9]
        test    al, al
        jnz     L5100
        mov     eax, [esi]
        call    dword ptr [eax + 0x1d4]
        test    al, al
        jz      L5100
        mov     al, [esi + 0x51c]
        test    al, al
        jnz     L4fe5
        fld     dword ptr [esi + 0x590]
        fld     dword ptr [esi + 0x58c]
        fld     dword ptr [esi + 0x588]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fcomp dword ptr [DAT_0076c5b0]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x40
        fstp    st(0)
        jnz     L5100
    L4fe5:
        mov eax, dword ptr [DAT_007f2104]
        mov     edi, [esi + 0x170]
        mov     ecx, [edi + 4]
        push    eax
        call FUN_1004151b1
        cmp     al, 1
        jnz     L5003
        pop     edi
        pop     esi
        add     esp, 0xc
        ret
    L5003:
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, [edi + 4]
        push    eax
        call FUN_100415199
        test    al, al
        jz      L5100
        test    edi, edi
        jz      L5100
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esp + 0xc]
        push    edx
        lea     eax, [esi + 0x4f0]
        push    eax
        mov     dword ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x1c], 0x0
        call FUN_10041c469
        add     esp, 0xc
        test    al, al
        jz      L5100
        fld     dword ptr [esi + 0x3d8]
        fcomp dword ptr [DAT_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jnz     L5100
        cmp     byte ptr [esi + 0x51c], 0x1
        jz      L50b1
        fld     dword ptr [esi + 0x590]
        fld     dword ptr [esi + 0x58c]
        fld     dword ptr [esi + 0x588]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fcomp dword ptr [DAT_0076c5b0]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x40
        fstp    st(0)
        jnz     L5100
    L50b1:
        mov eax, dword ptr [DAT_007f25c0]
        mov     esi, [esi + 0x170]
        mov     ecx, [esi + 4]
        push    eax
        call FUN_1004150e5
        test    al, al
        jz      L50f8
        test    esi, esi
        jz      L50f8
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, [esi + 4]
        push    eax
        call FUN_1004150cf
        neg     al
        sbb     eax, eax
        and     eax, esi
        fld     dword ptr [eax + 0x444]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L5100
    L50f8:
        pop     edi
        mov     al, 1
        pop     esi
        add     esp, 0xc
        ret
    L5100:
        pop     edi
        xor     al, al
        pop     esi
        add     esp, 0xc
        ret
    }


}
