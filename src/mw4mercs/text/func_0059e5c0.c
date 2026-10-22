/* Auto-generated: FUN_0059e5c0 (0x0059E5C0) - 118 bytes, __thiscall */

#include "mw4/common.h"

/* External function declarations */
void __cdecl FUN_00412570(void);
int __cdecl FUN_005178d0(void);
int __cdecl FUN_006140c0(int);
void __cdecl FUN_004d1f10(void);
int __cdecl FUN_004da8d0(int, int);
void __cdecl FUN_0059e730(void);
void __cdecl FUN_004d21c0(void);

__declspec(naked) void __fastcall func_0059e5c0(int param1)
{
    __asm {
        sub     esp, 0x44
        push    ebx
        mov     ebx, [esp+0x4c]
        push    esi
        push    edi
        mov     edi, ecx
        push    ecx
        mov     ecx, esp
        push    ebx
        call    FUN_00412570
        call    FUN_005178d0
        mov     ecx, [eax+0x8c]
        call    FUN_006140c0
        lea     ecx, [esp+0x0c]
        mov     esi, eax
        call    FUN_004d1f10
        mov     ax, [esi+0x10]
        mov     cx, [esi+0x12]
        lea     edx, [esp+0x54]
        mov     [esp+0x54], ax
        push    edx
        lea     eax, [esp+0x10]
        push    eax
        mov     [esp+0x5e], cx
        call    FUN_004da8d0
        mov     ecx, [esp+0x28]
        mov     edx, [ecx+0x30]
        add     esp, 0x08
        push    ebx
        push    edx
        mov     ecx, edi
        call    FUN_0059e730
        lea     ecx, [esp+0x0c]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x44
        ret     0x0004
    }
}
