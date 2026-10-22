/*
 * FUN_00665a90 (14 B) — __fastcall destructor: frees *this if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int);

__declspec(naked) void FUN_00665a90(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_665a9d
        push    eax
        call    FUN_004084e0
        pop     ecx
L_665a9d:
        ret
    }
}
