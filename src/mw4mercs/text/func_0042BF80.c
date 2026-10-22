/*
 * FUN_0042BF80 (75 B true extent; 97 B block incl. pad + adjacent fn) —
 * allocates a 0xbc-byte object, constructs it via FUN_0042bd70, and returns
 * it (or NULL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(void);
extern void *__cdecl FUN_0042bd70(void);
extern void __cdecl FUN_006f49a0(void);
extern unsigned long g_7b9828;
extern unsigned long g_7b97f8;

__declspec(naked) void FUN_0042BF80(void)
{
    __asm {
        mov     eax, dword ptr [g_7b9828]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xbc
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      l_1
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 8]
        push    ecx
        mov     ecx, dword ptr [g_7b97f8]
        push    edx
        push    ecx
        mov     ecx, eax
        call    FUN_0042bd70
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
