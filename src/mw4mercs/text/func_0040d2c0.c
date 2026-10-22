/*
 * FUN_0040d2c0 (73 B) — __thiscall vector lerp helper:
 *   out[i] = (v2[i] - v1[i]) * t + v1[i]  for i in 0..3
 *   (ECX = out, [esp+4]=v1, [esp+8]=v2, [esp+0xc]=t)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d2c0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x8]
        fld     dword ptr [ecx]
        fsub    dword ptr [edx]
        fmul    dword ptr [esp+0xc]
        fadd    dword ptr [edx]
        fstp    dword ptr [eax]

        fld     dword ptr [ecx+0x4]
        fsub    dword ptr [edx+0x4]
        fmul    dword ptr [esp+0xc]
        fadd    dword ptr [edx+0x4]
        fstp    dword ptr [eax+0x4]

        fld     dword ptr [ecx+0x8]
        fsub    dword ptr [edx+0x8]
        fmul    dword ptr [esp+0xc]
        fadd    dword ptr [edx+0x8]
        fstp    dword ptr [eax+0x8]

        fld     dword ptr [ecx+0xc]
        fsub    dword ptr [edx+0xc]
        fmul    dword ptr [esp+0xc]
        fadd    dword ptr [edx+0xc]
        fstp    dword ptr [eax+0xc]

        ret     0xc
    }
}
