/*
 * FUN_006aeff0 (37 B) - __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * Copies a 12-byte element from this->[0x20][param_2*12] into param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006aeff0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [ecx + 0x20]
        lea     eax, [eax + eax*2]
        mov     edx, dword ptr [ecx + eax*4]
        lea     ecx, [ecx + eax*4]
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
        ret     8
    }
}
