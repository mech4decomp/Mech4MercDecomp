/*
 * FUN_005aa470 (11 B) — Constructor: sets vtable pointer at [ECX] to
 * 0x00785410, then tail-jumps to FUN_005e6de0.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005e6de0(void);

__declspec(naked) void __fastcall FUN_005aa470(void *param)
{
    __asm {
        mov     dword ptr [ecx], 0x785410
        jmp     FUN_005e6de0
    }
}
