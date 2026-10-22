/*
 * FUN_00699a80 (26 B) - HUD element helper: copies 3 dwords from
 * [param_3 + 0x10 .. 0x18] into [param_1 .. +8]. __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00699a80(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x14]
        mov     ecx, dword ptr [ecx + 0x18]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret
    }
}
