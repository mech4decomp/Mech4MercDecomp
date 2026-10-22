/*
 * FUN_0041cac0 (109 B) — 3x4 matrix * 3-vector multiply (4 output floats).
 * __thiscall: ECX = output float[4], [esp+4] = 3-vector, [esp+0xc] = 3x4 matrix.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041cac0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        push    esi
        mov     esi, dword ptr [esp+0xc]
        fld     dword ptr [esi+0x4]
        mov     eax, ecx
        fmul    dword ptr [edx+0x4]
        fld     dword ptr [esi+0x8]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [esi+0x10]
        fmul    dword ptr [edx]
        fld     dword ptr [esi+0x14]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x18]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [edx]
        fld     dword ptr [esi+0x24]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x28]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x8]
        fld     dword ptr [esi+0x30]
        fmul    dword ptr [edx]
        fld     dword ptr [esi+0x34]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x38]
        pop     esi
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0xc]
        ret     0x8
    }
}
