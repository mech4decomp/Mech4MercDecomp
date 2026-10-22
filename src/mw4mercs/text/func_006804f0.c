/*
 * FUN_006804f0 (30 B) — HUD element destructor (__thiscall, RET 4).
 * Calls FUN_00680570, optionally frees via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00680570(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_006804f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00680570
        test    byte ptr [esp+8], 1
        jz      L_0x680508
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_0x680508:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
