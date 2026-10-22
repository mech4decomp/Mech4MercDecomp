/*
 * FUN_00455050 (30 B) — Scalar deleting destructor.
 *
 * Calls FUN_00455500 (destructor body), then if (flags & 1) calls
 * FUN_004084E0 (free wrapper). Returns this pointer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00455500(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_00455050(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00455500
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
