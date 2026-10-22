// func_0055E740 - converts 4 ints to floats via multiplication and rounding
// __cdecl: void func_0055E740(int* a, int* b, int* c, int* d)

#include "mw4/common.h"

extern int __cdecl FUN_0075DB4A(void);

__declspec(naked) void __cdecl func_0055E740(int* a, int* b, int* c, int* d)
{
    

extern int DAT_007ddd84;
extern int DAT_007ddd80;
__asm {
push    esi
        mov     esi, dword ptr [esp + 8]
        fild    dword ptr [esi]
        fmul dword ptr [DAT_007ddd84]
        call    FUN_0075DB4A
        mov     dword ptr [esi], eax
        mov     esi, dword ptr [esp + 0xC]
        fild    dword ptr [esi]
        fmul dword ptr [DAT_007ddd80]
        call    FUN_0075DB4A
        mov     dword ptr [esi], eax
        mov     esi, dword ptr [esp + 0x10]
        fild    dword ptr [esi]
        fmul dword ptr [DAT_007ddd84]
        call    FUN_0075DB4A
        mov     dword ptr [esi], eax
        mov     esi, dword ptr [esp + 0x14]
        fild    dword ptr [esi]
        fmul dword ptr [DAT_007ddd80]
        call    FUN_0075DB4A
        mov     dword ptr [esi], eax
        pop     esi
        ret
    }


}
