/* Auto-generated: FUN_00593f20 (0x00593F20) - 123 bytes, __thiscall destructor */

#include "mw4/common.h"

/* External function declarations */
void __cdecl FUN_004084e0(void *);
void __cdecl FUN_00417980(void);
void __cdecl FUN_00415380(void);

__declspec(naked) void __fastcall func_00593f20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x00782c28
        mov     eax, [esi+0xdc]
        test    eax, eax
        je      skip1
        mov     cl, [eax-0x01]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     skip1
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip1:
        mov     eax, [esi+0x60]
        test    eax, eax
        je      skip2
        mov     cl, [eax-0x01]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     skip2
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip2:
        lea     ecx, [esi+0x58]
        call    FUN_00417980
        lea     ecx, [esi+0x2c]
        call    FUN_00417980
        lea     ecx, [esi+0x24]
        call    FUN_00417980
        mov     eax, [esi+0x10]
        test    eax, eax
        je      skip3
        mov     cl, [eax-0x01]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     skip3
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip3:
        mov     ecx, esi
        call    FUN_00415380
        pop     esi
        ret
    }
}
