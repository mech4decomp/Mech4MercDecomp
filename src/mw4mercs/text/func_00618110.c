/*
 * FUN_00618110 (6 B) — returns pointer to string constant "_CAS.wav{handle}".
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00618110(void)
{
    __asm {
        mov     eax, 0x77f5b8
        ret
    }
}
