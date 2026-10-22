/*
 * FUN_10013050 (15 B) - zeroes [ECX+4], [ECX+0x10], [ECX+0x14], [ECX+0x18].
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10013050(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 0x4], eax
        mov     dword ptr [ecx + 0x10], eax
        mov     dword ptr [ecx + 0x14], eax
        mov     dword ptr [ecx + 0x18], eax
        ret
    }
}
