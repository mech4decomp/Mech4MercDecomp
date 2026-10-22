/*
 * FUN_00713D10 (90 B) — allocates/returns a slot from a fixed pool, growing
 * the pool when the index exceeds 8, and copies a 0x21-dword template.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_006f3c80(void);
extern unsigned long g_87c26c;
extern unsigned long g_849308;
extern unsigned long g_87bc84;
extern char g_87bc88[];
extern char g_87c1d0[];

__declspec(naked) void FUN_00713D10(void)
{
    __asm {
        mov     ecx, dword ptr [g_87c26c]
        cmp     ecx, 8
        jae     l_1
        mov     eax, ecx
        shl     eax, 4
        add     eax, ecx
        lea     eax, [eax*8 + g_87bc88]
        jmp     l_2
    l_1:
        mov     ecx, dword ptr [g_849308]
        push    ecx
        push    0x88
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_87c26c]
    l_2:
        mov     edx, dword ptr [g_87bc84]
        push    esi
        inc     ecx
        push    edi
        mov     dword ptr [g_87c26c], ecx
        lea     edi, [eax + 4]
        mov     ecx, 0x21
        mov     esi, offset g_87c1d0
        rep     movsd
        pop     edi
        mov     dword ptr [eax], edx
        mov     dword ptr [g_87bc84], eax
        pop     esi
        ret
    }
}
