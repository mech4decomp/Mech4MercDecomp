/*
 * FUN_00619ce0 (14 B) — __thiscall: frees object at [ecx] if non-NULL
 * (calls FUN_004084e0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00619ce0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_619ced
        push    eax
        call    FUN_004084e0
        pop     ecx
    L_619ced:
        ret
    }
}
