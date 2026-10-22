/*
 * FUN_00649DCC (96 B true extent; 100 B block w/ trailing nop pad) —
 * builds a string via several IAT calls and copies it into a global buffer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *g_76b320;
extern void *g_76b3c8;
extern void *g_76b3d8;
extern void *g_76b3dc;
extern char g_7f3154[];
extern char g_7f3138[];

__declspec(naked) void FUN_00649DCC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    edi
        push    0xff
        push    eax
        push    offset g_7f3154
        call    dword ptr [g_76b320]
        lea     ecx, [esp + 0x18]
        push    ecx
        call    dword ptr [g_76b3c8]
        lea     edx, [esp + 0x1c]
        push    edx
        call    dword ptr [g_76b3d8]
        push    eax
        call    dword ptr [g_76b3dc]
        or      ecx, 0xffffffff
        mov     edi, eax
        add     esp, 0x18
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, offset g_7f3138
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        ret
    }
}
