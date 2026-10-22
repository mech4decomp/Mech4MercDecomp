/*
 * FUN_004c7c70 (158 B) — MLR frustum/plane test. Computes signed distance of
 * a point against 6 planes; returns a 6-bit mask of which planes the point
 * is outside, or 0xffffffff if inside all. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004c7c70(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx+0xfc]
        mov     edx, dword ptr [ecx+0x10c]
        push    ebx
        mov     ebx, dword ptr [esp+0x14]
        push    esi
        mov     dword ptr [esp+0x8], eax
        mov     eax, dword ptr [ecx+0x11c]
        push    edi
        xor     edi, edi
        mov     dword ptr [esp+0x10], edx
        mov     dword ptr [esp+0x14], eax
        lea     edx, [ebx+0x1ac]
        xor     esi, esi
L_7ca2:
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+0x4]
        fld     dword ptr [esp+0x14]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esp+0xc]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fsub    dword ptr [edx+0xc]
        fcom    dword ptr [ecx+0x12c]
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6            /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_7d00
        fld     dword ptr [ecx+0x12c]
        shl     edi, 1
        fchs
        fxch
        fcompp
        __emit 0xDF            /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit 0xE0
        __emit 0xF6            /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_7ce2
        or      edi, 1
L_7ce2:
        inc     esi
        add     edx, 0x10
        cmp     esi, 6
        jl      L_7ca2
        test    edi, edi
        jnz     L_7cf5
        mov     dword ptr [ebx+0x264], ecx
L_7cf5:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     4
L_7d00:
        pop     edi
        fstp    st(0)
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0xc
        ret     4
    }
}
