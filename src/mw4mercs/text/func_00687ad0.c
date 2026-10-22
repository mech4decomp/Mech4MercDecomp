/*
 * FUN_00687ad0 (14 B) — __fastcall. Frees *this via FUN_004084e0 if
 * non-NULL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00687ad0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_687add
        push    eax
        call    FUN_004084e0
        pop     ecx
    L_687add:
        ret
    }
}
