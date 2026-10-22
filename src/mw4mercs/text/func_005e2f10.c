/*
 * FUN_005e2f10 (11 B) — __fastcall vtable setter + tail-jump.
 *
 * Sets *this = vtable 0x788d10, then tail-jumps to FUN_005e3450.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005e3450(void *this);

__declspec(naked) void __fastcall FUN_005e2f10(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x788d10
        jmp     FUN_005e3450
    }
}
