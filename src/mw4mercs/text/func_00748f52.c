/*
 * FUN_00748f52 (extent 0x748f52-0x748f80) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00748eeb(void);

__declspec(naked) void FUN_00748f52(void)
{
    __asm {
        mov    edi, edi
        lea    ecx, [ebx - 0x746bff8c]
        je    L_8f5c
L_8f5c:
        /* __emit: short je rel8 to 0x00748EEB; MSVC6 emits near je (0F 84 rel32) for extern symbol */
        __emit 0x74
        __emit 0x8D
        je    L_8f60
L_8f60:
        dec    ebp
        /* __emit: truncated instruction tail (residual jump-table data) */
        __emit 0x8E
        __emit 0x74
        __emit 0x00
        __emit 0xB9
    }
}
