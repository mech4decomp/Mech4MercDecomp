/*
 * FUN_005e33d0 (30 B) — Destructor.
 *
 * __thiscall (ECX = this), RET 4 (one stack param, a flags byte).
 * Calls FUN_005e3450(this); if (flags & 1) frees this via
 * FUN_004084e0. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005e3450(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_005e33d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005e3450
        test    byte ptr [esp + 0x8], 0x1
        jz      skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip_free:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
