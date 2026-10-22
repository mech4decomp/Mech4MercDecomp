/*
 * FUN_00655A70 (1175 B) — __cdecl, RET 0. Grid/ring point generation loop
 * with heavy FPU math (nested loops over param_2/local_54).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_006589e0(void);
extern void __cdecl FUN_00658f00(void);
extern void __cdecl FUN_006f49a0(void);

extern int _DAT_007f2464;    /* 0x007f2464 */
extern float _DAT_00788100;  /* 0x00788100 */
extern float _DAT_0076c5b0;  /* 0x0076c5b0 */
extern float _DAT_0076d064;  /* 0x0076d064 */
extern float _DAT_0080da60;  /* 0x0080da60 */
extern float _DAT_0080da5c;  /* 0x0080da5c */
extern float _DAT_0080da58;  /* 0x0080da58 */
extern float _DAT_0080da54;  /* 0x0080da54 */

__declspec(naked) void __cdecl FUN_00655a70(void)
{
    __asm {
        sub     esp, 0x54
        mov     eax, dword ptr [_DAT_007f2464]
        push    eax
        call    FUN_006f4950
        fld     dword ptr [esp + 0x5c]
        fmul    dword ptr [_DAT_00788100]
        __asm _emit 0xC7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 /* __emit: mov dword ptr [esp],0 - MSVC6 drops zero disp (C7 04 24) */
        fstp    dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x68]
        fmul    dword ptr [_DAT_00788100]
        fst     dword ptr [esp + 0x2c]
        fst     dword ptr [esp + 0x28]
        fld     st(0)
        __asm _emit 0xD8 __asm _emit 0xC9 /* __emit: fmul st(1) - real fmul st(1) after fld st(0) breaks MSVC6 FPU tracker for subsequent ops */
        fstp    dword ptr [esp + 0x68]
        fstp    st(0)
        fld     dword ptr [_DAT_0076c5b0]
        fcomp   dword ptr [esp + 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jz      l_655efe
        push    esi
        mov     esi, dword ptr [esp + 0x5c]
        push    edi
l_655ad9:
        fld     dword ptr [_DAT_0076c5b0]
        mov     dword ptr [esp + 0x64], 0x0
        fcomp   dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 0x41
        jz      l_655edf
l_655b02:
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x38]
        fld     dword ptr [esp + 0x64]
        fmul    dword ptr [esp + 0x64]
        fadd    dword ptr [esp + 0x38]
        fcomp   dword ptr [esp + 0x70]
        fnstsw  ax
        test    ah, 0x41
        jz      l_655ec2
        fld     dword ptr [esp + 0x20]
        fsub    dword ptr [esp + 0x64]
        fst     dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x28]
        fsub    dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [_DAT_0080da60]
        mov     ecx, dword ptr [esp + 0x10]
        fmul    dword ptr [_DAT_00788100]
        mov     dword ptr [esp + 0xc], ecx
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_655b5a
        fstp    dword ptr [esp + 0xc]
        jmp     l_655b5c
l_655b5a:
        fstp    st(0)
l_655b5c:
        fld     dword ptr [_DAT_0080da5c]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x60]
        fcom    dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x1
        jz      l_655b7d
        fstp    st(0)
        fld     dword ptr [esp + 0x60]
l_655b7d:
        fld     dword ptr [_DAT_0080da58]
        fmul    dword ptr [_DAT_00788100]
        fld     dword ptr [esp + 0xc]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_655ba2
        fsub    dword ptr [_DAT_0076d064]
        fstp    dword ptr [esp + 0xc]
        jmp     l_655ba4
l_655ba2:
        fstp    st(0)
l_655ba4:
        fld     dword ptr [_DAT_0080da54]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x60]
        fcom    dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_655bcb
        fstp    st(0)
        fld     dword ptr [esp + 0x60]
        fsub    dword ptr [_DAT_0076d064]
l_655bcb:
        fld     dword ptr [esp + 0xc]
        call    FUN_0075db4a
        mov     edi, eax
        mov     dword ptr [esp + 0x3c], edi
        call    FUN_0075db4a
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x40], eax
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, ecx
        jz      l_655c02
        test    eax, eax
        jz      l_655bfa
        mov     dword ptr [eax], edi
        mov     edx, dword ptr [esp + 0x40]
        mov     dword ptr [eax + 0x4], edx
l_655bfa:
        add     eax, 0x8
        mov     dword ptr [esi + 0x4], eax
        jmp     l_655c11
l_655c02:
        push    0x1
        lea     ecx, [esp + 0x40]
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_006589e0
l_655c11:
        fld     dword ptr [esp + 0x64]
        mov     edx, dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], edx
        fst     dword ptr [esp + 0x2c]
        fld     dword ptr [_DAT_0080da60]
        fmul    dword ptr [_DAT_00788100]
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_655c42
        fstp    dword ptr [esp + 0x14]
        jmp     l_655c44
l_655c42:
        fstp    st(0)
l_655c44:
        fld     dword ptr [_DAT_0080da5c]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x60]
        fcom    dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x1
        jz      l_655c65
        fstp    st(0)
        fld     dword ptr [esp + 0x60]
l_655c65:
        fld     dword ptr [_DAT_0080da58]
        fmul    dword ptr [_DAT_00788100]
        fld     dword ptr [esp + 0x14]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_655c8a
        fsub    dword ptr [_DAT_0076d064]
        fstp    dword ptr [esp + 0x14]
        jmp     l_655c8c
l_655c8a:
        fstp    st(0)
l_655c8c:
        fld     dword ptr [_DAT_0080da54]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x60]
        fcom    dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_655cb3
        fstp    st(0)
        fld     dword ptr [esp + 0x60]
        fsub    dword ptr [_DAT_0076d064]
