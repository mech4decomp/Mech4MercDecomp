/*
 * FUN_004306F0 (27 B) — Bitfield setter.
 *
 * Sets low 4 bits of field at this+0x10 to 0xF (OR with 0x0F).
 * Sets high 28 bits of field at this+0x04 from param, preserving low 4 bits.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: value).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004306f0(int value)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [esp + 4]
        or      eax, 0xF
        mov     dword ptr [ecx + 0x10], eax
        mov     eax, dword ptr [ecx + 4]
        and     eax, 0xFFFFFFF0
        or      eax, edx
        mov     dword ptr [ecx + 4], eax
        ret     4
    }
}
