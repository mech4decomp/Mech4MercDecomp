/*
 * FUN_0073C180 (98 B) — copies a static string into a global buffer and
 * sets state globals; special-cases a state value of 0xd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern unsigned long g_8aaeb4;
extern unsigned long g_87b688;
extern unsigned long g_85b610;
extern char g_7a717c[];
extern char g_859bac[];
extern unsigned long g_85a270;
extern unsigned long g_85b608;

__declspec(naked) void FUN_0073C180(void)
{
    __asm {
        mov     eax, dword ptr [g_8aaeb4]
        mov     ecx, dword ptr [g_87b688]
        mov     dword ptr [g_85b610], eax
        mov     eax, 0xd
        cmp     ecx, eax
        jne     l_1
        mov     dword ptr [g_87b688], 0
        ret
    l_1:
        push    esi
        push    edi
        or      ecx, 0xffffffff
        mov     dword ptr [g_87b688], eax
        xor     eax, eax
        mov     edi, offset g_7a717c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_859bac
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        mov     dword ptr [g_85a270], 1
        mov     dword ptr [g_85b608], eax
        pop     esi
        ret
    }
}
