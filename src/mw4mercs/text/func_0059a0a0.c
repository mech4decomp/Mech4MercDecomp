/*
 * FUN_0059A0A0 (extent 0x59a0a0-0x59a0ab) - thunk: set [ecx]=0x783534,
 * tail-jump, trailing alignment nop.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void func_0059A0A0(void)
{
    __asm {
        mov dword ptr [ecx], 0x783534
        _emit 0xe9
        _emit 0xa5
        _emit 0x93
        _emit 0x04
        _emit 0x00
        nop
    }
}
