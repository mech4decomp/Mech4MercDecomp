/*
 * FUN_10004920 (21 B) - __fastcall. Zeroes 6 dwords at this+4..this+0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10004920(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [ecx + 0x8], eax
        mov     dword ptr [ecx + 0xc], eax
        mov     dword ptr [ecx + 0x10], eax
        mov     dword ptr [ecx + 0x14], eax
        mov     dword ptr [ecx + 0x18], eax
        ret
    }
}
