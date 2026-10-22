/*
 * FUN_004C46B0 (23 B) — __fastcall setter.
 * Sets a pointer at offset 0x13c based on a lookup table indexed by
 * (param_1->field_18 >> 10) & 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004c46b0(void)
{
    __asm {
        MOV EAX, dword ptr [ECX + 0x18]
        SHR EAX, 0xa
        AND EAX, 0x1
        _emit 0x8B
        _emit 0x14
        _emit 0x85
        _emit 0x20
        _emit 0x3a
        _emit 0x7b
        _emit 0x00
        MOV dword ptr [ECX + 0x13c], EDX
        RET
    }
}
