/*
 * FUN_0041c540 (66 B) — returns 1 if squared distance between two 3-vectors
 * <= param_3, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041c540(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        mov     ecx, dword ptr [esp+0x8]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx]
        fld     dword ptr [eax+0x4]
        fsub    dword ptr [ecx+0x4]
        fld     dword ptr [eax+0x8]
        fsub    dword ptr [ecx+0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [esp+0xc]
        fstp    st(0)
        __emit  0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        fstp    st(0)
        __emit  0xF6        /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x41
        fstp    st(0)
        jz      L1
        mov     eax, 1
        ret
L1:
        xor     eax, eax
        ret
    }
}
