/*
 * FUN_005c4850 (768 B) — __stdcall RET 0xC, 3 stack params + ECX this.
 * Heavy FPU math (vector ops, atan2, dot products).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041c830(void *a, void *b, void *c);
extern void __stdcall FUN_005c4b50(void *a, void *b);
extern void __stdcall FUN_005eaec0(void *a);

__declspec(naked) void __stdcall FUN_005c4850(void *a, void *b, void *c)
{
    

extern int DAT_007b220c;
extern int DAT_007878d8;
extern int DAT_0076ed00;
extern int DAT_007878dc;
extern int DAT_0076c5b0;
extern int DAT_0076d598;
extern int DAT_0076d064;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        cmp     byte ptr [ebp + 0x10], 0x1
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     esi, ecx
        jnz     L_490f
        mov     eax, dword ptr [edi + 0x17c]
        mov     ecx, dword ptr [eax + 0xd8]
        mov     ebx, dword ptr [ebp + 0x8]
        add     ecx, 0x80
        push    ecx
        push    ebx
        lea     ecx, [ebp + -0x10]
        call    FUN_0041c830
        fld     dword ptr [ebp + -0x8]
        fmul    dword ptr [ebp + -0x8]
        fld     dword ptr [ebp + -0x10]
        fmul    dword ptr [ebp + -0x10]
        faddp   st(1), st
        fstp    dword ptr [ebp + 0x10]
        fld     dword ptr [ebp + -0xc]
        fmul    dword ptr [ebp + -0xc]
        fadd    dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0xc], eax
        fld     dword ptr [ebp + 0xc]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_48d1
        mov     dword ptr [ebp + 0x10], 0x0
        jmp     L_49b0
L_48d1:
        mov     edx, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0x10], edx
        mov     eax, dword ptr [ebp + 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0x8], eax
        fld     dword ptr [ebp + 0x8]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4904
        mov     dword ptr [ebp + 0x10], 0x0
        jmp     L_49b0
L_4904:
        fld     dword ptr [ebp + -0x10]
        fld     dword ptr [ebp + -0x8]
        jmp     L_49ab
L_490f:
        mov     eax, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [eax + 0xd8]
        mov     ebx, dword ptr [ebp + 0x8]
        add     ecx, 0x80
        push    ecx
        push    ebx
        lea     ecx, [ebp + -0x10]
        call    FUN_0041c830
        fld     dword ptr [ebp + -0x8]
        fmul    dword ptr [ebp + -0x8]
        fld     dword ptr [ebp + -0x10]
        fmul    dword ptr [ebp + -0x10]
        faddp   st(1), st
        fstp    dword ptr [ebp + 0x10]
        fld     dword ptr [ebp + -0xc]
        fmul    dword ptr [ebp + -0xc]
        fadd    dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0xc], eax
        fld     dword ptr [ebp + 0xc]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4975
        mov     dword ptr [ebp + 0x10], 0x0
        jmp     L_49b0
L_4975:
        mov     edx, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0x10], edx
        mov     eax, dword ptr [ebp + 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0x8], eax
        fld     dword ptr [ebp + 0x8]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_49a5
        mov     dword ptr [ebp + 0x10], 0x0
        jmp     L_49b0
L_49a5:
        fld     dword ptr [ebp + -0x10]
        fld     dword ptr [ebp + -0x8]
L_49ab:
        fpatan
        fstp    dword ptr [ebp + 0x10]
L_49b0:
        push    edi
        mov     ecx, esi
        call    FUN_005c4b50
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0x78]
        lea     esi, [edi + 0x78]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        test    eax, eax
        jz      L_49ea
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        fld dword ptr [DAT_007878d8]
        fsub dword ptr [DAT_0076ed00]
        fcomp   dword ptr [eax + 0x63c]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4a00
L_49ea:
        fld     dword ptr [ebp + 0x10]
        fabs
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4b2e
L_4a00:
        fld     dword ptr [ebp + 0x10]
        fabs
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4a50
        fld     dword ptr [edi + 0x198]
        fabs
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4a50
        fld     dword ptr [edi + 0x198]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4b47
        fmul dword ptr [DAT_0076d598]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4a50:
        mov     ecx, edi
        call    FUN_005eaec0
        push    eax
        push    ebx
        lea     ecx, [ebp + -0x10]
        call    FUN_0041c830
        fld     dword ptr [ebp + -0x8]
        fmul    dword ptr [ebp + -0x8]
        fld     dword ptr [ebp + -0x10]
        fmul    dword ptr [ebp + -0x10]
        faddp   st(1), st
        fstp    dword ptr [ebp + 0x10]
        fld     dword ptr [ebp + -0xc]
        fmul    dword ptr [ebp + -0xc]
        fadd    dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0xc]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + -0x4], eax
        fld     dword ptr [ebp + -0x4]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4aa7
        fld dword ptr [DAT_0076c5b0]
        jmp     L_4ade
L_4aa7:
        mov     eax, dword ptr [ebp + 0x10]
        mov     dword ptr [ebp + 0x10], eax
        mov     eax, dword ptr [ebp + 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp + 0xc], eax
        fld     dword ptr [ebp + 0xc]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4ad6
        fld dword ptr [DAT_0076c5b0]
        jmp     L_4ade
L_4ad6:
        fld     dword ptr [ebp + -0x10]
        fld     dword ptr [ebp + -0x8]
        fpatan
L_4ade:
        fld     st(0)
        fabs
        fmul    dword ptr [ebp + 0x8]
        fst     dword ptr [ebp + 0x10]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_4afe
        mov     dword ptr [ebp + 0x10], 0x0
        jmp     L_4b15
L_4afe:
        fld     dword ptr [ebp + 0x10]
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_4b15
        mov     dword ptr [ebp + 0x10], 0x3f800000
L_4b15:
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [ebp + 0x10]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_4b41
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4b2e:
        fld     dword ptr [ebp + 0x10]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [ebp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_4b47
L_4b41:
        fmul dword ptr [DAT_0076d598]
L_4b47:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }


}
