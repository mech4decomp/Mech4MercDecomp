/*
 * FUN_00688B90 (1137 B) — __fastcall (ECX = this), returns float in ST0.
 * Weapon/aiming falloff computation with heavy FPU math.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00689010(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0040cb00(void);

extern float _DAT_0076c5b0;   /* 0x0076c5b0 */
extern float _DAT_0076d04c;   /* 0x0076d04c */
extern float _DAT_0076d064;   /* 0x0076d064 */
extern double _DAT_0076d968;  /* 0x0076d968 */
extern float _DAT_00788104;   /* 0x00788104 */
extern float _DAT_007b220c;   /* 0x007b220c */
extern float _DAT_0076d070;   /* 0x0076d070 */
extern float _DAT_0076d048;   /* 0x0076d048 */
extern float _DAT_0076d5f0;   /* 0x0076d5f0 */
extern int DAT_007f25c0;      /* 0x007f25c0 */

__declspec(naked) float __fastcall FUN_00688b90(void)
{
    __asm {
        sub     esp, 0x58
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        push    edi
        jnz     l_688bae
        fld     dword ptr [_DAT_0076c5b0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret
l_688bae:
        mov     ecx, dword ptr [esi + 0x20]
        test    ecx, ecx
        jnz     l_688bc3
        fld     dword ptr [_DAT_0076c5b0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret
l_688bc3:
        mov     eax, dword ptr [eax + 0x35c]
        mov     ecx, dword ptr [eax + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x24]
        call    FUN_00419480
        mov     edx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x38], edx
        lea     edx, [esp + 0x13]
        mov     dword ptr [esp + 0x3c], eax
        push    edx
        lea     eax, [esp + 0x60]
        mov     dword ptr [esp + 0x44], ecx
        push    eax
        mov     ecx, esi
        call    FUN_00689010
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x44], ecx
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [esp + 0x48], edx
        mov     eax, dword ptr [eax + 8]
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x54], eax
        call    FUN_0040ca10
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x34]
        mov     eax, dword ptr [DAT_007f25c0]
        fld     dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esi + 0x20]
        fmul    dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [ebx + 4]
        push    eax
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x34]
        fmul    dword ptr [esp + 0x34]
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x18]
        call    FUN_00415230
        test    al, al
        jz      l_688fd7
        fld     dword ptr [esi + 0x28]
        fld     dword ptr [esi + 0x24]
        fld     st(0)
        __asm _emit 0xD8 __asm _emit 0xC9 /* __emit: fmul st(1) - must emit; real fmul st(1) before _emit fld st(2) breaks MSVC6 FPU tracker */
        __asm _emit 0xD9 __asm _emit 0xC2 /* __emit: fld st(2) - MSVC6 only accepts fld st(0) */
        __asm _emit 0xD8 __asm _emit 0xCB /* __emit: fmul st(3) - MSVC6 tracker thinks depth 3 after _emit fld st(2) */
        faddp   st(1), st(0)
        fstp    dword ptr [esp + 0x1c]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_688c99
        mov     dword ptr [esp + 0x1c], 0x41200000
l_688c99:
        fld     dword ptr [ebx + 0x440]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_688d5d
        fld     dword ptr [esp + 0x1c]
        fcomp   dword ptr [_DAT_0076d04c]
        fld     dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jz      l_688cef
        fdiv    dword ptr [esp + 0x1c]
        fcom    dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_688ce0
        fstp    st(0)
        fld     dword ptr [_DAT_0076c5b0]
        jmp     l_688d2d
