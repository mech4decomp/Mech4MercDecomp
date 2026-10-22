/*
 * FUN_00547ee0 (232 B) — Array/container element copy helper (__thiscall).
 *
 * ECX = this (pointer to {ptr, end, capacity}). Stack params: src_end,
 * src_start, count. Copies elements from src to container (no refcounting),
 * frees old buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(int ptr);

__declspec(naked) void __fastcall FUN_00547ee0(void *this)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx]
        push    edi
        mov     edi, dword ptr [ebx + 4]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 2
        cmp     eax, esi
        mov     dword ptr [esp + 0x10], eax
        lea     ecx, [esp + 0x20]
        jc      l_use_param3
        lea     ecx, [esp + 0x10]
l_use_param3:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x10], ecx
        jz      l_alloc_zero
        lea     eax, [ecx*4 + 0x0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x20], eax
        jmp     l_alloc_done
l_alloc_zero:
        mov     dword ptr [esp + 0x20], 0x0
l_alloc_done:
        mov     edx, dword ptr [esp + 0x18]
        cmp     ebp, edx
        mov     eax, dword ptr [esp + 0x20]
        jz      l_copy_done
        mov     ecx, ebp
l_copy_loop:
        test    eax, eax
        jz      l_copy_skip
        mov     ebp, dword ptr [ecx]
        mov     dword ptr [eax], ebp
l_copy_skip:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, edx
        jnz     l_copy_loop
l_copy_done:
        cmp     esi, 0x1
        jnz     l_check_multi
        test    eax, eax
        jz      l_single_skip
        mov     ecx, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
l_single_skip:
        add     eax, 0x4
        jmp     l_post_copy
l_check_multi:
        test    esi, esi
        jbe     l_post_copy
        mov     ecx, esi
        mov     esi, dword ptr [esp + 0x1c]
l_multi_loop:
        test    eax, eax
        jz      l_multi_skip
        mov     ebp, dword ptr [esi]
        mov     dword ptr [eax], ebp
l_multi_skip:
        add     eax, 0x4
        dec     ecx
        jnz     l_multi_loop
l_post_copy:
        cmp     edx, edi
        mov     esi, eax
        jz      l_shift_done
        mov     ecx, edx
        sub     ecx, eax
l_shift_loop:
        test    esi, esi
        jz      l_shift_skip
        mov     edx, dword ptr [ecx + esi*1]
        mov     dword ptr [esi], edx
l_shift_skip:
        add     esi, 0x4
        lea     eax, [ecx + esi*1]
        cmp     eax, edi
        jnz     l_shift_loop
l_shift_done:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      l_free_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_free_skip:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        pop     edi
        mov     dword ptr [ebx + 4], esi
        pop     esi
        lea     edx, [eax + ecx*4]
        pop     ebp
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebx + 8], edx
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
