/*
 * 39 bytes — Cleanup function: frees a global pointer and sets it to NULL.
 * Calls a thiscall destructor (FUN_004DD340) then a free wrapper (FUN_004084E0).
 */

#include <windows.h>

/* External functions */
extern void __cdecl FUN_004DD340(void);
extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void FUN_0059A540(void)
{
    

extern int DAT_007f1fec;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f1fec]
        test    esi, esi
        je      l_skip
        mov     ecx, esi
        call    FUN_004DD340
        push    esi
        call    FUN_004084E0
        add     esp, 4
l_skip:
        mov dword ptr [DAT_007f1fec], 0x0
        pop     esi
        ret
    }


}
