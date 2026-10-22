/*
 * thunk_FUN_004D6350 (26 B) — Obfuscated thunk to FUN_004D6350.
 *
 * Loads pointer from 0x7DAB44, XORs with 0x7DAB40,
 * XORs with 0x85739531, then jumps to FUN_004D6350.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d6350(void);

__declspec(naked) void __stdcall thunk_FUN_004d6350(void)
{
    __asm {
        _emit 0xA1
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        MOV  ECX, [EAX]
        _emit 0x33
        _emit 0x0D
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        MOV  ECX, [ECX]
        XOR  ECX, 0x85739531
        JMP  FUN_004d6350
    }
}
