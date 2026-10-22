/*
 * FUN_006F68C0 (24 B) — Constructor/initializer.
 *
 * __fastcall (ECX = this). Initializes a 0x10-byte object:
 *   +0x00 = vtable 0x79FCC8
 *   +0x04 = 1
 *   +0x08 = 0
 *   +0x0C = 0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006f68c0(void)
{
    __asm {
        MOV EAX, ECX
        XOR ECX, ECX
        MOV dword ptr [EAX + 0x4], 0x1
        MOV dword ptr [EAX + 0x8], ECX
        MOV dword ptr [EAX + 0xC], ECX
        _emit 0xC7
        _emit 0x00
        _emit 0xC8
        _emit 0xFC
        _emit 0x79
        _emit 0x00
        RET
    }
}
