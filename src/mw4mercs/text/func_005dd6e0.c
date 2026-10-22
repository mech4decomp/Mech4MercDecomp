/*
 * FUN_005dd6e0 (94 B) — __thiscall, RET 4 (one stack param).
 *
 * Computes a dot-product of (this->[0x170]->[0xd8] + 0x80) minus the
 * param vector, using FPU stack ops. Result left on FPU stack.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl func_005dd6e0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 0x170]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        mov     edx, dword ptr [eax + 0xac]
        add     eax, 0x80
        mov     eax, dword ptr [esp + 0x10]
        fsub    dword ptr [eax]
        mov     dword ptr [esp + 0x4], ecx
        fld     dword ptr [esp + 0x4]
        mov     dword ptr [esp + 0x8], edx
        fsub    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x8]
        fsub    dword ptr [eax + 0x8]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        add     esp, 0xc
        ret     4
    }
}
