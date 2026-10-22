/*
 * FUN_0066be50 (14 B) - __fastcall (this in ECX) free-if-nonnull helper.
 * If *this != 0, frees it via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0066be50(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_be5d
        push    eax
        call    FUN_004084e0
        pop     ecx
L_be5d:
        ret
    }
}
