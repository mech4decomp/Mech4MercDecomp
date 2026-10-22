/*
 * FUN_004CF0E0 (8 B) -- __stdcall (RET 0x4) stub returning 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004CF0E0(void)
{
    __asm {
        mov     eax, 0x1
        ret     0x4
    }
}
