/*
 * FUN_00699920 (25 B) — __cdecl: copy 12 bytes (3 dwords) from *src
 * into *dst. HUD element data copy helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00699920(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret
    }
}
