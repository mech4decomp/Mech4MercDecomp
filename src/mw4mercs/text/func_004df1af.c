/*
 * FUN_004df1af (extent 0x4df1af-0x4df1e1) - gen via tools/gen_bigfunc.py.
 * This slice is a nop alignment pad + the tail of a 12-entry jump table
 * (belonging to a prior function at ~0x4DEF69) + one trailing byte.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_004df1af(void)
{
    __asm {
        /* __emit: alignment pad 90 (nop) */
        __emit 0x90
        /* __emit: in-function jump-table DATA (12 dword entries, relocated
           addresses of a prior function). Inline asm has no `dd`; emit the
           literal patched address bytes (one byte per __emit). */
        __emit 0x76
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0x69
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0x87
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0x98
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0xA9
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0xBA
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0xCB
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0xDC
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0xED
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0xFE
        __emit 0xEF
        __emit 0x4D
        __emit 0x00
        __emit 0x0C
        __emit 0xF0
        __emit 0x4D
        __emit 0x00
        __emit 0x1A
        __emit 0xF0
        __emit 0x4D
        __emit 0x00
        /* __emit: trailing byte 0x28 (start of next data) */
        __emit 0x28
    }
}
