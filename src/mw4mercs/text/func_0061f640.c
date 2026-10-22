/*
 * FUN_0061f640 (22 B) - __stdcall (RET 0x4). Returns byte at [rec+0x14]+4
 * (a flag) from the record, or 0 if no record.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0061f640(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        mov     eax, dword ptr [eax+0x14]
        test    eax, eax
        jnz     L_650
        xor     al, al
        ret     4
L_650:
        mov     al, byte ptr [eax+4]
        ret     4
    }
}
