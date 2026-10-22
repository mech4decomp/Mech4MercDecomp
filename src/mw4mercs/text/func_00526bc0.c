/*
 * FUN_00526BC0 (56 B) — Validation function with boolean result store.
 *
 * Reads global pointers, computes XOR hash, calls a function, converts
 * result to boolean, stores at [param+4].
 * __stdcall, RET 0x08 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00526bc0(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        _emit 0x8B
        _emit 0x0D
        _emit 0x44
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        push    esi
        mov     esi, dword ptr [eax + 4]
        mov     eax, dword ptr [ecx]
        _emit 0x33
        _emit 0x05
        _emit 0x40
        _emit 0xAB
        _emit 0x7D
        _emit 0x00
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x34]
        _emit 0xE8
        _emit 0x79
        _emit 0x07
        _emit 0x07
        _emit 0x00
        neg     al
        sbb     eax, eax
        neg     eax
        mov     dword ptr [esi], eax
        mov     eax, 1
        pop     esi
        ret     8
    }
}
