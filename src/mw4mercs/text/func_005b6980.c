/*
 * FUN_005b6980 (30 B) — __thiscall (ECX = this), RET 4 (one param).
 * Calls FUN_005b69a0, and if (param & 1) frees this via FUN_004084e0.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b69a0(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005b6980(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b69a0
        test    byte ptr [esp + 0x8], 0x1
        jz      L_6998
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_6998:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
