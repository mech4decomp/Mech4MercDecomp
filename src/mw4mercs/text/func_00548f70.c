// func_00548F70 - allocates 0x24 bytes, initializes an object, stores pointer at 0x7DDD70

#include "mw4/common.h"

extern void* __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004DD270(void);

__declspec(naked) void __stdcall func_00548F70(void)
{
    

extern int DAT_007dc8cc;
extern int DAT_007ddd70;
__asm {
push    esi
        push    0x24
        call    FUN_004084D0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L1
        mov eax, dword ptr [DAT_007dc8cc]
        push    0x005052A0
        push    0x00548FF0
        push    0x0077B9B0
        push    5
        push    eax
        push    0x0077CA18
        push    0x48C
        mov     ecx, esi
        call    FUN_004DD270
        mov dword ptr [DAT_007ddd70], esi
        pop     esi
        ret
    L1:
        mov dword ptr [DAT_007ddd70], 0x0
        pop     esi
        ret
    }


}
