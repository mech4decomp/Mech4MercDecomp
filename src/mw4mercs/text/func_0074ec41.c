/*
 * FUN_0074ec41 (extent 0x74ec41-0x74ec8d, 76 B) - residual: alignment pad +
 * tail of prior function's jump table + switch code.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_0074ec41(void)
{
    __asm {
        __emit 0x8D  /* alignment pad lea ecx,[ecx+0] (8D 49 00) */
        __emit 0x49
        __emit 0x00
        /* jump-table dwords (patched absolute addresses) - literal bytes */
        __emit 0x01  /* -> 0x0074EC01 */
        __emit 0xEC
        __emit 0x74
        __emit 0x00
        __emit 0x09  /* -> 0x0074EC09 */
        __emit 0xEC
        __emit 0x74
        __emit 0x00
        __emit 0x11  /* -> 0x0074EC11 */
        __emit 0xEC
        __emit 0x74
        __emit 0x00
        __emit 0x19  /* -> 0x0074EC19 */
        __emit 0xEC
        __emit 0x74
        __emit 0x00
        __emit 0x21  /* -> 0x0074EC21 */
        __emit 0xEC
        __emit 0x74
        __emit 0x00
        __emit 0x29  /* -> 0x0074EC29 */
        __emit 0xEC
        __emit 0x74
        __emit 0x00
        __emit 0x31  /* -> 0x0074EC31 */
        __emit 0xEC
        __emit 0x74
        __emit 0x00
        mov     eax, dword ptr [esp + 4]
        dec     eax
        je      L_ec85
        dec     eax
        je      L_ec7d
        dec     eax
        je      L_ec75
        mov     eax, 0x79e7f8
        ret     4
L_ec75:
        mov     eax, 0x7ac4d4
        ret     4
L_ec7d:
        mov     eax, 0x7ac4d0
        ret     4
L_ec85:
        mov     eax, 0x7abf18
        ret     4
    }
}
