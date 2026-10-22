/*
 * FUN_005055E0 (62 B) — FPU math function
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_005055e0(void)
{
    /* extern data/function symbols */
    extern float DAT_0076d070;
    __asm {
        fld     dword ptr [esp+0x08]
        mov     eax, [esp+0x0C]
        fsub    dword ptr [esp+0x04]
        mov     edx, [esp+0x04]
        mov     [ecx+0x28], eax
        mov     eax, [esp+0x08]
        fmul    dword ptr [esp+0x0C]
        mov     [ecx+0x04], edx
        mov     [ecx+0x08], eax
        fadd    dword ptr [DAT_0076d070]
        fst     dword ptr [ecx+0x1C]
        fld     dword ptr [esp+0x08]
        fsub    st, st(1)
        fxch    st(1)
        fadd    dword ptr [esp+0x04]
        fsubp   st(1), st(0)
        fstp    dword ptr [ecx+0x18]
        ret     0x0C
    }
}
