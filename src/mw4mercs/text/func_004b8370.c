/*
 * FUN_004B8370 (61 B) — Allocator/init function.
 * Calls FUN_004084D0(0x2c) to allocate.
 * If non-null, calls FUN_00415D70(0x38, 100, 100, "StateChange", DAT_007da9e8)
 * and stores result in DAT_007daa38.
 * Else stores 0 in DAT_007daa38.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00415d70(int a, int b, int c, const char *str, int d);

__declspec(naked) void FUN_004b8370(void)
{
    __asm {
        PUSH ESI
        PUSH 0x2C
        CALL FUN_004084d0
        MOV ESI, EAX
        ADD ESP, 0x4
        TEST ESI, ESI
        JZ l_store_zero
        _emit 0xA1
        _emit 0xE8
        _emit 0xA9
        _emit 0x7D
        _emit 0x00
        PUSH EAX
        PUSH 0x007709B4
        PUSH 0x64
        PUSH 0x64
        PUSH 0x38
        MOV ECX, ESI
        CALL FUN_00415d70
        _emit 0x89
        _emit 0x35
        _emit 0x38
        _emit 0xAA
        _emit 0x7D
        _emit 0x00
        POP ESI
        RET
    l_store_zero:
        _emit 0xC7
        _emit 0x05
        _emit 0x38
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
