/*
 * FUN_0040f0a0 (13 B) — __thiscall copy: *this = *src.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040f0a0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     4
    }
}
