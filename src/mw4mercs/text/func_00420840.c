/*
 * FUN_00420840 (157 B) — __thiscall (RET 0x4). AABB/box transform helper:
 * computes weighted sums of |component| * scale and writes center +/- half
 * extent pairs (6 floats) to [EAX=this] from the 12-float box at [EDX].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00420840(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        fld     dword ptr [edx + 0x8]
        mov     eax, ecx
        fabs
        fmul    dword ptr [edx + 0x38]
        fld     dword ptr [edx + 0x4]
        fabs
        fxch
        fxch
        fmul    dword ptr [edx + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [edx]
        fabs
        fst     dword ptr [esp + 0x4]
        fmul    dword ptr [edx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0xc]
        fsub    st(0), st(1)
        fstp    dword ptr [eax]
        fadd    dword ptr [edx + 0xc]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [edx + 0x18]
        fabs
        fmul    dword ptr [edx + 0x38]
        fld     dword ptr [edx + 0x14]
        fabs
        fxch
        fxch
        fmul    dword ptr [edx + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x10]
        fabs
        fst     dword ptr [esp + 0x4]
        fmul    dword ptr [edx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x1c]
        fsub    st(0), st(1)
        fstp    dword ptr [eax + 0x8]
        fadd    dword ptr [edx + 0x1c]
        fstp    dword ptr [eax + 0xc]
        fld     dword ptr [edx + 0x28]
        fabs
        fmul    dword ptr [edx + 0x38]
        fld     dword ptr [edx + 0x24]
        fabs
        fxch
        fxch
        fmul    dword ptr [edx + 0x34]
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x20]
        fabs
        fst     dword ptr [esp + 0x4]
        fmul    dword ptr [edx + 0x30]
        faddp   st(1), st(0)
        fld     dword ptr [edx + 0x2c]
        fsub    st(0), st(1)
        fstp    dword ptr [eax + 0x10]
        fadd    dword ptr [edx + 0x2c]
        fstp    dword ptr [eax + 0x14]
        ret     0x4
    }
}
