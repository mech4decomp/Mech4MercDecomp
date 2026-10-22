/*
 * FUN_005c2310 (440 B) — __fastcall (ECX = this). Heavy FPU math routine:
 * computes vector magnitudes, atan2-style angles, and updates a 3-float
 * vector via three random-number calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(int a);
extern void __cdecl FUN_005c6bd0(void);
extern float __cdecl FUN_005c7ed0(void);
extern void __cdecl FUN_0041c830(void *a, void *b);
extern float __cdecl FUN_00415020(void);
extern void __cdecl FUN_005c4c20(void *a);
extern void __cdecl FUN_005c5110(void *a, int b);
extern void __cdecl FUN_005c3b70(void *a, int b, int c, int d, void *e, int f, int g, int h);
extern void __cdecl FUN_006f49a0(void);
extern int DAT_007f2460;
extern float DAT_0076c5b0;   /* 0x0076C5B0 — comparison constant */
extern float DAT_007b220c;   /* 0x007B220C — epsilon constant */
extern float DAT_007878dc;   /* 0x007878DC — comparison constant */
extern float DAT_0076d064;   /* 0x0076D064 — constant */
extern float DAT_0076e1ec;   /* 0x0076E1EC — constant */

__declspec(naked) void func_005c2310(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x4c
        mov     eax, dword ptr [DAT_007f2460]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        fld     dword ptr [esi + 0x3d8]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_233e
        mov     ecx, esi
        call    FUN_005c6bd0
    l_233e:
        mov     ecx, dword ptr [esi + 0x588]
        mov     eax, dword ptr [esi + 0x590]
        mov     edx, dword ptr [esi + 0x58c]
        push    ebx
        push    edi
        lea     edi, [esi + 0x4fc]
        mov     dword ptr [edi], ecx
        mov     ecx, dword ptr [esi + 0x170]
        mov     dword ptr [edi + 0x8], eax
        lea     eax, [ebp - 0x4c]
        mov     dword ptr [edi + 0x4], edx
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0xf0]
        mov     ecx, esi
        call    FUN_005c7ed0
        fstp    dword ptr [ebp - 0x4]
        lea     ecx, [ebp - 0x4c]
        push    ecx
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
        faddp   st(1), st(0)
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
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      l_2432
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebp - 0x10], edx
        mov     eax, dword ptr [ebp - 0x10]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_2408
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [DAT_007878dc]
        fnstsw  ax
        test    ah, 0x1
        jz      l_241c
        jmp     l_2432
    l_2408:
        fld     dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x14]
        fpatan
        fabs
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_2420
    l_241c:
        xor     bl, bl
        jmp     l_2483
    l_2420:
        fld     dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x8]
        fpatan
        fcomp   dword ptr [ebp - 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      l_241c
    l_2432:
        fild    dword ptr [esi + 0x594]
        mov     bl, 0x1
        fstp    dword ptr [ebp - 0x4]
        call    FUN_00415020
        fadd    st(0), st(0)
        fsub    dword ptr [DAT_0076d064]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [edi]
        fstp    dword ptr [edi]
        call    FUN_00415020
        fadd    st(0), st(0)
        fsub    dword ptr [DAT_0076d064]
        fmul    dword ptr [ebp - 0x4]
        fmul    dword ptr [DAT_0076e1ec]
        fadd    dword ptr [edi + 0x4]
        fstp    dword ptr [edi + 0x4]
        call    FUN_00415020
        fadd    st(0), st(0)
        fsub    dword ptr [DAT_0076d064]
        fmul    dword ptr [ebp - 0x4]
        fadd    dword ptr [edi + 0x8]
        fstp    dword ptr [edi + 0x8]
    l_2483:
        push    edi
        mov     ecx, esi
        call    FUN_005c4c20
        push    0x1
        push    edi
        mov     ecx, esi
        call    FUN_005c5110
        pop     edi
        cmp     bl, 0x1
        pop     ebx
        jnz     l_24be
        push    0x1
        push    0x0
        push    0x0
        lea     eax, [ebp - 0x4c]
        push    eax
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [ebp - 0x10]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [ebp - 0x10], 0x787b70
        call    FUN_005c3b70
    l_24be:
        call    FUN_006f49a0
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
