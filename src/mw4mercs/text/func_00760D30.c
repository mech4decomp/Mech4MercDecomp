/*
 * FUN_00760D30 (98 B) — __stdcall, 4 args (ret 0x10). Builds a 0x50-byte
 * local struct, zeroes it, fills fields, and calls the .txt2 dispatcher.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_00760D30(void)
{
    __asm {
        sub     esp, 0x50
        push    edi
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 4]
        mov     edx, dword ptr [esp + 0x64]
        rep     stosd
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x30], ecx
        mov     ecx, dword ptr [esp + 0x58]
        lea     eax, [esp + 4]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0xc], 0xc08a5335
        mov     dword ptr [esp + 0x10], 0x50
        mov     dword ptr [esp + 0x14], 0x13
        mov     dword ptr [esp + 0x3c], 2
        mov     dword ptr [esp + 0x40], edx
        call    FUN_00769000
        add     esp, 8
        pop     edi
        add     esp, 0x50
        ret     0x10
    }
}
