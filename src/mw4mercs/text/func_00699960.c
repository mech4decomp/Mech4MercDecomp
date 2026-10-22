/*
 * FUN_00699960 (26 B) — __cdecl: copy 3 dwords from src+0x10 into dst.
 * HUD element data copy helper (offset variant).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00699960(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
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
