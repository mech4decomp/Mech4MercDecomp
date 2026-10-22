/*
 * FUN_005ab430 (30 B) — __thiscall, RET 4.
 *
 * Destructor: calls FUN_005ab450, optionally frees via FUN_004084e0 if the
 * low flag bit is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ab450(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005ab430(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005ab450
        test    byte ptr [esp + 0x8], 0x1
        jz      L_ab448
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_ab448:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
