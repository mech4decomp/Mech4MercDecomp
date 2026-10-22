/*
 * FUN_00482B80 (30 B) — MLR dtor (__thiscall, RET 4).
 *
 * Calls FUN_00482BA0 (vtable init), then if flag & 1 calls
 * FUN_004084E0 (free). Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void FUN_00482ba0(void *this);
extern void FUN_004084e0(void *ptr);

__declspec(naked) void *FUN_00482b80(void *this, unsigned char flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00482ba0
        test    byte ptr [esp + 8], 1
        jz      l_skip_free
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_free:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
