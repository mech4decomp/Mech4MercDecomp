/*
 * FUN_0060ac30 (15 B) — __stdcall thunk: forwards param_1 to
 * FUN_0060ac70(3, param_1). Animation-blend subsystem setter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0060ac70(void);

__declspec(naked) void FUN_0060ac30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    eax
        push    0x3
        call    FUN_0060ac70
        ret     0x8
    }
}
