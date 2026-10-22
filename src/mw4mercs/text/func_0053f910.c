/*
 * FUN_0053f910 (126 B) — __thiscall, RET 0x8.
 * Dispatches on a mode value via a jump table, setting this->[0x3514], then
 * sends a notification through the network object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_0053f990;   /* jump table in .text (outside function range) */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void func_0053f910(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        mov     ecx, [esp + 0x10]
        mov     eax, [ecx]
        push    0x4
        lea     edx, [esp + 0x8]
        push    edx
        mov     dword ptr [esp + 0xC], 0
        call    dword ptr [eax + 0x20]
        mov     eax, [esp + 0x4]
        dec     eax
        cmp     eax, 0x7
        ja      common
        jmp     dword ptr [eax*4 + DAT_0053f990]

    case0:
        mov     dword ptr [esi + 0x3514], 0x3
        jmp     common

    case1:
        mov     dword ptr [esi + 0x3514], 0x2
        jmp     common

    case2:
        mov     dword ptr [esi + 0x3514], 0x4
        jmp     common

    case3:
        mov     dword ptr [esi + 0x3514], 0x5

    common:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0xC]
        xor     ecx, 0x85739531
        mov     eax, [ecx]
        push    0x1
        call    dword ptr [eax + 0x2C]
        pop     esi
        pop     ecx
        ret     0x8
    }
}
