/*
 * FUN_0065D640 (129 B) — __stdcall, RET 4 (one float* param). Returns float10.
 * Computes squared distance between a global object's position and the given
 * point, returns it as a float bit-pattern; falls back to a global constant.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_7dc6e0;   /* DAT_007dc6e0 */
extern float  g_76c5b0;   /* _DAT_0076c5b0 */

__declspec(naked) float __stdcall FUN_0065d640(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov     eax, dword ptr [g_7dc6e0]
        test    eax, eax
        jz      L_b5
        mov     eax, dword ptr [eax + 0x4c]
        test    eax, eax
        jz      L_b5
        mov     eax, dword ptr [eax + 0x24]
        test    eax, eax
        jz      L_b5
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        mov     edx, dword ptr [eax + 0xac]
        mov     eax, dword ptr [ebp + 8]
        fsub    dword ptr [eax]
        mov     dword ptr [ebp - 0xc], ecx
        fld     dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x8], edx
        fsub    dword ptr [eax + 4]
        fld     dword ptr [ebp - 0x8]
        fsub    dword ptr [eax + 8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    dword ptr [ebp + 8]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        mov     eax, dword ptr [ebp + 8]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 4], eax
        fld     dword ptr [ebp - 4]
        mov     esp, ebp
        pop     ebp
        ret     4
L_b5:
        fld     dword ptr [g_76c5b0]
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
