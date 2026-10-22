/*
 * FUN_004ACE10 (108 B, true extent 0x4ACE10-0x4ACE7B) - in-.text data block
 * transcription (wave U). __thiscall jump-table dispatcher: reads a field
 * from [ecx], subtracts 4, and dispatches on 0..7 via an in-function jump
 * table (0x4ACE5C). Each case returns whether a byte field is non-zero;
 * default returns -1.
 *
 * The dispatch `jmp [eax*4+imm32]` and the 8-entry jump table (relocated
 * dwords) are emitted as __emit bytes (MSVC6 re-bases the dispatch via EBX;
 * inline asm has no `dd` for the table).
 *
 * NOTE: the 356-byte block 0x4ACE10-0x4ACF65 contains a SECOND function at
 * 0x004ACE80 (adjacent, not in assigned list) - reported separately.
 *
 * Match: target 100%
 */

#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_004ACE10(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        add     eax, -4
        cmp     eax, 7
        ja      L4ace58
        /* __emit: jmp [eax*4+imm32] dispatch - MSVC6 re-bases via EBX */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x5C
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
        /* case 0x21 */
        mov     dl, byte ptr [ecx + 0x1c]
        xor     eax, eax
        test    dl, dl
        setne   al
        ret
        /* case 0x2C */
        mov     dl, byte ptr [ecx + 0x18]
        xor     eax, eax
        test    dl, dl
        setne   al
        ret
        /* case 0x37 */
        mov     dl, byte ptr [ecx + 0x20]
        xor     eax, eax
        test    dl, dl
        setne   al
        ret
        /* case 0x42 */
        mov     dl, byte ptr [ecx + 0x24]
        xor     eax, eax
        test    dl, dl
        setne   al
        ret
        /* case 0x4D */
        mov     dl, byte ptr [ecx + 0x2c]
        xor     eax, eax
        test    dl, dl
        setne   al
        ret
        /* case 0x58 (default) */
    L4ace58:
        or      eax, 0xffffffff
        ret
        /* jump table @ 0x4ACE5C (8 relocated dwords) */
        __emit 0x21
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
        __emit 0x21
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
        __emit 0x42
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
        __emit 0x2C
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
        __emit 0x2C
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
        __emit 0x37
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
        __emit 0x42
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
        __emit 0x4D
        __emit 0xCE
        __emit 0x4A
        __emit 0x00
    }
}
