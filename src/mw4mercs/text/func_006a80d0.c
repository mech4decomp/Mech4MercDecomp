/*
 * FUN_006a80d0 (14 B) — __fastcall: if (*this) FUN_004084e0(*this).
 * RET (no ret n).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006a80d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      Lret
        push    eax
        call    FUN_004084e0
        pop     ecx
Lret:
        ret
    }
}
