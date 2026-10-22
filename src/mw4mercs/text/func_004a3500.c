/*
 * FUN_004A3500 (196 B) — __thiscall MLR object constructor (variant of
 *   FUN_004A32C0). Initializes a series of sub-objects via FUN_004ae3c0,
 *   zeroes three flag bytes, and sets vtable pointer 0x770304.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004937b0(void);
extern void __fastcall FUN_004ae3c0(void);

__declspec(naked) void __stdcall FUN_004a3500(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_004937b0
        mov     ebx, 4
        lea     ecx, [esi + 0x64]
        mov     dword ptr [esi + 0x60], ebx
        call    FUN_004ae3c0
        mov     edi, 1
        mov     dword ptr [esi + 0x70], edi
        lea     ecx, [esi + 0x84]
        mov     dword ptr [esi + 0x80], ebx
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x90], edi
        lea     ecx, [esi + 0xa4]
        mov     dword ptr [esi + 0xa0], ebx
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0xb0], edi
        lea     ecx, [esi + 0xc4]
        mov     dword ptr [esi + 0xc0], ebx
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0xd0], edi
        mov     dword ptr [esi + 0xe0], 8
        xor     ebx, ebx
        mov     dword ptr [esi + 0xe4], ebx
        mov     dword ptr [esi + 0xec], edi
        lea     ecx, [esi + 0x100]
        mov     dword ptr [esi + 0xfc], 5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x10c]
        call    FUN_004ae3c0
        pop     edi
        mov     byte ptr [esi + 0x11c], bl
        mov     byte ptr [esi + 0x11d], bl
        mov     byte ptr [esi + 0x11e], bl
        mov     dword ptr [esi], 0x770304
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
