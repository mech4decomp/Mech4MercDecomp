/*
 * FUN_006FAB90 (87 B) — Assertion/error utility.
 *
 * Takes a format string and optional varargs (read from the caller's stack
 * frame, 4 bytes past the declared parameter). Formats the message into a
 * 256-byte stack buffer via _vsnprintf, then:
 *   - If global at 0x849EA8 is non-zero, deliberately crashes by writing to
 *     address 0 (null-pointer dereference / assertion failure).
 *   - Calls FUN_006F91D0 (output/log function) with the buffer and mode 0x183.
 *
 * Called by vtable_assert (FUN_00415B70) with "No person resources" (0x76D478).
 *
 * __cdecl (ends with plain `ret`, not `ret n`).
 * CFLAGS: /O1
 */

extern void __cdecl FUN_006f91d0(int mode, const char *msg);

__declspec(naked) void __cdecl FUN_006fab90(void)
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
        ; call [0x76b394]  -- _vsnprintf
        _emit 0xFF
        _emit 0x15
        _emit 0x94
        _emit 0xB3
        _emit 0x76
        _emit 0x00
        ; mov eax, [0x849ea8]
        _emit 0xA1
        _emit 0xA8
        _emit 0x9E
        _emit 0x84
        _emit 0x00
        add     esp, 0x10
        test    eax, eax
        mov     byte ptr [esp + 0FFh], 0
        je      l_skip_crash
        ; mov byte ptr [0], 0
        _emit 0xC6
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
    l_skip_crash:
        ; lea eax, [esp]
        _emit 0x8D
        _emit 0x44
        _emit 0x24
        _emit 0x00
        push    eax
        push    0x183
        call    FUN_006f91d0
        add     esp, 0x100
        ret
    }
}
