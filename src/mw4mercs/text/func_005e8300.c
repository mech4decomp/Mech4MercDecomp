// func_005e8300 - thiscall(4 args): constructor; calls FUN_005f8320 and FUN_005e8370

#include "mw4/common.h"

extern void __cdecl FUN_005f8320(void);
extern void __cdecl FUN_005e8370(void);

__declspec(naked) void __stdcall func_005e8300(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edi
        push    edx
        mov     ecx, esi
        call    FUN_005f8320
        push    edi
        mov     ecx, esi
        mov     dword ptr [esi], 0x78960c
        call    FUN_005e8370
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
