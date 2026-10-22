/*
 * FUN_1000f1e0 (36 B) - __fastcall. MD5 context initialization: sets the
 * four MD5 magic constants and zeroes the bit-count fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_1000f1e0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx], 0x67452301
        mov     dword ptr [ecx + 0x14], eax
        mov     dword ptr [ecx + 0x10], eax
        mov     dword ptr [ecx + 0x4], 0xefcdab89
        mov     dword ptr [ecx + 0x8], 0x98badcfe
        mov     dword ptr [ecx + 0xc], 0x10325476
        ret
    }
}
