/*
 * FUN_00637de0 (3 B) — __thiscall identity: returns ECX in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00637de0(void)
{
    __asm {
        mov     eax, ecx
        ret
    }
}
