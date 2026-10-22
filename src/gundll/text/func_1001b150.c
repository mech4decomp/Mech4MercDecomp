/*
 * FUN_1001b150 (15 B) — __fastcall.
 * Zeroes byte at this[0] and word at this[0x84].
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_1001b150(void)
{
    __asm {
        mov     eax, ecx
        mov     byte ptr [eax], 0x0
        mov     word ptr [eax + 0x84], 0x0
        ret
    }
}
