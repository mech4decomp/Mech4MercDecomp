/*
 * FUN_004ae0c0 (421 B) -- __thiscall (RET 0x8). MLR sub-object bounding-box
 * update: computes min/max extents with FPU, quadratic root solve (FSQRT)
 * with loop back to LAB_004ae136. Uses constants g_76c5b0/g_76d064/g_76df00/
 * g_7704c4/g_76d978/g_76d070.
 *
 * CFLAGS: /O1
 */

extern float g_76c5b0;
extern float g_76d064;
extern float g_76df00;
extern float g_7704c4;
extern float g_76d978;
extern float g_76d070;

__declspec(naked) void FUN_004ae0c0(void)
{
    __asm {
        fld     dword ptr [ecx + 0x4]
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx + 0x4]
        fld     st(0)
        fstp    dword ptr [edx]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        fstp    dword ptr [esi]
        mov     dword ptr [esp + 0x8], eax
        fld     dword ptr [ecx + 0xc]
        fadd    dword ptr [ecx + 0x10]
        fadd    dword ptr [ecx + 0x8]
        fadd    dword ptr [esp + 0x8]
        fcom    dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_f5
        fstp    dword ptr [esi]
        jmp     L_106
L_f5:
        fcom    dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_104
        fstp    dword ptr [edx]
        jmp     L_106
L_104:
        fstp    st(0)
L_106:
        fld     dword ptr [ecx + 0xc]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_18b
        fld     dword ptr [ecx + 0x10]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_261
        fld     dword ptr [ecx + 0x8]
        fmul    dword ptr [g_76df00]
        fdiv    dword ptr [ecx + 0x10]
L_136:
        fst     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_261
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x1
        jz      L_261
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [ecx + 0xc]
        fadd    dword ptr [ecx + 0x10]
        fmul    dword ptr [esp + 0x8]
        fadd    dword ptr [ecx + 0x8]
        fmul    dword ptr [esp + 0x8]
        fadd    dword ptr [ecx + 0x4]
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_250
        fstp    dword ptr [edx]
        pop     esi
        ret     0x8
L_18b:
        fld     dword ptr [ecx + 0xc]
        fmul    dword ptr [g_7704c4]
        fld     dword ptr [ecx + 0x10]
        fadd    st(0), st(0)
        fst     dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        fld     st(1)
        fmul    dword ptr [ecx + 0x8]
        fmul    dword ptr [g_76d978]
        fsubp   st(1), st(0)
        fst     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_25f
        fdivr   dword ptr [g_76d070]
        fld     dword ptr [esp + 0xc]
        fmul    st(0), st(1)
        fchs
        fstp    dword ptr [esp + 0xc]
        fld     dword ptr [esp + 0x8]
        fsqrt
        fmulp   st(1), st(0)
        fld     dword ptr [esp + 0xc]
        fsub    st(0), st(1)
        fst     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_247
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x1
        jz      L_247
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [ecx + 0xc]
        fadd    dword ptr [ecx + 0x10]
        fmul    dword ptr [esp + 0x8]
        fadd    dword ptr [ecx + 0x8]
        fmul    dword ptr [esp + 0x8]
        fadd    dword ptr [ecx + 0x4]
        fcom    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x1
        jz      L_231
        fstp    dword ptr [edx]
        fadd    dword ptr [esp + 0xc]
        jmp     L_136
L_231:
        fcom    dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_245
        fstp    dword ptr [esi]
        fadd    dword ptr [esp + 0xc]
        jmp     L_136
L_245:
        fstp    st(0)
L_247:
        fadd    dword ptr [esp + 0xc]
        jmp     L_136
L_250:
        fcom    dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_25f
        fstp    dword ptr [esi]
        pop     esi
        ret     0x8
L_25f:
        fstp    st(0)
L_261:
        pop     esi
        ret     0x8
    }
}
