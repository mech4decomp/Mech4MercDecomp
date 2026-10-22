/*
 * FUN_005143B0 (72 B) — __stdcall, 3 args (ret 0xc). Stores an index into a
 * global, then dispatches through a byte-index table + jump table.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dd268;
extern char g_5143e0[];
extern char g_5143e8[];

__declspec(naked) void FUN_005143B0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     eax, dword ptr [eax]
        cmp     eax, 0xf
        mov     ecx, dword ptr [DAT_007dd268]
        mov     dword ptr [ecx + 0x20], eax
        ja      l_ret0
        xor     edx, edx
        mov     dl, byte ptr [eax + g_5143e8]
        jmp     dword ptr [edx*4 + g_5143e0]
        mov     eax, 1
        ret     0xc
    l_ret0:
        xor     eax, eax
        ret     0xc
        /* jump table data (2 dword entries, reloc sites) */
        __emit 0xD3
        __emit 0x43
        __emit 0x51
        __emit 0x00
        __emit 0xDB
        __emit 0x43
        __emit 0x51
        __emit 0x00
        /* byte-index table (16 bytes) */
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x00
        __emit 0x00
        __emit 0x00
    }
}
