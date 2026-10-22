/*
 * FUN_00547d40 (313 B) — Array/container element copy helper (__thiscall).
 *
 * ECX = this (pointer to {ptr, end, capacity}). Stack params: src_end,
 * src_start, count. Copies elements from src to container, adjusts
 * refcounts, frees old elements.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void * __stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(int ptr);
extern void __fastcall FUN_0040f060(void *dst, void *src);

__declspec(naked) void __fastcall FUN_00547d40(void *this)
{
    __asm {
        sub     esp, 0x8
        mov     eax, dword ptr [ecx + 4]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx]
        sub     eax, edi
        sar     eax, 2
        cmp     eax, ebp
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x24]
        jc      l_use_param3
        lea     ecx, [esp + 0x14]
l_use_param3:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      l_alloc_zero
        lea     eax, [ecx*4 + 0x0]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x24], eax
        jmp     l_alloc_done
l_alloc_zero:
        mov     dword ptr [esp + 0x24], 0x0
l_alloc_done:
        mov     ebx, dword ptr [esp + 0x1c]
        cmp     edi, ebx
        mov     esi, dword ptr [esp + 0x24]
        jz      l_copy_done
l_copy_loop:
        test    esi, esi
        jz      l_copy_skip
        push    edi
        mov     ecx, esi
        call    FUN_0040f060
l_copy_skip:
        add     edi, 0x4
        add     esi, 0x4
        cmp     edi, ebx
        jnz     l_copy_loop
l_copy_done:
        cmp     ebp, 0x1
        jnz     l_check_multi
        test    esi, esi
        jz      l_single_skip
        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     dword ptr [esi], eax
        jz      l_single_skip
        inc     byte ptr [eax - 1]
l_single_skip:
        add     esi, 0x4
        jmp     l_post_copy
l_check_multi:
        test    ebp, ebp
        jbe     l_post_copy
l_multi_loop:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, ebp
l_multi_inner:
        test    esi, esi
        jz      l_multi_skip_ref
        mov     eax, dword ptr [ecx]
        test    eax, eax
        mov     dword ptr [esi], eax
        jz      l_multi_skip_ref
        inc     byte ptr [eax - 1]
l_multi_skip_ref:
        add     esi, 0x4
        dec     edx
        jnz     l_multi_inner
l_post_copy:
        mov     edi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 4]
        cmp     ebx, edx
        jz      l_shift_done
        mov     ecx, ebx
        sub     ecx, esi
l_shift_loop:
        test    esi, esi
        jz      l_shift_skip_ref
        mov     eax, dword ptr [ecx + esi*1]
        test    eax, eax
        mov     dword ptr [esi], eax
        jz      l_shift_skip_ref
        inc     byte ptr [eax - 1]
l_shift_skip_ref:
        add     esi, 0x4
        lea     eax, [ecx + esi*1]
        cmp     eax, edx
        jnz     l_shift_loop
l_shift_done:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [edi]
        mov     ebx, dword ptr [ecx + 4]
        cmp     edi, ebx
        jz      l_free_old_done
l_free_old_loop:
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      l_free_old_skip
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_free_old_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_free_old_skip:
        add     edi, 0x4
        cmp     edi, ebx
        jnz     l_free_old_loop
l_free_old_done:
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edx]
        test    eax, eax
        jz      l_free_buf_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
l_free_buf_skip:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x14]
        pop     edi
        mov     dword ptr [eax + 4], esi
        pop     esi
        mov     dword ptr [eax], ecx
        lea     ecx, [ecx + edx*4]
        pop     ebp
        mov     dword ptr [eax + 8], ecx
        pop     ebx
        add     esp, 0x8
        ret     0xc
    }
}
