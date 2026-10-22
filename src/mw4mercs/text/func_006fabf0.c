/*
 * FUN_006FABF0 (87 B) — vsnprintf wrapper with assertion crash and log dispatch.
 *
 * __cdecl, 1 param (format string) + varargs from caller's stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f91d0(int, const char *);

__declspec(naked) void __cdecl FUN_006fabf0(void)
{
    __asm {
        sub     esp, 0x100
        mov     ecx, dword ptr [esp + 0x104]
        lea     eax, [esp + 0x108]
        push    eax
        push    ecx
        lea     edx, [esp + 8]
        push    0x100
        push    edx
        _emit   0xFF
        _emit   0x15
        _emit   0x94
        _emit   0xB3
        _emit   0x76
        _emit   0x00
        _emit   0xA1
        _emit   0xA8
        _emit   0x9E
        _emit   0x84
        _emit   0x00
        add     esp, 0x10
        test    eax, eax
        mov     byte ptr [esp + 0xFF], 0
        jz      l_skip_crash
        _emit   0xC6
        _emit   0x05
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
        _emit   0x00
    l_skip_crash:
        _emit   0x8D
        _emit   0x44
        _emit   0x24
        _emit   0x00
        push    eax
        push    0x182
        call    FUN_006f91d0
        add     esp, 0x100
        ret
    }
}
