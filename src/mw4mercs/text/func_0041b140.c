/*
 * FUN_0041b140 (208 B) — __thiscall. Rotates a 4-vector by an angle derived
 * from the vector's length (fsincos path); identity fallback when length ~ 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;
extern int   g_007b8cd8;
extern int   g_007b8cdc;
extern int   g_007b8ce0;
extern int   g_007b8ce4;
extern float g_0076d070;
extern float __cdecl FUN_0041d780(float);

__declspec(naked) void FUN_0041b140(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp+8]
        fld     dword ptr [edi+8]
        mov     esi, ecx
        fld     dword ptr [edi+4]
        fld     dword ptr [edi]
        fld     st(0)
        fmul    st(0), st(1)   /* reversed operands -> D8 C9 (FMUL ST1,ST0) */
        fld     st(2)
        fmul    st(0), st(3)   /* reversed operands -> D8 CB */
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)   /* reversed operands -> D8 CC */
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [ebp-4]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [ebp-4]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_b1b1
        mov     eax, dword ptr [g_007b8cd8]
        mov     ecx, dword ptr [g_007b8cdc]
        mov     edx, dword ptr [g_007b8ce0]
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [g_007b8ce4]
        mov     dword ptr [esi+0xc], eax
        mov     dword ptr [esi+4], ecx
        mov     dword ptr [esi+8], edx
        mov     eax, esi
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_b1b1:
        mov     ecx, dword ptr [ebp-4]
        push    ecx
        call    FUN_0041d780
        fmul    dword ptr [g_0076d070]
        lea     edx, [ebp+8]
        lea     eax, [ebp-0x14]
        fstp    dword ptr [ebp+8]
        add     esp, 4
        mov     dword ptr [ebp-8], edx
        mov     dword ptr [ebp-0xc], eax
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ebp-8]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        fld     dword ptr [ebp-0x14]
        fdiv    dword ptr [ebp-4]
        mov     ecx, dword ptr [ebp-0x10]
        mov     dword ptr [esi+0xc], ecx
        mov     eax, esi
        fld     st(0)
        fmul    dword ptr [edi]
        fstp    dword ptr [esi]
        fld     st(0)
        fmul    dword ptr [edi+4]
        fstp    dword ptr [esi+4]
        fmul    dword ptr [edi+8]
        pop     edi
        fstp    dword ptr [esi+8]
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
