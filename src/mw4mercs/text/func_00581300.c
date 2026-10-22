/*
 * 41 bytes — Dword-aligned memcpy-like function.
 * Copies (param2 - param1) / 4 dwords from param1 to param3.
 * Returns param3 + count*4 if count > 0, else param3.
 * __cdecl with 3 params.
 * Byte-identical to FUN_0059DB70.
 */

#include <windows.h>

__declspec(naked) void *FUN_00581300(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]    ; eax = param2 (src_end)
        push    esi
        mov     esi, dword ptr [esp + 8]    ; esi = param1 (src)
        sub     eax, esi                    ; eax = byte count
        sar     eax, 2                      ; eax = dword count
        test    eax, eax
        jle     l_zero_or_neg
        mov     edx, dword ptr [esp + 0x10] ; edx = param3 (dst)
        push    edi
        mov     ecx, eax                    ; ecx = count
        mov     edi, edx                    ; edi = dst
        rep movsd                           ; copy dwords
        pop     edi
        lea     eax, [edx + eax * 4]        ; eax = dst + count*4
        pop     esi
        ret
l_zero_or_neg:
        mov     eax, dword ptr [esp + 0x10] ; eax = param3 (dst)
        pop     esi
        ret
    }
}
