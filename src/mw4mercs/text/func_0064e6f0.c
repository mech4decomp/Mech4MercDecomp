/*
 * FUN_0064e6f0 (18 B) — ABL object copy helper (__thiscall, RET 0x4).
 * Copies a dword from [arg] to *this and clears bit 0 of [arg].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064e6f0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        and     edx, 0xfffffffe
        mov     dword ptr [ecx], edx
        ret     4
    }
}
