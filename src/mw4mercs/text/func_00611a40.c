/*
 * FUN_00611A40 (1213 B) — __cdecl, RET 0. Camera/aim smoothing update with
 * heavy FPU math and per-slot loops.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00612000(void);
extern void __cdecl FUN_0061bf80(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0061ae30(void);
extern void __cdecl FUN_0061bfb0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_00610b90(void);
extern void __cdecl FUN_00713d10(void);
extern void __cdecl FUN_0055f020(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_0055f280(void);
extern void __cdecl FUN_00713d70(void);

extern int _DAT_007dab44;    /* 0x007dab44 */
extern int _DAT_007dab40;    /* 0x007dab40 */
extern double _DAT_007f28c8; /* 0x007f28c8 */
extern float _DAT_007f28c4;  /* 0x007f28c4 */
extern float _DAT_007f28b4;  /* 0x007f28b4 */
extern float _DAT_007f28b8;  /* 0x007f28b8 */
extern float _DAT_007f28bc;  /* 0x007f28bc */
extern float _DAT_007f28c0;  /* 0x007f28c0 */
extern float _DAT_0076c5b0;  /* 0x0076c5b0 */
extern float _DAT_0076d064;  /* 0x0076d064 */
extern float _DAT_0076d5ec;  /* 0x0076d5ec */
extern float _DAT_007704c0;  /* 0x007704c0 */
extern float _DAT_0076d070;  /* 0x0076d070 */
extern float _DAT_0076e22c;  /* 0x0076e22c */
extern int _DAT_007f2878;    /* 0x007f2878 */
extern int _DAT_007f2874;    /* 0x007f2874 */
extern float _DAT_007f2898;  /* 0x007f2898 */
extern float _DAT_007f2888;  /* 0x007f2888 */
extern float _DAT_007f289c;  /* 0x007f289c */
extern float _DAT_007f2894;  /* 0x007f2894 */
extern float _DAT_007f2884;  /* 0x007f2884 */
extern float _DAT_007f2880;  /* 0x007f2880 */
extern float _DAT_007f287c;  /* 0x007f287c */
extern float _DAT_007f28a0;  /* 0x007f28a0 */
extern char _DAT_007f2871;   /* 0x007f2871 */
extern char _DAT_007f2870;   /* 0x007f2870 */
extern char _DAT_007f2872;   /* 0x007f2872 */
extern float _DAT_0078c1b0;  /* 0x0078c1b0 */
extern float _DAT_00770168;  /* 0x00770168 */
extern int _DAT_007f28d0;    /* 0x007f28d0 */
extern int _DAT_007f28d4;    /* 0x007f28d4 */

