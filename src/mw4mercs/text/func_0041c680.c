/*
 * FUN_0041c680 (85 B) — __thiscall. 3x3 matrix * vector multiply.
 * ECX = output; stack args: vector (param_1), matrix (param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041c680(void)
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
        pop     esi
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x8]
        ret     0x8
    }
}
