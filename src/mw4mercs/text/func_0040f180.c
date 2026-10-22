/*
 * FUN_0040f180 (14 B) — __fastcall/__thiscall: frees *this if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0040f180(void)
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
