/*
 * FUN_0064e8b0 (19 B) — ABL object copy helper (__thiscall, RET 0x4).
 * Copies dword + byte from [arg] into *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064e8b0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     cl, byte ptr [ecx + 4]
        mov     dword ptr [eax], edx
        mov     byte ptr [eax + 4], cl
        ret     4
    }
}
