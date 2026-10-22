/*
 * FUN_004B6090 (57 B) — __fastcall constructor-like (ECX=this).
 * Calls FUN_004C6430(DAT_007daa14).
 * Sets this+0x144/0x148/0x14c = 0xbf800000.
 * Sets vtable at [this] = 0x00770804.
 * Sets this+0x13c = 0x004b6440.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c6430(int param_1);

__declspec(naked) void __fastcall FUN_004b6090(void)
{
    __asm {
        _emit 0xA1
        _emit 0x14
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        PUSH ESI
        MOV ESI, ECX
        PUSH EAX
        CALL FUN_004c6430
        MOV EAX, 0xBF800000
        MOV dword ptr [ESI + 0x144], EAX
        MOV dword ptr [ESI + 0x14C], EAX
        MOV dword ptr [ESI + 0x148], EAX
        _emit 0xC7
        _emit 0x06
        _emit 0x04
        _emit 0x08
        _emit 0x77
        _emit 0x00
        _emit 0xC7
        _emit 0x86
        _emit 0x3C
        _emit 0x01
        _emit 0x00
        _emit 0x00
        _emit 0x40
        _emit 0x64
        _emit 0x4B
        _emit 0x00
        MOV EAX, ESI
        POP ESI
        RET
    }
}
