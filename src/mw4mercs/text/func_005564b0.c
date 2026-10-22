/*
 * FUN_005564B0 (68 B) — Global state check. Loads two globals,
 * XORs them, checks a field, calls a function, returns boolean.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_00628270(void);

__declspec(naked) int __stdcall func_005564b0(void)
{
    __asm {
        _emit   0xA1
        _emit   0x44
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        _emit   0x8B
        _emit   0x0D
        _emit   0x40
        _emit   0xAB
        _emit   0x7D
        _emit   0x00
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        je      L_ret0b
        mov     ecx, dword ptr [eax + 0x40]
        push    9
        xor     ecx, 0x85739531
        call    FUN_00628270
        mov     cl, byte ptr [eax + 0x50]
        test    cl, cl
        jne     L_ret0
        mov     cl, byte ptr [eax + 4]
        test    cl, cl
        je      L_ret0
L_ret1:
        mov     eax, 1
        ret
L_ret0:
        xor     eax, eax
        ret
L_ret0b:
        _emit   0x32
        _emit   0xC0
        ret
    }
}
