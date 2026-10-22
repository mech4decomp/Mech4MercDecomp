/*
 * FUN_0041cfe0 (534 B) — 4x4 matrix multiply (16 output floats).
 * __thiscall: ECX = output float[16], [esp+4] = matrix A, [esp+0xc] = matrix B.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041cfe0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        fld     dword ptr [edx]
        push    esi
        mov     esi, dword ptr [esp+0xc]
        fmul    dword ptr [esi]
        mov     eax, ecx
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0xc]
        fmul    dword ptr [edx+0x30]
        faddp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esi]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x34]
        fmul    dword ptr [esi+0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x38]
        fmul    dword ptr [esi+0xc]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [esi+0xc]
        fmul    dword ptr [edx+0x3c]
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [esi+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [esi+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0xc]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x14]
        fld     dword ptr [esi+0x10]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x1c]
        fmul    dword ptr [edx+0x30]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x18]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x10]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x14]
        fld     dword ptr [esi+0x10]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x34]
        fmul    dword ptr [esi+0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x18]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [esi+0x14]
        fmul    dword ptr [edx+0x18]
        fld     dword ptr [edx+0x38]
        fmul    dword ptr [esi+0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x18]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x10]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [esi+0x10]
        fmul    dword ptr [edx+0xc]
        fld     dword ptr [esi+0x1c]
        fmul    dword ptr [edx+0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x18]
        fmul    dword ptr [edx+0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x14]
        fmul    dword ptr [edx+0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x1c]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x24]
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x2c]
        fmul    dword ptr [edx+0x30]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x28]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x24]
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x34]
        fmul    dword ptr [esi+0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x28]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x24]
        fld     dword ptr [esi+0x24]
        fmul    dword ptr [edx+0x18]
        fld     dword ptr [edx+0x38]
        fmul    dword ptr [esi+0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x28]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x28]
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [edx+0xc]
        fld     dword ptr [esi+0x2c]
        fmul    dword ptr [edx+0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x28]
        fmul    dword ptr [edx+0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x24]
        fmul    dword ptr [edx+0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x2c]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi+0x34]
        fld     dword ptr [esi+0x30]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x3c]
        fmul    dword ptr [edx+0x30]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi+0x38]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x30]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x34]
        fld     dword ptr [esi+0x30]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x34]
        fmul    dword ptr [esi+0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x38]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x34]
        fld     dword ptr [esi+0x34]
        fmul    dword ptr [edx+0x18]
        fld     dword ptr [edx+0x38]
        fmul    dword ptr [esi+0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x38]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x30]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x38]
        fld     dword ptr [esi+0x30]
        fmul    dword ptr [edx+0xc]
        fld     dword ptr [esi+0x3c]
        fmul    dword ptr [edx+0x3c]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x38]
        fmul    dword ptr [edx+0x2c]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x34]
        pop     esi
        fmul    dword ptr [edx+0x1c]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x3c]
        ret     0x8
    }
}
