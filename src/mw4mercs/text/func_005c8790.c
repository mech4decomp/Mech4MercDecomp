/*
 * FUN_005c8790 (874 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Aiming/angle computation. Reads a vtable method at this->[0x170]->[0xf0],
 * computes squared distances, applies angle gating (fpatan), and returns
 * 0/1/2 depending on which of two "fire mode" branches is active.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005c7ed0(void);
extern void __stdcall FUN_0041c830(void *a, void *b);
extern void __stdcall FUN_00637b40(int a);
extern void __stdcall FUN_00637a20(void);
extern void __stdcall FUN_005dbe50(void);
extern void __stdcall FUN_00707e70(int a);
extern void __stdcall FUN_005c8b00(void *a, int b);

__declspec(naked) void __stdcall FUN_005c8790(void *param)
{
    

extern int DAT_007b220c;
extern int DAT_007878dc;
extern int DAT_0076d5ec;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x7c
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [ecx]
        push    edi
        lea     edx, [ebp - 0x4c]
        push    edx
        call    dword ptr [eax + 0xf0]
        mov     ecx, esi
        call    FUN_005c7ed0
        fstp    dword ptr [ebp - 0x4]
        lea     eax, [ebp - 0x4c]
        push    eax
        lea     edi, [esi + 0x4fc]
        push    edi
        lea     ecx, [ebp - 0x1c]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x4]
        fabs
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ebp - 0xc]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_89af
        mov     ecx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x10], ecx
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_8850
        fld     dword ptr [ebp - 0x4]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_89af
        jmp     L_887a
    L_8850:
        fld     dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x14]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_887a
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x8]
        fpatan
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_89af
    L_887a:
        push    0x4a
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fstp    dword ptr [ebp - 0x8]
        push    0x4b
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        fstp    dword ptr [ebp - 0xc]
        mov     ecx, esi
        call    FUN_005dbe50
        mov     dword ptr [ebp - 0x10], eax
        fild    dword ptr [ebp - 0x10]
        fmul dword ptr [DAT_0076d5ec]
        fld     dword ptr [ebp - 0xc]
        fsub    dword ptr [ebp - 0x8]
        fmulp st(1), st(0)
        fadd    dword ptr [ebp - 0x8]
        fst     dword ptr [ebp - 0x4]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_88d5
        mov     dword ptr [ebp - 0x4], 0x0
    L_88d5:
        mov     eax, dword ptr [esi + 0x5b8]
        test    eax, eax
        jnz     L_89ec
        cmp     byte ptr [esi + 0x546], 0x1
        jnz     L_89af
        fld     dword ptr [ebp - 0x4]
        push    0x0
        fadd    dword ptr [esi + 0x5c0]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_00707e70
        fcomp   dword ptr [ebp - 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_89af
        mov     ecx, esi
        call    FUN_005c7ed0
        fstp    dword ptr [ebp - 0x4]
        push    0x1
        lea     edx, [ebp - 0x7c]
        push    edx
        mov     ecx, esi
        call    FUN_005c8b00
        push    eax
        push    edi
        lea     ecx, [ebp - 0x1c]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x4]
        fabs
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0xc], eax
        fld     dword ptr [ebp - 0xc]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_89df
        mov     eax, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_89b9
        fld     dword ptr [ebp - 0x4]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_89df
    L_89af:
        pop     edi
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_89b9:
        fld     dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x14]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_89af
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x8]
        fpatan
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_89af
    L_89df:
        pop     edi
        mov     eax, 0x1
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_89ec:
        cmp     eax, 0x1
        jnz     L_89af
        cmp     byte ptr [esi + 0x547], 0x1
        jnz     L_89af
        fld     dword ptr [ebp - 0x4]
        push    0x0
        fadd    dword ptr [esi + 0x5c0]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_00707e70
        fcomp   dword ptr [ebp - 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_89af
        mov     ecx, esi
        call    FUN_005c7ed0
        fstp    dword ptr [ebp - 0x4]
        push    0x2
        lea     ecx, [ebp - 0x7c]
        push    ecx
        mov     ecx, esi
        call    FUN_005c8b00
        push    eax
        push    edi
        lea     ecx, [ebp - 0x1c]
        call    FUN_0041c830
        fld     dword ptr [ebp - 0x4]
        fabs
        fstp    dword ptr [ebp - 0x4]
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fadd    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0xc], eax
        fld     dword ptr [ebp - 0xc]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_8aed
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x10], edx
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_8abf
        fld     dword ptr [ebp - 0x4]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_8aed
        pop     edi
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    L_8abf:
        fld     dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x14]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_89af
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x8]
        fpatan
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_89af
    L_8aed:
        pop     edi
        mov     eax, 0x2
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }


}
