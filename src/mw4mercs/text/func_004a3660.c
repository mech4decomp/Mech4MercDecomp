/*
 * FUN_004A3660 (298 B) — __thiscall MLR object setup. Calls sub-object
 *   initializers (FUN_004ae560/FUN_004addb0/FUN_004add70) and issues virtual
 *   calls (vtable+0x24) on the object in ESI to register each channel.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00493940(void);
extern void __fastcall FUN_004ae560(void);
extern void __fastcall FUN_004addb0(void);
extern void __fastcall FUN_004add70(void);

__declspec(naked) void __stdcall FUN_004a3660(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     edi, ecx
        push    esi
        call    FUN_00493940
        push    esi
        lea     ecx, [edi + 0x64]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x70]
        call    FUN_004addb0
        mov     eax, dword ptr [esi]
        push    1
        lea     ecx, [edi + 0x7c]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        push    esi
        lea     ecx, [edi + 0x84]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x90]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x9c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0xa4]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xb0]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0xbc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0xc4]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0xd0]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0xdc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0xe4]
        call    FUN_004add70
        push    esi
        lea     ecx, [edi + 0xec]
        call    FUN_004addb0
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0xf8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        lea     ecx, [edi + 0x100]
        call    FUN_004ae560
        push    esi
        lea     ecx, [edi + 0x10c]
        call    FUN_004ae560
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x118]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [edi + 0x11c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    1
        lea     ecx, [edi + 0x11d]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [eax]
        push    1
        add     edi, 0x11e
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        pop     edi
        pop     esi
        ret     4
    }
}
