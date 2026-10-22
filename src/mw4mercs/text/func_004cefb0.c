/*
 * FUN_004CEFB0 (30 B) — Dtor with conditional free.
 *
 * __thiscall (ECX = this), RET 4.
 * Calls sub-function, then conditionally frees this if flag bit 0 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *ptr);
extern void __stdcall FUN_004176a0(void);

__declspec(naked) void __stdcall FUN_004cefb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004176a0
        test    byte ptr [esp + 8], 1
        je      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
