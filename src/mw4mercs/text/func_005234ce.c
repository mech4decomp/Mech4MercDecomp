/*
 * FUN_005234ce (extent 0x5234ce-0x523539) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005234ce(void)
{
    __asm {
        /* __emit: 0x5234CE-0x5234FF is prior fn's jump-table DATA (6 x 4-byte
           little-endian entries) + a byte table (00 01 02 05*15 03 04) + nop pad,
           not code. gen_bigfunc mis-disassembled it; emit exact reference bytes. */
        __emit 0x8B
        __emit 0xFF
        __emit 0x16
        __emit 0x34
        __emit 0x52
        __emit 0x00
        __emit 0x50
        __emit 0x34
        __emit 0x52
        __emit 0x00
        __emit 0x7B
        __emit 0x34
        __emit 0x52
        __emit 0x00
        __emit 0xA6
        __emit 0x34
        __emit 0x52
        __emit 0x00
        __emit 0xBA
        __emit 0x34
        __emit 0x52
        __emit 0x00
        __emit 0xC5
        __emit 0x34
        __emit 0x52
        __emit 0x00
        __emit 0x00
        __emit 0x01
        __emit 0x02
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x05
        __emit 0x03
        __emit 0x04
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 4]
        test    eax, eax
        je    L_3526
        cmp    eax, 7
        jne    L_3531
        mov    eax, dword ptr [ecx + 0x40ee8]
        mov    ecx, dword ptr [edx]
        mov    dword ptr [eax + 0x30], ecx
        mov    eax, 1
        ret    8
L_3526:
        mov    eax, dword ptr [ecx + 0x40ee8]
        mov    ecx, dword ptr [edx]
        mov    dword ptr [eax + 0x14], ecx
L_3531:
        mov    eax, 1
        ret    8
    }
}
