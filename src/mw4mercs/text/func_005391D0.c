/*
 * FUN_005391D0 (52 B) — __stdcall method on ecx.
 * If [ecx+0x3514] is 0, sets it to 1. Then decodes global
 * pointer and calls vtable[0x2C](decoded, 1).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_005391D0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x3514]
        test    eax, eax
        jne     label_skip
        mov     dword ptr [ecx + 0x3514], 1
label_skip:
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
        mov     ecx, dword ptr [ecx + 0xC]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0x2C]
        ret     8
    }
}
