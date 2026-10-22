/*
 * FUN_005d6d70 (79 B) — __thiscall (ECX = this, 1 stack param, RET 0x4).
 * Computes squared distance from a point to this+8 and compares against
 * the squared radius at this+0x48. Returns 1 if inside, else 0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) int __fastcall FUN_005d6d70(int param1)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [esp + 0x10]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx + 0x8]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [ecx + 0xc]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [ecx + 0x10]
        fst     dword ptr [esp + 0x8]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fcomp   dword ptr [ecx + 0x48]
        fstp    st(0)
        fnstsw  ax
        fstp    st(0)
        test    ah, 0x1
        fstp    st(0)
        jz      l_db7
        mov     eax, 0x1
        add     esp, 0xc
        ret     0x4
    l_db7:
        xor     eax, eax
        add     esp, 0xc
        ret     0x4
    }
}
