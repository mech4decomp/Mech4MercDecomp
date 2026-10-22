/*
 * FUN_005a68e0 (105 B) — FPU math function.
 *
 * Computes a value based on 3 float params and a field at this+0x1b8.
 *
 * __thiscall (ECX = this), RET 0xC (3 float params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005a68e0(float param1, float param2, float param3)
{
    

extern int DAT_0076c5b0;
extern int DAT_00784aec;
extern int DAT_007b4384;
extern int DAT_007b220c;
__asm {
fld     dword ptr [esp + 0xc]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      not_equal
        fld dword ptr [DAT_00784aec]
        ret     0xc
not_equal:
        fld     dword ptr [esp + 0x4]
        fdiv    dword ptr [esp + 0xc]
        fld     dword ptr [ecx + 0x1b8]
        fld dword ptr [DAT_007b4384]
        fadd    st, st(1)
        fstp    dword ptr [esp + 0xc]
        fmul    st, st(1)
        fmul    st, st(1)
        fld     dword ptr [esp + 0x8]
        fadd    st, st(0)
        fsubp   st(1), st
        fmul    dword ptr [esp + 0xc]
        fcom dword ptr [DAT_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jz      do_sqrt
        fstp    st(0)
        fstp    st(0)
        fld dword ptr [DAT_00784aec]
        ret     0xc
do_sqrt:
        fsqrt
        fdiv    dword ptr [esp + 0xc]
        fsubp   st(1), st
        ret     0xc
    }


}
