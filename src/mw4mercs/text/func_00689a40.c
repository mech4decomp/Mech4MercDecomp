/*
 * FUN_00689a40 (30 B) — __thiscall destructor. Calls FUN_00689a60,
 * frees the object via FUN_004084e0 if flag bit 0 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00689a60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void* FUN_00689a40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00689a60
        test    byte ptr [esp+8], 1
        jz      L_689a58
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_689a58:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
