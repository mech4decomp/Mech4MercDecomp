/*
 * FUN_005C77D0 (1402 B) — __thiscall (ECX=this), RET 8 (two float params).
 *
 * Complex visibility/aiming check. Computes distances and angles against
 * thresholds, dispatches on this+0x5B8 mode, and appends a candidate to
 * the array at this+0x5E8..0x5F0. Returns a boolean.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__fastcall FUN_005fbb00(void *this, void *arg);
extern void __fastcall FUN_0040c5d0(void *this, void *arg);
extern float __fastcall FUN_005c0c50(void);
extern void __fastcall FUN_0040ca10(void *this, void *a, void *b);
extern char __stdcall FUN_00415230(void *this, int arg);
extern float __fastcall FUN_0040cb00(void *this);
extern void __fastcall FUN_0041c830(void *this, void *a, void *b);
extern void *__fastcall FUN_005c8b00(void *this, int a, void *b);
extern void *__fastcall FUN_005c9370(void *this, void *arg);
extern void __fastcall FUN_00684530(void *this, void *a, void *b, void *c);
extern void __fastcall FUN_006847e0(void *this);
extern void *__fastcall FUN_00684840(void *this, int a, void *b);
extern double __stdcall FUN_00707e70(int param);
extern void __fastcall FUN_005c76d0(void *this);
extern void __fastcall FUN_005cb7e0(void *this, void *a, void *b, void *c);

__declspec(naked) unsigned char __fastcall FUN_005c77d0(void)
{
    

extern int DAT_007f20ec;
extern int DAT_007b220c;
extern int DAT_007878dc;
extern int DAT_0076c5b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x128
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        push    edi
        lea     eax, [ebp - 0x54]
        mov     esi, ecx
        push    eax
        mov     ecx, ebx
        call    FUN_005fbb00
        push    eax
        lea     ecx, [ebp - 0x28]
        call    FUN_0040c5d0
        mov     al, byte ptr [esi + 0x6A1]
        test    al, al
        mov     dword ptr [ebp + 8], 0x447A0000
        jnz     L780E
        call    FUN_005c0c50
        fstp    dword ptr [ebp + 8]
    L780E:
        cmp     byte ptr [esi + 0x30A], 1
        jnz     L7875
        lea     ecx, [ebp - 0x54]
        push    ecx
        mov     ecx, dword ptr [esi + 0x170]
        call    FUN_005fbb00
        push    eax
        lea     edx, [ebp - 0x28]
        push    edx
        lea     ecx, [ebp - 0xC]
        call    FUN_0040ca10
        fld     dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [ebp - 4]
        faddp   st(1), st
        fld     dword ptr [ebp - 0xC]
        fmul    dword ptr [ebp - 0xC]
        faddp   st(1), st
        fstp    dword ptr [ebp + 0xC]
        mov     eax, dword ptr [ebp + 0xC]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x14], eax
        fld     dword ptr [ebp - 0x14]
        fcomp   dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 1
        jnz     L7BF1
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7875:
        mov     edi, dword ptr [esi + 0x170]
        mov     eax, dword ptr [edi]
        lea     ecx, [ebp - 0x84]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0xF0]
        mov eax, dword ptr [DAT_007f20ec]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     L791C
        mov     edi, dword ptr [edi + 0xD8]
        fld     dword ptr [edi + 0x8C]
        mov     edx, dword ptr [edi + 0x9C]
        fld     dword ptr [ebp - 0x28]
        mov     eax, dword ptr [edi + 0xAC]
        fsub    st, st(1)
        add     edi, 0x80
        mov     dword ptr [ebp - 0x50], edx
        mov     dword ptr [ebp - 0x4C], eax
        fstp    dword ptr [ebp - 0xC]
        lea     ecx, [ebp - 0xC]
        fstp    st(0)
        fld     dword ptr [ebp - 0x24]
        fsub    dword ptr [ebp - 0x50]
        fstp    dword ptr [ebp - 8]
        fld     dword ptr [ebp - 0x20]
        fsub    dword ptr [ebp - 0x4C]
        fstp    dword ptr [ebp - 4]
        call    FUN_0040cb00
        fstp    dword ptr [ebp + 0xC]
        mov     eax, dword ptr [ebp + 0xC]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x14], eax
        fld     dword ptr [ebp - 0x14]
        fcomp   dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 1
        jz      L7911
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7911:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L791C:
        lea     ecx, [ebp - 0x84]
        push    ecx
        lea     edx, [ebp - 0x28]
        push    edx
        lea     ecx, [ebp - 0xC]
        call    FUN_0041c830
        fld     dword ptr [ebp + 0xC]
        fabs
        fst     dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [ebp - 4]
        fld     dword ptr [ebp - 0xC]
        fmul    dword ptr [ebp - 0xC]
        faddp   st(1), st
        fstp    dword ptr [ebp - 0x1C]
        fld     dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [ebp - 0x1C]
        fstp    dword ptr [ebp - 0x2C]
        mov     eax, dword ptr [ebp - 0x2C]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jz      L7BBB
        mov     eax, dword ptr [ebp - 0x1C]
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x1C], eax
        fld     dword ptr [ebp - 0x1C]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L79B9
        fld     dword ptr [ebp - 0x18]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 1
        jnz     L7BBB
        jmp     L79E3
    L79B9:
        fld     dword ptr [ebp - 0xC]
        fld     dword ptr [ebp - 4]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x18]
        fnstsw  ax
        test    ah, 0x41
        jz      L79E3
        fld     dword ptr [ebp - 8]
        fld     dword ptr [ebp - 0x1C]
        fpatan
        fcomp   dword ptr [ebp - 0x18]
        fnstsw  ax
        test    ah, 1
        jnz     L7BBB
    L79E3:
        mov     eax, dword ptr [esi + 0x5B8]
        sub     eax, 0
        jz      L7AE7
        dec     eax
        jz      L7A07
        dec     eax
        jnz     L7BBB
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7A07:
        push    2
        lea     ecx, [ebp - 0x128]
        push    ecx
        mov     ecx, esi
        call    FUN_005c8b00
        push    eax
        lea     edx, [ebp - 0x28]
        push    edx
        lea     ecx, [ebp - 0xC]
        call    FUN_0041c830
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0xC]
        mov     dword ptr [ebp - 0x18], eax
        fmul    dword ptr [ebp - 0xC]
        faddp   st(1), st
        fstp    dword ptr [ebp - 0x1C]
        fld     dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [ebp - 0x1C]
        fstp    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x2C], eax
        fld     dword ptr [ebp - 0x2C]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jz      L7BBB
        mov     ecx, dword ptr [ebp - 0x1C]
        mov     dword ptr [ebp - 0x10], ecx
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x1C], eax
        fld     dword ptr [ebp - 0x1C]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L7AB2
        fld     dword ptr [ebp - 0x18]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 1
        jnz     L7BBB
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7AB2:
        fld     dword ptr [ebp - 0xC]
        fld     dword ptr [ebp - 4]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x18]
        fnstsw  ax
        test    ah, 0x41
        jz      L7ADC
        fld     dword ptr [ebp - 8]
        fld     dword ptr [ebp - 0x1C]
        fpatan
        fcomp   dword ptr [ebp - 0x18]
        fnstsw  ax
        test    ah, 1
        jnz     L7BBB
    L7ADC:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7AE7:
        push    1
        lea     edx, [ebp - 0xF8]
        push    edx
        mov     ecx, esi
        call    FUN_005c8b00
        push    eax
        lea     eax, [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0xC]
        call    FUN_0041c830
        fld     dword ptr [ebp - 4]
        fmul    dword ptr [ebp - 4]
        mov     ecx, dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0xC]
        mov     dword ptr [ebp - 0x18], ecx
        fmul    dword ptr [ebp - 0xC]
        faddp   st(1), st
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 8]
        fmul    dword ptr [ebp - 8]
        fadd    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x2C], eax
        fld     dword ptr [ebp - 0x2C]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jz      L7BBB
        mov     edx, dword ptr [ebp - 0x14]
        mov     dword ptr [ebp - 0x10], edx
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x14], eax
        fld     dword ptr [ebp - 0x14]
        fabs
        fld dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L7B8A
        fld     dword ptr [ebp - 0x18]
        fcomp dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 1
        jnz     L7BBB
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7B8A:
        fld     dword ptr [ebp - 0xC]
        fld     dword ptr [ebp - 4]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x18]
        fnstsw  ax
        test    ah, 0x41
        jz      L7BB0
        fld     dword ptr [ebp - 8]
        fld     dword ptr [ebp - 0x14]
        fpatan
        fcomp   dword ptr [ebp - 0x18]
        fnstsw  ax
        test    ah, 1
        jnz     L7BBB
    L7BB0:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7BBB:
        lea     eax, [ebp - 0x54]
        push    eax
        mov     ecx, esi
        call    FUN_005c9370
        fld     dword ptr [eax + 8]
        fld     dword ptr [eax + 4]
        fld     dword ptr [eax]
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
        test    ah, 0x41
        fstp    st(0)
        jnz     L7BFC
    L7BF1:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7BFC:
        lea     ecx, [ebp - 0x54]
        push    ecx
        mov     ecx, dword ptr [esi + 0x170]
        call    FUN_005fbb00
        push    eax
        lea     ecx, [ebp - 0x38]
        call    FUN_0040c5d0
        lea     edx, [ebp - 0x38]
        push    edx
        lea     eax, [ebp - 0x28]
        push    eax
        lea     ecx, [ebp - 0x54]
        call    FUN_0040ca10
        lea     ecx, [ebp - 0x54]
        call    FUN_0040cb00
        fstp    dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 1
        add     eax, 0x1FC00000
        mov     dword ptr [ebp - 0x2C], eax
        fld     dword ptr [ebp - 0x2C]
        fcomp   dword ptr [ebp + 8]
        fnstsw  ax
        test    ah, 1
        jnz     L7C54
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7C54:
        mov     ecx, esi
        call    FUN_005c76d0
        mov     ecx, dword ptr [esi + 0x5E8]
        mov     edx, dword ptr [esi + 0x5EC]
        cmp     ecx, edx
        lea     edi, [esi + 0x5E8]
        jz      L7C91
    L7C71:
        fld     dword ptr [ecx + 8]
        fcomp   dword ptr [ebp + 0xC]
        fnstsw  ax
        test    ah, 0x40
        jz      L7C8A
        mov     eax, dword ptr [ecx + 4]
        cmp     eax, dword ptr [ebx + 0x30]
        jz      L7D1A
    L7C8A:
        add     ecx, 0x10
        cmp     ecx, edx
        jnz     L7C71
    L7C91:
        mov     eax, dword ptr [esi + 0x170]
        lea     ecx, [ebp - 0x28]
        push    ecx
        lea     edx, [ebp - 0x38]
        push    edx
        push    eax
        lea     ecx, [ebp - 0xC8]
        call    FUN_00684530
        lea     ecx, [ebp - 0xC8]
        call    FUN_006847e0
        push    1
        push    ebx
        lea     ecx, [ebp - 0xC8]
        call    FUN_00684840
        mov     esi, eax
        push    0
        mov     dword ptr [ebp - 0x48], esi
        call    FUN_00707e70
        fstp    dword ptr [ebp - 0x3C]
        mov     ecx, dword ptr [ebx + 0x30]
        mov     eax, dword ptr [edi + 4]
        mov     edx, dword ptr [ebp + 0xC]
        mov     dword ptr [ebp - 0x44], ecx
        cmp     eax, dword ptr [edi + 8]
        mov     dword ptr [ebp - 0x40], edx
        jz      L7D2C
        test    eax, eax
        jz      L7D04
        mov     edx, dword ptr [ebp - 0x48]
        mov     ecx, eax
        mov     dword ptr [ecx], edx
        mov     edx, dword ptr [ebp - 0x44]
        mov     dword ptr [ecx + 4], edx
        mov     edx, dword ptr [ebp - 0x40]
        mov     dword ptr [ecx + 8], edx
        mov     edx, dword ptr [ebp - 0x3C]
        mov     dword ptr [ecx + 0xC], edx
    L7D04:
        add     eax, 0x10
        mov     dword ptr [edi + 4], eax
        xor     eax, eax
        pop     edi
        test    esi, esi
        pop     esi
        setz    al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7D1A:
        mov     edx, dword ptr [ecx]
        pop     edi
        xor     eax, eax
        test    edx, edx
        pop     esi
        setz    al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    L7D2C:
        push    1
        lea     ecx, [ebp - 0x48]
        push    ecx
        push    eax
        mov     ecx, edi
        call    FUN_005cb7e0
        xor     eax, eax
        pop     edi
        test    esi, esi
        pop     esi
        setz    al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }


}
