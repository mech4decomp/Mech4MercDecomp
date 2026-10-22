// func_005e7aa0 - thiscall: update logic; calls FUN_005f86c0 and virtual methods

#include "mw4/common.h"

extern void __cdecl FUN_005f86c0(void);

__declspec(naked) void __stdcall func_005e7aa0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f86c0
        mov     eax, dword ptr [esi + 0x2fc]
        test    eax, eax
        jnz     L1
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     cl, byte ptr [eax + 0x88]
        test    cl, cl
        jz      L1
        mov     ecx, dword ptr [esi + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0
        push    2
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [esi + 0x2f4]
        mov     eax, dword ptr [ecx]
        push    0
        push    0
        push    2
        call    dword ptr [eax + 0x8]
    L1:
        pop     esi
        ret
    }
}
