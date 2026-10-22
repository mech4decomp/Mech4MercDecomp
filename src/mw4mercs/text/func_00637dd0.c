/*
 * FUN_00637dd0 (14 B) — __thiscall: if *this != 0, calls
 * FUN_004084e0(*this). RET (no params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00637dd0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_004084e0
        pop     ecx
L1:
        ret
    }
}
