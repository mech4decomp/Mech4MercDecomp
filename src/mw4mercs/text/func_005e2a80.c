/*
 * FUN_005e2a80 (11 B) — __fastcall vtable setter + tail-jump.
 *
 * Sets *this = vtable 0x788c24, then tail-jumps to FUN_005e3450.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005e3450(void *this);

__declspec(naked) void __fastcall FUN_005e2a80(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x788c24
        jmp     FUN_005e3450
    }
}
