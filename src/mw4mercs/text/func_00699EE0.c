/*
 * FUN_00699EE0 (71 B) — .text data block containing two functions:
 *   - 0x699EE0: __thiscall zeroes 3 dwords at [this] and rets.
 *   - 0x699EF0: __stdcall (ret 0x10), ecx=this, calls FUN_00699f30 twice.
 *   - 3 NOP padding bytes between them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00699f30(void);

__declspec(naked) void FUN_00699EE0(void)
{
    __asm {
        /* function 1: zero 3 dwords */
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret
        /* padding */
        nop
        nop
        nop
        /* function 2 */
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x18]
        lea     eax, [esi + 4]
        push    eax
        push    ecx
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00699f30
        mov     eax, dword ptr [esp + 0x1c]
        lea     edx, [esi + 0x10]
        push    edx
        push    eax
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00699f30
        pop     edi
        pop     esi
        pop     ebx
        ret     0x10
    }
}
