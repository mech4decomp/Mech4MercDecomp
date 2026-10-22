/*
 * FUN_005a5c50 (11 B) — Sets vtable pointer and tail-calls FUN_005f36e0.
 *
 * Sets [ECX] = 0x784800, then JMP to FUN_005f36e0 (tail call).
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f36e0(void);

__declspec(naked) void __fastcall FUN_005a5c50(void)
{
    __asm {
        mov     dword ptr [ecx], 0x784800
        jmp     FUN_005f36e0
    }
}
