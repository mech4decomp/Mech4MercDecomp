/*
 * FUN_1001a8b0 (24 B) - __fastcall (ECX = this). Zeroes a set of fields
 * on the stats object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1001a8b0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 0x10], eax
        mov     dword ptr [ecx + 0x14], eax
        mov     dword ptr [ecx + 0x18], eax
        mov     dword ptr [ecx + 0x34], eax
        mov     dword ptr [ecx + 0x38], eax
        mov     dword ptr [ecx + 8], eax
        ret
    }
}
