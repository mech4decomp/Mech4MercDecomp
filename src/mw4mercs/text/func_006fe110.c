/*
 * FUN_006FE110 (48 B) — D3D device check helper.
 *
 * If global 0x00856860 is non-NULL and global 0x0085683c == 0x80,
 * calls vtable[0x10](0) on the sub-object at +0x0c. If result >= 0,
 * returns 0. Otherwise calls FUN_006fde20 and returns -1.
 *
 * __cdecl, no params, returns int.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fde20(void);

__declspec(naked) int __cdecl FUN_006fe110(void)
{
    __asm {
        _emit   0xA1
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        test    eax, eax
        jz      l_fail
        _emit   0x81
        _emit   0x3D
        _emit   0x3C
        _emit   0x68
        _emit   0x85
        _emit   0x00
        _emit   0x80
        _emit   0x00
        _emit   0x00
        _emit   0x00
        jnz     l_fail
        mov     eax, dword ptr [eax + 0x0c]
        mov     ecx, dword ptr [eax]
        push    0
        push    eax
        call    dword ptr [ecx + 0x10]
        test    eax, eax
        jge     l_ok
    l_fail:
        call    FUN_006fde20
        or      eax, -1
        ret
    l_ok:
        xor     eax, eax
        ret
    }
}
