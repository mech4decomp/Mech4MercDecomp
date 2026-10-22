/*
 * FUN_005a4d30 (11 B) — __thiscall vtable reset + tail call.
 *
 * Sets vtable at [ECX] to 0x7844c0, then tail-calls FUN_005a50d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a50d0(void);

void __declspec(naked) __stdcall FUN_005a4d30(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7844c0
        jmp     FUN_005a50d0
    }
}
