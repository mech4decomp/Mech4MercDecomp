/*
 * FUN_005e25f0 (11 B) — __fastcall (ECX = this) vtable-setter + tail call.
 *
 * Sets [this] = 0x788b38, then tail-jumps to FUN_005e3450.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e3450(void);

__declspec(naked) void __stdcall FUN_005e25f0(void)
{
    __asm {
        mov     dword ptr [ecx], 0x788B38
        jmp     FUN_005e3450
    }
}
