/*
 * FUN_004C8E90 (26 B) — __cdecl function that writes a magic value
 * (0x85739531) to an indexed slot in a dynamically-computed table.
 *
 * Uses global data at 0x7DAB44 and 0x7DAB40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_004c8e90(void)
{
    __asm {
        _emit 0xA1
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        MOV ECX, dword ptr [EAX]
        _emit 0xA1
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        MOV EDX, dword ptr [ESP + 0x4]
        XOR ECX, EAX
        _emit 0xC7
        _emit 0x04
        _emit 0x91
        _emit 0x31
        _emit 0x95
        _emit 0x73
        _emit 0x85
        RET
    }
}
