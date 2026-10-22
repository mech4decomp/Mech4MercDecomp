/*
 * FUN_0061EBB0 (14 B) — __fastcall (ECX = this). Frees *this via
 * FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0061ebb0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_ebbd
        push    eax
        call    FUN_004084e0
        pop     ecx
L_ebbd:
        ret
    }
}
