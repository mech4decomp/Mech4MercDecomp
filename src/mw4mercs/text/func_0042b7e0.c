/*
 * FUN_0042b7e0 (379 B) — __thiscall MLR light/color helper. Computes a
 * squared-length / falloff factor from this+0x54/0x64/0x74, applies
 * attenuation against this+0x80/0x84/0x88, and accumulates a light
 * contribution into the out-vector (arg0) using this+0x50/0x60/0x70
 * direction and the optional normal at arg[2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040ca10(void);
extern float g_0076d064;
extern float g_0076d598;
extern float g_0076e10c;
extern float g_007b220c;

__declspec(naked) void FUN_0042b7e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x1c
        push    esi
        mov     esi, ecx
        lea     eax, [esi + 0xc]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 0x4]
        mov     eax, dword ptr [eax + 0x8]
        mov     dword ptr [ebp - 0x1c], ecx
        mov     ecx, dword ptr [esi + 0x54]
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x18], edx
        mov     edx, dword ptr [esi + 0x64]
        mov     dword ptr [ebp - 0x10], ecx
        mov     ecx, dword ptr [edi]
        mov     dword ptr [ebp - 0xc], edx
        push    ecx
        mov     dword ptr [ebp - 0x14], eax
        mov     eax, dword ptr [esi + 0x74]
        lea     edx, [ebp - 0x10]
        push    edx
        lea     ecx, [ebp - 0x10]
        mov     dword ptr [ebp - 0x8], eax
        call    FUN_0040ca10
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        fst     dword ptr [ebp + 0x8]
        fcomp   dword ptr [esi + 0x80]
        fnstsw  ax
        test    ah, 0x41
        jz      L_b863
        fld     dword ptr [g_0076d064]
        jmp     L_b886
L_b863:
        fld     dword ptr [ebp + 0x8]
        fcomp   dword ptr [esi + 0x84]
        fnstsw  ax
        test    ah, 0x1
        jz      L_b953
        fld     dword ptr [esi + 0x84]
        fsub    dword ptr [ebp + 0x8]
        fmul    dword ptr [esi + 0x88]
L_b886:
        fld     dword ptr [ebp - 0x1c]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x1c]
        fld     dword ptr [ebp - 0x18]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x18]
        fld     dword ptr [ebp - 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x14]
        fstp    st(0)
        fld     dword ptr [esi + 0x50]
        fld     dword ptr [esi + 0x60]
        fld     dword ptr [esi + 0x70]
        fld     dword ptr [g_0076d598]
        fdiv    dword ptr [ebp + 0x8]
        fld     st(0)
        fmul    dword ptr [ebp - 0x10]
        fstp    dword ptr [ebp - 0x10]
        fld     st(0)
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        fmul    dword ptr [ebp - 0x8]
        fstp    dword ptr [ebp - 0x8]
        fmul    dword ptr [ebp - 0x8]
        fxch
        fmul    dword ptr [ebp - 0xc]
        faddp   st(1), st(0)
        fxch
        fmul    dword ptr [ebp - 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [esi + 0xb4]
        fcompp
        fnstsw  ax
        test    ah, 0x1
        jz      L_b953
        mov     eax, dword ptr [edi + 0x8]
        fld     dword ptr [g_0076e10c]
        test    eax, eax
        jz      L_b90e
        fstp    st(0)
        fld     dword ptr [ebp - 0x8]
        fmul    dword ptr [eax + 0x8]
        fld     dword ptr [ebp - 0xc]
        fmul    dword ptr [eax + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [eax]
        faddp   st(1), st(0)
        fchs
L_b90e:
        fcom    dword ptr [g_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_b951
        mov     eax, dword ptr [edi + 0x4]
        fld     st(0)
        fmul    dword ptr [ebp - 0x1c]
        pop     edi
        fld     st(1)
        pop     esi
        fmul    dword ptr [ebp - 0x18]
        fstp    dword ptr [ebp - 0x18]
        fxch
        fmul    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [ebp - 0x18]
        fadd    dword ptr [eax + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ebp - 0x14]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [eax + 0x8]
        mov     esp, ebp
        pop     ebp
        ret     0x4
L_b951:
        fstp    st(0)
L_b953:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
