/*
 * FUN_00420740 (52 B) — __thiscall (no stack args, RET). Computes the
 * cross-product rows of a 3x3 matrix in place; writes 3 floats at
 * [EAX+0x20/0x24/0x28] from the 12-float matrix at [EAX].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00420740(void)
{
    __asm {
        mov     eax, ecx
        fld     dword ptr [eax + 0x4]
        fmul    dword ptr [eax + 0x18]
        fld     dword ptr [eax + 0x14]
        fmul    dword ptr [eax + 0x8]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax + 0x20]
        fld     dword ptr [eax + 0x10]
        fmul    dword ptr [eax + 0x8]
        fld     dword ptr [eax]
        fmul    dword ptr [eax + 0x18]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax + 0x24]
        fld     dword ptr [eax + 0x14]
        fmul    dword ptr [eax]
        fld     dword ptr [eax + 0x10]
        fmul    dword ptr [eax + 0x4]
        fsubp   st(1), st(0)
        fstp    dword ptr [eax + 0x28]
        ret
    }
}
