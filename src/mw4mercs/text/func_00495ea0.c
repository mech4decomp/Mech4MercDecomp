/*
 * FUN_00495EA0 (127 B) — __thiscall (ECX = this), RET 0x8.
 * Constructor: calls FUN_004a2160(0x530, param1, param2), sets vtable,
 * then initializes fields at +0x1a4/+0x1a8/+0x1ac.
 * If param2 > 19, uses virtual call to serialize; else sets defaults.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004a2160(int size, void *param1, void *param2);

__declspec(naked) void __fastcall FUN_00495ea0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x0c]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        push    ebx
        push    edi
        mov     esi, ecx
        push    0x530
        call    FUN_004a2160
        cmp     ebx, 0x14
        mov     dword ptr [esi], 0x00770198
        jl      l_defaults
        mov     eax, dword ptr [edi]
        push    0x04
        lea     ecx, [esi + 0x1a4]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [eax]
        push    0x04
        lea     ecx, [esi + 0x1a8]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x04
        lea     ecx, [esi + 0x1ac]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x08
    l_defaults:
        mov     eax, 0x40800000
        mov     dword ptr [esi + 0x1a4], eax
        mov     dword ptr [esi + 0x1a8], eax
        pop     edi
        mov     dword ptr [esi + 0x1ac], 0x3e800000
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0x08
    }
}
