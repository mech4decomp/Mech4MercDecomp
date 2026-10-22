/*
 * FUN_005df620 (11 B) — __fastcall thunk: ECX += 0x42c, tail-jump 0x0041fd80
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005df620(void)
{
    __asm {
        add ecx, 0x42c
        _emit 0xE9          /* jmp 0x0041fd80 */
        _emit 0x55
        _emit 0x07
        _emit 0xE4
        _emit 0xFF
    }
}
