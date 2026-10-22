/*
 * FUN_005a3ed0 (11 B) — Sub-constructor.
 *
 * Sets vtable at [this] to 0x7841bc, then tail-calls FUN_005f36e0.
 *
 * __thiscall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f36e0(void);

__declspec(naked) void __stdcall FUN_005a3ed0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x007841bc
        jmp     FUN_005f36e0
    }
}
