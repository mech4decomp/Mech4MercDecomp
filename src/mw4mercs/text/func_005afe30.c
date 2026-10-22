/*
 * FUN_005afe30 (11 B) — __fastcall/thiscall vtable setter + tail call.
 *
 * Sets this->vtable (0x785db4) then tail-jumps to FUN_005b11f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005b11f0(void *this);

__declspec(naked) void __fastcall FUN_005afe30(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x785db4
        jmp     FUN_005b11f0
    }
}
