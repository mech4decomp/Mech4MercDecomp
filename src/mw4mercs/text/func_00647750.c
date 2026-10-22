/*
 * FUN_00647750 (118 B) — __fastcall (ECX = this), returns float in ST0.
 *
 * Piecewise interpolation helper using FPU comparisons against fields
 * at this+0x34/0x38/0x3c/0x40/0x44 and a global constant at 0x0076d064.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float __cdecl FUN_00707e70(int);

__declspec(naked) float __fastcall FUN_00647750(void)
{
    __asm {
        push    ecx
        push    esi
        push    0x0
        mov     esi, ecx
        call    FUN_00707e70
        fst     dword ptr [esp + 0x4]
        fcomp   dword ptr [esi + 0x44]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0064776f
        fld     dword ptr [esi + 0x3c]
        pop     esi
        pop     ecx
        ret
L_0064776f:
        fld     dword ptr [esp + 0x4]
        fcomp   dword ptr [esi + 0x40]
        fnstsw  ax
        test    ah, 0x1
        jz      L_00647783
        fld     dword ptr [esi + 0x34]
        pop     esi
        pop     ecx
        ret
L_00647783:
        fld     dword ptr [esi + 0x40]
        fadd    dword ptr [esi + 0x38]
        fld     dword ptr [esp + 0x4]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x1
        jz      L_006477b1
        push    0x0
        fstp    st(0)
        call    FUN_00707e70
        fsub    dword ptr [esi + 0x40]
        fdiv    dword ptr [esi + 0x38]
        fsubr   dword ptr [g_0076d064]
        fmul    dword ptr [esi + 0x34]
        pop     esi
        pop     ecx
        ret
L_006477b1:
        fld     dword ptr [esp + 0x4]
        fsub    st(0), st(1)
        fld     dword ptr [esi + 0x44]
        fsub    st(0), st(2)
        fdivp   st(1), st(0)
        fmul    dword ptr [esi + 0x3c]
        pop     esi
        fstp    st(1)
        pop     ecx
        ret
    }
}
