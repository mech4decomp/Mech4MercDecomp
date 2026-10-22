/*
 * FUN_004D7120 (24 B) — Write byte 0 to DS:[0], return [param+0x158].
 *
 * __cdecl (one stack param), RET 4.
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004d7120(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        _emit 0x3E
        _emit 0xC6
        _emit 0x05
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        mov     eax, dword ptr [ebp + 8]
        mov     eax, dword ptr [eax + 0x158]
        pop     ebp
        ret     4
    }
}
