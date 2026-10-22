/*
 * FUN_0040d260 (86 B) — __thiscall vector blend helper:
 *   out[i] = a * v1[i] + b * v2[i]  for i in 0..3
 *   (ECX = out, [esp+4]=v1, [esp+8]=a, [esp+0xc]=v2, [esp+0x10]=b)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d260(void)
{
    __asm {
        fld     dword ptr [esp+0x8]
        mov     edx, dword ptr [esp+0xc]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        fmul    dword ptr [ecx]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx]
        faddp   st(1), st(0)
        fstp    dword ptr [eax]

        fld     dword ptr [esp+0x8]
        fmul    dword ptr [ecx+0x4]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+0x4]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x4]

        fld     dword ptr [esp+0x8]
        fmul    dword ptr [ecx+0x8]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+0x8]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0x8]

        fld     dword ptr [esp+0x8]
        fmul    dword ptr [ecx+0xc]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+0xc]
        faddp   st(1), st(0)
        fstp    dword ptr [eax+0xc]

        ret     0x10
    }
}
