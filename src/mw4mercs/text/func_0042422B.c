/*
 * FUN_0042422B (80 B true extent; 102 B block incl. pad + adjacent fn) —
 * allocates a 0x8c-byte object, constructs it via FUN_00424070, and returns
 * it (or NULL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(void);
extern void *__cdecl FUN_00424070(void);
extern void __cdecl FUN_006f49a0(void);
extern unsigned long g_7b98d0;
extern unsigned long g_7b9644;

__declspec(naked) void FUN_0042422B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [g_7b98d0]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x8c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      l_1
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        mov     ecx, dword ptr [g_7b9644]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_00424070
        mov     esi, eax
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    l_1:
        xor     esi, esi
        call    FUN_006f49a0
        mov     eax, esi
        pop     esi
        ret
    }
}
