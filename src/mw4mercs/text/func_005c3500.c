/*
 * FUN_005c3500 (427 B) — __stdcall RET 0xC, 3 stack params + ECX this.
 * Heavy FPU math (vector ops).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00415020(void);
extern void __stdcall FUN_005fbb00(void *a);
extern void __stdcall FUN_00419480(void *a);

__declspec(naked) void __stdcall FUN_005c3500(void *a, void *b, void *c)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_0076d064;
extern int DAT_0077deac;
extern int DAT_0076d070;
extern int DAT_007b220c;
extern int DAT_0076e1e8;
__asm {
sub     esp, 0x24
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x34]
        mov     esi, dword ptr [edi + 0x124]
        test    esi, esi
        jnz     L_3550
        mov     esi, dword ptr [edi + 0x128]
        test    esi, esi
        jnz     L_3550
        call    FUN_00415020
        
        fadd dword ptr [DAT_0076d064]
        lea     eax, [esp + 0x20]
        push    eax
        
        fmul dword ptr [DAT_0077deac]
        mov     ecx, edi
        fstp    dword ptr [esp + 0x38]
        call    FUN_005fbb00
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [esp + 0x8], ecx
        mov     dword ptr [esp + 0xc], edx
        jmp     L_3589
L_3550:
        call    FUN_00415020
        
        fmul dword ptr [DAT_0076d070]
        add     esi, 0x50
        push    esi
        
        fadd dword ptr [DAT_0076d064]
        lea     ecx, [esp + 0x24]
        fmul    dword ptr [esi + 0x3c]
        fstp    dword ptr [esp + 0x38]
        call    FUN_00419480
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x8], ecx
        mov     dword ptr [esp + 0xc], edx
L_3589:
        fld     dword ptr [esp + 0x8]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [esp + 0x38]
        fsub    dword ptr [eax]
        pop     edi
        fld     dword ptr [esp + 0x8]
        pop     esi
        fsub    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x8]
        fsub    dword ptr [eax + 0x8]
        fstp    dword ptr [esp + 0x14]
        fld     st(0)
        fld     dword ptr [esp + 0x14]
        fld     st(3)
        fmul    st, st(4)
        fstp    dword ptr [esp + 0x30]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fadd    dword ptr [esp + 0x30]
        fabs
        fstp    st(2)
        fstp    st(0)
        
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_35fe
        mov     eax, dword ptr [esp + 0x28]
        fstp    st(0)
        mov     ecx, dword ptr [esp + 0x4]
        fstp    st(0)
        
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00   /* fld dword ptr [esp] - MSVC6 drops zero disp, emits D9 04 24 */
        mov     edx, dword ptr [esp + 0x8]
        fstp    dword ptr [eax]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        add     esp, 0x24
        ret     0xc
L_35fe:
        fld     st(0)
        fmulp   st(1), st
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st
        fadd    dword ptr [esp + 0x30]
        fsqrt
        
        fdivr dword ptr [DAT_0076d064]
        fld     st(0)
        fmul    st, st(2)
        fstp    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x14]
        fstp    st(1)
        fld     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x14]
        call    FUN_00415020
        
        fcomp dword ptr [DAT_0076d070]
        
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00   /* fld dword ptr [esp] - MSVC6 drops zero disp, emits D9 04 24 */
        fnstsw  ax
        test    ah, 0x1
        jz      L_3662
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x8]
        fadd    dword ptr [esp + 0xc]
        jmp     L_3672
L_3662:
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x8]
        fsub    dword ptr [esp + 0xc]
L_3672:
        fstp    dword ptr [esp + 0x20]
        call    FUN_00415020
        
        fsub dword ptr [DAT_0076d070]
        mov     eax, dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x20]
        
        fmul dword ptr [DAT_0076e1e8]
        mov     dword ptr [eax + 0x8], ecx
        fmulp   st(1), st
        fadd    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x18]
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x4]
        add     esp, 0x24
        ret     0xc
    }


}
