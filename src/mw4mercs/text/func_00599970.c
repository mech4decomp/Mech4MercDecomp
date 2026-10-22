/*
 * FUN_00599970 (extent 0x599970-0x59997b) - thunk: set [ecx]=0x783220,
 * tail-jump, trailing alignment nop.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void func_00599970(void)
{
    __asm {
        mov dword ptr [ecx], 0x783220
        _emit 0xe9
        _emit 0x65
        _emit 0x9d
        _emit 0x05
        _emit 0x00
        nop
    }
}
