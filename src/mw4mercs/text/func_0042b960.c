/*
 * FUN_0042b960 (325 B) — __thiscall MLR light/color helper (variant of
 * FUN_0042b7e0). Computes a squared-length/falloff factor from
 * this+0x54/0x64/0x74, applies attenuation against this+0x80/0x84/0x88,
 * and accumulates a light contribution into the out-vector (arg0) using
 * this+0x50/0x60/0x70 direction.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076d598;
extern float g_0076e10c;
extern float g_007b220c;

__declspec(naked) void FUN_0042b960(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x20
        lea     eax, [ecx + 0xc]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebp - 0x20], edx
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0x1c], edx
        mov     edx, dword ptr [ecx + 0x54]
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [ecx + 0x74]
        mov     dword ptr [ebp - 0xc], edx
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x18], eax
        mov     eax, dword ptr [ecx + 0x64]
        mov     dword ptr [ebp - 0x10], eax
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ebp - 0x4]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fst     dword ptr [ebp - 0x4]
        fcomp   dword ptr [ecx + 0x80]
        fnstsw  ax
        test    ah, 0x41
        jz      L_b9cd
        fld     dword ptr [g_0076d064]
        jmp     L_b9f0
L_b9cd:
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [ecx + 0x84]
        fnstsw  ax
        test    ah, 0x1
        jz      L_ba9f
        fld     dword ptr [ecx + 0x84]
        fsub    dword ptr [ebp - 0x4]
        fmul    dword ptr [ecx + 0x88]
L_b9f0:
        fld     dword ptr [ebp - 0x20]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x20]
        fld     dword ptr [ebp - 0x1c]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x18]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x18]
        fstp    st(0)
        fld     dword ptr [ecx + 0x50]
        fld     dword ptr [ecx + 0x60]
        fld     dword ptr [ecx + 0x70]
        fld     dword ptr [g_0076d598]
        fdiv    dword ptr [ebp - 0x4]
        fld     st(0)
        fmul    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fld     st(0)
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0xc]
        fxch
        fmul    st(0), st(1)
        fxch    st(2)
        fmul    dword ptr [ebp - 0x10]
        faddp   st(2), st(0)
        fxch    st(2)
        fmul    dword ptr [ebp - 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0xb4]
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        jz      L_ba9f
        fld     dword ptr [g_0076e10c]
        fcomp   dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_ba9f
        fld     dword ptr [ebp - 0x20]
        mov     eax, dword ptr [ebp + 0x8]
        fmul    dword ptr [g_0076e10c]
        fld     dword ptr [ebp - 0x1c]
        fmul    dword ptr [g_0076e10c]
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x18]
        fmul    dword ptr [g_0076e10c]
        fstp    dword ptr [ebp - 0x18]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [ebp - 0x1c]
        fadd    dword ptr [eax + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ebp - 0x18]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [eax + 0x8]
L_ba9f:
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
