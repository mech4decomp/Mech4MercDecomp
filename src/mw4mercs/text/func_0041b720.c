/*
 * FUN_0041b720 (221 B) — __fastcall (ECX=this). Fast quaternion-normalize
 * variant using a bit-twiddled rsqrt approximation (SAR + 0x1fc00000).
 * If a global flag is clear, delegates to FUN_0041b680.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char  g_007b2201;
extern float g_0076d064;
extern float g_0076c5b0;
extern void __cdecl FUN_0041b680(void);
extern void __cdecl FUN_0041c380(void);

__declspec(naked) void FUN_0041b720(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        mov     al, byte ptr [g_007b2201]
        test    al, al
        push    esi
        mov     esi, ecx
        jnz     L_b73c
        call    FUN_0041b680
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_b73c:
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
        jz      L_b7bb
        fld     dword ptr [g_0076d064]
        fsub    st(0), st(1)
        fstp    dword ptr [ebp-4]
        fstp    st(0)
        mov     eax, dword ptr [ebp-4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp-8], eax
        fld     dword ptr [esi+0xc]
        fcomp   dword ptr [g_0076c5b0]
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jz      L_b7a7
        fld     dword ptr [esi]
        fchs
        fstp    dword ptr [esi]
        fld     dword ptr [esi+4]
        fchs
        fstp    dword ptr [esi+4]
        fld     dword ptr [esi+8]
        fchs
        fstp    dword ptr [esi+8]
L_b7a7:
        mov     eax, dword ptr [ebp-8]
        mov     ecx, esi
        mov     dword ptr [esi+0xc], eax
        call    FUN_0041c380
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_b7bb:
        fstp    dword ptr [ebp-8]
        mov     eax, dword ptr [ebp-8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp-4], eax
        fld     dword ptr [ebp-4]
        mov     ecx, esi
        fdivr   dword ptr [g_0076d064]
        mov     dword ptr [esi+0xc], 0
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
        mov     esp, ebp
        pop     ebp
        ret
    }
}
