/*
 * FUN_004870D0 (22 B) — Clear bit 1 on each byte in array (__fastcall, ECX=this).
 *
 * Loops over field_0c elements starting at field_18, AND-ing each with 0xFD.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_004870d0(void *this)
{
    __asm {
        mov     edx, [ecx + 0x0c]
        xor     eax, eax
        test    edx, edx
        jle     l_done
        mov     ecx, [ecx + 0x18]
    l_loop:
        and     byte ptr [ecx + eax], 0xfd
        inc     eax
        cmp     eax, edx
        jl      l_loop
    l_done:
        ret
    }
}
