/*
 * 39 bytes — Cleanup function: frees a global pointer and sets it to NULL.
 * Calls a thiscall destructor (FUN_00501B40) then a free wrapper (FUN_004084E0).
 */

#include <windows.h>

/* External functions */
extern void __cdecl FUN_00501B40(void);
extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void FUN_00591EA0(void)
{
    

extern int DAT_007f1fb0;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f1fb0]
        test    esi, esi
        je      l_skip
        mov     ecx, esi
        call    FUN_00501B40
        push    esi
        call    FUN_004084E0
        add     esp, 4
l_skip:
        mov dword ptr [DAT_007f1fb0], 0x0
        pop     esi
        ret
    }


}
