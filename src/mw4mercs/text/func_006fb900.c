/*
 * FUN_006FB900 (27 B) — FindClose wrapper (close + zero global handle).
 *
 * __cdecl (plain RET), no params.
 * If global DAT_00856718 is non-NULL, calls FindClose on it.
 * Then zeroes DAT_00856718.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006fb900(void)
{
    __asm {
        _emit 0xA1
        _emit 0x18
        _emit 0x67
        _emit 0x85
        _emit 0x00
        TEST EAX, EAX
        JZ l_skip_close
        PUSH EAX
        _emit 0xFF
        _emit 0x15
        _emit 0x9C
        _emit 0xB1
        _emit 0x76
        _emit 0x00
    l_skip_close:
        _emit 0xC7
        _emit 0x05
        _emit 0x18
        _emit 0x67
        _emit 0x85
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        RET
    }
}
