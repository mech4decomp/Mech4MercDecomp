/*
 * FUN_00423b10 (14 B) — __thiscall destructor. Frees the object pointed
 * to by [this] via operator delete (FUN_004084e0) if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00423b10(void)
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
