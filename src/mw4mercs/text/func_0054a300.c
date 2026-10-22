// func_0054A300 - thiscall: processes an object, conditionally creates a string and calls a method

#include "mw4/common.h"

extern void __cdecl FUN_004D2000(void);
extern void __cdecl FUN_004D2310(void);
extern void __cdecl FUN_0050A730(void);
extern void __cdecl FUN_004D21C0(void);
extern void __cdecl FUN_004FA0A0(void);

__declspec(naked) void __stdcall func_0054A300(int arg)
{
    

extern int DAT_007dd230;
__asm {
sub     esp, 0x44
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x55C]
        test    eax, eax
        je      L1
        push    0
        push    0x0077CEC4
        lea     ecx, [esp + 0xC]
        call    FUN_004D2000
        lea     ecx, [esp + 4]
        call    FUN_004D2310
        mov ecx, dword ptr [DAT_007dd230]
        lea     eax, [esp + 4]
        push    eax
        call    FUN_0050A730
        lea     ecx, [esp + 4]
        call    FUN_004D21C0
    L1:
        mov     ecx, dword ptr [esp + 0x4C]
        push    ecx
        mov     ecx, esi
        call    FUN_004FA0A0
        pop     esi
        add     esp, 0x44
        ret     4
    }


}
