/*
 * FUN_00482380 (240 B) — __thiscall MLR light/tube helper. Computes a
 * squared-length scalar from three this+0x54/0x64/0x74 components, applies
 * a range clamp (this+0x80/0x84/0x88), and if a global gate (0x76fa8c >
 * 0x7b220c) passes, accumulates a scaled offset into the caller's float[3]
 * (param at [ebp+8]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076fa8c;
extern float g_007b220c;

__declspec(naked) void FUN_00482380(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        fld     dword ptr [ecx + 0x54]
        lea     eax, [ecx + 0xc]
        fld     dword ptr [ecx + 0x64]
        mov     edx, dword ptr [eax]
        fld     dword ptr [ecx + 0x74]
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [eax + 0x4]
        fld     st(0)
        mov     eax, dword ptr [eax + 0x8]
        fmul    st(0), st(1)
        fld     st(2)
        mov     dword ptr [ebp - 0x10], edx
        fmul    st(0), st(3)
        mov     dword ptr [ebp - 0xc], eax
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp - 0x4]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp - 0x4]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x8], eax
        fld     dword ptr [ebp - 0x8]
        fst     dword ptr [ebp - 0x4]
        fcomp   dword ptr [ecx + 0x80]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      L1
        fld     dword ptr [g_0076d064]
        jmp     L2
L1:
        fld     dword ptr [ebp - 0x4]
        fcomp   dword ptr [ecx + 0x84]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x01
        jz      L4
        fld     dword ptr [ecx + 0x84]
        fsub    dword ptr [ebp - 0x4]
        fmul    dword ptr [ecx + 0x88]
L2:
        fld     dword ptr [ebp - 0x14]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x14]
        fld     dword ptr [ebp - 0x10]
        fmul    st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        fmul    dword ptr [ebp - 0xc]
        fld     dword ptr [g_0076fa8c]
        fcomp   dword ptr [g_007b220c]
        __emit 0xDF
        __emit 0xE0
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L3
        fld     dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp + 0x8]
        fmul    dword ptr [g_0076fa8c]
        fld     dword ptr [ebp - 0x10]
        fmul    dword ptr [g_0076fa8c]
        fstp    dword ptr [ebp - 0x10]
        fxch    st(1)
        fmul    dword ptr [g_0076fa8c]
        fstp    dword ptr [ebp - 0xc]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld     dword ptr [ebp - 0x10]
        fadd    dword ptr [eax + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ebp - 0xc]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [eax + 0x8]
        mov     esp, ebp
        pop     ebp
        ret     0x4
L3:
        fstp    st(0)
L4:
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
