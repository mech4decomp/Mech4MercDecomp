/*
 * FUN_0053be3b (extent 0x53be3b-0x53bea2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dc694;
extern int    g_007dc696;

__declspec(naked) void FUN_0053be3b(void)
{
    __asm {
        /* __emit: 0x53BE3B-0x53BE5F is prior fn's jump-table DATA (9 x 4-byte
           little-endian entries) + nop pad, not code. gen_bigfunc mis-disassembled
           it; emit the exact reference bytes (incl. 0x00 high bytes). */
        __emit 0x90
        __emit 0x52
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        __emit 0x5E
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        __emit 0x6A
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        __emit 0x76
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        __emit 0x97
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        __emit 0xA2
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        __emit 0xAE
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        __emit 0xBA
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        __emit 0xC6
        __emit 0xB6
        __emit 0x53
        __emit 0x00
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x10], edx
        mov    dl, byte ptr [g_007dc694]
        mov    dword ptr [eax + 0x14], ecx
        mov    cx, word ptr [g_007dc696]
        mov    dword ptr [eax + 4], 2
        mov    byte ptr [eax + 0x18], dl
        mov    word ptr [eax + 0x1a], cx
        ret    0x14
    }
}
