/*
 * FUN_0048a840 (40 B) — Destructor: frees inner pointer then optionally self.
 *
 * __thiscall (ECX = this), RET 0x04 (1 stack param: flags byte).
 * If *this != 0, frees it. If flags & 1, frees this too.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __fastcall FUN_0048a840(void *param1)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_check_flag
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
    l_check_flag:
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
