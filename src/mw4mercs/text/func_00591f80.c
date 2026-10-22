/*
 * FUN_00591F80 (extent 0x591f80-0x591f8b) - thunk: set [ecx]=0x782734,
 * tail-jump, trailing alignment nop.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void func_00591F80(void)
{
    __asm {
        mov dword ptr [ecx], 0x782734
        _emit 0xe9
        _emit 0x55
        _emit 0x4e
        _emit 0x05
        _emit 0x00
        nop
    }
}
