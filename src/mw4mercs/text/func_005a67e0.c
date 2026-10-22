/*
 * FUN_005a67e0 (30 B) — Destructor.
 *
 * Calls FUN_005a68a0() on this, then conditionally frees memory if
 * the flag param has bit 0 set.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a68a0(void);
extern void __cdecl FUN_004084e0(int param);

__declspec(naked) void __stdcall FUN_005a67e0(int param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a68a0
        test    byte ptr [esp + 0x8], 1
        jz      skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
