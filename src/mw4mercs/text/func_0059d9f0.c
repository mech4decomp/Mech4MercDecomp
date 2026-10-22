/*
 * FUN_0059d9f0 (0x0059D9F0)
 * Decompiled from MW4Mercs.exe
 * __thiscall dynamic array push operation.
 * Stores a value in a dynamic array, reallocating if necessary.
 * Fields: [this+0x10]=flags, [this+0x84]=base, [this+0x88]=current, [this+0x8c]=end
 * Returns 1 on success.
 * Callee cleans 4 bytes from stack (ret 4).
 */

#include "mw4/common.h"

/* Forward declarations */
void * __cdecl sub_4084D0(unsigned int size);  /* malloc wrapper */
void __cdecl sub_4084E0(void *ptr);            /* free wrapper */
void * __cdecl sub_59DB70(void *src, void *dst, int val, int flag);

__declspec(naked) void FUN_0059d9f0(void)
{
    __asm {
        sub esp, 0xc
        push ebx
        mov ebx, ecx
        mov eax, dword ptr [ebx + 0x10]
        mov ecx, eax
        and ecx, 0x10
        cmp cl, 0x10
        push esi
        mov dword ptr [esp + 0x10], eax
        jne skip_adjust
        add dword ptr [ebx + 0x88], -4
skip_adjust:
        mov esi, dword ptr [ebx + 0x88]
        cmp esi, dword ptr [ebx + 0x8c]
        je  need_realloc

        /* Fast path: room available */
        test esi, esi
        je  skip_store
        mov edx, dword ptr [esp + 0x18]  /* parameter */
        mov dword ptr [esi], edx
skip_store:
        add esi, 4
        mov dword ptr [ebx + 0x88], esi
        or  eax, 0x10
        mov dword ptr [ebx + 0x10], eax
        pop esi
        mov eax, 1
        pop ebx
        add esp, 0xc
        ret 4

need_realloc:
        push ebp
        push edi
        mov edi, dword ptr [ebx + 0x84]   /* old base */
        mov eax, esi
        sub eax, edi                       /* current - base = count */
        sar eax, 2                         /* count in dwords */
        cmp eax, 1
        mov dword ptr [esp + 0x10], 1      /* default new capacity */
        mov dword ptr [esp + 0x14], eax    /* old capacity */
        lea ecx, [esp + 0x10]
        jb  use_default
        lea ecx, [esp + 0x14]
use_default:
        mov ecx, dword ptr [ecx]           /* new capacity = max(1, old) */
        add ecx, eax                       /* new capacity += old (double) */
        mov dword ptr [esp + 0x14], ecx
        je  skip_malloc                    /* if new == old (shouldn't happen) */
        lea eax, [ecx*4]
        push eax
        call sub_4084D0
        add esp, 4
        mov ebp, eax                       /* new buffer */
        jmp got_buffer
skip_malloc:
        xor ebp, ebp
got_buffer:
        mov ecx, dword ptr [esp + 0x20]   /* parameter: value to store */
        push 0
        push ecx
        push ebp                           /* new buffer */
        push esi                           /* old end */
        push edi                           /* old base */
        call sub_59DB70
        add esp, 0x14
        test eax, eax
        je  skip_store_val
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], edx
skip_store_val:
        mov ecx, esi
        sub ecx, esi                       /* ecx = 0 (dead code from compiler) */
        add eax, 4
        sar ecx, 2
        test ecx, ecx
        mov edi, eax
        jle copy_done

        /* Copy loop (dead code - ecx is always 0) */
copy_loop:
        sub esi, eax
        mov eax, dword ptr [esi + edi]
        mov dword ptr [edi], eax
        add edi, 4
        dec ecx
        /* _emit: force jne to mov eax,[esi+edi] (75 F5) instead of sub esi,eax */
        _emit 0x75
        _emit 0xF5

copy_done:
        mov eax, dword ptr [ebx + 0x84]   /* old base */
        test eax, eax
        je  skip_free_old
        push eax
        call sub_4084E0
        add esp, 4
skip_free_old:
        mov ecx, dword ptr [esp + 0x14]   /* new capacity */
        mov eax, dword ptr [esp + 0x18]   /* flags */
        mov dword ptr [ebx + 0x88], edi   /* current ptr */
        pop edi
        mov dword ptr [ebx + 0x84], ebp   /* new base */
        lea edx, [ebp + ecx*4]            /* new end */
        pop ebp
        or  eax, 0x10
        mov dword ptr [ebx + 0x10], eax
        pop esi
        mov dword ptr [ebx + 0x8c], edx   /* end ptr */
        mov eax, 1
        pop ebx
        add esp, 0xc
        ret 4
    }
}
