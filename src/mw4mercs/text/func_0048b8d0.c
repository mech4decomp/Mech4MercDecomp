/*
 * FUN_0048b8d0 (59 B) — __thiscall (ECX = this), RET 4.
 * If flags & 2: adjusts this -= 4, decrements refcount at [this-4],
 *   if flags & 1: frees this.
 * Else if flags & 1: frees this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void * __fastcall FUN_0048b8d0(void *param_1, int flags)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [esp + 0x08]
        test    cl, 0x02
        jz      l_check_free
        mov     eax, dword ptr [esi - 0x04]
        add     esi, -0x04
        dec     eax
        test    cl, 0x01
        jz      l_return
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
        mov     eax, esi
        pop     esi
        ret     0x04
    l_check_free:
        test    cl, 0x01
        jz      l_return
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_return:
        mov     eax, esi
        pop     esi
        ret     0x04
    }
}
