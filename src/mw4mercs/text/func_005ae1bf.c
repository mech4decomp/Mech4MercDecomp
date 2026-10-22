/*
 * FUN_005ae1bf (extent 0x5ae1bf-0x5ae431) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f20d0;
extern void __cdecl FUN_004dae60(void);
extern void __cdecl FUN_005ad8d0(void);

__declspec(naked) void FUN_005ae1bf(void)
{
    __asm {
        /* __emit: add dh, bh — MSVC6 reverses 8-bit reg operands (emits 02 F7) */
        __emit 0x00
        __emit 0xFE
        /* __emit: fstp dword ptr [edx+0] — MSVC6 drops disp8=0 (emits D9 1A) */
        __emit 0xD9
        __emit 0x5A
        __emit 0x00
        nop    
        /* __emit: fistp dword ptr [edx+0] — MSVC6 drops disp8=0 (emits DB 1A) */
        __emit 0xDB
        __emit 0x5A
        __emit 0x00
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    qword ptr [esp + 4]
        push    esi
        mov    esi, ecx
        fsub    qword ptr [esi + 0xe4]
        mov    cl, 1
        fld    dword ptr [esi + 0x264]
        fcomp    dword ptr [esi + 0x268]
        fnstsw  ax
        test    ah, cl
        je    L_e205
        fld    st(0)
        mov    byte ptr [esi + 0x260], cl
        fadd    dword ptr [esi + 0x264]
        fstp    dword ptr [esi + 0x264]
L_e205:
        fld    dword ptr [esi + 0x294]
        fcomp    dword ptr [esi + 0x298]
        fnstsw  ax
        test    ah, 1
        je    L_e22c
        fld    st(0)
        mov    byte ptr [esi + 0x290], cl
        fadd    dword ptr [esi + 0x294]
        fstp    dword ptr [esi + 0x294]
L_e22c:
        fld    dword ptr [esi + 0x2c8]
        fcomp    dword ptr [esi + 0x2cc]
        fnstsw  ax
        test    ah, 1
        je    L_e253
        fld    st(0)
        mov    byte ptr [esi + 0x2c4], cl
        fadd    dword ptr [esi + 0x2c8]
        fstp    dword ptr [esi + 0x2c8]
L_e253:
        fld    dword ptr [esi + 0x2e0]
        fcomp    dword ptr [esi + 0x2e4]
        fnstsw  ax
        test    ah, 1
        je    L_e27a
        fld    st(0)
        mov    byte ptr [esi + 0x2dc], cl
        fadd    dword ptr [esi + 0x2e0]
        fstp    dword ptr [esi + 0x2e0]
L_e27a:
        fld    dword ptr [esi + 0x2f8]
        fcomp    dword ptr [esi + 0x2fc]
        fnstsw  ax
        test    ah, 1
        je    L_e2a1
        fld    st(0)
        mov    byte ptr [esi + 0x2f4], cl
        fadd    dword ptr [esi + 0x2f8]
        fstp    dword ptr [esi + 0x2f8]
L_e2a1:
        fld    dword ptr [esi + 0x314]
        fcomp    dword ptr [esi + 0x318]
        fnstsw  ax
        test    ah, 1
        je    L_e2c8
        fld    st(0)
        mov    byte ptr [esi + 0x310], cl
        fadd    dword ptr [esi + 0x314]
        fstp    dword ptr [esi + 0x314]
L_e2c8:
        fld    dword ptr [esi + 0x32c]
        fcomp    dword ptr [esi + 0x330]
        fnstsw  ax
        test    ah, 1
        je    L_e2ef
        fld    st(0)
        mov    byte ptr [esi + 0x328], cl
        fadd    dword ptr [esi + 0x32c]
        fstp    dword ptr [esi + 0x32c]
L_e2ef:
        fld    dword ptr [esi + 0x204]
        fcomp    dword ptr [esi + 0x208]
        fnstsw  ax
        test    ah, 1
        je    L_e316
        fld    st(0)
        mov    byte ptr [esi + 0x200], cl
        fadd    dword ptr [esi + 0x204]
        fstp    dword ptr [esi + 0x204]
L_e316:
        fld    dword ptr [esi + 0x234]
        fcomp    dword ptr [esi + 0x238]
        fnstsw  ax
        test    ah, 1
        je    L_e33d
        fld    st(0)
        mov    byte ptr [esi + 0x230], cl
        fadd    dword ptr [esi + 0x234]
        fstp    dword ptr [esi + 0x234]
L_e33d:
        fld    dword ptr [esi + 0x194]
        fcomp    dword ptr [esi + 0x198]
        fnstsw  ax
        test    ah, 1
        je    L_e364
        fld    st(0)
        mov    byte ptr [esi + 0x190], cl
        fadd    dword ptr [esi + 0x194]
        fstp    dword ptr [esi + 0x194]
L_e364:
        fld    dword ptr [esi + 0x1c4]
        fcomp    dword ptr [esi + 0x1c8]
        fnstsw  ax
        test    ah, 1
        je    L_e38b
        fadd    dword ptr [esi + 0x1c4]
        mov    byte ptr [esi + 0x1c0], cl
        fstp    dword ptr [esi + 0x1c4]
        jmp    L_e38d
L_e38b:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_e38d:
        mov    ecx, esi
        call    FUN_005ad8d0
        mov    ecx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esp + 8]
        mov    edx, ecx
        mov    dword ptr [esi + 0xec], eax
        push    edx
        mov    dword ptr [esi + 0xf0], ecx
        push    eax
        mov    ecx, esi
        call    FUN_004dae60
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0xe0]
        mov    eax, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [eax + 4]
        mov    edi, dword ptr [esi + 0xd8]
        mov    ecx, dword ptr [edi + 0x18]
        mov    edx, dword ptr [edi]
        and    ecx, 0xffffffbf
        or    ecx, 0x80
        mov    dword ptr [edi + 0x18], ecx
        mov    ecx, edi
        call    dword ptr [edx + 0x10]
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x14]
        mov    eax, dword ptr [g_007f20d0]
        fld    dword ptr [eax + 0x2c]
        pop    edi
        fst    dword ptr [esi + 0x31c]
        mov    dword ptr [esi + 0x314], 0
        fstp    dword ptr [esi + 0x320]
        mov    dword ptr [esi + 0x318], 0
        fld    dword ptr [eax + 0x2c]
        mov    byte ptr [esi + 0x310], 1
        fstp    dword ptr [esi + 0x324]
        pop    esi
        ret    
    }
}
