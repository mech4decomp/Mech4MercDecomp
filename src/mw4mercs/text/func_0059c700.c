/*
 * FUN_0059c700 (0x0059C700)
 * Decompiled from MW4Mercs.exe
 * __cdecl function that reads multiple values via virtual calls.
 */

#include "mw4/common.h"

void __cdecl sub_412570(void);
void __cdecl sub_412A50(void);
void __cdecl sub_4084E0(void *ptr);

__declspec(naked) void FUN_0059c700(void)
{
    __asm {
        sub esp, 8
        push esi
        mov esi, dword ptr [esp + 0x10]  /* parameter */
        mov eax, dword ptr [esi]
        push edi
        push 4
        lea ecx, [esp + 0xc]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x10], 0
        mov dword ptr [esp + 0x14], 0x13ec
        call dword ptr [eax + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x14], 0x13f0
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edi, 3
loop_start:
        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]
        dec edi
        jne loop_start

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov edx, dword ptr [esi]
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        push 0x7838cc
        lea ecx, [esp + 0x18]
        call sub_412570

        lea ecx, [esp + 0x14]
        push ecx
        push esi
        call sub_412A50
        mov edx, dword ptr [esi]
        add esp, 8
        push 4
        lea eax, [esp + 0xc]
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]

        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        pop edi
        pop esi
        je  skip_free
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne skip_free
        push eax
        call sub_4084E0
        add esp, 4
skip_free:
        add esp, 8
        ret
    }
}
