/*
 * FUN_005058E0 (87 B) — FPU math function
 * Performs vector/matrix operations with floating point
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall func_005058e0(void)
{
    __asm {
        fld     dword ptr [esp+0x08]
        mov     eax, [esp+0x10]
        fsub    dword ptr [esp+0x04]
        mov     edx, [esp+0x04]
        mov     [ecx+0x28], eax
        mov     eax, [esp+0x08]
        fmul    dword ptr [esp+0x10]
        mov     [ecx+0x04], edx
        mov     edx, [esp+0x0C]
        fst     dword ptr [ecx+0x1C]
        mov     [ecx+0x2C], eax
        fadd    dword ptr [esp+0x04]
        mov     [ecx+0x08], edx
        fsubr   dword ptr [esp+0x08]
        fstp    dword ptr [ecx+0x18]
        fld     dword ptr [esp+0x0C]
        fsub    dword ptr [esp+0x08]
        fmul    dword ptr [esp+0x10]
        fst     dword ptr [ecx+0x34]
        fld     dword ptr [esp+0x0C]
        fsub    st, st(1)
        fsub    dword ptr [esp+0x08]
        fstp    dword ptr [ecx+0x30]
        fstp    st(0)
        ret     0x10
    }
}
