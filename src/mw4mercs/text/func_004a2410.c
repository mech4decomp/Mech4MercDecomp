/*
 * FUN_004A2410 (30 B) — __thiscall constructor/destructor dispatcher.
 *   Calls FUN_004A24D0(), then if (param & 1) calls FUN_004084E0(this).
 *   Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_004a24d0(void);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) int __stdcall FUN_004a2410(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004a24d0
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
