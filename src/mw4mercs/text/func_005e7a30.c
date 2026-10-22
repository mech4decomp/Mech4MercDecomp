// func_005e7a30 - thiscall: constructor, 4 args (RET 0x10)
// Calls FUN_005f8320 (base ctor) and FUN_005e7a90 (thiscall, 1 arg).

#include "mw4/common.h"

extern void __cdecl FUN_005f8320(void);
extern void __cdecl FUN_005e7a90(void);

__declspec(naked) void __stdcall func_005e7a30(void)
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
        mov     byte ptr [esi + 0x41d], 0
        mov     dword ptr [esi], 0x7894ac
        call    FUN_005e7a90
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
