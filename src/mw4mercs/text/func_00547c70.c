/*
 * FUN_00547c70 (196 B) — String search helper (__thiscall).
 *
 * Searches for a substring within a buffer range. ECX = this (pointer to
 * {start_ptr, end_ptr}), stack params: offset, pattern_ptr, pattern_len.
 * Returns offset of match or DAT_0077b874 (-1 sentinel).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_0077b874;

__declspec(naked) int __fastcall FUN_00547c70(void *this)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [ecx + 4]
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     esi, edx
        sub     esi, edi
        lea     ebx, [eax + ecx*1]
        cmp     ebx, esi
        mov     dword ptr [esp + 0xc], edi
        jnc     l_return_sentinel
        mov     esi, dword ptr [esp + 0x14]
        add     ecx, esi
        add     eax, edi
        cmp     eax, edx
        push    ebp
        mov     dword ptr [esp + 0x1c], ecx
        jz      l_check_end
        cmp     esi, ecx
        jz      l_check_end
        lea     edi, [esi + 1]
        cmp     edi, ecx
        mov     dword ptr [esp + 0x20], edi
        jnz     l_search_outer
        mov     cl, byte ptr [esi]
l_scan_single:
        cmp     byte ptr [eax], cl
        jz      l_check_end
        inc     eax
        cmp     eax, edx
        jnz     l_scan_single
        jmp     l_check_end

l_search_outer:
        mov     cl, byte ptr [esi]
l_scan_first:
        cmp     byte ptr [eax], cl
        jz      l_found_first
        inc     eax
        cmp     eax, edx
        jz      l_set_end
        jmp     l_scan_first

l_found_first:
        cmp     eax, edx
        jz      l_set_end
l_scan_second:
        cmp     byte ptr [eax], cl
        jz      l_found_second
        inc     eax
        cmp     eax, edx
        jz      l_set_end
        jmp     l_scan_second

l_found_second:
        cmp     eax, edx
        jz      l_set_end
        lea     ebp, [eax + 1]
        mov     esi, ebp
        cmp     esi, edx
        jz      l_set_end
l_match_loop:
        mov     cl, byte ptr [esi]
        cmp     cl, byte ptr [edi]
        jnz     l_mismatch
        mov     ecx, dword ptr [esp + 0x1c]
l_match_inc_edi:
        inc     edi
        cmp     edi, ecx
        jz      l_check_end
        inc     esi
        cmp     esi, edx
        jz      l_set_end
        mov     bl, byte ptr [esi]
        cmp     bl, byte ptr [edi]
        jz      l_match_inc_edi
        mov     edi, dword ptr [esp + 0x20]
l_mismatch:
        mov     eax, ebp
        cmp     eax, edx
        jz      l_check_end
        mov     esi, dword ptr [esp + 0x18]
        jmp     l_search_outer

l_set_end:
        mov     eax, edx
l_check_end:
        cmp     eax, edx
        pop     ebp
        jz      l_return_sentinel
        mov     ecx, dword ptr [esp + 0xc]
        pop     edi
        pop     esi
        sub     eax, ecx
        pop     ebx
        pop     ecx
        ret     0xc

    l_return_sentinel:
        mov     eax, dword ptr [DAT_0077b874]
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
