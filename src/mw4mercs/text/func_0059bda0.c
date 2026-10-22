/*
 * FUN_0059bda0 (0x0059BDA0)
 * Decompiled from MW4Mercs.exe
 * __thiscall linked list string lookup function.
 * Searches a linked list at [this+0x18] for a matching string.
 * Uses reference counting on string objects.
 * Returns matching node pointer or 0.
 * Callee cleans 8 bytes from stack (ret 8).
 */

#include "mw4/common.h"

/* Forward declarations */
void __cdecl sub_417AD0(void);   /* __thiscall: pop and free list node */
void __cdecl sub_4084E0(void *ptr); /* __cdecl: free */

__declspec(naked) void FUN_0059bda0(void)
{
    __asm {
        sub esp, 0xc
        push ebx
        lea eax, [ecx + 0x18]
        push ebp
        mov ebp, dword ptr [esp + 0x18]  /* parameter: string to find */
        mov dword ptr [esp + 0xc], eax
        mov eax, dword ptr [eax]         /* head of linked list */
        push esi
        push edi
        mov dword ptr [esp + 0x18], eax  /* current node */
        mov dword ptr [esp + 0x10], 0x7838a0  /* vtable */
        mov ecx, dword ptr [esp + 0x18]
        test ecx, ecx
        je  null_list

loop_start:
        mov eax, dword ptr [ecx]         /* node->field_0 */
        test eax, eax
        mov ecx, dword ptr [ecx + 4]     /* node->next */
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x20], eax  /* save node ptr */
        je  next_iter

        mov cl, byte ptr [esp + 0x24]    /* flag byte from stack */
        test cl, cl
        je  use_stricmp

        /* Case-sensitive comparison */
        mov edi, dword ptr [eax + 0x14]  /* node->string */
        test edi, edi
        je  skip_inc_1
        inc byte ptr [edi - 1]           /* increment refcount */
skip_inc_1:
        mov esi, ebp                     /* search string */
        mov eax, edi

strcmp_loop:
        mov dl, byte ptr [eax]
        mov bl, byte ptr [esi]
        mov cl, dl
        cmp dl, bl
        jne strcmp_done
        test cl, cl
        je  strcmp_equal
        mov dl, byte ptr [eax + 1]
        mov bl, byte ptr [esi + 1]
        mov cl, dl
        cmp dl, bl
        jne strcmp_done
        add eax, 2
        add esi, 2
        test cl, cl
        jne strcmp_loop

strcmp_equal:
        xor eax, eax
        jmp strcmp_result
strcmp_done:
        sbb eax, eax
        sbb eax, -1
strcmp_result:
        test eax, eax
        sete bl

        /* Decrement refcount on node->string (case-sensitive path) */
        test edi, edi
        je  check_match
        mov cl, byte ptr [edi - 1]
        lea eax, [edi - 1]
        dec cl
        mov byte ptr [eax], cl
        jne check_match
        /* Shared free code: push eax; call free; add esp, 4 */
        push eax
        call sub_4084E0
        add esp, 4

check_match:
        test bl, bl
        jne found_match
        /* _emit: force 32-bit relative jump (E9) instead of short jump (EB) */
        _emit 0xE9
        _emit 0x75
        _emit 0xFF
        _emit 0xFF
        _emit 0xFF

use_stricmp:
        mov esi, dword ptr [eax + 0x14]  /* node->string */
        test esi, esi
        je  stricmp_skip_inc
        inc byte ptr [esi - 1]           /* increment refcount */
stricmp_skip_inc:
        push 4
        push ebp                         /* search string */
        push esi                         /* node->string */
        /* _emit: call through IAT for _strnicmp (FF 15) instead of relative call */
        _emit 0xFF
        _emit 0x15
        _emit 0xB0
        _emit 0xB2
        _emit 0x76
        _emit 0x00
        add esp, 0xc
        mov ebx, eax
        neg ebx
        sbb bl, bl
        inc bl                           /* bl = (strnicmp == 0) ? 1 : 0 */

        /* Decrement refcount on node->string (_strnicmp path) */
        test esi, esi
        /* _emit: je to check_match (74 D4) */
        _emit 0x74
        _emit 0xD4
        mov cl, byte ptr [esi - 1]
        lea eax, [esi - 1]
        dec cl
        mov byte ptr [eax], cl
        /* _emit: jne to check_match (75 C8) */
        _emit 0x75
        _emit 0xC8
        /* _emit: jmp to shared free code (EB BD) */
        _emit 0xEB
        _emit 0xBD

null_list:
        mov dword ptr [esp + 0x20], 0
        /* _emit: jmp short to next_iter (EB 09) */
        _emit 0xEB
        _emit 0x09

found_match:
        lea ecx, [esp + 0x10]
        call sub_417AD0                  /* pop node from list */

next_iter:
        test ebp, ebp
        je  skip_free_ebp
        mov cl, byte ptr [ebp - 1]
        lea eax, [ebp - 1]
        dec cl
        mov byte ptr [eax], cl
        jne skip_free_ebp
        push eax
        call sub_4084E0
        add esp, 4
skip_free_ebp:
        mov eax, dword ptr [esp + 0x20]  /* return value */
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 8
    }
}
