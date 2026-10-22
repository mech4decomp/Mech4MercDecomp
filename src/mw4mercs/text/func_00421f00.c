/*
 * FUN_00421f00 (311 B) — __thiscall MLR light/vertex culling helper.
 * Computes squared-distance (via FPU), converts to a half-float-ish
 * representation, and does range checks against the light's bounds,
 * returning a byte "level of detail" value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- extern float constants ---- */
extern float g_007b220c;
extern float g_0076d064;
extern float g_0076dd64;
extern float g_0076d070;
extern float g_0076dd60;

__declspec(naked) void FUN_00421f00(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        fld     dword ptr [esi]
        fsub    dword ptr [ecx + 0x20]
        fld     dword ptr [esi + 0x4]
        fsub    dword ptr [ecx + 0x24]
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [ecx + 0x28]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 0x8]
        sar     eax, 0x1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 0x4], eax
        fld     dword ptr [ebp - 0x4]
        fstp    dword ptr [ebp + 0x8]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [ecx]
        fcomp   dword ptr [ebp + 0x8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L421f5d
        or      bl, 0xff
        jmp     L421f9a
L421f5d:
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [ebp + 0x8]
        fcomp   dword ptr [ecx + 0x4]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L421f74
        xor     bl, bl
        jmp     L421f9a
L421f74:
        fld     dword ptr [ebp + 0x8]
        fsub    dword ptr [ecx]
        fmul    dword ptr [ecx + 0x8]
        fsubr   dword ptr [g_0076d064]
        fmul    dword ptr [g_0076dd64]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x8]
        mov     bl, byte ptr [ebp + 0x8]
L421f9a:
        mov     dl, byte ptr [ecx + 0x1c]
        cmp     dl, 0xff
        jnc     L42202d
        fld     dword ptr [esi]
        fsub    dword ptr [ecx + 0x2c]
        fld     dword ptr [esi + 0x4]
        fsub    dword ptr [ecx + 0x30]
        fld     dword ptr [esi + 0x8]
        fsub    dword ptr [ecx + 0x34]
        fmul    dword ptr [ecx + 0x40]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x3c]
        faddp   st(1), st(0)
        fxch    st(1)
        fmul    dword ptr [ecx + 0x38]
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 0x8]
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [ecx + 0xc]
        fcomp   dword ptr [ebp + 0x8]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jz      L42201d
        fld     dword ptr [g_007b220c]
        fadd    dword ptr [ebp + 0x8]
        fcomp   dword ptr [ecx + 0x10]
        /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xDF
        __emit 0xE0
        /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jnz     L421ff6
        or      dl, 0xff
        jmp     L42201d
L421ff6:
        fld     dword ptr [ebp + 0x8]
        and     edx, 0xff
        fsub    dword ptr [ecx + 0xc]
        mov     dword ptr [ebp + 0x8], edx
        fmul    dword ptr [ecx + 0x18]
        fiadd   dword ptr [ebp + 0x8]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [ebp + 0x8]
        mov     dl, byte ptr [ebp + 0x8]
L42201d:
        cmp     bl, dl
        mov     al, bl
        jc      L42202f
        pop     esi
        mov     al, dl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L42202d:
        mov     al, bl
L42202f:
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
