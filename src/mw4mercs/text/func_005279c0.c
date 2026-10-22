/*
 * FUN_005279C0 (54 B) — Validation/check function.
 *
 * Reads global pointers, computes XOR hash, calls a validation function.
 * __stdcall, RET 0x08 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005279c0(int param_1)
{
    __asm {
        _emit 0xA1
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     ecx, dword ptr [eax]
        _emit 0x8B
        _emit 0x15
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     eax, dword ptr [esp + 4]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x2C]
        mov     ecx, dword ptr [eax + 4]
        xor     edx, 0x85739531
        push    edx
        mov     edx, dword ptr [ecx]
        _emit 0x8B
        _emit 0x0D
        _emit 0x30
        _emit 0xD2
        _emit 0x7D
        _emit 0x00
        push    edx
        _emit 0xE8
        _emit 0xC2
        _emit 0x35
        _emit 0xFE
        _emit 0xFF
        mov     eax, 1
        ret     8
    }
}
