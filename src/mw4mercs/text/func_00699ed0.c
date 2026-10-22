/*
 * FUN_00699ed0 (3 B) - HUD helper: returns byte at [ecx] (__fastcall/this).
 * RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char FUN_00699ed0(void)
{
    __asm {
        mov     al, byte ptr [ecx]
        ret
    }
}
