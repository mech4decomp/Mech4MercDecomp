/*
 * FUN_00487DB0 (43 B) — Sum of vcall 8 over all items (__fastcall, ECX=this).
 *
 * Iterates over field_1c items in array at field_14, calls vtable[2] (offset 8)
 * on each, sums results.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) int __fastcall FUN_00487db0(void *this)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        mov     bl, [ecx + 0x1c]            ; count
        push    edi
        xor     edi, edi                    ; sum = 0
        test    ebx, ebx
        jle     l_done
        push    esi
        mov     esi, [ecx + 0x14]           ; item array
    l_loop:
        mov     ecx, [esi]                  ; item pointer
        mov     eax, [ecx]                  ; vtable
        call    dword ptr [eax + 8]         ; vtable[2]()
        add     edi, eax                    ; sum += result
        add     esi, 4
        dec     ebx
        jnz     l_loop
        pop     esi
        mov     eax, edi
        pop     edi
        pop     ebx
        ret
    l_done:
        mov     eax, edi
        pop     edi
        pop     ebx
        ret
    }
}
