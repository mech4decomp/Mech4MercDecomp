/*
 * FUN_0060ffa0 (40 B) — __fastcall (ECX = this). Zeroes a 0x2D-byte
 * struct (12 dwords + 1 byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0060ffa0(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     dword ptr [eax + 0x20], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x28], ecx
        mov     byte ptr [eax + 0x2c], cl
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x24], ecx
        ret
    }
}
