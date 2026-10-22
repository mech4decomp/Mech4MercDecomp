/*
 * FUN_004E4D30 (50 B) - __thiscall component initializer.
 *
 * Calls FUN_004B5DA0(param_1), sets four bytes at this[0x14..0x17] to
 * 0xFF, and if (param_1[0x78] & 0x40) sets the 0x200 flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_004b5da0(void *ptr);

__declspec(naked) void FUN_004E4D30(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004b5da0
        mov     al, 0xff
        mov     byte ptr [esi+0x17], al
        mov     byte ptr [esi+0x16], al
        mov     byte ptr [esi+0x15], al
        mov     byte ptr [esi+0x14], al
        mov     eax, dword ptr [edi+0x78]
        test    al, 0x40
        jz      l_done
        or      eax, 0x200
        mov     dword ptr [edi+0x78], eax
    l_done:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     4
    }
}
