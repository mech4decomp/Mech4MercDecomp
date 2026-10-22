/*
 * FUN_00612060 (22 B) — __thiscall: copies two dwords from two source
 * pointers into `this` (offset 0 and 4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00612060(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp+8]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax+4], edx
        ret     8
    }
}
