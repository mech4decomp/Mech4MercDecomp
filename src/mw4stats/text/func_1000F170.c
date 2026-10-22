/*
 * FUN_1000f170 (3 B) - returns ECX (this) in EAX.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void* __cdecl FUN_1000f170(void)
{
    __asm {
        mov     eax, ecx
        ret
    }
}
