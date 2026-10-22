/*
 * FUN_0041c830 (156 B) — quaternion/matrix multiply (3x3 rotation applied
 * to a vector). __thiscall: ECX = output float[3], [esp+8] = input vector,
 * [esp+0xc] = 3x3 matrix (row-major, 12 floats).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041c830(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x8]
        push    esi
        mov     esi, dword ptr [esp+0x8]
        fld     dword ptr [esi]
        mov     eax, ecx
        fmul    dword ptr [edx]
        fld     dword ptr [esi+0x4]
        fmul    dword ptr [edx+0x10]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x8]
        fmul    dword ptr [edx+0x20]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [edx]
        fsubp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [edx+0x10]
        fsubp   st(1), st(0)
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [edx+0x20]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x8]
        fld     dword ptr [esi+0x4]
        fmul    dword ptr [edx+0x14]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x4]
        fmul    dword ptr [edx+0xc]
        fsubp   st(1), st(0)
        fld     dword ptr [edx+0x1c]
        fmul    dword ptr [edx+0x14]
        fsubp   st(1), st(0)
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [edx+0x24]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [esi]
        fmul    dword ptr [edx+0x8]
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x4]
        pop     esi
        faddp   st(1), st(0)
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [edx+0x8]
        fsubp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [edx+0x1c]
        fsubp   st(1), st(0)
        fld     dword ptr [edx+0x2c]
        fmul    dword ptr [edx+0x28]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax+0x8]
        ret     0x8
    }
}
