/*
 * FUN_004B9B20 (58 B) — __thiscall constructor-like (ECX=this), RET 0x4.
 * Calls FUN_004C6430(DAT_007daa40).
 * Looks up pointer from table 0x7b34b8 indexed by (this+0x18 >> 10) & 1.
 * Sets this+0x144 = param_1.
 * Sets vtable at [this] = 0x00770efc.
 * Sets this+0x13c = looked-up pointer.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c6430(int param_1);

__declspec(naked) void __stdcall FUN_004b9b20(void)
{
    __asm {
        _emit 0xA1
        _emit 0x40
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        PUSH ESI
        MOV ESI, ECX
        PUSH EAX
        CALL FUN_004c6430
        MOV ECX, dword ptr [ESI + 0x18]
        MOV EAX, dword ptr [ESP + 0x8]
        SHR ECX, 0xA
        AND ECX, 0x1
        _emit 0x8B
        _emit 0x14
        _emit 0x8D
        _emit 0xB8
        _emit 0x34
        _emit 0x7B
        _emit 0x00
        MOV dword ptr [ESI + 0x144], EAX
        _emit 0xC7
        _emit 0x06
        _emit 0xFC
        _emit 0x0E
        _emit 0x77
        _emit 0x00
        MOV dword ptr [ESI + 0x13C], EDX
        MOV EAX, ESI
        POP ESI
        RET 0x4
    }
}
