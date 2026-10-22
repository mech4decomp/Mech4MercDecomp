/*
 * FUN_006F8AF0 (46 B) — Global cleanup helper.
 *
 * If global 0x008493d0 is non-NULL, calls FUN_006f5ed0, then calls
 * vtable[0](1) on the object, zeros the global, and jumps to FUN_006f5ee0.
 *
 * __cdecl, no params, no return value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);

__declspec(naked) void __cdecl FUN_006f8af0(void)
{
    __asm {
        _emit   0xA1
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    eax, eax
        jz      l_done
        call    FUN_006f5ed0
        _emit   0x8B
        _emit   0x0D
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        test    ecx, ecx
        jz      l_zero
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
    l_zero:
        _emit   0xC7
        _emit   0x05
        _emit   0xD0
        _emit   0x93
        _emit   0x84
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        jmp     FUN_006f5ee0
    l_done:
        ret
    }
}
