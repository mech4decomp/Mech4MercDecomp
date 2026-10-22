/*
 * FUN_0053f98e (extent 0x53f98e-0x53f9af) - gen via tools/gen_bigfunc.py.
 * This slice is a 2-byte alignment pad (8B FF = mov edi,edi) + the 8-entry
 * jump table of the preceding function FUN_0053f910 (0x53f910, dispatch
 * `FF 24 85` at 0x53f93a). Table targets: 0x53f93d x5, 0x53f949, 0x53f955,
 * 0x53f961. Inline asm has no `dd`; emit the literal patched dword bytes.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_0053f98e(void)
{
    __asm {
        /* __emit: alignment pad 8B FF (mov edi,edi) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: in-function jump-table DATA (8 dword entries, relocated
           addresses of FUN_0053f910's switch cases) */
        __emit 0x3D
        __emit 0xF9
        __emit 0x53
        __emit 0x00
        __emit 0x3D
        __emit 0xF9
        __emit 0x53
        __emit 0x00
        __emit 0x3D
        __emit 0xF9
        __emit 0x53
        __emit 0x00
        __emit 0x3D
        __emit 0xF9
        __emit 0x53
        __emit 0x00
        __emit 0x3D
        __emit 0xF9
        __emit 0x53
        __emit 0x00
        __emit 0x49
        __emit 0xF9
        __emit 0x53
        __emit 0x00
        __emit 0x55
        __emit 0xF9
        __emit 0x53
        __emit 0x00
        __emit 0x61
        __emit 0xF9
        __emit 0x53
        __emit 0x00
    }
}
