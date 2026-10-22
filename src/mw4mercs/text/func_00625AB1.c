/*
 * FUN_00625AB1 (70 B) — .text data block: 36-byte data prefix followed by a
 * __thiscall function (ecx = this) that stores a value at [this+0x54].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dab40;
extern void __cdecl FUN_00629290(void);

__declspec(naked) void FUN_00625AB1(void)
{
    __asm {
        /* data prefix (36 bytes) — .text data block, not real instructions */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0xA8
        __emit 0x59
        __emit 0x62
        __emit 0x00
        __emit 0xC5
        __emit 0x59
        __emit 0x62
        __emit 0x00
        __emit 0xB9
        __emit 0x59
        __emit 0x62
        __emit 0x00
        __emit 0xC5
        __emit 0x59
        __emit 0x62
        __emit 0x00
        __emit 0xD1
        __emit 0x59
        __emit 0x62
        __emit 0x00
        __emit 0xDD
        __emit 0x59
        __emit 0x62
        __emit 0x00
        __emit 0xE9
        __emit 0x59
        __emit 0x62
        __emit 0x00
        __emit 0xA1
        __emit 0x44
        __emit 0xAB
        __emit 0x7D
        __emit 0x00

        /* code tail */
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [DAT_007dab40]
        push    esi
        mov     esi, ecx
        xor     eax, edx
        mov     ecx, dword ptr [eax + 0x40]
        push    0xe
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     dword ptr [esi + 0x54], eax
        pop     esi
        ret
    }
}
