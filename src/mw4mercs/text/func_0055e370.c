/*
 * FUN_0055E370 (63 B) — FPU comparison function.
 *
 * Compares float fields of an object. __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0055e370(void)
{
    __asm {
        fld     dword ptr [ecx + 8]
        fld     dword ptr [ecx + 4]
        fcomp   dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        jne     L_ret
        fstp    st(0)
        fld     dword ptr [ecx + 0x0C]
        ret
L_ret:
        fld     dword ptr [ecx + 4]
        _emit   0xD8
        _emit   0x1D
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        fnstsw  ax
        test    ah, 0x40
        jne     L_ret2
        fstp    st(0)
        fld     dword ptr [ecx + 4]
        fdiv    dword ptr [ecx]
        _emit   0xD9
        _emit   0x05
        _emit   0x64
        _emit   0xD0
        _emit   0x76
        _emit   0x00
        _emit   0xD8
        _emit   0xE1
        fmul    dword ptr [ecx + 8]
        fxch    st(1)
        fmul    dword ptr [ecx + 0x0C]
        faddp   st(1), st(0)
L_ret2:
        ret
    }
}
