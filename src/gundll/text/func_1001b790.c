/*
 * FUN_1001b790 (16 B) — __fastcall.
 * Zeroes 4 dwords at this[0..0xc].
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1001b790(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0xc], ecx
        ret
    }
}
