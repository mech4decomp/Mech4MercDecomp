/*
 * FUN_0041c9b0 (115 B) — quaternion multiply (Hamilton product).
 * __thiscall: ECX = output float[4], [esp+4] = quat A, [esp+0xc] = quat B.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041c9b0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        push    esi
        mov     esi, dword ptr [esp+0xc]
        fld     dword ptr [esi+0x8]
        mov     eax, ecx
        fmul    dword ptr [edx+0x8]
        mov     ecx, dword ptr [edx+0xc]
        fld     dword ptr [esi+0x4]
        mov     dword ptr [eax+0xc], ecx
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0xc]
        fmul    dword ptr [edx+0xc]
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fmul    dword ptr [esi]
        faddp   st(1), st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [esi+0x10]
        fmul    dword ptr [edx]
        fld     dword ptr [esi+0x18]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x14]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x1c]
        fmul    dword ptr [edx+0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [esi+0x20]
        fmul    dword ptr [edx]
        fld     dword ptr [esi+0x28]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x24]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [esi+0x2c]
        pop     esi
        fmul    dword ptr [edx+0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x8]
        ret     0x8
    }
}
