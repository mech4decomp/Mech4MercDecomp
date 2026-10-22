/*
 * FUN_0041c910 (65 B) — squared-length comparison: returns 1 if
 * dot(v,v) <= threshold, else 0. __cdecl: [esp+4]=float[4], [esp+8]=threshold.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041c910(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        fld     dword ptr [eax+0xc]
        fld     dword ptr [eax+0x8]
        fld     dword ptr [eax+0x4]
        fld     dword ptr [eax]
        fld     st(0)
        fmul    st(0), st(1)
        __emit 0xD9   /* fld st(2): MSVC6 rejects fld st(n) for n>0 */
        __emit 0xC2
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        __emit 0xD9   /* fld st(3): MSVC6 rejects fld st(n) for n>0 */
        __emit 0xC3
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        __emit 0xD9   /* fld st(4): MSVC6 rejects fld st(n) for n>0 */
        __emit 0xC4
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        fcomp   dword ptr [esp+0x8]
        fstp    st(0)
        fstp    st(0)
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        fstp    st(0)
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        fstp    st(0)
        jz      L1
        mov     eax, 0x1
        ret
L1:
        xor     eax, eax
        ret
    }
}
