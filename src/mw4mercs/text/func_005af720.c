/*
 * FUN_005af720 (30 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Calls FUN_005af740, then if (param & 1) frees this via FUN_004084e0.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005af740(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_005af720(unsigned int param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005af740
        test    byte ptr [esp + 0x8], 0x1
        jz      L738
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L738:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
