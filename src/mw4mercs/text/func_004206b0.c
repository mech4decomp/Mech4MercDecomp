/*
 * FUN_004206b0 (141 B) — __thiscall (RET 0x4). Copies/transforms a 3x3
 * matrix (12 floats) from [EDX] to [EAX=this], computing cross-product
 * style rows with FPU. Writes all 12 floats to the `this` object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004206b0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        fld     dword ptr [edx + 0xc]
        mov     eax, ecx
        fmul    dword ptr [edx]
        mov     ecx, dword ptr [edx]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [edx + 0x4]
        fchs
        mov     dword ptr [eax + 0x10], ecx
        mov     ecx, dword ptr [edx + 0x8]
        fld     dword ptr [edx + 0x10]
        fmul    dword ptr [edx + 0x1c]
        mov     dword ptr [eax + 0x20], ecx
        mov     ecx, dword ptr [edx + 0x10]
        mov     dword ptr [eax + 0x4], ecx
        mov     ecx, dword ptr [edx + 0x14]
        fsubp   st(1), st(0)
        fld     dword ptr [edx + 0x2c]
        mov     dword ptr [eax + 0x14], ecx
        fmul    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [edx + 0x18]
        mov     dword ptr [eax + 0x24], ecx
        mov     ecx, dword ptr [edx + 0x20]
        fsubp   st(1), st(0)
        mov     dword ptr [eax + 0x8], ecx
        mov     ecx, dword ptr [edx + 0x24]
        mov     dword ptr [eax + 0x18], ecx
        mov     ecx, dword ptr [edx + 0x28]
        mov     dword ptr [eax + 0x28], ecx
        fstp    dword ptr [eax + 0xc]
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [edx + 0x4]
        fchs
        fld     dword ptr [edx + 0x14]
        fmul    dword ptr [edx + 0x1c]
        fsubp   st(1), st(0)
        fld     dword ptr [edx + 0x2c]
        fmul    dword ptr [edx + 0x24]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax + 0x1c]
        fld     dword ptr [edx + 0xc]
        fmul    dword ptr [edx + 0x8]
        fchs
        fld     dword ptr [edx + 0x18]
        fmul    dword ptr [edx + 0x1c]
        fsubp   st(1), st(0)
        fld     dword ptr [edx + 0x28]
        fmul    dword ptr [edx + 0x2c]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax + 0x2c]
        ret     0x4
    }
}
