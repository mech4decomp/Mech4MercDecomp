/*
 * FUN_0063d540 (30 B) — scalar deleting destructor (__thiscall, RET 4).
 * Calls FUN_0041fc90 (destructor); if the delete flag is set, frees the
 * object via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0063d540(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp+0x8], 0x1
        jz      L_d558
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_d558:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
