/*
 * FUN_00736B90 (92 B true extent; 96 B block w/ trailing nop pad) —
 * __stdcall, 2 args (ret 8). Initializes a 0x29-dword object from a source
 * object and conditionally calls two IAT functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern unsigned long g_8aa9fc;
extern void *g_76b23c;
extern void *g_8aa60c;

__declspec(naked) void FUN_00736B90(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        xor     eax, eax
        push    edi
        mov     ecx, 0x29
        mov     edi, esi
        rep     stosd
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0xb8]
        mov     edi, dword ptr [eax + 0xc4]
        mov     eax, dword ptr [eax + 0xb4]
        mov     edx, 3
        mov     dword ptr [esi + 0x18], eax
        mov     eax, dword ptr [g_8aa9fc]
        test    eax, eax
        mov     dword ptr [esi], ecx
        mov     dword ptr [esi + 8], edx
        mov     dword ptr [esi + 0x24], edi
        mov     dword ptr [esi + 0x2c], edx
        mov     dword ptr [esi + 0x20], edx
        je      l_1
        push    ecx
        call    dword ptr [g_76b23c]
        push    eax
        call    dword ptr [g_8aa60c]
        mov     dword ptr [esi + 0x30], eax
    l_1:
        pop     edi
        pop     esi
        ret     8
    }
}
