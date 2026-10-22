/* Auto-generated: FUN_00599820 (0x00599820) - 119 bytes, __thiscall */

#include "mw4/common.h"

/* External function declarations */
void * __cdecl FUN_004084d0(int);
int __cdecl FUN_00501a20(void);

__declspec(naked) void __fastcall func_00599820(void)
{
    

extern int DAT_007f25bc;
extern int DAT_007f25c0;
extern int DAT_007f1fdc;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        je      label_fail
        mov eax, dword ptr [DAT_007f25bc]
        mov ecx, dword ptr [DAT_007f25c0]
        push    0x00502c60
        push    0x005028b0
        push    0x0066a3c0
        push    0x0062ec80
        push    0x0066a150
        push    eax
        push    0x0062df30
        push    0x005998d0
        push    0
        push    0
        push    ecx
        push    0x007831fc
        push    0x000004bf
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi+0xa4], 0x006039e0
        mov dword ptr [DAT_007f1fdc], esi
        pop     esi
        ret
label_fail:
        mov dword ptr [DAT_007f1fdc], 0x0
        pop     esi
        ret
    }


}
