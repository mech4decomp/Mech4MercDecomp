/*
 * FUN_005a61b0 (30 B) — Destructor-like function.
 *
 * Saves this (ECX) in ESI, calls FUN_004dd1c0(this),
 * then if param_1 & 1, calls FUN_004084e0(this).
 * Returns this in EAX.
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004dd1c0(void *this);
extern void __stdcall FUN_004084e0(void *this);

__declspec(naked) void * __stdcall FUN_005a61b0(void *param1)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 0x08], 0x01
        jz      skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
skip_free:
        mov     eax, esi
        pop     esi
        ret     0x04
    }
}
