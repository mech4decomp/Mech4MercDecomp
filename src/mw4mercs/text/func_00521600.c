/*
 * FUN_00521600 (46 B) — __stdcall setter.
 * Reads [arg+4] for a pointer, dereferences it, XORs with
 * global XOR key, stores into [decoded_ptr+0x3508].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00521600(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [eax + 4]
        _emit   0x8B
        _emit   0x15
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     eax, dword ptr [edx]
        _emit   0x33
        _emit   0x05
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     edx, dword ptr [eax + 0xC]
        mov     eax, dword ptr [ecx]
        xor     edx, 0x85739531
        mov     dword ptr [edx + 0x3508], eax
        mov     eax, 1
        ret     8
    }
}
