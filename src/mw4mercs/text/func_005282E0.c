/*
 * FUN_005282E0 (46 B) — __stdcall getter.
 * Decodes a global pointer, reads byte at [decoded+0x68],
 * clears it, returns the old value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_005282E0(void)
{
    __asm {
        _emit   0xA1
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     ecx, dword ptr [eax]
        _emit   0x33
        _emit   0x0D
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     edx, dword ptr [ecx + 0x44]
        lea     eax, [ecx + 0x44]
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x68]
        xor     edx, 0x85739531
        mov     byte ptr [edx + 0x68], 0
        mov     eax, ecx
        ret     8
    }
}
