/*
 * FUN_00580be0 (0x00580BE0)
 * Decompiled from MW4Mercs.exe
 * __cdecl function that processes items and adds them to a dynamic array.
 */

#include "mw4/common.h"

void __cdecl sub_580580(void);
int __cdecl sub_566CA0(void);
int __cdecl sub_415230(void);
void * __cdecl sub_4084D0(unsigned int size);
void __cdecl sub_4084E0(void *ptr);
void * __cdecl sub_581390(void);
void __cdecl sub_580650(void);

__declspec(naked) void FUN_00580be0(void)
{
    __asm {
        sub esp, 0x1c
        push ebp
        push esi
        lea eax, [esp + 0xc]
        push eax
        lea ecx, [esp + 0xf]
        xor esi, esi
        push ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x24], esi
        mov dword ptr [esp + 0x14], esi
        call sub_580580

        mov eax, dword ptr [esp + 0x28]
        push esi
        lea edx, [esp + 0x1c]
        push edx
        push eax
        call sub_566CA0

        mov ebp, dword ptr [esp + 0x24]
        mov eax, dword ptr [esp + 0x28]
        add esp, 0xc
        cmp ebp, eax
        mov dword ptr [esp + 0xc], ebp
        je  done_outer

        push ebx
        mov ebx, dword ptr [esp + 0x30]  /* parameter */
        push edi

loop_start:
        mov esi, dword ptr [ebp]
        mov eax, dword ptr [esi + 0x2fc]
        test eax, eax
        je  next_iter

        /* _emit: mov ecx,[0x7F24D8] */
        _emit 0x8B
        _emit 0x0D
        _emit 0xD8
        _emit 0x24
        _emit 0x7F
        _emit 0x00
        push ecx
        mov ecx, dword ptr [eax + 4]
        call sub_415230
        cmp al, 1
        jne next_iter

        mov eax, dword ptr [esi + 0x2fc]
        mov esi, dword ptr [ebx + 4]     /* current ptr */
        mov edi, dword ptr [ebx + 8]     /* end ptr */
        cmp esi, edi
        mov dword ptr [esp + 0x18], eax
        je  need_realloc

        /* Fast path: room available */
        test esi, esi
        je  skip_store
        mov dword ptr [esi], eax
skip_store:
        add esi, 4
        mov dword ptr [ebx + 4], esi
        jmp next_iter

need_realloc:
        mov ebp, dword ptr [ebx]         /* base ptr */
        mov eax, esi
        sub eax, ebp
        sar eax, 2
        cmp eax, 1
        mov dword ptr [esp + 0x30], 1    /* default new capacity */
        mov dword ptr [esp + 0x34], eax  /* old capacity */
        lea ecx, [esp + 0x30]
        jb  use_default
        lea ecx, [esp + 0x34]
use_default:
        mov ecx, dword ptr [ecx]         /* new capacity = max(1, old) */
        add ecx, eax                     /* double it */
        mov dword ptr [esp + 0x34], ecx
        je  skip_malloc
        shl ecx, 2
        push ecx
        call sub_4084D0
        add esp, 4
        mov dword ptr [esp + 0x30], eax  /* new buffer */
        jmp got_buffer
skip_malloc:
        mov dword ptr [esp + 0x30], 0
got_buffer:
        mov edx, dword ptr [esp + 0x30]
        mov eax, dword ptr [esp + 0x30]
        push edx
        push eax
        push esi
        push ebp
        call sub_581390
        add esp, 0x10
        test eax, eax
        je  skip_store_val
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [eax], ecx
skip_store_val:
        mov edx, dword ptr [esp + 0x30]
        push edx
        add eax, 4
        push eax
        push esi
        push esi
        call sub_581390
        sub edi, ebp
        sar edi, 2
        push edi
        push ebp
        mov esi, eax
        mov dword ptr [esp + 0x34], ebp
        call sub_580650
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x4c]
        mov ebp, dword ptr [esp + 0x2c]
        lea edx, [eax + ecx*4]
        add esp, 0x18
        mov dword ptr [ebx], eax         /* new base */
        mov dword ptr [ebx + 4], esi     /* new current */
        mov dword ptr [ebx + 8], edx     /* new end */

next_iter:
        mov eax, dword ptr [esp + 0x24]
        add ebp, 4
        cmp ebp, eax
        mov dword ptr [esp + 0x14], ebp
        jne loop_start

        mov ebp, dword ptr [esp + 0x20]
        pop edi
        pop ebx

done_outer:
        test ebp, ebp
        je  skip_free
        push ebp
        call sub_4084E0
        add esp, 4
skip_free:
        pop esi
        pop ebp
        add esp, 0x1c
        ret
    }
}
