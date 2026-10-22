/*
 * FUN_004D5F40 (38 B) — thiscall constructor.
 *
 * __thiscall (ECX = this), RET 0 (returns this in EAX).
 * Loads global 0x007B8C10, calls FUN_00415180 with it,
 * zeroes fields 0x08, 0x0C, 0x10, 0x14, sets vtable to 0x00772C80.
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(int);

__declspec(naked) void __fastcall FUN_004d5f40(void)
{
    __asm {
        _emit 0xA1
        _emit 0x10
        _emit 0x8C
        _emit 0x7B
        _emit 0x00
        PUSH ESI
        MOV ESI, ECX
        PUSH EAX
        CALL FUN_00415180
        XOR EAX, EAX
        MOV DWORD PTR [ESI + 0x10], EAX
        MOV DWORD PTR [ESI + 0x08], EAX
        MOV DWORD PTR [ESI + 0x0C], EAX
        MOV DWORD PTR [ESI + 0x14], EAX
        MOV DWORD PTR [ESI], 0x00772C80
        MOV EAX, ESI
        POP ESI
        RET
    }
}
