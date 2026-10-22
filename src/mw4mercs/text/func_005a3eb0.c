/*
 * FUN_005a3eb0 (30 B) — Constructor-like function.
 *
 * Calls sub-constructor FUN_005a3ed0, then if param bit 0 is set,
 * calls FUN_004084e0 (operator delete) on this.
 * Returns this in EAX.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005a3ed0(void);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void *__stdcall FUN_005a3eb0(void *this, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005a3ed0
        test    byte ptr [esp + 0x08], 1
        jz      skip_delete
        push    esi
        call    FUN_004084e0
        add     esp, 4
skip_delete:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
