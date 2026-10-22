/*
 * FUN_004B54C0 (60 B) — __fastcall constructor-like (ECX=this).
 * Calls FUN_004BF010(DAT_007daa04).
 * Looks up pointer from table 0x7b3480 indexed by (this+0x18 >> 10) & 1.
 * Sets this+0x150 = 0, this+0x154 = 0.
 * Sets vtable at [this] = 0x0077071c.
 * Sets this+0x13c = looked-up pointer.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004bf010(int param_1);

__declspec(naked) void __fastcall FUN_004b54c0(void)
{
    __asm {
        _emit 0xA1
        _emit 0x04
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        PUSH ESI
        MOV ESI, ECX
        PUSH EAX
        CALL FUN_004bf010
        MOV ECX, dword ptr [ESI + 0x18]
        SHR ECX, 0xA
        XOR EAX, EAX
        AND ECX, 0x1
        _emit 0x8B
        _emit 0x14
        _emit 0x8D
        _emit 0x80
        _emit 0x34
        _emit 0x7B
        _emit 0x00
        MOV dword ptr [ESI + 0x150], EAX
        MOV dword ptr [ESI + 0x154], EAX
        _emit 0xC7
        _emit 0x06
        _emit 0x1C
        _emit 0x07
        _emit 0x77
        _emit 0x00
        MOV dword ptr [ESI + 0x13C], EDX
        MOV EAX, ESI
        POP ESI
        RET
    }
}
