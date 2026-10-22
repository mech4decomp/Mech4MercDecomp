/*
 * FUN_005cc0f0 (51 B) — memcpy-like copy (__cdecl).
 *   param_1 = src, param_2 = src+count (end ptr), param_3 = dst.
 *   Returns dst + count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_005cc0f0(void)
{
    __asm {
        mov     edx, [esp + 8]
        push    esi
        mov     esi, [esp + 8]
        sub     edx, esi
        test    edx, edx
        jle     l_ret
        mov     eax, [esp + 0x10]
        push    ebx
        push    edi
        mov     ecx, edx
        mov     ebx, ecx
        shr     ecx, 2
        mov     edi, eax
        rep movsd
        mov     ecx, ebx
        and     ecx, 3
        rep movsb
        pop     edi
        pop     ebx
        add     eax, edx
        pop     esi
        ret

    l_ret:
        mov     eax, [esp + 0x10]
        pop     esi
        ret
    }
}
