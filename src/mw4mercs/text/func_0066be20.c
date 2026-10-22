/*
 * FUN_0066be20 (43 B) — __fastcall zero-fill.
 *
 * Zeroes 13 dwords of the object pointed to by ECX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0066be20(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x24], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x2c], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x30], ecx
        ret
    }
}
