/*
 * FUN_006FE320 (108 B) — Convert ANSI string to wide, call vtable[0x30].
 *
 * __stdcall, RET 4 (1 stack param: char*). If global 0x00856860 is
 * non-zero and 0x0085683c == 0x80, converts the string to wide via
 * mbstowcs (IAT 0x0076b3e8), then calls vtable[0x30] on the object
 * at DAT_00856860+0x14. Returns 0 on success, -1 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fde20(void);

__declspec(naked) void __stdcall FUN_006fe320(void)
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
        push    0
        lea     edx, [esp + 4]
        push    edx
        push    eax
        call    dword ptr [ecx + 0x30]
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
