/*
 * FUN_005215D0 (47 B) — __stdcall getter.
 * Identical to FUN_00525BE0. Decodes a global pointer,
 * reads value from [decoded+0x3508], stores into [arg+4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_005215D0(void)
{
    __asm {
        _emit   0xA1
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     ecx, dword ptr [eax]
        _emit   0x8B
        _emit   0x15
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     eax, dword ptr [esp + 4]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0xC]
        mov     ecx, dword ptr [eax + 4]
        xor     edx, 0x85739531
        mov     edx, dword ptr [edx + 0x3508]
        mov     dword ptr [ecx], edx
        mov     eax, 1
        ret     8
    }
}
