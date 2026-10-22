/*
 * FUN_005bff90 (30 B) — Destructor.
 *
 * Calls FUN_005bffb0(this); if (flags & 1) frees this via FUN_004084e0.
 * Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005bffb0(void);
extern void FUN_004084e0(void *obj);

__declspec(naked) void *FUN_005bff90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005bffb0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
