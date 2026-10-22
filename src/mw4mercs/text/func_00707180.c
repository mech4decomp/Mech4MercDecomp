/*
 * FUN_00707180 (8 B) -- __stdcall (RET 4) getter returning constant 0x7a1340.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00707180(void)
{
    __asm {
        mov     eax, 0x7A1340
        ret     4
    }
}
