/*
 * FUN_004D79D0 (38 B) — cdecl function.
 *
 * Copies bytes from 0x00772ECC to 0x00772ED4, XORing them,
 * into buffer at 0x007DC564. Returns pointer to 0x007DC564.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __cdecl FUN_004d79d0(void)
{
    __asm {
        MOV EAX, 0x007DC564
        DEC EAX
        PUSH EBX
        XOR ECX, ECX
    l_loop:
        _emit 0x8A
        _emit 0x91
        _emit 0xD4
        _emit 0x2E
        _emit 0x77
        _emit 0x00
        _emit 0x8A
        _emit 0x99
        _emit 0xCC
        _emit 0x2E
        _emit 0x77
        _emit 0x00
        INC EAX
        XOR DL, BL
        INC ECX
        TEST DL, DL
        MOV BYTE PTR [EAX], DL
        JNZ l_loop
        MOV EAX, 0x007DC564
        POP EBX
        RET
    }
}
