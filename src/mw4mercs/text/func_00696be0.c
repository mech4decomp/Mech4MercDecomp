/*
 * FUN_00696BE0 (33 B) — __thiscall destructor.
 *
 * Calls FUN_00695a10(this), FUN_006967e0() (thiscall on return of prior),
 * then frees *this via FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00695a10(void *a);
extern void __cdecl FUN_006967e0(void);
extern void __cdecl FUN_004084e0(void *a);

__declspec(naked) void FUN_00696be0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    esi
        call    FUN_00695a10
        mov     ecx, eax
        call    FUN_006967e0
        mov     esi, dword ptr [esi]
        test    esi, esi
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_skip:
        pop     esi
        ret
    }
}
