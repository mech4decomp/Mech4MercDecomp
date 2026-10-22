/*
 * FUN_0054cf80 (182 B) — __thiscall method.
 * ECX = this pointer, float param on stack (RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0076c5b0;
extern float DAT_0076d064;

__declspec(naked) void func_0054cf80(void)
{
    __asm {
        fld     dword ptr [ecx + 0x18C]
        fsub    dword ptr [ecx + 0x190]

        fld     dword ptr [esp + 4]
        fcomp
        fnstsw  ax
        test    ah, 1
        jz      L_0054CFD9

        fdivr   dword ptr [esp + 4]

        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      L_0054CFBB

        fstp    st(0)
        fld     dword ptr [DAT_0076c5b0]
        fsub    dword ptr [DAT_0076d064]
        ret     4

L_0054CFBB:
        fcom    dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054CFD0

        fstp    st(0)
        fld     dword ptr [DAT_0076d064]

L_0054CFD0:
        fsub    dword ptr [DAT_0076d064]
        ret     4

L_0054CFD9:
        fstp    st(0)
        fld     dword ptr [ecx + 0x194]
        fadd    dword ptr [ecx + 0x18C]

        fld     dword ptr [esp + 4]
        fcomp
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D02B

        fld     dword ptr [esp + 4]
        fsub    st(0), st(1)
        fld     dword ptr [DAT_0076d064]
        fsub    st(0), st(2)
        fdivp   st(1), st(0)
        fstp    st(1)

        fcom    dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jnz     L_0054D02B

        fcom    dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054D033

        fstp    st(0)
        fld     dword ptr [DAT_0076d064]
        ret     4

L_0054D02B:
        fstp    st(0)
        fld     dword ptr [DAT_0076c5b0]

L_0054D033:
        ret     4
    }
}
