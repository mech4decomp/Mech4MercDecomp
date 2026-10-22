/* Auto-generated: FUN_0059f090 (0x0059F090) - 126 bytes, __thiscall constructor, ret 8 */

#include "mw4/common.h"

/* External function declarations */
int __cdecl FUN_00415180(int);
void __cdecl FUN_00412780(int);

__declspec(naked) void * __fastcall func_0059f090(int param1, int param2)
{
    

extern int DAT_007b8c10;
__asm {
        mov eax, dword ptr [DAT_007b8c10]
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     edx, edx
        or      eax, 0xffffffff
        mov     [esi+0x14], ax
        mov     [esi+0x18], ax
        mov     eax, [esp+0x0c]
        mov     di, [eax+0xb8]
        mov     [esi+0x16], dx
        mov     [esi+0x1a], dx
        mov     [esi+0x20], edx
        lea     ecx, [esi+0x20]
        mov     dword ptr [esi], 0x007839a0
        mov     [esi+0x14], di
        mov     di, [eax+0xba]
        mov     [esi+0x16], di
        mov     di, [eax+0x74]
        mov     [esi+0x08], edx
        mov     [esi+0x0c], edx
        mov     [esi+0x24], edx
        mov     edx, [esp+0x10]
        mov     [esi+0x10], eax
        mov     ax, [eax+0x76]
        push    edx
        mov     [esi+0x18], di
        mov     [esi+0x1a], ax
        mov     dword ptr [esi+0x1c], 0x00000001
        call    FUN_00412780
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x0008
    }


}
