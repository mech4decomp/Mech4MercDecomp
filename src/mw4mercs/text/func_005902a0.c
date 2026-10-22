/* Auto-generated inline asm for FUN_005902a0 (0x005902A0) */
#include "mw4/common.h"

__declspec(naked) void __fastcall FUN_005902a0(void *this)
{
    

extern void __cdecl FUN_00603c90(void);
extern int DAT_007f1f7d;
__asm {
push        ebx
        push        esi
        mov         esi, ecx
        mov         ebx, dword ptr [esi + 0x2f4]
        push        edi
        xor         edi, edi
        mov         ecx, ebx
        mov         dword ptr [esi + 0x848], edi
        mov         dword ptr [esi + 0x42c], edi
        mov         dword ptr [esi + 0x43c], edi
        mov         dword ptr [esi + 0x440], edi
        mov         dword ptr [esi + 0x444], edi
        mov         dword ptr [esi + 0x448], edi
        mov         dword ptr [esi + 0x5b8], edi
        mov         dword ptr [esi + 0x5ac], edi
        mov         dword ptr [esi + 0x5b0], edi
        call FUN_00603c90

        mov         eax, dword ptr [ebx]
        xor         ecx, ecx
        mov cl, byte ptr [DAT_007f1f7d]
        push        edi
        push        ecx
        push        0xa
        mov         ecx, ebx
        call        dword ptr [eax + 8]

        mov         ecx, dword ptr [esi + 0xe0]
        mov         edx, dword ptr [ecx]
        push        edi
        push        0xb
        call        dword ptr [edx + 4]

        pop         edi
        pop         esi
        pop         ebx
        ret
    }


}
