/*
 * FUN_0050ec01 (extent 0x50ec01-0x50ec49, 72 bytes) - gen via tools/gen_bigfunc.py.
 * Jump table (data) + start of switch dispatch.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_0050ec01(void)
{
    __asm {
        /* 0x50EC01-0x50EC3F: in-function jump-table DATA (63 bytes).
           gen_bigfunc mis-disassembled these as garbage mnemonics that don't
           reproduce the bytes; emit the literal reference bytes instead. */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        __emit 0x7F
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0x86
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0x8D
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0x94
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0x9B
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xBD
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xC4
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xCB
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xD2
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xD9
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xE0
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xE7
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xEE
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xF5
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        __emit 0xFC
        __emit 0xE8
        __emit 0x50
        __emit 0x00
        mov     eax, dword ptr [esp + 4]
        add     eax, 0xFFFFEFFF
    }
}
