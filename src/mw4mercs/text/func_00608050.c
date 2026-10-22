/*
 * FUN_00608050 (27 B) — static initializer/registration: calls
 * FUN_00608710 then registers a callback (0x6080b0) with a vtable/data
 * pointer (0x78bf10) via FUN_006b46b0(0x78bf10, 0x6080b0, 1, 0, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00608710(void);
extern void __cdecl FUN_006b46b0(void);

__declspec(naked) void FUN_00608050(void)
{
    __asm {
        call    FUN_00608710
        push    0
        push    0
        push    1
        push    0x6080b0
        push    0x78bf10
        call    FUN_006b46b0
        ret
    }
}
