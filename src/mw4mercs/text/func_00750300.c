/*
 * FUN_00750300 (95 B true extent; 96 B block w/ trailing nop pad) —
 * __stdcall, 2 args (ret 8). Copies a string (either from a static template
 * or via an IAT helper).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern char g_7acc34[];
extern char g_7acc24[];
extern void *g_76b420;

__declspec(naked) void FUN_00750300(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        push    esi
        jne     l_1
        push    edi
        or      ecx, 0xffffffff
        mov     edi, offset g_7acc34
        repne   scasb
        mov     eax, dword ptr [esp + 0xc]
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        ret     8
    l_1:
        mov     ecx, dword ptr [eax + 4]
        mov     esi, dword ptr [eax + 0xc]
        mov     edx, dword ptr [eax]
        mov     eax, dword ptr [eax + 8]
        sub     esi, ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        sub     eax, edx
        push    eax
        push    ecx
        push    edx
        push    offset g_7acc24
        push    esi
        call    dword ptr [g_76b420]
        add     esp, 0x18
        mov     eax, esi
        pop     esi
        ret     8
    }
}
