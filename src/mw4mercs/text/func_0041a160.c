/*
 * FUN_0041a160 (235 B) — __thiscall quaternion-to-rotation-matrix
 * conversion. Reads a quaternion (4 floats) from param_1 (at [ESP+0x20])
 * and writes a 3x3 rotation matrix to `this` (ECX/EAX). No EBP frame;
 * uses ESP-relative scratch locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041a160(void)
{
    __asm {
        sub     esp, 0x1c
        mov     edx, dword ptr [esp+0x20]
        fld     dword ptr [edx]
        mov     eax, ecx
        fmul    dword ptr [edx+0x4]
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [edx+0x4]
        fstp    dword ptr [esp+0x18]
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [edx]
        fstp    dword ptr [esp+0xc]
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [edx]
        fstp    dword ptr [esp+0x14]
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [edx+0x4]
        fstp    dword ptr [esp+0x10]
        fld     dword ptr [edx+0xc]
        fmul    dword ptr [edx+0x8]
        fld     dword ptr [edx+0xc]
        fld     st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x4]
        fstp    st(0)
        fld     dword ptr [edx]
        fld     st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x8]
        fstp    st(0)
        fld     dword ptr [edx+0x4]
        fld     st(0)
        fmul    st(0), st(1)
        fstp    dword ptr [esp+0x20]
        fstp    st(0)
        fld     dword ptr [edx+0x8]
        fld     st(0)
        fmul    st(0), st(1)
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D9 1C 24); ref needs D9 5C 24 00 */
        __emit  0xD9
        __emit  0x5C
        __emit  0x24
        __emit  0x00
        fstp    st(0)
        fld     dword ptr [esp+0x8]
        fadd    dword ptr [esp+0x4]
        fsub    dword ptr [esp+0x20]
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D8 24 24); ref needs D8 64 24 00 */
        __emit  0xD8
        __emit  0x64
        __emit  0x24
        __emit  0x00
        fstp    dword ptr [eax]
        fld     st(1)
        fsub    st(0), st(1)
        fadd    st(0), st(0)
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [esp+0x10]
        fadd    dword ptr [esp+0xc]
        fadd    st(0), st(0)
        fstp    dword ptr [eax+0x8]
        fadd    st(0), st(1)
        fadd    st(0), st(0)
        fstp    dword ptr [eax+0x10]
        fstp    st(0)
        fld     dword ptr [esp+0x4]
        fsub    dword ptr [esp+0x8]
        fld     st(0)
        fadd    dword ptr [esp+0x20]
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D8 24 24); ref needs D8 64 24 00 */
        __emit  0xD8
        __emit  0x64
        __emit  0x24
        __emit  0x00
        fstp    dword ptr [eax+0x14]
        fld     dword ptr [esp+0x18]
        fsub    dword ptr [esp+0x14]
        fadd    st(0), st(0)
        fstp    dword ptr [eax+0x18]
        fld     dword ptr [esp+0xc]
        fsub    dword ptr [esp+0x10]
        fadd    st(0), st(0)
        fstp    dword ptr [eax+0x20]
        fld     dword ptr [esp+0x14]
        fadd    dword ptr [esp+0x18]
        fadd    st(0), st(0)
        fstp    dword ptr [eax+0x24]
        fsub    dword ptr [esp+0x20]
        /* __emit: MSVC6 drops the 00 disp byte for [esp+0] (D8 04 24); ref needs D8 44 24 00 */
        __emit  0xD8
        __emit  0x44
        __emit  0x24
        __emit  0x00
        fstp    dword ptr [eax+0x28]
        add     esp, 0x1c
        ret     0x4
    }
}
