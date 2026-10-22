/*
 * FUN_004DB340 (30 B) — Scalar deleting destructor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (flags byte).
 * Calls thunk_FUN_004171b0 (0x004171B0, a jmp-thunk to FUN_00415C40) as
 * destructor body.
 * If (flags & 1), calls FUN_004084E0(this) to free.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl thunk_FUN_004171b0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_004db340(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    thunk_FUN_004171b0
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
