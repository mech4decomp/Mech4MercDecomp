// func_005e7930 - cdecl: allocate 0xa8-byte object, construct it, store global
// FUN_004084d0 = operator new / alloc; FUN_00501a20 = constructor (thiscall).

#include "mw4/common.h"

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void __stdcall func_005e7930(void)
{
    

extern int DAT_007f26a0;
extern int DAT_007f268c;
extern int DAT_007f2568;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jz      L2
        mov eax, dword ptr [DAT_007f26a0]
        mov ecx, dword ptr [DAT_007f268c]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5e79e0
        push    0
        push    0
        push    ecx
        push    0x789494
        push    0x42d
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x6039e0
        mov dword ptr [DAT_007f2568], esi
        pop     esi
        ret
    L2:
        mov dword ptr [DAT_007f2568], 0x0
        pop     esi
        ret
    }


}
