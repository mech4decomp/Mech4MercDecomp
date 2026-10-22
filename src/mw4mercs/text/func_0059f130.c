/* Auto-generated: FUN_0059f130 (0x0059F130) - 118 bytes, __thiscall constructor, ret 0xc */

#include "mw4/common.h"

/* External function declarations */
int __cdecl FUN_00415180(int);
void __cdecl FUN_00412780(int);

__declspec(naked) void * __fastcall func_0059f130(int param1, int param2, int param3, int param4)
{
    

extern int DAT_007b8c10;
__asm {
        mov eax, dword ptr [DAT_007b8c10]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     dx, [esp+0x08]
        xor     eax, eax
        or      ecx, 0xffffffff
        mov     [esi+0x14], cx
        mov     [esi+0x16], ax
        mov     [esi+0x18], cx
        mov     [esi+0x1a], ax
        mov     [esi+0x20], eax
        lea     ecx, [esi+0x20]
        mov     dword ptr [esi], 0x007839a0
        mov     [esi+0x14], dx
        mov     dx, [esp+0x0a]
        mov     [esi+0x16], dx
        mov     dx, [esp+0x0c]
        mov     [esi+0x08], eax
        mov     [esi+0x0c], eax
        mov     [esi+0x10], eax
        mov     [esi+0x24], eax
        mov     eax, [esp+0x10]
        mov     [esi+0x18], dx
        mov     dx, [esp+0x0e]
        push    eax
        mov     [esi+0x1a], dx
        mov     dword ptr [esi+0x1c], 0x00000001
        call    FUN_00412780
        mov     eax, esi
        pop     esi
        ret     0x000c
    }


}
