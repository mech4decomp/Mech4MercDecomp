/*
 * FUN_004FF200 (14 B) — Returns true (1) if the first DWORD of the
 * input struct is zero, false (0) otherwise.
 *
 * __stdcall, RET 0 (one DWORD param, returns bool in AL).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_004ff200(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        test    edx, edx
        setz    al
        ret
    }
}
