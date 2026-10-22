/*
 * FUN_004880D0 (60 B) — Iterate items calling vtable[0x40] + vtable[0x20]
 * (__thiscall, RET 0xC).
 *
 * For each item in the array at field_14 (count at field_1c), calls
 * vtable[0x40](param1, param3) then vtable[0x20](param2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_004880d0(void *this, int param1, int param2, int param3)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        mov     bl, [ecx + 0x1c]            ; count
        test    ebx, ebx
        jle     l_done
        push    ebp
        mov     ebp, [esp + 0x14]           ; param3
        push    esi
        push    edi
        mov     edi, [ecx + 0x14]           ; item array
    l_loop:
        mov     ecx, [esp + 0x14]           ; param1
        mov     esi, [edi]                  ; item pointer
        mov     eax, [esi]                  ; vtable
        push    ebp                         ; param3
        push    ecx                         ; param1
        mov     ecx, esi
        call    dword ptr [eax + 0x40]      ; vtable[0x40](param1, param3)
        mov     eax, [esp + 0x18]           ; param2
        mov     edx, [esi]                  ; vtable
        push    eax                         ; param2
        mov     ecx, esi
        call    dword ptr [edx + 0x20]      ; vtable[0x20](param2)
        add     edi, 4
        dec     ebx
        jnz     l_loop
        pop     edi
        pop     esi
        pop     ebp
    l_done:
        pop     ebx
        ret     0x0c
    }
}
