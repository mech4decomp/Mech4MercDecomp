/*
 * FUN_0067c130 (437 B) — __cdecl, RET (many float params on stack).
 *
 * Computes a clamped interpolation along a segment. Uses FUN_0041c540
 * to test a condition; if true stores params directly, else does a
 * vector-length / clamp computation with heavy FPU usage.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b220c;
extern float g_76d064;
extern float g_76c5b0;
extern float g_77431c;
extern char __stdcall FUN_0041c540(void *a, void *b, int c);

__declspec(naked) void __stdcall FUN_0067c130(void)
{
    __asm {
        mov     eax, dword ptr [g_7b220c]
        sub     esp, 0x2c
        push    eax
        lea     ecx, [esp + 0x44]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        call    FUN_0041c540
        fld     dword ptr [esp + 0x4c]
        add     esp, 0xc
        test    al, al
        jz      L_c16b
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x44]
        fstp    dword ptr [eax]
        mov     edx, dword ptr [esp + 0x48]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        add     esp, 0x2c
        ret
    L_c16b:
        fsub    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x4]
        fld     dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x4]
        fmul    dword ptr [esp + 0x4]
        /* __emit: FSTP [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD9
        __emit 0x5C
        __emit 0x24
        __emit 0x00
        fld     st(0)
        fmul    st(0), st(1)
        /* __emit: FADD [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD8
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fsqrt
        fdivr   dword ptr [g_76d064]
        fld     st(0)
        fmul    dword ptr [esp + 0x4]
        fstp    dword ptr [esp + 0x4]
        fld     st(1)
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0xc]
        fstp    st(0)
        fld     st(0)
        fmulp   st(1), st(0)
        /* __emit: FADD [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD8
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fsqrt
        fst     dword ptr [esp + 0x28]
        fld     dword ptr [esp + 0x40]
        fcomp   dword ptr [esp + 0x58]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_c1f4
        fld     dword ptr [esp + 0x58]
        fsub    dword ptr [esp + 0x34]
        fdiv    dword ptr [esp + 0x4]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_c1e3
        fchs
    L_c1e3:
        /* __emit: FST [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c233
        jmp     L_c22d
    L_c1f4:
        fld     dword ptr [esp + 0x40]
        fcomp   dword ptr [esp + 0x4c]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c233
        fld     dword ptr [esp + 0x4c]
        fsub    dword ptr [esp + 0x34]
        fdiv    dword ptr [esp + 0x4]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_c21e
        fchs
    L_c21e:
        /* __emit: FST [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fcomp   dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c233
    L_c22d:
        fstp    st(0)
        /* __emit: FLD [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
    L_c233:
        fld     dword ptr [esp + 0x48]
        fcomp   dword ptr [esp + 0x60]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_c26c
        fld     dword ptr [esp + 0x60]
        fsub    dword ptr [esp + 0x3c]
        fdiv    dword ptr [esp + 0xc]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_c25d
        fchs
    L_c25d:
        /* __emit: FST [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x1
        jz      L_c2a9
        jmp     L_c2a3
    L_c26c:
        fld     dword ptr [esp + 0x48]
        fcomp   dword ptr [esp + 0x54]
        fnstsw  ax
        test    ah, 0x1
        jz      L_c2a9
        fld     dword ptr [esp + 0x4c]
        fsub    dword ptr [esp + 0x3c]
        fdiv    dword ptr [esp + 0xc]
        fcom    dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jz      L_c296
        fchs
    L_c296:
        /* __emit: FST [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD9
        __emit 0x54
        __emit 0x24
        __emit 0x00
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x1
        jz      L_c2a9
    L_c2a3:
        fstp    st(0)
        /* __emit: FLD [esp+0] — MSVC6 drops the 00 disp byte */
        __emit 0xD9
        __emit 0x44
        __emit 0x24
        __emit 0x00
    L_c2a9:
        fmul    dword ptr [g_77431c]
        mov     eax, dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x44]
        mov     dword ptr [eax + 0x4], ecx
        fmul    st(0), st(1)
        fstp    dword ptr [esp + 0x58]
        fmul    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x58]
        fadd    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x58]
        fadd    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x58]
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x8]
        add     esp, 0x2c
        ret
    }
}
