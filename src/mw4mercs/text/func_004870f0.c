/*
 * FUN_004870F0 (22 B) — Set bit 0 on each byte in array (__fastcall, ECX=this).
 *
 * Loops over field_0c elements starting at field_18, OR-ing each with 0x01.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_004870f0(void *this)
{
    __asm {
        mov     edx, [ecx + 0x0c]
        xor     eax, eax
        test    edx, edx
        jle     l_done
        mov     ecx, [ecx + 0x18]
    l_loop:
        or      byte ptr [ecx + eax], 0x01
        inc     eax
        cmp     eax, edx
        jl      l_loop
    l_done:
        ret
    }
}
