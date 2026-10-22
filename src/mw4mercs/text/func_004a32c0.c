/*
 * FUN_004A32C0 (539 B) — __thiscall MLR object constructor. Initializes a
 *   series of sub-objects (via FUN_004ae3c0/FUN_004ae5a0/FUN_004addd0/
 *   FUN_004add90/FUN_004ade00) and issues virtual calls (vtable+0x20) on the
 *   object in EDI to register each channel. Sets vtable pointer 0x770304.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_00493660(void);
extern void __fastcall FUN_004ae3c0(void);
extern void __fastcall FUN_004ae5a0(void);
extern void __fastcall FUN_004addd0(void);
extern void __fastcall FUN_004add90(void);
extern void __fastcall FUN_004ade00(void);

__declspec(naked) void __stdcall FUN_004a32c0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    ebp
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00493660
        lea     ecx, [esi + 0x64]
        mov     dword ptr [esi + 0x60], 4
        call    FUN_004ae3c0
        mov     ebx, 1
        mov     dword ptr [esi + 0x70], ebx
        lea     ecx, [esi + 0x84]
        mov     dword ptr [esi + 0x80], 4
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x90], ebx
        lea     ecx, [esi + 0xa4]
        mov     dword ptr [esi + 0xa0], 4
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0xb0], ebx
        lea     ecx, [esi + 0xc4]
        mov     dword ptr [esi + 0xc0], 4
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0xd0], ebx
        mov     dword ptr [esi + 0xe0], 8
        mov     dword ptr [esi + 0xe4], 0
        mov     dword ptr [esi + 0xec], ebx
        lea     ecx, [esi + 0x100]
        mov     dword ptr [esi + 0xfc], 5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x10c]
        call    FUN_004ae3c0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x64]
        mov     dword ptr [esi], 0x770304
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x70]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    ebx
        lea     eax, [esi + 0x7c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea     ecx, [esi + 0x84]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x90]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    ebx
        lea     eax, [esi + 0x9c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea     ecx, [esi + 0xa4]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0xb0]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    ebx
        lea     eax, [esi + 0xbc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        push    ebp
        push    edi
        lea     ecx, [esi + 0xc4]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0xd0]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    ebx
        lea     eax, [esi + 0xdc]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        cmp     ebp, 0x16
        jl      l_344d
        push    ebp
        push    edi
        lea     ecx, [esi + 0xe4]
        call    FUN_004add90
        push    ebp
        push    edi
        lea     ecx, [esi + 0xec]
        call    FUN_004addd0
        mov     edx, dword ptr [edi]
        push    ebx
        lea     eax, [esi + 0xf8]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        jmp     l_346e
    l_344d:
        mov     dword ptr [esi + 0xe8], 0
        push    0x3f800000
        lea     ecx, [esi + 0xec]
        mov     byte ptr [esi + 0xf8], 0
        call    FUN_004ade00
    l_346e:
        push    ebp
        push    edi
        lea     ecx, [esi + 0x100]
        call    FUN_004ae5a0
        push    ebp
        push    edi
        lea     ecx, [esi + 0x10c]
        call    FUN_004ae5a0
        mov     edx, dword ptr [edi]
        push    ebx
        lea     eax, [esi + 0x118]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        cmp     ebp, 0x16
        jl      l_34ad
        mov     edx, dword ptr [edi]
        push    ebx
        lea     eax, [esi + 0x11c]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        jmp     l_34b4
    l_34ad:
        mov     byte ptr [esi + 0x11c], 0
    l_34b4:
        mov     edx, dword ptr [edi]
        push    ebx
        lea     eax, [esi + 0x11d]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    ebx
        lea     ecx, [esi + 0x11e]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
