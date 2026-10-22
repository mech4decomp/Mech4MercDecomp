/*
 * FUN_0061f660 (22 B) - __stdcall (RET 0x4). Returns byte at [rec+0x14]+6
 * (a flag) from the record, or 0 if no record.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0061f660(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     eax, dword ptr [eax+0x14]
        test    eax, eax
        jnz     L_670
        xor     al, al
        ret     4
L_670:
        mov     al, byte ptr [eax+6]
        ret     4
    }
}
