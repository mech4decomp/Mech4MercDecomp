/*
 * FUN_0065d710 (9 B) — __thiscall setter: *this = arg (dword at [ECX]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d710(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx], eax
        ret     4
    }
}
