/*
 * FUN_004B5FB0 (62 B) — Cleanup function.
 * If DAT_007daa14 != 0, calls FUN_00415200() then FUN_004084E0(DAT_007daa14).
 * Sets DAT_007daa14 = 0.
 * Calls FUN_006F4850(DAT_007daa10, 1).
 * Sets DAT_007daa10 = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415200(void);
extern void __cdecl FUN_004084e0(void *ptr);
extern void __cdecl FUN_006f4850(int param_1, int param_2);

__declspec(naked) void FUN_004b5fb0(void)
{
    __asm {
        PUSH ESI
        _emit 0x8B
        _emit 0x35
        _emit 0x14
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        TEST ESI, ESI
        JZ l_skip_free
        MOV ECX, ESI
        CALL FUN_00415200
        PUSH ESI
        CALL FUN_004084e0
        ADD ESP, 0x4
    l_skip_free:
        _emit 0xA1
        _emit 0x10
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        PUSH 0x1
        PUSH EAX
        _emit 0xC7
        _emit 0x05
        _emit 0x14
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        CALL FUN_006f4850
        _emit 0xC7
        _emit 0x05
        _emit 0x10
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        _emit 0x00
        POP ESI
        RET
    }
}
