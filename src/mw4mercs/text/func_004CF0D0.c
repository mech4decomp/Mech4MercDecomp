/*
 * FUN_004CF0D0 (8 B) -- __stdcall (RET 0x4) getter returning 0x771d44.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_004CF0D0(void)
{
    __asm {
        mov     eax, 0x771d44
        ret     0x4
    }
}
