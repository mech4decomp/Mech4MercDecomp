/*
 * FUN_004E5300 (30 B) — Scalar deleting destructor.
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (flags byte).
 * Calls FUN_004E4D70() as destructor body.
 * If (flags & 1), calls FUN_004084E0(this) to free.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e4d70(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_004e5300(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004e4d70
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
