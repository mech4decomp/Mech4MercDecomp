/*
 * FUN_00492730 (16 B) — __cdecl, RET 4 (1 stack param).
 * Frees param via FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __cdecl FUN_00492730(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        jz      l_skip
        push    eax
        call    FUN_004084e0
        pop     ecx
l_skip:
        ret
    }
}
