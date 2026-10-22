/*
 * FUN_006CE3B0 — restore parser state from stack.
 *
 * Decrements DAT_0083f5ec, then reads a 0x30-byte state record
 * from the stack array at 0x83E3E4 and restores all parser globals.
 *
 * __cdecl, no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006ce3b0(void)
{
    __asm {
        _emit 0xA1
        _emit 0xEC
        _emit 0xF5
        _emit 0x83
        _emit 0x00
        dec     eax
        _emit 0xA3
        _emit 0xEC
        _emit 0xF5
        _emit 0x83
        _emit 0x00
        lea     eax, [eax + eax * 2]
        shl     eax, 4
        mov     ecx, dword ptr [eax + 0x83e3e4]
        mov     edx, dword ptr [eax + 0x83e3e8]
        _emit 0x89
        _emit 0x0D
        _emit 0x34
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     ecx, dword ptr [eax + 0x83e3ec]
        _emit 0x89
        _emit 0x15
        _emit 0x24
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     edx, dword ptr [eax + 0x83e3f0]
        _emit 0x89
        _emit 0x0D
        _emit 0x30
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     ecx, dword ptr [eax + 0x83e3f4]
        _emit 0x89
        _emit 0x15
        _emit 0x2C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     edx, dword ptr [eax + 0x83e3f8]
        _emit 0x89
        _emit 0x0D
        _emit 0x28
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     ecx, dword ptr [eax + 0x83e3fc]
        _emit 0x89
        _emit 0x15
        _emit 0x38
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     edx, dword ptr [eax + 0x83e400]
        _emit 0x89
        _emit 0x0D
        _emit 0x3C
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     ecx, dword ptr [eax + 0x83e408]
        _emit 0x89
        _emit 0x15
        _emit 0x20
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        mov     edx, dword ptr [eax + 0x83e40c]
        mov     eax, dword ptr [eax + 0x83e404]
        _emit 0x89
        _emit 0x0D
        _emit 0x44
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        _emit 0x89
        _emit 0x15
        _emit 0x40
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        _emit 0xA3
        _emit 0x08
        _emit 0xF3
        _emit 0x82
        _emit 0x00
        ret
    }
}
