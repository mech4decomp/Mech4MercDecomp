/*
 * FUN_00602c40 (19 B) — __thiscall copy of a 2-dword struct from
 * [esp+4] into *this (this->[0..1] = src->[0..1]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00602c40(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        ret     0x4
    }
}
