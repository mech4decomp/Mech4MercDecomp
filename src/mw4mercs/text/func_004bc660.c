/*
 * FUN_004BC660 (60 B) — __fastcall constructor-like (ECX=this).
 * Calls FUN_004BCE50(DAT_007daac4).
 * Looks up pointer from table 0x7b35e0 indexed by (this+0x18 >> 10) & 1.
 * Sets this+0x154 = 0, this+0x158 = 0.
 * Sets vtable at [this] = 0x00771340.
 * Sets this+0x13c = looked-up pointer.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004bce50(int param_1);

__declspec(naked) void __fastcall FUN_004bc660(void)
{
    __asm {
        _emit 0xA1
        _emit 0xC4
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        PUSH ESI
        MOV ESI, ECX
        PUSH EAX
        CALL FUN_004bce50
        MOV ECX, dword ptr [ESI + 0x18]
        SHR ECX, 0xA
        XOR EAX, EAX
        AND ECX, 0x1
        _emit 0x8B
        _emit 0x14
        _emit 0x8D
        _emit 0xE0
        _emit 0x35
        _emit 0x7B
        _emit 0x00
        MOV dword ptr [ESI + 0x154], EAX
        MOV dword ptr [ESI + 0x158], EAX
        _emit 0xC7
        _emit 0x06
        _emit 0x40
        _emit 0x13
        _emit 0x77
        _emit 0x00
        MOV dword ptr [ESI + 0x13C], EDX
        MOV EAX, ESI
        POP ESI
        RET
    }
}
