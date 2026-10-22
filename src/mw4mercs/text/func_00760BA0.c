/*
 * FUN_00760BA0 (90 B) — __stdcall, 3 args (ret 0xc). Builds a 0x50-byte
 * local struct, zeroes it, fills fields, and calls the .txt2 dispatcher.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_00760BA0(void)
{
    __asm {
        sub     esp, 0x50
        push    edi
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 4]
        rep     stosd
        mov     eax, dword ptr [esp + 0x5c]
        mov     ecx, dword ptr [esp + 0x60]
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [esp + 0x58]
        lea     edx, [esp + 4]
        mov     dword ptr [esp + 4], 0xc08a5335
        push    edx
        push    eax
        mov     dword ptr [esp + 0x10], 0x50
        mov     dword ptr [esp + 0x14], 0x10
        mov     dword ptr [esp + 0x2c], ecx
        mov     dword ptr [esp + 0x30], 2
        call    FUN_00769000
        add     esp, 8
        pop     edi
        add     esp, 0x50
        ret     0xc
    }
}
