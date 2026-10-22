/*
 * FUN_005af740 (11 B) — __thiscall (ECX = this). Sets vtable at this to
 * 0x785c54, then tail-jumps to FUN_005e3450.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e3450(void);

__declspec(naked) void __stdcall FUN_005af740(void)
{
    __asm {
        mov     dword ptr [ecx], 0x785C54
        jmp     FUN_005e3450
    }
}
