/*
 * FUN_0064e6e0 (14 B) — ABL object helper (__thiscall). If *this is
 * non-null, calls FUN_004084e0 on it (destructor/delete).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0064e6e0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L6ed
        push    eax
        call    FUN_004084e0
        pop     ecx
L6ed:
        ret
    }
}
