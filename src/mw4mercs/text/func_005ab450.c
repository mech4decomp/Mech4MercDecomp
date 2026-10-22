/*
 * FUN_005ab450 (11 B) — __fastcall.
 *
 * Sets vtable pointer 0x785798 and tail-jumps to FUN_005e3450.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005e3450(void);

__declspec(naked) void FUN_005ab450(void)
{
    __asm {
        mov     dword ptr [ecx], 0x785798
        jmp     FUN_005e3450
    }
}
