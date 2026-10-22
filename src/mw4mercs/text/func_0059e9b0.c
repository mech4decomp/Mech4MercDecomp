/* Auto-generated: FUN_0059e9b0 (0x0059E9B0) - 123 bytes, __thiscall */

#include "mw4/common.h"

/* External function declarations */
void __cdecl FUN_00412570(void);
int __cdecl FUN_005178d0(void);
int __cdecl FUN_006140c0(int);
void __cdecl FUN_004d1f10(void);
int __cdecl FUN_004da8d0(int, int);
void __cdecl FUN_0059eb30(void);
void __cdecl FUN_004d21c0(void);

__declspec(naked) void __fastcall func_0059e9b0(int param1)
{
    __asm {
        sub     esp, 0x44
        mov     eax, [esp+0x48]
        push    esi
        push    edi
        mov     edi, ecx
        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00412570
        call    FUN_005178d0
        mov     ecx, [eax+0x90]
        call    FUN_006140c0
        lea     ecx, [esp+0x08]
        mov     esi, eax
        call    FUN_004d1f10
        mov     cx, [esi+0x10]
        mov     dx, [esi+0x12]
        lea     eax, [esp+0x50]
        mov     [esp+0x50], cx
        push    eax
        lea     ecx, [esp+0x0c]
        push    ecx
        mov     [esp+0x5a], dx
        call    FUN_004da8d0
        mov     edx, [esp+0x24]
        mov     eax, [edx+0x634]
        add     esp, 0x08
        add     eax, 0x96
        push    eax
        mov     ecx, edi
        call    FUN_0059eb30
        lea     ecx, [esp+0x08]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        add     esp, 0x44
        ret     0x0004
    }
}
