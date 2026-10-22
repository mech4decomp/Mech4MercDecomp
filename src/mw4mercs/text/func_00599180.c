/*
 * FUN_00599180 — __stdcall, RET 4. Release/destructor function.
 * Decrements refcount at [ptr - 1] for a sub-object at [arg + 0x10],
 * frees it if refcount reaches 0, then frees the arg itself.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_00599180(void *arg)
{
    

extern void __cdecl FUN_1004084ce(void);
extern void __cdecl FUN_1004084c1(void);
__asm {
push    esi
        mov     esi, dword ptr [esp + 8]    /* arg */
        mov     eax, dword ptr [esi + 0x10] /* sub-object pointer */
        test    eax, eax
        je      L_free_arg
        mov     cl, byte ptr [eax - 1]      /* refcount */
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_free_arg
        push    eax
        call FUN_1004084ce
        add     esp, 4
L_free_arg:
        test    esi, esi
        je      L_done
        push    esi
        call FUN_1004084c1
        add     esp, 4
L_done:
        pop     esi
        ret     4
    }


}
