/*
 * FUN_00547072 (288 B @ 0x547072) - in-.text data block. Contains a 50-entry
 * jump table (relocated dword entries, reproduced verbatim as __emit data),
 * followed by a small __thiscall function (0x547140) that dispatches through
 * a second table at 0x547180, and a byte table at 0x547188.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_00547072(void)
{
    __asm {
        /* 0x547072-0x547077: alignment padding */
        __emit 0x8B
        __emit 0xFF
        __emit 0x90
        /* 0x547078-0x54713F: jump table (50 relocated dword entries) */
        __emit 0x6C
        __emit 0x54
        __emit 0x00
        __emit 0xA3
        __emit 0x6C
        __emit 0x54
        __emit 0x00
        __emit 0xB6
        __emit 0x6C
        __emit 0x54
        __emit 0x00
        __emit 0xC9
        __emit 0x6C
        __emit 0x54
        __emit 0x00
        __emit 0xEF
        __emit 0x6C
        __emit 0x54
        __emit 0x00
        __emit 0xDC
        __emit 0x6C
        __emit 0x54
        __emit 0x00
        __emit 0x1F
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0x02
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x15
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x28
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x3B
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x4E
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x61
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x74
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x87
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x9A
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0xAD
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0xC0
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0xD3
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0xE6
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0xF9
        __emit 0x6D
        __emit 0x54
        __emit 0x00
        __emit 0x0C
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0x32
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0x45
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0x58
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0x6B
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0x7E
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0x91
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0xA4
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0xB7
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0xDD
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0xCA
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0xF0
        __emit 0x6E
        __emit 0x54
        __emit 0x00
        __emit 0x03
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x4F
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x16
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x29
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x3C
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x62
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x75
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x88
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x9B
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0xAE
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0xC1
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0xD4
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0xE7
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0xFA
        __emit 0x6F
        __emit 0x54
        __emit 0x00
        __emit 0x0D
        __emit 0x70
        __emit 0x54
        __emit 0x00
        __emit 0x20
        __emit 0x70
        __emit 0x54
        __emit 0x00
        __emit 0x33
        __emit 0x70
        __emit 0x54
        __emit 0x00
        __emit 0x46
        __emit 0x70
        __emit 0x54
        __emit 0x00
        /* 0x547140: function code */
        mov     al, byte ptr [ecx + 0x17]
        test    al, al
        jne     L_54714a
        mov     al, 1
        ret
L_54714a:
        mov     al, byte ptr [ecx + 0x16]
        test    al, al
        je      L_547156
        mov     ecx, dword ptr [ecx + 0x50]
        jmp     L_547159
L_547156:
        mov     ecx, dword ptr [ecx + 0x54]
L_547159:
        test    ecx, ecx
        je      L_54717a
        mov     ecx, dword ptr [ecx + 0xa4]
        cmp     ecx, 9
        ja      L_54717a
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x547188]
        jmp     dword ptr [eax*4 + 0x547180]
L_547177:
        mov     al, 1
        ret
L_54717a:
        xor     al, al
        ret
        /* 0x54717D-0x54717F: alignment padding */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* 0x547180-0x547187: dispatch table (2 relocated dword entries) */
        __emit 0x77
        __emit 0x71
        __emit 0x54
        __emit 0x00
        __emit 0x7A
        __emit 0x71
        __emit 0x54
        __emit 0x00
        /* 0x547188-0x547191: byte table (10 bytes) */
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x01
        __emit 0x00
        __emit 0x00
    }
}
