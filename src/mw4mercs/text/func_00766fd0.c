/*
 * FUN_00766fd0 (403 B) — __thiscall 3D frustum/plane intersection helper.
 *
 * Heavy FPU stack math. Returns a float in ST(0) (float10). Uses fnstsw ax
 * + test ah,imm8 for FPU condition checks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_77debc;
extern float g_76d048;
extern float g_7b220c;
extern float g_76d064;
extern float g_76c5b0;
extern float g_76d598;

__declspec(naked) void __stdcall FUN_00766fd0(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [esp + 0x24]
        fld     dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        fsub    dword ptr [ecx]
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x1c], edx
        fstp    dword ptr [esp + 0x8]
        push    esi
        fld     dword ptr [esp + 0x1c]
        push    edi
        fsub    dword ptr [ecx + 0x4]
        mov     edi, dword ptr [esp + 0x30]
        xor     esi, esi
        lea     edx, [eax + 0x30]
        fstp    dword ptr [esp + 0x14]
        fld     dword ptr [esp + 0x24]
        fsub    dword ptr [ecx + 0x8]
        fstp    dword ptr [esp + 0x18]
        fld     dword ptr [g_77debc]
        fsub    dword ptr [ecx + 0x18]
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [ecx + 0x18]
        fadd    dword ptr [g_76d048]
        fstp    dword ptr [esp + 0x8]
L_67029:
        fld     dword ptr [edx - 0x30]
        fld     dword ptr [edx - 0x20]
        fld     dword ptr [edx - 0x10]
        fld     st(2)
        fmul    dword ptr [ecx + 0xc]
        fld     st(1)
        fmul    dword ptr [ecx + 0x14]
        faddp   st(1), st(0)
        fld     st(2)
        fmul    dword ptr [ecx + 0x10]
        faddp   st(1), st(0)
        fld     st(0)
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jnz     L_67089
        fstp    st(0)
        fld     dword ptr [esp + 0x18]
        fmul    st(0), st(1)
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fxch    st(3)
        fmul    dword ptr [esp + 0x10]
        faddp   st(3), st(0)
        fxch    st(2)
        fabs
        fxch    st(2)
        fstp    st(0)
        fstp    st(0)
        fcomp   dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        jz      L_67155
        jmp     L_67104
L_67089:
        fdivr   dword ptr [g_76d064]
        fld     st(0)
        fabs
        fmul    dword ptr [edx]
        fstp    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0x18]
        fmul    st(0), st(2)
        fld     dword ptr [esp + 0x14]
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fxch    st(4)
        fmul    dword ptr [esp + 0x10]
        faddp   st(4), st(0)
        fxch    st(3)
        fmul    st(0), st(3)
        fxch    st(3)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fld     st(0)
        fsub    dword ptr [esp + 0x30]
        fstp    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x30]
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [esp + 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_670e2
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edi], esi
        mov     dword ptr [esp + 0x2c], eax
L_670e2:
        fcom    dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jz      L_670f3
        fstp    dword ptr [esp + 0x8]
        jmp     L_670f5
L_670f3:
        fstp    st(0)
L_670f5:
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_67155
L_67104:
        inc     esi
        add     edx, 0x4
        cmp     esi, 0x2
        jle     L_67029
        fld     dword ptr [esp + 0x8]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_67155
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jz      L_67155
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_67149
        mov     dword ptr [esp + 0x2c], 0x0
L_67149:
        fld     dword ptr [esp + 0x2c]
        pop     edi
        pop     esi
        add     esp, 0x20
        ret     0x8
L_67155:
        fld     dword ptr [g_76d598]
        pop     edi
        pop     esi
        add     esp, 0x20
        ret     0x8
    }
}
