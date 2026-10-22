/*
 * FUN_005abc90 (11 B) — __fastcall vtable-setter + tail call.
 *
 * Sets *this = 0x785888 (vtable), then tail-jumps to FUN_005f07e0.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005f07e0(void);

__declspec(naked) void __fastcall FUN_005abc90(void *this)
{
    __asm {
        mov     dword ptr [ecx], 0x785888
        jmp     FUN_005f07e0
    }
}
