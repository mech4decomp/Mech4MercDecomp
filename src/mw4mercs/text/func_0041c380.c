/*
 * FUN_0041c380 (107 B) — quaternion normalization (__fastcall, ECX=this).
 * If |q·q - pi| > threshold, re-normalizes via FUN_0041b680.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_0076d064;
extern float g_007b220c;
extern void __cdecl FUN_0041b680(void);

__declspec(naked) void FUN_0041c380(void)
{
    __asm {
        fld     dword ptr [ecx+0xc]
        sub     esp, 0x10
        fld     dword ptr [ecx+0x8]
        fld     dword ptr [ecx+0x4]
        fld     dword ptr [ecx]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fld     st(4)
        fmul    st(0), st(5)
        faddp   st(1), st(0)
        fsub    dword ptr [g_0076d064]
        fabs
        fstp    st(4)
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
        fld     dword ptr [g_007b220c]
        fcompp
        __emit  0xDF        /* fnstsw ax: MSVC6 inserts 9B WAIT prefix */
        __emit  0xE0
        __emit  0xF6        /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L1
        mov     eax, dword ptr [ecx]
        mov     edx, dword ptr [ecx+0x4]
        __emit  0x89        /* mov [esp+0],eax: MSVC6 drops 00 disp byte for [esp] */
        __emit  0x44
        __emit  0x24
        __emit  0x00
        mov     eax, dword ptr [ecx+0x8]
        mov     ecx, dword ptr [ecx+0xc]
        mov     dword ptr [esp+0xc], ecx
        __emit  0x8D        /* lea ecx,[esp+0]: MSVC6 drops 00 disp byte for [esp] */
        __emit  0x4C
        __emit  0x24
        __emit  0x00
        mov     dword ptr [esp+0x4], edx
        mov     dword ptr [esp+0x8], eax
        call    FUN_0041b680
L1:
        add     esp, 0x10
        ret
    }
}
