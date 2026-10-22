/*
 * FUN_0041bb80 (376 B) — quaternion slerp (__thiscall).
 * ECX = output quaternion; stack args: q1, q2, t.
 * Computes dot product, optionally negates q2, then either
 * spherical-linear-interpolates (acos/sin path) or lerps.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076c5b0;
extern float g_0076d22c;
extern float g_0076d064;
extern void __cdecl FUN_0075db50(void);   /* _CIacos */
extern void __cdecl FUN_0041b680(void);

__declspec(naked) void FUN_0041bb80(void)
{
    __asm {
        sub     esp, 0x10
        push    esi
        mov     esi, dword ptr [esp+0x18]
        fld     dword ptr [esi+0x8]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp+0x20]
        fmul    dword ptr [ecx+0x8]
        fld     dword ptr [esi+0x4]
        fmul    dword ptr [ecx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ecx+0xc]
        fmul    dword ptr [esi+0xc]
        faddp   st(1), st(0)
        fld     dword ptr [esi]
        fmul    dword ptr [ecx]
        faddp   st(1), st(0)
        fcom    dword ptr [g_0076c5b0]
        fst     dword ptr [esp+0x1c]
        __emit  0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L1
        fchs
        fst     dword ptr [esp+0x1c]
        fld     dword ptr [ecx]
        fchs
        fst     dword ptr [esp+0x8]
        fld     dword ptr [ecx+0x4]
        fchs
        fstp    dword ptr [esp+0xc]
        fld     dword ptr [ecx+0x8]
        fchs
        fstp    dword ptr [esp+0x10]
        fstp    dword ptr [esp+0x14]
        jmp     L2
L1:
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx+0x4]
        mov     dword ptr [esp+0x8], eax
        mov     eax, dword ptr [ecx+0x8]
        mov     ecx, dword ptr [ecx+0xc]
        mov     dword ptr [esp+0xc], edx
        mov     dword ptr [esp+0x10], eax
        mov     dword ptr [esp+0x14], ecx
L2:
        fcomp   dword ptr [g_0076d22c]
        __emit  0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L3
        fld     dword ptr [esp+0x1c]
        call    FUN_0075db50
        fld     st(0)
        fmul    dword ptr [esp+0x24]
        mov     ecx, edi
        fsin
        fstp    dword ptr [esp+0x1c]
        fld     dword ptr [g_0076d064]
        fsub    dword ptr [esp+0x24]
        fmul    st(0), st(1)
        fsin
        fstp    dword ptr [esp+0x24]
        fsin
        fdivr   dword ptr [g_0076d064]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [esi]
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [esp+0x8]
        faddp   st(1), st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [edi]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [esp+0xc]
        faddp   st(1), st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [edi+0x4]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [esi+0x8]
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [esp+0x10]
        faddp   st(1), st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [edi+0x8]
        fld     dword ptr [esp+0x1c]
        fmul    dword ptr [esp+0x14]
        fld     dword ptr [esp+0x24]
        fmul    dword ptr [esi+0xc]
        faddp   st(1), st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [edi+0xc]
        fstp    st(0)
        call    FUN_0041b680
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     0xc
L3:
        fld     dword ptr [esp+0x8]
        mov     ecx, edi
        fsub    dword ptr [esi]
        fmul    dword ptr [esp+0x24]
        fadd    dword ptr [esi]
        fstp    dword ptr [edi]
        fld     dword ptr [esp+0xc]
        fsub    dword ptr [esi+0x4]
        fmul    dword ptr [esp+0x24]
        fadd    dword ptr [esi+0x4]
        fstp    dword ptr [edi+0x4]
        fld     dword ptr [esp+0x10]
        fsub    dword ptr [esi+0x8]
        fmul    dword ptr [esp+0x24]
        fadd    dword ptr [esi+0x8]
        fstp    dword ptr [edi+0x8]
        fld     dword ptr [esp+0x14]
        fsub    dword ptr [esi+0xc]
        fmul    dword ptr [esp+0x24]
        fadd    dword ptr [esi+0xc]
        fstp    dword ptr [edi+0xc]
        call    FUN_0041b680
        mov     eax, edi
        pop     edi
        pop     esi
        add     esp, 0x10
        ret     0xc
    }
}
