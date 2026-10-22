/*
 * FUN_0048c080 (30 B) — __thiscall (ECX = this), RET 4.
 * Calls FUN_0048c0a0(), then if (flags & 1) calls FUN_004084e0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_0048c0a0(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __fastcall FUN_0048c080(void *param_1, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0048c0a0
        test    byte ptr [esp + 0x08], 0x01
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     0x04
    }
}
