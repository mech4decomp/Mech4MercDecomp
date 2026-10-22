/*
 * FUN_005f0080 (11 B) — __fastcall (ECX = this).
 *
 * Sets this->vtable = 0x789ff0, then tail-jumps to FUN_005f07e0().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005f07e0(void);

__declspec(naked) void __stdcall FUN_005f0080(void)
{
    __asm {
        mov     dword ptr [ecx], 0x789ff0
        jmp     FUN_005f07e0
    }
}
