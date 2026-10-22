/*
 * FUN_0041b680 (152 B) — __fastcall (ECX=this). Normalizes a 4-vector
 * (quaternion): if |v|^2 <= 1, sets w=sqrt(1-|v|^2) (flipping signs if w<0);
 * else scales xyz by 1/sqrt(|v|^2) and zeroes w. Calls FUN_0041c380.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;
extern void __cdecl FUN_0041c380(void);

__declspec(naked) void FUN_0041b680(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        fld     dword ptr [esi+8]
        fld     dword ptr [esi+4]
        fld     dword ptr [esi]
        fld     st(0)
        fmul    st(0), st(1)   /* reversed operands -> D8 C9 */
        fld     st(2)
        fmul    st(0), st(3)   /* reversed operands -> D8 CB */
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)   /* reversed operands -> D8 CC */
        faddp   st(1), st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fcom    dword ptr [g_0076d064]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x41 */
        __emit 0xC4
        __emit 0x41
        jz      L_b6ea
        fsubr   dword ptr [g_0076d064]
        fsqrt
        fld     dword ptr [esi+0xc]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b6dc
        fld     dword ptr [esi]
        fchs
        fstp    dword ptr [esi]
        fld     dword ptr [esi+4]
        fchs
        fstp    dword ptr [esi+4]
        fld     dword ptr [esi+8]
        fchs
        fstp    dword ptr [esi+8]
L_b6dc:
        mov     ecx, esi
        fstp    dword ptr [esi+0xc]
        call    FUN_0041c380
        mov     eax, esi
        pop     esi
        ret
L_b6ea:
        fsqrt
        mov     ecx, esi
        mov     dword ptr [esi+0xc], 0
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [esi]
        fstp    dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [esi+4]
        fstp    dword ptr [esi+4]
        fmul    dword ptr [esi+8]
        fstp    dword ptr [esi+8]
        call    FUN_0041c380
        mov     eax, esi
        pop     esi
        ret
    }
}
