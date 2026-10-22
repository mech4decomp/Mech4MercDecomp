#include <windows.h>

__declspec(naked) void __fastcall FUN_004DC210(void *this)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x1c
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     edx, dword ptr [edi + 0x10]
        mov     ecx, 0x2
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     byte ptr [eax + 0x18], cl
        mov     ecx, dword ptr [edi + 0x4]
        mov     dword ptr [eax + 0x14], edx
        mov     edx, dword ptr [ecx]
        pop     edi
        mov     dword ptr [eax], 0x1c
        mov     word ptr [eax + 0x1a], 0x1
        mov     dword ptr [eax + 0x10], edx
        pop     esi
        ret     0x8
    }
}
