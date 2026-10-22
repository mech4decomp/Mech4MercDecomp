/*
 * func_005c6100 - FUN_005c6100
 * __fastcall. Computes a squared distance; if below a threshold returns
 * a scaled value, else returns a random-based value.
 */
__declspec(naked) void func_005c6100()
{
    

extern void __cdecl FUN_10041fd76(void);
extern void __cdecl FUN_10041fd67(void);
extern int DAT_0078790c;
extern void __cdecl FUN_005dbda7(void);
extern void __cdecl FUN_00637a84(void);
extern void __cdecl FUN_0063795d(void);
extern void __cdecl FUN_1005c5ffb(void);
extern int DAT_0077a1a0;
extern void __cdecl FUN_1005c5fe4(void);
__asm {
sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x1c8]
        mov     ecx, edi
        call FUN_10041fd76
        test    eax, eax
        jz      L61ac
        mov     ecx, edi
        call FUN_10041fd67
        mov     eax, [eax + 0xd8]
        mov     ecx, [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, [eax + 0xac]
        add     eax, 0x80
        mov     eax, [esi + 0x170]
        mov     eax, [eax + 0xd8]
        fsubr   dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     [esp + 0x1c], ecx
        mov     ecx, [eax + 0x1c]
        mov     [esp + 0x20], edx
        mov     edx, [eax + 0x2c]
        mov     [esp + 0x10], ecx
        fld     dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0x1c]
        mov     [esp + 0x14], edx
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
        fld dword ptr [DAT_0078790c]
        fmul dword ptr [DAT_0078790c]
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x41
        fstp    st(0)
        jnz     L61ac
        mov     ecx, esi
        jmp     L61da
    L61ac:
        mov     ecx, esi
        call FUN_005dbda7
        mov     [esp + 8], eax
        fild    dword ptr [esp + 8]
        push    0x52
        fstp    dword ptr [esp + 0xc]
        call FUN_00637a84
        mov     ecx, eax
        call FUN_0063795d
        fcomp   dword ptr [esp + 8]
        mov     ecx, esi
        fnstsw  ax
        test    ah, 0x41
        jnz     L61f1
    L61da:
        call FUN_1005c5ffb
        fmul    dword ptr [esi + 0x520]
        pop     edi
        pop     esi
        fmul dword ptr [DAT_0077a1a0]
        add     esp, 0x1c
        ret
    L61f1:
        call FUN_1005c5fe4
        pop     edi
        pop     esi
        add     esp, 0x1c
        ret
    }


}
