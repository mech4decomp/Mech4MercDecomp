/*
 * FUN_00423e00 (13 B) — __thiscall, RET 0x4. Copies a dword from
 * [arg] into [this]. Trivial accessor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00423e00(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     4
    }
}
