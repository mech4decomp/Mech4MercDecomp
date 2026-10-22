/*
 * FUN_006FE630 (27 B) — Set global struct field + flag, return 0.
 *
 * __stdcall (RET 4), 1 param.
 * Reads global DAT_00856860, stores param at [global+0x2F480],
 * sets byte at [global+0x2F47C] to 1, returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006fe630(void)
{
    __asm {
        _emit 0xA1
        _emit 0x60
        _emit 0x68
        _emit 0x85
        _emit 0x00
        MOV ECX, dword ptr [ESP + 0x4]
        MOV dword ptr [EAX + 0x2F480], ECX
        MOV byte ptr [EAX + 0x2F47C], 0x1
        XOR EAX, EAX
        RET 0x4
    }
}
