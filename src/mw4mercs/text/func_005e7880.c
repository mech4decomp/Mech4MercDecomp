/*
 * FUN_005e7880 (11 B) — __fastcall (ECX = this), tail-call.
 *
 * Sets vtable at this+0 to 0x789380, then jumps to FUN_005e7b10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e7b10(void);

__declspec(naked) void FUN_005e7880(void)
{
    __asm {
        mov     dword ptr [ecx], 0x789380
        jmp     FUN_005e7b10
    }
}