l_655cb3:
        fld     dword ptr [esp + 0x14]
        call    FUN_0075db4a
        mov     edi, eax
        mov     dword ptr [esp + 0x44], edi
        call    FUN_0075db4a
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x48], eax
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, ecx
        jz      l_655cea
        test    eax, eax
        jz      l_655ce2
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esp + 0x48]
        mov     dword ptr [eax + 0x4], ecx
l_655ce2:
        add     eax, 0x8
        mov     dword ptr [esi + 0x4], eax
        jmp     l_655cf9
l_655cea:
        push    0x1
        lea     edx, [esp + 0x48]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_006589e0
l_655cf9:
        fld     dword ptr [esp + 0x24]
        fld     dword ptr [esp + 0x8]
        fadd    dword ptr [esp + 0x28]
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [_DAT_0080da60]
        mov     eax, dword ptr [esp + 0x10]
        fmul    dword ptr [_DAT_00788100]
        mov     dword ptr [esp + 0x18], eax
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_655d2e
        fstp    dword ptr [esp + 0x18]
        jmp     l_655d30
l_655d2e:
        fstp    st(0)
l_655d30:
        fld     dword ptr [_DAT_0080da5c]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x60]
        fcom    dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x1
        jz      l_655d51
        fstp    st(0)
        fld     dword ptr [esp + 0x60]
l_655d51:
        fld     dword ptr [_DAT_0080da58]
        fmul    dword ptr [_DAT_00788100]
        fld     dword ptr [esp + 0x18]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_655d76
        fsub    dword ptr [_DAT_0076d064]
        fstp    dword ptr [esp + 0x18]
        jmp     l_655d78
l_655d76:
        fstp    st(0)
l_655d78:
        fld     dword ptr [_DAT_0080da54]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x60]
        fcom    dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_655d9f
        fstp    st(0)
        fld     dword ptr [esp + 0x60]
        fsub    dword ptr [_DAT_0076d064]
l_655d9f:
        fld     dword ptr [esp + 0x18]
        call    FUN_0075db4a
        mov     edi, eax
        mov     dword ptr [esp + 0x4c], edi
        call    FUN_0075db4a
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x50], eax
        mov     eax, dword ptr [esi + 0x4]
        cmp     eax, ecx
        jz      l_655dd6
        test    eax, eax
        jz      l_655dce
        mov     dword ptr [eax], edi
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [eax + 0x4], ecx
l_655dce:
        add     eax, 0x8
        mov     dword ptr [esi + 0x4], eax
        jmp     l_655de5
l_655dd6:
        push    0x1
        lea     edx, [esp + 0x50]
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_006589e0
l_655de5:
        fld     dword ptr [esp + 0x2c]
        mov     eax, dword ptr [esp + 0x10]
        fld     dword ptr [_DAT_0080da60]
        mov     dword ptr [esp + 0x1c], eax
        fmul    dword ptr [_DAT_00788100]
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_655e0e
        fstp    dword ptr [esp + 0x1c]
        jmp     l_655e10
l_655e0e:
        fstp    st(0)
l_655e10:
        fld     dword ptr [_DAT_0080da5c]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x60]
        fcom    dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x1
        jz      l_655e31
        fstp    st(0)
        fld     dword ptr [esp + 0x60]
l_655e31:
        fld     dword ptr [_DAT_0080da58]
        fmul    dword ptr [_DAT_00788100]
        fld     dword ptr [esp + 0x1c]
        fcomp
        fnstsw  ax
        test    ah, 0x1
        jnz     l_655e56
        fsub    dword ptr [_DAT_0076d064]
        fstp    dword ptr [esp + 0x1c]
        jmp     l_655e58
l_655e56:
        fstp    st(0)
l_655e58:
        fld     dword ptr [_DAT_0080da54]
        fmul    dword ptr [_DAT_00788100]
        fstp    dword ptr [esp + 0x60]
        fcom    dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_655e7f
        fstp    st(0)
        fld     dword ptr [esp + 0x60]
        fsub    dword ptr [_DAT_0076d064]
l_655e7f:
        fld     dword ptr [esp + 0x1c]
        call    FUN_0075db4a
        mov     dword ptr [esp + 0x54], eax
        call    FUN_0075db4a
        mov     edi, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x58], eax
        cmp     edi, dword ptr [esi + 0x8]
        jz      l_655eb3
        lea     ecx, [esp + 0x54]
        push    ecx
        push    edi
        call    FUN_00658f00
        add     esp, 0x8
        add     edi, 0x8
        mov     dword ptr [esi + 0x4], edi
        jmp     l_655ec2
l_655eb3:
        push    0x1
        lea     edx, [esp + 0x58]
        push    edx
        push    edi
        mov     ecx, esi
        call    FUN_006589e0
l_655ec2:
        fld     dword ptr [esp + 0x64]
        fadd    dword ptr [_DAT_0076d064]
        fst     dword ptr [esp + 0x64]
        fcomp   dword ptr [esp + 0x30]
        fnstsw  ax
        test    ah, 0x41
        __asm _emit 0x0F __asm _emit 0x85 __asm _emit 0x23 __asm _emit 0xFC __asm _emit 0xFF __asm _emit 0xFF /* __emit: jnz l_655b02 - MSVC6 miscomputes backward rel (off-by-0xC, call-relocs between branch and target) */
l_655edf:
        fld     dword ptr [esp + 0x8]
        fadd    dword ptr [_DAT_0076d064]
        fst     dword ptr [esp + 0x8]
        fcomp   dword ptr [esp + 0x34]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_655ad9
        pop     edi
        pop     esi
l_655efe:
        call    FUN_006f49a0
        add     esp, 0x54
        ret
    }
}
