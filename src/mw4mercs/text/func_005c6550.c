/*
 * func_005c6550 - FUN_005c6550
 * __thiscall. Bounds-checks a point against constants, computes a
 * squared distance, and conditionally dispatches through vtables.
 */
__declspec(naked) void func_005c6550()
{
    

extern int DAT_007f2460;
extern void __cdecl FUN_006f494b(void);
extern int DAT_007f2104;
extern void __cdecl FUN_10041521d(void);
extern void __cdecl FUN_006f4984(void);
extern int DAT_0080da60;
extern int DAT_0080da58;
extern int DAT_0080da5c;
extern int DAT_0080da54;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004f83e4(void);
extern int DAT_0076c5b0;
extern void __cdecl FUN_006f486d(void);
extern void __cdecl FUN_006f4861(void);
__asm {
        mov eax, dword ptr [DAT_007f2460]
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call FUN_006f494b
        mov eax, dword ptr [DAT_007f2104]
        mov     ecx, [esi + 4]
        push    eax
        call FUN_10041521d
        cmp     al, 1
        jnz     L657d
        call FUN_006f4984
        pop     edi
        mov     al, 1
        pop     esi
        ret     0xc
    L657d:
        mov     edi, [esp + 0xc]
        fld     dword ptr [edi]
        fcomp dword ptr [DAT_0080da60]
        fnstsw  ax
        test    ah, 0x41
        jnz     L6694
        fld     dword ptr [edi]
        fcomp dword ptr [DAT_0080da58]
        fnstsw  ax
        test    ah, 0x1
        jz      L6694
        fld     dword ptr [edi + 8]
        fcomp dword ptr [DAT_0080da5c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L6694
        fld     dword ptr [edi + 8]
        fcomp dword ptr [DAT_0080da54]
        fnstsw  ax
        test    ah, 0x1
        jz      L6694
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, [ecx]
        mov edx, dword ptr [DAT_007dab40]
        mov     cl, byte ptr [esp + 0x10]
        xor     eax, edx
        test    cl, cl
        jnz     L65fe
        mov     ecx, [eax + 0x20]
        push    edi
        xor     ecx, 0x85739531
        call FUN_1004f83e4
        test    eax, eax
        jnz     L6694
    L65fe:
        fld     dword ptr [esi + 0x3e8]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L6656
        fld     dword ptr [edi]
        fsub    dword ptr [esi + 0x3dc]
        fld     dword ptr [edi + 4]
        fsub    dword ptr [esi + 0x3e0]
        fld     dword ptr [edi + 8]
        fsub    dword ptr [esi + 0x3e4]
        fld     dword ptr [esi + 0x3e8]
        fld     st(3)
        fmul    st, st(4)
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(1)
        fmul    st, st(2)
        fcompp
        fstp    st(0)
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jnz     L6694
    L6656:
        mov     edx, [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x170]
        test    al, al
        jz      L6694
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        jnz     L6688
        mov     ecx, [esi + 0x5f4]
        test    ecx, 0xfffffffc
        jz      L6688
        and     ecx, 0xfffffffc
        mov     eax, [ecx]
        push    edi
        call    dword ptr [eax + 8]
        test    al, al
        jz      L6694
    L6688:
        call FUN_006f486d
        pop     edi
        mov     al, 1
        pop     esi
        ret     0xc
    L6694:
        call FUN_006f4861
        pop     edi
        xor     al, al
        pop     esi
        ret     0xc
    }


}
