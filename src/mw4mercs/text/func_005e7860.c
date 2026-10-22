/*
 * FUN_005e7860 (30 B) — __thiscall, RET 0x4 (1 stack param).
 *
 * Calls FUN_005e7880, then if (param & 1) frees this via FUN_004084e0.
 * Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e7880(void);
extern void FUN_004084e0(void *p);

__declspec(naked) void FUN_005e7860(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e7880
        test    byte ptr [esp + 0x8], 0x1
        jz      L_78
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_78:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
