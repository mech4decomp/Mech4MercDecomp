/*
 * FUN_005bb1f0 (30 B) — __thiscall destructor-style routine.
 *
 * Calls FUN_005bb210() on this (ECX); if the flag param (bit 0) is set,
 * frees this via FUN_004084e0. Returns this in EAX. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005bb210(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_005bb1f0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005bb210
        test    byte ptr [esp + 0x8], 0x1
        jz      L_08
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_08:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
