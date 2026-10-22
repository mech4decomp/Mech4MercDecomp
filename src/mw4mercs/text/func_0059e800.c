/* Auto-generated: FUN_0059e800 (0x0059E800) - 129 bytes, __thiscall */

#include "mw4/common.h"

/* External function declarations */
void __cdecl FUN_00412570(void);
int __cdecl FUN_005178d0(void);
int __cdecl FUN_006140c0(int);
void __cdecl FUN_004d1f10(void);
int __cdecl FUN_004da8d0(int, int);
void * __cdecl FUN_00416b60(void *);
void __cdecl FUN_004d21c0(void);

__declspec(naked) int __fastcall func_0059e800(int param1)
{
    __asm {
        sub     esp, 0x44
        mov     eax, [esp+0x48]
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        push    ecx
        mov     ecx, esp
        push    eax
        xor     ebx, ebx
        call    FUN_00412570
        call    FUN_005178d0
        mov     ecx, [eax+0x8c]
        call    FUN_006140c0
        lea     ecx, [esp+0x0c]
        mov     esi, eax
        call    FUN_004d1f10
        mov     cx, [esi+0x10]
        mov     dx, [esi+0x12]
        lea     eax, [esp+0x54]
        mov     [esp+0x54], cx
        push    eax
        lea     ecx, [esp+0x10]
        push    ecx
        mov     [esp+0x5e], dx
        call    FUN_004da8d0
        mov     edx, [esp+0x28]
        add     esp, 0x08
        add     edx, 0x30
        push    edx
        lea     ecx, [edi+0x10]
        call    FUN_00416b60
        test    eax, eax
        je      label_skip
        mov     ebx, [eax+0x18]
label_skip:
        lea     ecx, [esp+0x0c]
        call    FUN_004d21c0
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x44
        ret     0x0004
    }
}
