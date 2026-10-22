/*
 * FUN_006ceae0 (3 B) — identity: returns ECX in EAX.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_006ceae0(void)
{
    __asm {
        mov     eax, ecx
        ret
    }
}
