/*
 * FUN_004B6500 (61 B) — __thiscall constructor-like (ECX=this), RET 0x8.
 * Calls FUN_004C66B0(DAT_007daa18, param_1, param_2).
 * Looks up pointer from table 0x7b3488 indexed by (this+0x18 >> 10) & 1.
 * Sets vtable at [this] = 0x007708ac.
 * Sets this+0x13c = looked-up pointer.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c66b0(int dat, int param_1, int param_2);

__declspec(naked) void __stdcall FUN_004b6500(void)
{
    __asm {
        MOV EAX, dword ptr [ESP + 0x8]
        _emit 0x8B
        _emit 0x15
        _emit 0x18
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        PUSH ESI
        MOV ESI, ECX
        MOV ECX, dword ptr [ESP + 0x8]
        PUSH EAX
        PUSH ECX
        PUSH EDX
        MOV ECX, ESI
        CALL FUN_004c66b0
        MOV EAX, dword ptr [ESI + 0x18]
        SHR EAX, 0xA
        AND EAX, 0x1
        _emit 0x8B
        _emit 0x0C
        _emit 0x85
        _emit 0x88
        _emit 0x34
        _emit 0x7B
        _emit 0x00
        _emit 0xC7
        _emit 0x06
        _emit 0xAC
        _emit 0x08
        _emit 0x77
        _emit 0x00
        MOV dword ptr [ESI + 0x13C], ECX
        MOV EAX, ESI
        POP ESI
        RET 0x8
    }
}
