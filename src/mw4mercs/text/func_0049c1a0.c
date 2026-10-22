/*
 * FUN_0049c1a0 (51 B) — MLR debris-cloud destructor (__thiscall, RET 4).
 * Frees this+0xa0 array, calls FUN_00494140, and optionally frees the
 * object itself when param&1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *);
extern void FUN_00494140(void);

__declspec(naked) void FUN_0049c1a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0xa0]
        test    eax, eax
        jz      L_c1b6
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_c1b6:
        mov     ecx, esi
        call    FUN_00494140
        test    byte ptr [esp+0x8], 0x1
        jz      L_c1cd
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_c1cd:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
