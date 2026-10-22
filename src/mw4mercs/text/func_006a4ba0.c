/*
 * FUN_006a4ba0 (143 B) — __cdecl, 3 stack params, RET (C3). Calls two
 * virtual methods (vtable+0x34 / +0x3c) and one through +0xf8, then does a
 * 2D distance-squared comparison in FPU and returns one of two constants
 * (0x0076d064 / 0x0076c5b0) in ST0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d064;            /* 0x0076d064 */
extern float g_76c5b0;            /* 0x0076c5b0 */

__declspec(naked) float __cdecl FUN_006a4ba0(int p1, int p2, float p3)
{
    __asm {
        sub     esp, 0x18
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     eax, dword ptr [esi]
        mov     dword ptr [esp + 0x4], ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0xc], edx
        call    dword ptr [eax + 0x3c]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [eax]
        push    0x1
        push    ecx
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0xf8]
        fld     dword ptr [esp + 0x4]
        fsub    dword ptr [esp + 0x10]
        pop     esi
        fld     dword ptr [esp + 0x8]
        fsub    dword ptr [esp + 0x14]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fcompp
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jnz     l_c25
        fld     dword ptr [g_76d064]
        add     esp, 0x18
        ret
    l_c25:
        fld     dword ptr [g_76c5b0]
        add     esp, 0x18
        ret
    }
}
