/*
 * FUN_005b87a0 (30 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Destructor-style: calls FUN_005b87c0 on this, then if (param & 1)
 * frees this via FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005b87c0(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005b87a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b87c0
        test    byte ptr [esp + 0x8], 0x1
        jz      L87B8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L87B8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
