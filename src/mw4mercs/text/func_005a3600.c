/*
 * FUN_005a3600 (30 B) — Destructor-like function.
 *
 * Calls FUN_005a3620 on this, then if param_2 & 1, frees with FUN_004084e0.
 * Returns this in EAX.
 *
 * __thiscall (ECX = this), RET 0x4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a3620(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005a3600(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a3620
        test    byte ptr [esp + 8], 1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
