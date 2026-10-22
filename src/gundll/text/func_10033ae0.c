/*
 * FUN_10033ae0 (13 B) - __fastcall. Zeroes dwords at this+0xc, this+0x10,
 * and word at this+0x14.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_10033ae0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 0xc], eax
        mov     dword ptr [ecx + 0x10], eax
        mov     word ptr [ecx + 0x14], ax
        ret
    }
}
