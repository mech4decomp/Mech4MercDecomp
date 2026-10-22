/*
 * FUN_00608070 (13 B) — sub-destructor/cleanup: calls
 * FUN_006b4950(0x78bf10, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b4950(void);

__declspec(naked) void FUN_00608070(void)
{
    __asm {
        push    0
        push    0x78bf10
        call    FUN_006b4950
        ret
    }
}
