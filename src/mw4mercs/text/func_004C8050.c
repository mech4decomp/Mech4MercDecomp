/*
 * FUN_004C8050 (96 B) — .text data block of 4 small __stdcall wrappers
 * (ret 4) around FUN_004c7f90 / FUN_004c7c70 / FUN_004c7d10, with nop pads.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_004c7f90(void);
extern void __cdecl FUN_004c7c70(void);
extern void __cdecl FUN_004c7d10(void);

__declspec(naked) void FUN_004C8050(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c7f90
        xor     eax, eax
        ret     4
        nop
        mov     eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c7f90
        or      eax, 0xffffffff
        ret     4
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004c7f90
        push    edi
        mov     ecx, esi
        call    FUN_004c7c70
        pop     edi
        pop     esi
        ret     4
        nop
        nop
        nop
        nop
        nop
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004c7f90
        push    edi
        mov     ecx, esi
        call    FUN_004c7d10
        pop     edi
        pop     esi
        ret     4
        nop
        nop
        nop
        nop
        nop
    }
}
