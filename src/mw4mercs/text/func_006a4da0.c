/*
 * FUN_006a4da0 (256 B) — Distance/range check. Calls a virtual method to
 * get a value, computes a squared-distance sum, and returns a constant
 * (0x0076d064 or 0x0076c5b0) depending on the comparison.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_0076c5b0;

__declspec(naked) float __cdecl FUN_006a4da0(void)
{
    __asm {
        sub     esp, 0x18
        mov     ecx, dword ptr [esp + 0x20]
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0xd8]
        fstp    dword ptr [esp + 0x20]
        cmp     byte ptr [esp + 0x28], 1
        jnz     L_e72
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx + 0x44]
        test    eax, eax
        jnz     L_dda
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x3c]
L_dda:
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 4], ecx
        mov     dword ptr [esp + 8], edx
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esp + 0xc], eax
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        fsub    dword ptr [esp + 4]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     dword ptr [esp + 0x14], ecx
        fld     dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 8]
        mov     dword ptr [esp + 0x18], edx
        fld     dword ptr [esp + 0x18]
        fsub    dword ptr [esp + 0xc]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fcompp
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 1
        fstp    st(0)
        jnz     L_e95
        fld     dword ptr [g_0076d064]
        pop     esi
        add     esp, 0x18
        ret
L_e72:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x48]
        fld     dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     L_e95
        fld     dword ptr [g_0076d064]
        pop     esi
        add     esp, 0x18
        ret
L_e95:
        fld     dword ptr [g_0076c5b0]
        pop     esi
        add     esp, 0x18
        ret
    }
}
