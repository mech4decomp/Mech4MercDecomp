/*
 * FUN_00666010 (221 B) — __thiscall (ECX = this), RET 8, 2 stack params
 * (a double). Advances an animation/position state: clamps a counter,
 * steps a double accumulator, and integrates velocity into position via
 * FUN_00707e70 (random).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_76d970;   /* 0x0076d970 */
extern double g_77ed38;   /* 0x0077ed38 */
extern float  g_76c5b0;   /* 0x0076c5b0 */

extern float __cdecl FUN_00707e70(int a);

__declspec(naked) void __stdcall FUN_00666010(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        fld     qword ptr [esi + 0x54]
        fcomp   qword ptr [g_76d970]
        fld     qword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x40
        jz      L_2a
        fst     qword ptr [esi + 0x54]
    L_2a:
        fcom    qword ptr [esi + 0x54]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_65
        mov     ecx, 0x14
        mov     edx, 0xf
    L_3e:
        mov     eax, dword ptr [esi + 0x5c]
        add     eax, ecx
        cmp     eax, 0xff
        mov     dword ptr [esi + 0x5c], eax
        jl      L_50
        mov     dword ptr [esi + 0x5c], edx
    L_50:
        fld     qword ptr [esi + 0x54]
        fadd    qword ptr [g_77ed38]
        fst     qword ptr [esi + 0x54]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_3e
    L_65:
        fld     dword ptr [esi + 0x60]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_e6
        push    0x0
        fstp    st(0)
        call    FUN_00707e70
        fcomp   dword ptr [esi + 0x60]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_a1
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x60], 0x0
        mov     dword ptr [esi + 0x30], ecx
        pop     esi
        ret     0x8
    L_a1:
        push    0x0
        call    FUN_00707e70
        fsub    dword ptr [esi + 0x70]
        push    0x0
        fld     st(0)
        fmul    dword ptr [esi + 0x68]
        fadd    dword ptr [esi + 0x14]
        fstp    dword ptr [esi + 0x14]
        fld     st(0)
        fmul    dword ptr [esi + 0x6c]
        fadd    dword ptr [esi + 0x18]
        fstp    dword ptr [esi + 0x18]
        fmul    dword ptr [esi + 0x64]
        fadd    dword ptr [esi + 0x50]
        fstp    dword ptr [esi + 0x50]
        call    FUN_00707e70
        mov     edx, dword ptr [esp + 0x8]
        fstp    dword ptr [esi + 0x70]
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x2c], edx
        mov     dword ptr [esi + 0x30], eax
        pop     esi
        ret     0x8
    L_e6:
        fstp    qword ptr [esi + 0x2c]
        pop     esi
        ret     0x8
    }
}
