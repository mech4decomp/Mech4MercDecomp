// func_00559B60 - thiscall: creates a new object at this+0x6C8
// Calls FUN_0041FD80, if fails creates via FUN_004EBCF0 then FUN_0041FCD0 and FUN_004EBE90

#include "mw4/common.h"

extern void __cdecl FUN_0041FD80(void);
extern void* __cdecl FUN_004EBCF0(void);
extern void __cdecl FUN_0041FCD0(void);
extern void __cdecl FUN_004EBE90(void);

__declspec(naked) void __stdcall func_00559B60(void)
{
    __asm {
        push    edi
        lea     edi, [ecx + 0x6C8]
        mov     ecx, edi
        call    FUN_0041FD80
        test    eax, eax
        jne     L1
        push    esi
        push    0x3F4CCCCD
        push    0x3F000000
        push    0x3F800000
        push    0x3F800000
        push    0x0077D148
        push    3
        call    FUN_004EBCF0
        add     esp, 0x18
        mov     esi, eax
        push    esi
        mov     ecx, edi
        call    FUN_0041FCD0
        push    1
        mov     ecx, esi
        call    FUN_004EBE90
        pop     esi
    L1:
        pop     edi
        ret
    }
}
