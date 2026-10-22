/*
 * FUN_005DBD90 (34 B) - Lazy-init helper.
 *
 * __thiscall (ECX = this). If field at +0x190 == -1, init via
 * FUN_00637B40/FUN_00637A20 then tail-jump FUN_0075DB4A.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00637b40(int param);
extern int __fastcall FUN_00637a20(int param);
extern void __fastcall FUN_0075db4a(void);

__declspec(naked) void __fastcall FUN_005dbd90(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x190]
        cmp     eax, -1
        jnz     l_done
        push    0xe8
        call    FUN_00637b40
        mov     ecx, eax
        call    FUN_00637a20
        jmp     FUN_0075db4a
    l_done:
        ret
    }
}
