/*
 * FUN_004EC6D0 (30 B) — scalar deleting destructor.
 *
 * Calls FUN_004EC6F0 (destructor body), then if (flags & 1) calls
 * FUN_004084E0 (free wrapper). Returns this pointer.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004ec6f0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __stdcall FUN_004ec6d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004ec6f0
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
