/*
 * FUN_00612210 (100 B) — iterates a linked list of objects, counting those
 * whose field at +0x20 is not 2, and returns the count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00416bc0(void);
extern void *__cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern unsigned long g_7dab44;
extern unsigned long g_7dab40;
extern char g_779f0c[];

__declspec(naked) void FUN_00612210(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        push    esi
        add     edx, 0x54
        push    edx
        lea     ecx, [esp + 8]
        xor     esi, esi
        call    FUN_00416bc0
        lea     ecx, [esp + 4]
        mov     dword ptr [esp + 4], offset g_779f0c
        call    FUN_00416cc0
        test    eax, eax
        je      l_2
    l_1:
        cmp     dword ptr [eax + 0x20], 2
        je      l_3
        inc     esi
    l_3:
        lea     ecx, [esp + 4]
        call    FUN_00416cc0
        test    eax, eax
        jne     l_1
    l_2:
        lea     ecx, [esp + 4]
        call    FUN_00416c60
        mov     eax, esi
        pop     esi
        add     esp, 0x14
        ret
    }
}
