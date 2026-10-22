/*
 * FUN_0063b950 (30 B) — scalar deleting destructor (__thiscall, RET 4).
 * Calls FUN_0063b970 (destructor); if the delete flag (arg) is set,
 * frees the object via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0063b970(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0063b950(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0063b970
        test    byte ptr [esp+0x8], 0x1
        jz      L_b968
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_b968:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
