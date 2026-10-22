/*
 * FUN_1003bfe9 (25 B) - __cdecl. If (short)param_1 != -1, calls
 * FUN_100425d8(param_1, param_2).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100425d8(void);   /* rel32 call */

__declspec(naked) void FUN_1003bfe9(void)
{
    __asm {
        /* __emit: MSVC6 encodes cmp word ptr [esp+4],0xffff as 66 83 /7 imm8; ref uses 66 81 /7 imm16 */
        __emit 0x66
        __emit 0x81
        __emit 0x7C
        __emit 0x24
        __emit 0x04
        __emit 0xFF
        __emit 0xFF
        jz      L_ret
        push    dword ptr [esp + 8]
        push    dword ptr [esp + 8]
        call    FUN_100425d8
        pop     ecx
        pop     ecx
L_ret:
        ret
    }
}
