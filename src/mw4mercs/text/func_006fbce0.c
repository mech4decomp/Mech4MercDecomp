/*
 * FUN_006FBCE0 (101 B) — File existence check via callback or FindFirstFile.
 *
 * __stdcall, RET 4 (1 stack param: filename). If global callback
 * 0x00858ba8 is set, calls it with (filename, 0, stack_buf) and returns
 * the result from the stack buffer. Otherwise uses FindFirstFileA on
 * global path buffer 0x856310, closes handle, returns file size from
 * globals 0x00856324/0x00856328. Returns -1 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fbce0(void)
{
    __asm {
        _emit   0xA1
        _emit   0xA8
        _emit   0x8B
        _emit   0x85
        _emit   0x00
        sub     esp, 0x24
        test    eax, eax
        jz      l_findfirst
        mov     edx, dword ptr [esp + 0x28]
        _emit   0x8D
        _emit   0x4C
        _emit   0x24
        _emit   0x00
        push    ecx
        push    0
        push    edx
        call    eax
        test    eax, eax
        jz      l_fail
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        add     esp, 0x24
        ret     4
    l_findfirst:
        mov     eax, dword ptr [esp + 0x28]
        push    0x856310
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0xA4
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        cmp     eax, -1
        jz      l_fail
        push    eax
        _emit   0xFF
        _emit   0x15
        _emit   0x9C
        _emit   0xB1
        _emit   0x76
        _emit   0x00
        _emit   0xA1
        _emit   0x24
        _emit   0x63
        _emit   0x85
        _emit   0x00
        _emit   0x8B
        _emit   0x15
        _emit   0x28
        _emit   0x63
        _emit   0x85
        _emit   0x00
        add     esp, 0x24
        ret     4
    l_fail:
        or      eax, -1
        or      edx, -1
        add     esp, 0x24
        ret     4
    }
}