l_688ce0:
        fcom    dword ptr [_DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688d2d
        jmp     l_688d25
l_688cef:
        fsub    dword ptr [_DAT_0076d04c]
        fld     dword ptr [esp + 0x1c]
        fsub    dword ptr [_DAT_0076d04c]
        fdivp   st(1), st(0)
        fcom    dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_688d18
        fstp    st(0)
        fld     dword ptr [_DAT_0076c5b0]
        jmp     l_688d2d
l_688d18:
        fcom    dword ptr [_DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688d2d
l_688d25:
        fstp    st(0)
        fld     dword ptr [_DAT_0076d064]
l_688d2d:
        fcom    qword ptr [_DAT_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688d42
l_688d3a:
        fstp    st(0)
        fld     dword ptr [_DAT_0076d064]
l_688d42:
        fcom    dword ptr [esi + 0x40]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688ff9
        pop     edi
        fstp    st(0)
        fld     dword ptr [esi + 0x40]
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret
l_688d5d:
        mov     edi, dword ptr [esi + 4]
        mov     eax, dword ptr [edi + 0x35c]
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [_DAT_00788104]
        mov     ebp, eax
        fnstsw  ax
        test    ah, 0x1
        jz      l_688e5b
        mov     ecx, dword ptr [edi + 0x35c]
        mov     eax, dword ptr [ecx + 0xd8]
        fld     dword ptr [eax + 0x88]
        add     eax, 0x80
        fstp    dword ptr [esp + 0x5c]
        fld     dword ptr [eax + 0x28]
        mov     eax, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        fstp    dword ptr [esp + 0x64]
        fld     dword ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 0x2c]
        fsub    dword ptr [esp + 0x38]
        mov     dword ptr [esp + 0x54], edx
        mov     dword ptr [esp + 0x58], eax
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x54]
        fsub    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x58]
        fsub    dword ptr [esp + 0x40]
        fst     dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x24]
        fld     st(0)
        __asm _emit 0xD8 __asm _emit 0xC9 /* __emit: fmul st(1) - must emit; real fmul st(1) before _emit fld st(2) breaks MSVC6 FPU tracker */
        __asm _emit 0xD9 __asm _emit 0xC2 /* __emit: fld st(2) - MSVC6 only accepts fld st(0) */
        __asm _emit 0xD8 __asm _emit 0xCB /* __emit: fmul st(3) - MSVC6 tracker thinks depth 3 after _emit fld st(2) */
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp   st(1), st(0)
        fabs
        fstp    st(2)
        fstp    st(0)
        fld     dword ptr [_DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      l_688e4d
        lea     ecx, [esp + 0x20]
        call    FUN_0040cb00
        fsqrt
        fdivr   dword ptr [_DAT_0076d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x28]
        fmul    dword ptr [esp + 0x64]
        fld     dword ptr [esp + 0x50]
        fmul    dword ptr [esp + 0x5c]
        faddp   st(1), st(0)
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      l_688e5b
l_688e4d:
        fld     dword ptr [_DAT_0076c5b0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret
l_688e5b:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      l_688eea
        fld     dword ptr [ebp + 0x2bc]
        mov     ecx, dword ptr [edi + 0x35c]
        fdiv    dword ptr [ebp + 0x2d8]
        fld     st(0)
        __asm _emit 0xD8 __asm _emit 0xC9 /* __emit: fmul st(1) - real fmul st(1) before _emit FPU op breaks MSVC6 tracker */
        __asm _emit 0xD8 __asm _emit 0x8D __asm _emit 0xD8 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 /* __emit: fmul dword ptr [ebp+0x2d8] - MSVC6 FPU tracker confused by earlier _emit fld st(2) */
        fmul    dword ptr [_DAT_0076d070]
        fxch
        fmul    dword ptr [ecx + 0x440]
        faddp   st(1), st(0)
        fld     st(0)
        fmulp   st(1), st(0)
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_688d3a
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [_DAT_0076d048]
        fxch
        fsub    dword ptr [_DAT_0076d048]
        fdivp   st(1), st(0)
        fcom    dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_688ed4
        fstp    st(0)
        fld     dword ptr [_DAT_0076c5b0]
        jmp     l_688d42
l_688ed4:
        fcom    dword ptr [_DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688d42
        jmp     l_688d3a
l_688eea:
        fld     dword ptr [ebx + 0x440]
        fsub    dword ptr [_DAT_0076d5f0]
        fdiv    dword ptr [ebp + 0x2bc]
        fst     dword ptr [esp + 0x18]
        fcomp   dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_688f17
        mov     dword ptr [esp + 0x18], 0x0
        jmp     l_688f30
l_688f17:
        fld     dword ptr [esp + 0x18]
        fcomp   dword ptr [_DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688f30
        mov     dword ptr [esp + 0x18], 0x3f800000
l_688f30:
        fld     dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x18]
        fcomp   qword ptr [_DAT_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688f4d
        fstp    st(0)
        fld     dword ptr [_DAT_0076d064]
l_688f4d:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [_DAT_0076d048]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_688ff9
        fld     dword ptr [esp + 0x14]
        fdiv    dword ptr [esp + 0x1c]
        fcom    dword ptr [_DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      l_688f81
        fstp    st(0)
        fld     dword ptr [_DAT_0076c5b0]
        jmp     l_688f96
l_688f81:
        fcom    dword ptr [_DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688f96
        fstp    st(0)
        fld     dword ptr [_DAT_0076d064]
l_688f96:
        fst     dword ptr [esp + 0x1c]
        fcomp   qword ptr [_DAT_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_688fc0
        fld     dword ptr [_DAT_0076d064]
        fld     dword ptr [_DAT_0076d064]
        fsub    st(0), st(2)
        __asm _emit 0xD8 __asm _emit 0xC9 /* __emit: fmul st(1) - real fmul st(1) before _emit FPU op breaks MSVC6 tracker */
        __asm _emit 0xDE __asm _emit 0xC2 /* __emit: faddp st(2), st(0) - MSVC6 FPU tracker confused by earlier _emit fld st(2) */
        fstp    st(0)
        jmp     l_688d42
l_688fc0:
        fld     dword ptr [esp + 0x1c]
        fld     dword ptr [_DAT_0076d064]
        fsub    st(0), st(2)
        __asm _emit 0xD8 __asm _emit 0xC9 /* __emit: fmul st(1) - real fmul st(1) before _emit FPU op breaks MSVC6 tracker */
        __asm _emit 0xDE __asm _emit 0xC2 /* __emit: faddp st(2), st(0) - MSVC6 FPU tracker confused by earlier _emit fld st(2) */
        fstp    st(0)
        jmp     l_688d42
l_688fd7:
        fld     dword ptr [esp + 0x14]
        fcomp   dword ptr [_DAT_0076d048]
        fnstsw  ax
        test    ah, 0x1
        jz      l_688ff6
        fld     dword ptr [_DAT_0076c5b0]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret
l_688ff6:
        fld     dword ptr [esi + 0x40]
l_688ff9:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x58
        ret
    }
}
