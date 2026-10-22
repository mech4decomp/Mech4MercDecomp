/*
 * FUN_0059E130 — __stdcall factory function.
 * Allocates a new object of size 0x20, initializes it via FUN_004D5C10,
 * and stores the result in a global.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_0059E130(void)
{
    

extern void __cdecl FUN_1004084d3(void);
extern int DAT_007dc140;
extern void __cdecl FUN_1004d5bf0(void);
extern int DAT_007f2004;
__asm {
push    0x20
        call FUN_1004084d3
        add     esp, 4
        test    eax, eax
        je      L_alloc_fail
        mov ecx, dword ptr [DAT_007dc140]
        push    0
        push    0
        push    ecx
        push    0x007838FC
        push    0x4C8
        mov     ecx, eax
        call FUN_1004d5bf0
        mov dword ptr [DAT_007f2004], eax
        ret
L_alloc_fail:
        mov dword ptr [DAT_007f2004], 0x0
        ret
    }


}
