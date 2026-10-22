/*
 * FUN_006F8B20 (27 B) — Walk linked list calling vtable slot 8 on each node.
 *
 * __cdecl (plain RET), no params. Returns 1.
 * While global DAT_008493C4 is non-NULL, calls virtual slot 8 on it
 * (which may remove it from the list), then re-reads the global.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_006f8b20(void)
{
    __asm {
        _emit 0xA1
        _emit 0xC4
        _emit 0x93
        _emit 0x84
        _emit 0x00
        TEST EAX, EAX
        JZ l_done
    l_loop:
        MOV ECX, dword ptr [EAX]
        PUSH EAX
        CALL dword ptr [ECX + 0x8]
        _emit 0xA1
        _emit 0xC4
        _emit 0x93
        _emit 0x84
        _emit 0x00
        TEST EAX, EAX
        JNZ l_loop
    l_done:
        MOV AL, 0x1
        RET
    }
}
