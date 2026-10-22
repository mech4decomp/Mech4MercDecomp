/*
 * FUN_00599E40 (extent 0x599e40-0x599e4b) - thunk: set [ecx]=0x783464,
 * tail-jump, trailing alignment nop.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void func_00599E40(void)
{
    __asm {
        mov dword ptr [ecx], 0x783464
        _emit 0xe9
        _emit 0x65
        _emit 0x32
        _emit 0x05
        _emit 0x00
        nop
    }
}