__declspec(naked) void __cdecl FUN_00611a40(void)
{
    __asm {
        sub     esp, 0x60
        mov     eax, dword ptr [_DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [_DAT_007dab40]
        mov     eax, dword ptr [ecx + 0xc]
        xor     eax, 0x85739531
        push    edi
        mov     edi, dword ptr [eax + 0x3080]
        test    edi, edi
        mov     dword ptr [esp + 0x8], edi
        jz      l_611ef8
        call    FUN_00612000
        push    0x7f28c0
        push    0x7f28bc
        push    0x7f28b8
        mov     ecx, edi
        call    FUN_0061bf80
        mov     al, byte ptr [_DAT_007f2872]
        test    al, al
        jnz     l_611aae
        push    0x0
        call    FUN_00707e70
        fsub    qword ptr [_DAT_007f28c8]
        fmul    dword ptr [_DAT_007f28c4]
        fadd    dword ptr [_DAT_007f28b4]
        fstp    dword ptr [_DAT_007f28b4]
l_611aae:
        fld     dword ptr [_DAT_007f28b4]
        fcomp   dword ptr [_DAT_007f28b8]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_611acd
        mov     edx, dword ptr [_DAT_007f28b8]
        mov     dword ptr [_DAT_007f28b4], edx
l_611acd:
        push    esi
        push    0x0
        call    FUN_00707e70
        fstp    qword ptr [_DAT_007f28c8]
        mov     esi, 0x7f28d8
l_611ae0:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        add     esi, 0x4
        cmp     esi, 0x7f2918
        jl      l_611ae0
        fld     dword ptr [_DAT_007f28b8]
        push    ebx
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     l_611d69
        push    ebp
        xor     ebp, ebp
        xor     esi, esi
        mov     dword ptr [esp + 0x10], esi
        mov     ebx, 0x7f28d8
l_611b18:
        lea     ecx, [esp + 0x18]
        call    FUN_0061ae30
        mov     ecx, dword ptr [_DAT_007f28b4]
        push    esi
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        mov     ecx, edi
        call    FUN_0061bfb0
        cmp     dword ptr [esp + 0x18], 0x1
        jnz     l_611d57
        mov     al, byte ptr [esp + 0x6e]
        test    al, al
        jz      l_611d57
        mov     ecx, dword ptr [ebx]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x10]
        fld     dword ptr [_DAT_0076d064]
        fsub    dword ptr [esp + 0x28]
        mov     ecx, dword ptr [ebx]
        fld     dword ptr [_DAT_0076d064]
        lea     esi, [esp + 0x40]
        fsub    dword ptr [esp + 0x20]
        mov     edi, 0xb
        fstp    dword ptr [ecx + 0x54]
        fstp    dword ptr [ecx + 0x58]
        fld     dword ptr [esp + 0x2c]
        fstp    dword ptr [ecx + 0x5c]
        mov     dl, byte ptr [esp + 0x6d]
        mov     byte ptr [ecx + 0x60], dl
        mov     al, byte ptr [esp + 0x6c]
        mov     byte ptr [ecx + 0x61], al
        lea     edx, [ecx + 0x7c]
        mov     dword ptr [edx], 0x0
l_611b90:
        fld     dword ptr [esi]
        fcomp   dword ptr [_DAT_0076d5ec]
        fnstsw  ax
        test    ah, 0x1
        jz      l_611bad
        mov     dword ptr [edx], 0x4
        jmp     l_611bf0
l_611bad:
        fld     dword ptr [esi]
        fcomp   dword ptr [_DAT_007704c0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_611bc4
        mov     dword ptr [edx], 0x3
        jmp     l_611bf0
l_611bc4:
        fld     dword ptr [esi]
        fcomp   dword ptr [_DAT_0076d070]
        fnstsw  ax
        test    ah, 0x1
        jz      l_611bdb
        mov     dword ptr [edx], 0x2
        jmp     l_611bf0
l_611bdb:
        fld     dword ptr [esi]
        fcomp   dword ptr [_DAT_0076e22c]
        fnstsw  ax
        test    ah, 0x1
        jz      l_611bf0
        mov     dword ptr [edx], 0x1
l_611bf0:
        add     esi, 0x4
        add     edx, 0x4
        dec     edi
        __asm _emit 0x75 __asm _emit 0x97 /* __emit: jnz l_611b90 - MSVC6 miscomputes backward rel (off-by-6, call-relocs between branch and target) */
        mov     edx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx + 0xa8]
        push    0x0
        push    0x0
        push    edx
        call    FUN_00560420
        mov     eax, dword ptr [esp + 0x38]
        mov     ecx, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x30]
        push    eax
        push    ecx
        mov     ecx, dword ptr [ebx]
        push    edx
        call    FUN_00610b90
        cmp     ebp, dword ptr [_DAT_007f2878]
        jnz     l_611d4b
        cmp     ebp, dword ptr [_DAT_007f2874]
        jz      l_611c85
        fld     dword ptr [_DAT_0076d064]
        mov     dword ptr [_DAT_007f2874], ebp
        fsub    dword ptr [esp + 0x20]
        fmul    dword ptr [_DAT_007f2898]
        fld     dword ptr [_DAT_007f2888]
        fmul    dword ptr [_DAT_0076d070]
        fsubp   st(1), st(0)
        fstp    dword ptr [_DAT_007f289c]
        fld     dword ptr [_DAT_0076d064]
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [_DAT_007f2894]
        fld     dword ptr [_DAT_007f2884]
        fmul    dword ptr [_DAT_0076d070]
        fsubp   st(1), st(0)
        fstp    dword ptr [_DAT_007f28a0]
l_611c85:
        fld     dword ptr [_DAT_0076d064]
        fsub    dword ptr [esp + 0x20]
        fmul    dword ptr [_DAT_007f2898]
        fld     dword ptr [_DAT_007f2888]
        fmul    dword ptr [_DAT_0076d070]
        fsubp   st(1), st(0)
        fstp    dword ptr [_DAT_007f2880]
        fld     dword ptr [_DAT_0076d064]
        fsub    dword ptr [esp + 0x28]
        fmul    dword ptr [_DAT_007f2894]
        fld     dword ptr [_DAT_007f2884]
        fmul    dword ptr [_DAT_0076d070]
        fsubp   st(1), st(0)
        fst     dword ptr [_DAT_007f287c]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_611ce4
        mov     dword ptr [_DAT_007f287c], 0x0
l_611ce4:
        fld     dword ptr [_DAT_007f2880]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_611d01
        mov     dword ptr [_DAT_007f2880], 0x0
l_611d01:
        fld     dword ptr [_DAT_007f2894]
        fsub    dword ptr [_DAT_007f2884]
        fld     dword ptr [_DAT_007f287c]
        fcomp
        fnstsw  ax
        test    ah, 0x41
        jnz     l_611d24
        fstp    dword ptr [_DAT_007f287c]
        jmp     l_611d26
l_611d24:
        fstp    st(0)
l_611d26:
        fld     dword ptr [_DAT_007f2898]
        fsub    dword ptr [_DAT_007f2888]
        fld     dword ptr [_DAT_007f2880]
        fcomp
        fnstsw  ax
        test    ah, 0x41
        jnz     l_611d49
        fstp    dword ptr [_DAT_007f2880]
        jmp     l_611d4b
l_611d49:
        fstp    st(0)
l_611d4b:
        mov     edi, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + 0x10]
        inc     ebp
        add     ebx, 0x4
