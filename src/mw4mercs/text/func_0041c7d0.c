/*
 * FUN_0041c7d0 (94 B) — __thiscall. 3x4 matrix * vector multiply (with
 * translation). ECX = output; stack args: vector (param_1), matrix (param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041c7d0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x8]
        fld     dword ptr [edx+0x4]
        push    esi
        mov     esi, dword ptr [esp+0x8]
        fmul    dword ptr [esi+0x4]
        mov     eax, ecx
        fld     dword ptr [edx+0x8]
        fmul    dword ptr [esi+0x8]
        faddp   st(1), st(0)
        fld     dword ptr [esi]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fadd    dword ptr [edx+0xc]
        fstp    dword ptr [eax]
        fld     dword ptr [edx+0x10]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x14]
        fmul    dword ptr [esi+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x18]
        fmul    dword ptr [esi+0x8]
        faddp   st(1), st(0)
        fadd    dword ptr [edx+0x1c]
        fstp    dword ptr [eax+0x4]
        fld     dword ptr [edx+0x20]
        fmul    dword ptr [esi]
        fld     dword ptr [edx+0x24]
        fmul    dword ptr [esi+0x4]
        faddp   st(1), st(0)
        fld     dword ptr [edx+0x28]
        fmul    dword ptr [esi+0x8]
        pop     esi
        faddp   st(1), st(0)
        fadd    dword ptr [edx+0x2c]
        fstp    dword ptr [eax+0x8]
        ret     0x8
    }
}
