/*
 * FUN_0055FDB0 (67 B) — FPU comparison function. Compares two
 * float values against a constant, calls a helper if both pass.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_0055FDC0(void);

__declspec(naked) void __stdcall func_0055fdb0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        fld     dword ptr [edx]
        _emit   0xD9
        _emit   0xE1
        _emit   0xD9
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        fnstsw  ax
        test    ah, 1
        je      L_ret
        fld     dword ptr [edx + 4]
        _emit   0xD9
        _emit   0xE1
        _emit   0xD9
        _emit   0x05
        _emit   0x0C
        _emit   0x22
        _emit   0x7B
        _emit   0x00
        fcompp
        fnstsw  ax
        test    ah, 1
        je      L_ret
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    edx
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_0055FDC0
L_ret:
        ret     0x10
    }
}