l_611d57:
        inc     esi
        cmp     esi, 0xff
        mov     dword ptr [esp + 0x10], esi
        jl      l_611b18
        pop     ebp
l_611d69:
        mov     bl, byte ptr [_DAT_007f2871]
        test    bl, bl
        jnz     l_611d98
        fld     dword ptr [_DAT_007f2880]
        fsub    dword ptr [_DAT_007f289c]
        call    FUN_0075db4a
        cdq
        xor     eax, edx
        sub     eax, edx
        cmp     eax, 0x1c2
        jle     l_611d98
        mov     bl, 0x1
        mov     byte ptr [_DAT_007f2871], bl
l_611d98:
        mov     al, byte ptr [_DAT_007f2870]
        test    al, al
        jnz     l_611dc5
        fld     dword ptr [_DAT_007f287c]
        fsub    dword ptr [_DAT_007f28a0]
        call    FUN_0075db4a
        cdq
        xor     eax, edx
        sub     eax, edx
        cmp     eax, 0x1c2
        jle     l_611dc5
        mov     byte ptr [_DAT_007f2870], 0x1
l_611dc5:
        test    bl, bl
        pop     ebx
        jz      l_611e2e
        fld     dword ptr [_DAT_007f2880]
        fsub    dword ptr [_DAT_007f289c]
        fld     st(0)
        call    FUN_0075db4a
        cdq
        xor     eax, edx
        sub     eax, edx
        cmp     eax, 0x5
        jge     l_611df2
        fstp    st(0)
        mov     byte ptr [_DAT_007f2871], 0x0
        jmp     l_611e2e
l_611df2:
        fcom    dword ptr [_DAT_0078c1b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_611e09
        fstp    st(0)
        fld     dword ptr [_DAT_0078c1b0]
        jmp     l_611e1e
l_611e09:
        fcom    dword ptr [_DAT_00770168]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_611e1e
        fstp    st(0)
        fld     dword ptr [_DAT_00770168]
l_611e1e:
        fld     dword ptr [_DAT_007f289c]
        fadd    st(0), st(1)
        fstp    dword ptr [_DAT_007f289c]
        fstp    st(0)
l_611e2e:
        mov     al, byte ptr [_DAT_007f2870]
        test    al, al
        jz      l_611e9b
        fld     dword ptr [_DAT_007f287c]
        fsub    dword ptr [_DAT_007f28a0]
        fld     st(0)
        call    FUN_0075db4a
        cdq
        xor     eax, edx
        sub     eax, edx
        cmp     eax, 0x5
        jge     l_611e5f
        fstp    st(0)
        mov     byte ptr [_DAT_007f2870], 0x0
        jmp     l_611e9b
l_611e5f:
        fcom    dword ptr [_DAT_0078c1b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_611e76
        fstp    st(0)
        fld     dword ptr [_DAT_0078c1b0]
        jmp     l_611e8b
l_611e76:
        fcom    dword ptr [_DAT_00770168]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_611e8b
        fstp    st(0)
        fld     dword ptr [_DAT_00770168]
l_611e8b:
        fld     dword ptr [_DAT_007f28a0]
        fadd    st(0), st(1)
        fstp    dword ptr [_DAT_007f28a0]
        fstp    st(0)
l_611e9b:
        call    FUN_00713d10
        call    FUN_0055f020
        push    0x2
        push    0x4
        call    FUN_00713cc0
        mov     ecx, dword ptr [_DAT_007f28d0]
        mov     al, byte ptr [ecx + 0x4]
        test    al, al
        jz      l_611ebf
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax]
l_611ebf:
        mov     ecx, dword ptr [_DAT_007f28d4]
        mov     al, byte ptr [ecx + 0x4]
        test    al, al
        jz      l_611ed0
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx]
l_611ed0:
        mov     esi, 0x7f28d8
l_611ed5:
        mov     ecx, dword ptr [esi]
        mov     al, byte ptr [ecx + 0x4]
        test    al, al
        jz      l_611ee2
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax]
l_611ee2:
        add     esi, 0x4
        cmp     esi, 0x7f2918
        jl      l_611ed5
        call    FUN_0055f280
        call    FUN_00713d70
        pop     esi
l_611ef8:
        pop     edi
        add     esp, 0x60
        ret
    }
}
