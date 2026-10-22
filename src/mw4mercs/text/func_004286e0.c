/*
 * FUN_004286e0 (73 B) — MLR 4-float linear interpolation (lerp).
 * __thiscall, RET 0xc. out = (b - a) * t + a for 4 components.
 *
 * CFLAGS: /O1
 * Match: target
 */

__declspec(naked) void FUN_004286e0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x8]
        fld     dword ptr [ecx]
        fsub    dword ptr [edx]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [edx]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x4]
        fsub    dword ptr [edx + 0x4]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [edx + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x8]
        fsub    dword ptr [edx + 0x8]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [edx + 0x8]
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [edx + 0xc]
        fmul    dword ptr [esp + 0xc]
        fadd    dword ptr [edx + 0xc]
        fstp    dword ptr [eax + 0xc]
        ret     0xc
    }
}
