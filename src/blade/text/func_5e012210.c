/*
 * FUN_5e012210 (534 B) — 4x4 matrix multiply (row-major): out = a * b.
 *
 * __stdcall, RET 0xc (3 stack params: a, b, out).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e012210(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0xc]
        fld     dword ptr [ecx]
        fmul    dword ptr [eax]
        fld     dword ptr [eax + 0x20]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [eax + 0x10]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0xc]
        fmul    dword ptr [eax + 0x30]
        faddp   st(1), st(0)
        fstp    dword ptr [edx]
        fld     dword ptr [eax + 0x24]
        fmul    dword ptr [ecx + 0x8]
        fld     dword ptr [ecx]
        fmul    dword ptr [eax + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [eax + 0x14]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x34]
        fmul    dword ptr [ecx + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x4]
        fld     dword ptr [ecx]
        fmul    dword ptr [eax + 0x8]
        fld     dword ptr [eax + 0x28]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [eax + 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x38]
        fmul    dword ptr [ecx + 0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x8]
        fld     dword ptr [ecx + 0xc]
        fmul    dword ptr [eax + 0x3c]
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [eax + 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0xc]
        fmul    dword ptr [ecx]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x2c]
        fmul    dword ptr [ecx + 0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0xc]
        fld     dword ptr [ecx + 0x14]
        fmul    dword ptr [eax + 0x10]
        fld     dword ptr [ecx + 0x1c]
        fmul    dword ptr [eax + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x20]
        fmul    dword ptr [ecx + 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x10]
        fmul    dword ptr [eax]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x10]
        fld     dword ptr [eax + 0x14]
        fmul    dword ptr [ecx + 0x14]
        fld     dword ptr [ecx + 0x10]
        fmul    dword ptr [eax + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x34]
        fmul    dword ptr [ecx + 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x24]
        fmul    dword ptr [ecx + 0x18]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x14]
        fld     dword ptr [ecx + 0x14]
        fmul    dword ptr [eax + 0x18]
        fld     dword ptr [eax + 0x38]
        fmul    dword ptr [ecx + 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x28]
        fmul    dword ptr [ecx + 0x18]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x10]
        fmul    dword ptr [eax + 0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x18]
        fld     dword ptr [ecx + 0x10]
        fmul    dword ptr [eax + 0xc]
        fld     dword ptr [ecx + 0x1c]
        fmul    dword ptr [eax + 0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x18]
        fmul    dword ptr [eax + 0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x14]
        fmul    dword ptr [eax + 0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x1c]
        fld     dword ptr [ecx + 0x24]
        fmul    dword ptr [eax + 0x10]
        fld     dword ptr [ecx + 0x2c]
        fmul    dword ptr [eax + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x20]
        fmul    dword ptr [ecx + 0x28]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x20]
        fmul    dword ptr [eax]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x20]
        fld     dword ptr [eax + 0x14]
        fmul    dword ptr [ecx + 0x24]
        fld     dword ptr [ecx + 0x20]
        fmul    dword ptr [eax + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x34]
        fmul    dword ptr [ecx + 0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x24]
        fmul    dword ptr [ecx + 0x28]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x24]
        fld     dword ptr [ecx + 0x24]
        fmul    dword ptr [eax + 0x18]
        fld     dword ptr [eax + 0x38]
        fmul    dword ptr [ecx + 0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x28]
        fmul    dword ptr [ecx + 0x28]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x20]
        fmul    dword ptr [eax + 0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x28]
        fld     dword ptr [ecx + 0x20]
        fmul    dword ptr [eax + 0xc]
        fld     dword ptr [ecx + 0x2c]
        fmul    dword ptr [eax + 0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x28]
        fmul    dword ptr [eax + 0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x24]
        fmul    dword ptr [eax + 0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x2c]
        fld     dword ptr [ecx + 0x34]
        fmul    dword ptr [eax + 0x10]
        fld     dword ptr [ecx + 0x3c]
        fmul    dword ptr [eax + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x20]
        fmul    dword ptr [ecx + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x30]
        fmul    dword ptr [eax]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x30]
        fld     dword ptr [eax + 0x14]
        fmul    dword ptr [ecx + 0x34]
        fld     dword ptr [ecx + 0x30]
        fmul    dword ptr [eax + 0x4]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x34]
        fmul    dword ptr [ecx + 0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x24]
        fmul    dword ptr [ecx + 0x38]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x34]
        fld     dword ptr [ecx + 0x34]
        fmul    dword ptr [eax + 0x18]
        fld     dword ptr [eax + 0x38]
        fmul    dword ptr [ecx + 0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [eax + 0x28]
        fmul    dword ptr [ecx + 0x38]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x30]
        fmul    dword ptr [eax + 0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x38]
        fld     dword ptr [ecx + 0x30]
        fmul    dword ptr [eax + 0xc]
        fld     dword ptr [ecx + 0x3c]
        fmul    dword ptr [eax + 0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x38]
        fmul    dword ptr [eax + 0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [ecx + 0x34]
        fmul    dword ptr [eax + 0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [edx + 0x3c]
        ret     0xc
    }
}
