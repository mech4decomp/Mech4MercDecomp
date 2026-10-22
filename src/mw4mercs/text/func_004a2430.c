/*
 * FUN_004A2430 (151 B) — __thiscall MLR object constructor (variant).
 *   Sets vtable 0x7702cc, initializes sub-objects via FUN_004ae3c0,
 *   zeroes fields, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004a3500(void);
extern void __cdecl FUN_004ae3c0(void);

__declspec(naked) void __fastcall FUN_004a2430(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004a3500
        mov     dword ptr [esi + 0x120], 0x7
        xor     ebx, ebx
        lea     ecx, [esi + 0x12c]
        mov     dword ptr [esi + 0x124], ebx
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x13c], 0x7
        lea     ecx, [esi + 0x148]
        mov     dword ptr [esi + 0x140], ebx
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x15c]
        mov     dword ptr [esi + 0x158], 0x6
        call    FUN_004ae3c0
        mov     dword ptr [esi + 0x168], 0x2
        mov     dword ptr [esi + 0x180], ebx
        mov     dword ptr [esi + 0x188], ebx
        mov     dword ptr [esi + 0x190], ebx
        mov     dword ptr [esi + 0x198], ebx
        mov     byte ptr [esi + 0x1a0], bl
        mov     dword ptr [esi], 0x7702cc
        mov     byte ptr [esi + 0x1a1], 0x1
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
