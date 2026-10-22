/*
 * FUN_00594000 (0x00594000)
 * Decompiled from MW4Mercs.exe
 * __thiscall serialization/export function.
 * Writes object fields using various format strings.
 * Callee cleans 4 bytes from stack (ret 4).
 */

#include "mw4/common.h"

/* Forward declarations */
void __cdecl sub_5971B0(void);     /* __thiscall */
void __cdecl sub_597280(void);     /* __cdecl */
void __cdecl sub_411C40(void);     /* __thiscall: write int */
void __cdecl sub_411D10(void);     /* __thiscall: write float */
void __cdecl sub_411C80(void);     /* __thiscall: write string */
void __cdecl sub_4084E0(void *ptr); /* __cdecl: free */

__declspec(naked) void FUN_00594000(void)
{
    __asm {
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x18]
        push eax
        call sub_5971B0
        mov ebx, dword ptr [esp + 0x14]  /* parameter */
        add esp, 4
        push eax
        push 0x776994
        mov ecx, ebx
        call sub_411C40

        mov ecx, dword ptr [edi + 0x40]
        push ecx
        push 0x782cb8
        mov ecx, ebx
        call sub_411D10

        mov edx, dword ptr [edi + 0x50]
        push edx
        push 0x782cac
        mov ecx, ebx
        call sub_411D10

        mov eax, dword ptr [edi + 0x60]
        push eax
        push 0x782c98
        mov ecx, ebx
        call sub_411C40

        mov ecx, dword ptr [edi + 0x20]
        push ecx
        call sub_597280
        add esp, 4
        push eax
        push 0x773784
        mov ecx, ebx
        call sub_411C40

        mov eax, dword ptr [edi + 0x14]
        test eax, eax
        je  skip_field_14
        mov edx, dword ptr [eax + 0x10]
        push edx
        push 0x782c88
        mov ecx, ebx
        call sub_411C40

        mov eax, dword ptr [edi + 0x1c]
        push eax
        push 0x782c74
        mov ecx, ebx
        call sub_411D10
skip_field_14:

        /* Iterate linked list at [edi+0x24] */
        mov esi, dword ptr [edi + 0x24]
        test esi, esi
        je  list_24_done
list_24_loop:
        mov eax, dword ptr [esi]
        test eax, eax
        mov esi, dword ptr [esi + 4]
        je  list_24_done
        mov ecx, dword ptr [eax + 0x10]
        push ecx
        push 0x782c5c
        mov ecx, ebx
        call sub_411C80
        /* _emit: force jmp to test esi,esi (EB E1) */
        _emit 0xEB
        _emit 0xE1
list_24_done:

        /* Iterate linked list at [edi+0x2c] */
        mov esi, dword ptr [edi + 0x2c]
        test esi, esi
        je  list_2c_done
list_2c_loop:
        mov eax, dword ptr [esi]
        test eax, eax
        mov esi, dword ptr [esi + 4]
        je  list_2c_done
        mov edx, dword ptr [eax + 0x10]
        push edx
        push 0x782c48
        mov ecx, ebx
        call sub_411C80
        /* _emit: force jmp to test esi,esi (EB E1) */
        _emit 0xEB
        _emit 0xE1
list_2c_done:

        /* Iterate linked list at [edi+0x58] with refcounting */
        mov edi, dword ptr [edi + 0x58]
        test edi, edi
        je  list_58_done
list_58_loop:
        mov eax, dword ptr [edi]
        test eax, eax
        mov edi, dword ptr [edi + 4]
        je  list_58_done
        mov esi, dword ptr [eax + 0x10]
        test esi, esi
        je  skip_ref_inc
        inc byte ptr [esi - 1]
skip_ref_inc:
        push esi
        push 0x782c2c
        mov ecx, ebx
        call sub_411C80

        /* Decrement refcount */
        test esi, esi
        /* _emit: je to list_58_loop (74 D8) */
        _emit 0x74
        _emit 0xD8
        mov cl, byte ptr [esi - 1]
        lea eax, [esi - 1]
        dec cl
        mov byte ptr [eax], cl
        /* _emit: jne to list_58_loop (75 CC) */
        _emit 0x75
        _emit 0xCC
        push eax
        call sub_4084E0
        add esp, 4
        /* _emit: jmp to list_58_loop (EB C1) */
        _emit 0xEB
        _emit 0xC1
list_58_done:

        pop edi
        pop esi
        pop ebx
        ret 4
    }
}
