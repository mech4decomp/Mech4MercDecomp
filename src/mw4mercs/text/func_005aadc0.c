/*
 * FUN_005aadc0 (11 B) — __fastcall.
 *
 * Sets vtable pointer [ecx] = 0x7856a4, then tail-calls FUN_005e3450.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005e3450(void);

__declspec(naked) void FUN_005aadc0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x7856a4
        jmp     FUN_005e3450
    }
}
