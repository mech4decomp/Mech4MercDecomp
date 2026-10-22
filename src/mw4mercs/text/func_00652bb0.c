/*
 * FUN_00652bb0 (196 B) — Clamp a computed distance value to [0x76c5b0, 0x76d064].
 *
 * Computes fVar1 = 0x76d064 - ((f1*f1 + f2*f2) - c1*c1) / (c2*c2 - c1*c1)
 * where f1/f2 are differences of 0x8c/0xac fields of two objects' 0xd8
 * sub-objects, then clamps the result into [0x76c5b0, 0x76d064].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_794924;   /* 0x00794924 */
extern float g_794928;   /* 0x00794928 */
extern float g_76d064;   /* 0x0076d064 */
extern float g_76c5b0;   /* 0x0076c5b0 */

__declspec(naked) float __cdecl FUN_00652bb0(int param_1, int param_2)
{
    __asm {
        sub     esp, 0x18
        mov     eax, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0xac]
        mov     edx, dword ptr [esp + 0x1c]
        add     eax, 0x80
        mov     eax, dword ptr [edx + 0xd8]
        fld     dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     eax, dword ptr [eax + 0x2c]
        fsubrp  st(1), st(0)
        mov     dword ptr [esp + 0x8], eax
        fld     dword ptr [esp + 0x8]
        mov     dword ptr [esp + 0x14], ecx
        fsub    dword ptr [esp + 0x14]
        fld     dword ptr [g_794924]
        fmul    dword ptr [g_794924]
        fstp    dword ptr [esp + 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fsub    dword ptr [esp + 0x20]
        fld     dword ptr [g_794928]
        fmul    dword ptr [g_794928]
        fsub    dword ptr [esp + 0x20]
        fdivp   st(1), st(0)
        fsubr   dword ptr [g_76d064]
        fstp    dword ptr [esp + 0x20]
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_ret_hi
        fld     dword ptr [g_76c5b0]
        add     esp, 0x18
        ret
    l_ret_hi:
        fld     dword ptr [esp + 0x20]
        fcomp   dword ptr [g_76d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_ret_val
        fld     dword ptr [g_76d064]
        add     esp, 0x18
        ret
    l_ret_val:
        fld     dword ptr [esp + 0x20]
        add     esp, 0x18
        ret
    }
}
