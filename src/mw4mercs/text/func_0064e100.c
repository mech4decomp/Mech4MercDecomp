/*
 * FUN_0064e100 (4 B) — thunk: returns this+8 (ECX+8) in EAX.
 * ABL object helper (__fastcall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0064e100(void)
{
    __asm {
        lea     eax, [ecx + 8]
        ret
    }
}
