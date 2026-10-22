/*
 * FUN_00766e40 (394 B) — __thiscall 3D frustum/plane intersection helper.
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

__declspec(naked) void __stdcall FUN_00766e40(void)
{
    __asm {
        sub     esp, 0x24
        mov     eax, dword ptr [esp + 0x28]
        fld     dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax + 0x1c]
        fsub    dword ptr [ecx]
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x20], edx
        fstp    dword ptr [esp + 0xc]
        push    esi
        fld     dword ptr [esp + 0x20]
        xor     esi, esi
        fsub    dword ptr [ecx + 0x4]
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
        fstp    dword ptr [esp + 0x4]
L_66e94:
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
        jnz     L_66ef4
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
        jz      L_66fbd
        jmp     L_66f6d
L_66ef4:
        fdivr   dword ptr [g_76d064]
        fld     st(0)
        fabs
        fmul    dword ptr [edx]
        fstp    dword ptr [esp + 0x8]
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
        fsub    dword ptr [esp + 0x8]
        fstp    dword ptr [esp + 0xc]
        fadd    dword ptr [esp + 0x8]
        fld     dword ptr [esp + 0xc]
        fcomp   dword ptr [esp + 0x2c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_66f4b
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esp + 0x2c], eax
L_66f4b:
        fcom    dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_66f5c
        fstp    dword ptr [esp + 0x4]
        jmp     L_66f5e
L_66f5c:
        fstp    st(0)
L_66f5e:
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L_66fbd
L_66f6d:
        inc     esi
        add     edx, 0x4
        cmp     esi, 0x2
        jle     L_66e94
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_66fbd
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [ecx + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jz      L_66fbd
        fld     dword ptr [esp + 0x2c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x1
        jz      L_66fb2
        mov     dword ptr [esp + 0x2c], 0x0
L_66fb2:
        fld     dword ptr [esp + 0x2c]
        pop     esi
        add     esp, 0x24
        ret     0x4
L_66fbd:
        fld     dword ptr [g_76d598]
        pop     esi
        add     esp, 0x24
        ret     0x4
    }
}
