/*
 * FUN_005a4830 (11 B) — Sub-constructor.
 *
 * Sets vtable at [this] to 0x784340, then tail-calls FUN_005f36e0.
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f36e0(void);

__declspec(naked) void __stdcall FUN_005a4830(void)
{
    __asm {
        mov     dword ptr [ecx], 0x00784340
        jmp     FUN_005f36e0
    }
}
