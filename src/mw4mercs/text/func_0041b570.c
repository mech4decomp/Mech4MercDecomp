/*
 * FUN_0041b570 (208 B) — __thiscall. Rotates a 4-vector by an angle derived
 * from atan2(length, w) (fpatan + fsincos); identity fallback when length ~ 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_007b220c;
extern int   g_007b8cd8;
extern int   g_007b8cdc;
extern int   g_007b8ce0;
extern int   g_007b8ce4;

__declspec(naked) void FUN_0041b570(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        push    esi
        mov     esi, dword ptr [ebp+8]
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
        fsqrt
        fstp    dword ptr [ebp+8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [ebp+8]
        fabs
        fld     dword ptr [g_007b220c]
        fcompp
        __emit 0xDF          /* fnstsw ax: no-WAIT form */
        __emit 0xE0
        __emit 0xF6          /* test ah,0x1 */
        __emit 0xC4
        __emit 0x01
        jnz     L_b5dd
        mov     eax, dword ptr [g_007b8cd8]
        mov     edx, dword ptr [g_007b8cdc]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [g_007b8ce0]
        mov     dword ptr [ecx+4], edx
        mov     edx, dword ptr [g_007b8ce4]
        mov     dword ptr [ecx+8], eax
        mov     dword ptr [ecx+0xc], edx
        mov     eax, ecx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L_b5dd:
        fld     dword ptr [esi+0xc]
        mov     eax, dword ptr [ebp+8]
        fstp    dword ptr [ebp-0xc]
        fld     dword ptr [ebp+8]
        mov     dword ptr [ebp-0x10], eax
        fld     dword ptr [ebp-0xc]
        fpatan
        lea     edx, [ebp+0xc]
        lea     eax, [ebp-0x10]
        mov     dword ptr [ebp-4], edx
        mov     dword ptr [ebp-8], eax
        fmul    dword ptr [ebp+0xc]
        fstp    dword ptr [ebp+0xc]
        push    ebx
        push    edx
        mov     ebx, dword ptr [ebp-8]
        mov     edx, dword ptr [ebp-4]
        fld     dword ptr [edx]
        fsincos
        fstp    dword ptr [ebx+4]
        fstp    dword ptr [ebx]
        pop     edx
        pop     ebx
        fld     dword ptr [ebp-0x10]
        mov     edx, dword ptr [ebp-0xc]
        fdiv    dword ptr [ebp+8]
        mov     dword ptr [ecx+0xc], edx
        mov     eax, ecx
        fld     st(0)
        fmul    dword ptr [esi]
        fstp    dword ptr [ecx]
        fld     st(0)
        fmul    dword ptr [esi+4]
        fstp    dword ptr [ecx+4]
        fmul    dword ptr [esi+8]
        pop     esi
        pop     ebx
        fstp    dword ptr [ecx+8]
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
