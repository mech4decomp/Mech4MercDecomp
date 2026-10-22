/*
 * FUN_005a6d80 (11 B) — __fastcall (ECX = this) vtable setter + tail call.
 *
 * Sets vtable pointer at [ECX] to 0x784b14, then jumps to FUN_005e6de0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005e6de0(void);

__declspec(naked) void __fastcall FUN_005a6d80(void)
{
    __asm {
        mov     dword ptr [ecx], 0x784b14
        jmp     FUN_005e6de0
    }
}
