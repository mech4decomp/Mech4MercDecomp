/*
 * FUN_004AFCE0 (131 B) — __thiscall TreeElement LOD attachment.
 *   Finds empty slot, increments refcount, copies LOD data.
 *   Returns slot index or -1 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_006fab90(const char *msg);

__declspec(naked) unsigned int __stdcall FUN_004afce0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x188]
        xor     edx, edx
        test    edi, edi
        jbe     l_assert_full
        mov     esi, dword ptr [ecx + 0x184]
        xor     eax, eax
    l_find_slot:
        cmp     dword ptr [esi + eax * 4], 0
        jz      l_found_slot
        inc     edx
        mov     eax, edx
        and     eax, 0xffff
        cmp     eax, edi
        jc      l_find_slot
    l_assert_full:
        push    0x7705f4
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_skip_int3
        int     3
    l_skip_int3:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebp
        ret     8
    l_found_slot:
        mov     eax, edx
        mov     edx, dword ptr [ebp + 8]
        and     eax, 0xffff
        inc     word ptr [edx + 0x10]
        mov     dword ptr [esi + eax * 4], edx
        mov     esi, dword ptr [ecx + 0x14c]
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, eax
        shl     edx, 4
        add     edx, esi
        mov     esi, dword ptr [ecx]
        mov     dword ptr [edx], esi
        mov     esi, dword ptr [ecx + 4]
        mov     dword ptr [edx + 4], esi
        mov     esi, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 0xc]
        pop     edi
        mov     dword ptr [edx + 8], esi
        pop     esi
        mov     dword ptr [edx + 0xc], ecx
        pop     ebp
        ret     8
    }
}
