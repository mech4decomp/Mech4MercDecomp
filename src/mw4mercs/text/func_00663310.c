/*
 * FUN_00663310 (117 B) — Vector math helper (dot product of differences).
 *
 * __cdecl, RET 0 (two stack params). Pure FPU computation: negates
 * several source components, accumulates differences, and computes a
 * dot product. Result left on the FPU stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_00663310(int param1, int param2)
{
    __asm {
        sub     esp, 0x24
        mov     eax, dword ptr [esp + 0x2c]
        fld     dword ptr [eax + 8]
        mov     ecx, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [eax + 0x2c]
        fchs
        fld     dword ptr [eax + 0x18]
        mov     dword ptr [esp + 4], ecx
        fchs
        fstp    dword ptr [esp + 0x10]
        fld     dword ptr [eax + 0x28]
        mov     dword ptr [esp + 8], edx
        fchs
        fstp    dword ptr [esp + 0x14]
        fadd    dword ptr [eax + 0xc]
        mov     eax, dword ptr [esp + 0x28]
        fld     dword ptr [esp + 4]
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 8]
        fadd    dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x20]
        fsubr   dword ptr [eax]
        fld     dword ptr [eax + 4]
        fsub    dword ptr [esp + 0x1c]
        fld     dword ptr [eax + 8]
        fsub    dword ptr [esp + 0x20]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        add     esp, 0x24
        ret
    }
}
