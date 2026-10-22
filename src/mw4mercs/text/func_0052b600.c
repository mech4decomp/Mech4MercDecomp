/*
 * FUN_0052b600 (390 B) — Stream read function (__fastcall), variant 2.
 * Zeros each field then reads via FUN_0041eb40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_0041eb40(void *stream, int size);

__declspec(naked) void __fastcall FUN_0052b600(void *stream)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]  /* second param (stream) */
        mov     esi, ecx                     /* this pointer */
        push    7
        push    esi
        mov     ecx, edi
        mov     dword ptr [esi], 0
        call    FUN_0041eb40
        lea     eax, [esi + 4]
        push    8
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 8]
        push    8
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0xc]
        push    0x10
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x10]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x14]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x18]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x1c]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x20]
        push    8
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x24]
        push    4
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x28]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x30]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x38]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x40]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x48]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x2c]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x34]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x3c]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x44]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        lea     eax, [esi + 0x4c]
        push    0x20
        push    eax
        mov     ecx, edi
        mov     dword ptr [eax], 0
        call    FUN_0041eb40
        pop     edi
        pop     esi
        ret     4
    }
}
