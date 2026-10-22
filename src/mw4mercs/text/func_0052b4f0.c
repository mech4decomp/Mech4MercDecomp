/*
 * FUN_0052b4f0 (270 B) — Stream read function (__fastcall).
 * Reads multiple fields from a stream object via FUN_0041ec50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_0041ec50(void *stream, int size);

__declspec(naked) void __fastcall FUN_0052b4f0(void *stream)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]  /* second param (stream) */
        mov     esi, ecx                     /* this pointer */
        push    7
        push    esi
        mov     ecx, edi
        call    FUN_0041ec50
        push    8
        lea     eax, [esi + 4]
        push    eax
        mov     ecx, edi
        call    FUN_0041ec50
        push    8
        lea     ecx, [esi + 8]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x10
        lea     edx, [esi + 0xc]
        push    edx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     eax, [esi + 0x10]
        push    eax
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     ecx, [esi + 0x14]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     edx, [esi + 0x18]
        push    edx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     eax, [esi + 0x1c]
        push    eax
        mov     ecx, edi
        call    FUN_0041ec50
        push    8
        lea     ecx, [esi + 0x20]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ec50
        push    4
        lea     edx, [esi + 0x24]
        push    edx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     eax, [esi + 0x28]
        push    eax
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     ecx, [esi + 0x30]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     edx, [esi + 0x38]
        push    edx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     eax, [esi + 0x40]
        push    eax
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     ecx, [esi + 0x48]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     edx, [esi + 0x2c]
        push    edx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     eax, [esi + 0x34]
        push    eax
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     ecx, [esi + 0x3c]
        push    ecx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        lea     edx, [esi + 0x44]
        push    edx
        mov     ecx, edi
        call    FUN_0041ec50
        push    0x20
        add     esi, 0x4c
        push    esi
        mov     ecx, edi
        call    FUN_0041ec50
        pop     edi
        pop     esi
        ret     4
    }
}
