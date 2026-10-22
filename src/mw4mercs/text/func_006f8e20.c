/*
 * FUN_006f8e20 (21 B) — __cdecl: count linked-list nodes starting from DAT_008493c4
 *
 * Disassembly:
 *   8B 0D C4 93 84 00 mov ecx, dword ptr [0x008493c4]
 *   33 C0             xor eax, eax
 *   85 C9             test ecx, ecx
 *   74 08             jz done
 * loop:
 *   8B 49 08          mov ecx, dword ptr [ecx + 8]
 *   40                inc eax
 *   85 C9             test ecx, ecx
 *   75 F8             jnz loop
 * done:
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f8e20(void)
{
    __asm {
        _emit 0x8B
        _emit 0x0D
        _emit 0xC4
        _emit 0x93
        _emit 0x84
        _emit 0x00
        xor eax, eax
        test ecx, ecx
        jz done_8e20
loop_8e20:
        mov ecx, dword ptr [ecx + 8]
        inc eax
        test ecx, ecx
        jnz loop_8e20
done_8e20:
        ret
    }
}
