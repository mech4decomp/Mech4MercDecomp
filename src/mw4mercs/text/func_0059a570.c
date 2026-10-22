/*
 * FUN_0059a570 (0x0059A570)
 * Decompiled from MW4Mercs.exe
 * __cdecl initialization function.
 * Allocates and initializes several objects.
 */

#include "mw4/common.h"

void * __cdecl sub_4084D0(unsigned int size);
void __cdecl sub_501A20(void);
void __cdecl sub_5008E0(void);
void __cdecl sub_500EC0(void);

__declspec(naked) void FUN_0059a570(void)
{
    __asm {
        push esi
        push 0xa8
        call sub_4084D0
        mov esi, eax
        add esp, 4
        test esi, esi
        je  null_alloc_1

        /* _emit: mov eax,[0x7F1FEC] */
        _emit 0xA1
        _emit 0xEC
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        /* _emit: mov ecx,[0x7F2560] */
        _emit 0x8B
        _emit 0x0D
        _emit 0x60
        _emit 0x25
        _emit 0x7F
        _emit 0x00
        push 0x502c60
        push 0x5028b0
        push 0x675b20
        push 0
        push 0x675b00
        push eax
        push 0x674b00
        push 0x59a6e0
        push 0
        push 0
        push ecx
        push 0x783684
        push 0x4ce
        mov ecx, esi
        call sub_501A20
        mov dword ptr [esi + 0xa4], 0x5ef970
        /* _emit: mov [0x7F1FF0],esi */
        _emit 0x89
        _emit 0x35
        _emit 0xF0
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        jmp alloc_2
null_alloc_1:
        /* _emit: mov [0x7F1FF0],0 */
        _emit 0xC7
        _emit 0x05
        _emit 0xF0
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00

alloc_2:
        push 0x20
        call sub_4084D0
        mov esi, eax
        add esp, 4
        test esi, esi
        je  null_alloc_2
        push 0x98
        push 2
        push 0x783670
        push 0x20
        mov ecx, esi
        call sub_5008E0
        mov dword ptr [esi], 0x775948
        jmp setup_1
null_alloc_2:
        xor esi, esi
setup_1:
        /* _emit: mov edx,[0x7F1FF0] */
        _emit 0x8B
        _emit 0x15
        _emit 0xF0
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        push esi
        lea ecx, [edx + 0x74]
        call sub_500EC0

        push 0x20
        call sub_4084D0
        mov esi, eax
        add esp, 4
        test esi, esi
        je  null_alloc_3
        push 0x9c
        push 2
        push 0x783664
        push 0x21
        mov ecx, esi
        call sub_5008E0
        mov dword ptr [esi], 0x775948
        jmp setup_2
null_alloc_3:
        xor esi, esi
setup_2:
        /* _emit: mov eax,[0x7F1FF0] */
        _emit 0xA1
        _emit 0xF0
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        push esi
        lea ecx, [eax + 0x74]
        call sub_500EC0

        push 0x20
        call sub_4084D0
        mov esi, eax
        add esp, 4
        test esi, esi
        je  null_alloc_4
        push 0xa0
        push 2
        push 0x783658
        push 0x22
        mov ecx, esi
        call sub_5008E0
        /* _emit: mov ecx,[0x7F1FF0] */
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        push esi
        add ecx, 0x74
        mov dword ptr [esi], 0x775948
        call sub_500EC0
        pop esi
        ret

null_alloc_4:
        /* _emit: mov ecx,[0x7F1FF0] */
        _emit 0x8B
        _emit 0x0D
        _emit 0xF0
        _emit 0x1F
        _emit 0x7F
        _emit 0x00
        xor esi, esi
        push esi
        add ecx, 0x74
        call sub_500EC0
        pop esi
        ret
    }
}
