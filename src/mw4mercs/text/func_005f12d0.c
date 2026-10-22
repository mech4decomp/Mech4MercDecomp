/*
 * FUN_005f12d0 (30 B) — __thiscall destructor wrapper.
 *
 * Calls FUN_005f14b0() on this (ECX), then if the low bit of the
 * stack flag param is set, frees this via FUN_004084e0. Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f14b0(void);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005f12d0(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f14b0
        test    byte ptr [esp + 0x8], 1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
