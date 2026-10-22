/*
 * FUN_006FF01D (8 B) -- __stdcall (RET 0x10) stub returning 0.
 * Preceded by 3 NOP alignment pads.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_006FF01D(void)
{
    __asm {
        nop
        nop
        nop
        xor     eax, eax
        ret     0x10
    }
}
