/*
 * FUN_006cc690 (3 B) — getter: returns *(int*)ECX.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_006cc690(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        ret
    }
}
