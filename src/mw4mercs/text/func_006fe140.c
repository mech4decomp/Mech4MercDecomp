/*
 * FUN_006FE140 (115 B) — Wide-character file path writer.
 *
 * __cdecl, RET 4. If global 0x00856860 is non-null and global
 * 0x0085683c == 0x80, converts the input string to wide chars
 * via mbstowcs and calls a virtual method. On failure, calls
 * FUN_006FDE20 and returns -1. On success, returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fde20(void);

__declspec(naked) void __cdecl FUN_006fe140(void)
{
    __asm {
        _emit   0xA1
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        sub     esp, 0x400
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
        mov     eax, dword ptr [esp + 0x404]
        push    0x200
        push    eax
        lea     ecx, [esp + 8]
        push    ecx
        _emit   0xFF
        _emit   0x15
        _emit   0xE8
        _emit   0xB3
        _emit   0x76
        _emit   0x00
        _emit   0x8B
        _emit   0x15
        _emit   0x60
        _emit   0x68
        _emit   0x85
        _emit   0x00
        mov     eax, dword ptr [edx + 0x14]
        mov     ecx, dword ptr [eax]
        add     esp, 0xc
        push    0x0
        lea     edx, [esp + 4]
        push    edx
        _emit   0x8B
        _emit   0x15
        _emit   0x08
        _emit   0x6F
        _emit   0x7B
        _emit   0x00
        push    edx
        push    eax
        call    dword ptr [ecx + 0x20]
        test    eax, eax
        jge     l_ok
    l_fail:
        call    FUN_006fde20
        or      eax, -1
        add     esp, 0x400
        ret     4
    l_ok:
        xor     eax, eax
        add     esp, 0x400
        ret     4
    }
}
