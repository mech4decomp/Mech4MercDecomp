/*
 * FUN_10034ba0 (32 B) - __thiscall, RET 0x4. Converts uint param_1 to
 * double and stores at this->0x28.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10034ba0(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [esp + 0xc]
        __emit 0x89  /* __emit: MSVC6 drops 00 disp on [esp] -> 89 04 24; ref needs 89 44 24 00 */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov     dword ptr [esp + 4], 0
        __emit 0xDF  /* __emit: MSVC6 drops 00 disp on fild [esp] -> DF 2C 24; ref needs DF 6C 24 00 */
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        fstp    qword ptr [ecx + 0x28]
        add     esp, 8
        ret     4
    }
}
