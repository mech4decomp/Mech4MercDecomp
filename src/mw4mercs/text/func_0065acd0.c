/*
 * FUN_0065ACD0 (61 B) — __thiscall (ECX = this, one stack param, RET 0x4).
 *
 * Reads three values from this->[0x8]->[0xD8] (two floats at +0x8C/+0x9C
 * and a dword at +0xAC) and stores them into the output param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0065acd0(void)
{
    __asm {
        sub     esp, 0xc
        mov     eax, dword ptr [ecx + 0x8]
        mov     eax, dword ptr [eax + 0xd8]
        fld     dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0xac]
        fld     dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     eax, dword ptr [esp + 0x10]
        fxch
        fstp    dword ptr [eax]
        mov     edx, ecx
        mov     dword ptr [esp + 0x8], ecx
        fstp    dword ptr [eax + 0x4]
        mov     dword ptr [eax + 0x8], edx
        add     esp, 0xc
        ret     0x4
    }
}
