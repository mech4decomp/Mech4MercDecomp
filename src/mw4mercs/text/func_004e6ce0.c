/*
 * FUN_004E6CE0 (37 B) — thiscall method.
 *
 * __thiscall (ECX = this), RET 0 (void return).
 * Copies field_10 to field_14, loads word values from globals
 * 0x007DB0AC and 0x007DB0AE into field_24 and field_26,
 * zeroes field_18 and field_28.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004e6ce0(void)
{
    __asm {
        MOV EDX, DWORD PTR [ECX + 0x10]
        MOV DWORD PTR [ECX + 0x14], EDX
        _emit 0x66
        _emit 0x8B
        _emit 0x15
        _emit 0xAC
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        XOR EAX, EAX
        MOV WORD PTR [ECX + 0x24], DX
        _emit 0x66
        _emit 0x8B
        _emit 0x15
        _emit 0xAE
        _emit 0xB0
        _emit 0x7D
        _emit 0x00
        MOV DWORD PTR [ECX + 0x18], EAX
        MOV WORD PTR [ECX + 0x26], DX
        MOV DWORD PTR [ECX + 0x28], EAX
        RET
    }
}
