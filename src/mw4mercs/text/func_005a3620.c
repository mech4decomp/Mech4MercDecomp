/*
 * FUN_005a3620 (11 B) — Sets vtable pointer and tail-calls FUN_005f07e0.
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f07e0(void);

__declspec(naked) void __fastcall FUN_005a3620(void)
{
    __asm {
        mov     dword ptr [ecx], 0x784050
        jmp     FUN_005f07e0
    }
}
