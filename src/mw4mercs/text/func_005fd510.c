/*
 * FUN_005fd510 (30 B) — __thiscall. Calls FUN_004dd1c0, and if the
 * flag arg bit 0 is set, frees this via FUN_004084e0; returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dd1c0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005fd510(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp+8], 1
        jz      L_528
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_528:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
