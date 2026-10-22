/*
 * FUN_00488110 (32 B) — Iterate items calling vtable[0x70] (__fastcall, ECX=this).
 *
 * For each item in the array at field_14 (count at field_1c), calls
 * vtable[0x70]() on each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00488110(void *this)
{
    __asm {
        xor     eax, eax
        mov     al, [ecx + 0x1c]            ; count
        push    edi
        mov     edi, eax
        test    edi, edi
        jle     l_done
        push    esi
        mov     esi, [ecx + 0x14]           ; item array
    l_loop:
        mov     ecx, [esi]                  ; item pointer
        mov     edx, [ecx]                  ; vtable
        call    dword ptr [edx + 0x70]      ; vtable[0x70]()
        add     esi, 4
        dec     edi
        jnz     l_loop
        pop     esi
    l_done:
        pop     edi
        ret
    }
}
