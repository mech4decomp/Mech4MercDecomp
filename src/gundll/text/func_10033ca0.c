/*
 * FUN_10033ca0 (18 B) - __fastcall.
 * If [ECX+0xc] is nonzero, returns [ECX+0x14] (word); else returns 0x578.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_10033ca0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        test    eax, eax
        jz      ret578
        mov     ax, word ptr [ecx + 0x14]
        ret
ret578:
        mov     eax, 0x578
        ret
    }
}
