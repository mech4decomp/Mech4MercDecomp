/*
 * FUN_0061af00 (30 B) — __thiscall: calls FUN_0061af20, then if (arg & 1)
 * frees this via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0061af20(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_0061af00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0061af20
        test    byte ptr [esp+8], 1
        jz      L18
        push    esi
        call    FUN_004084e0
        add     esp, 4
L18:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
