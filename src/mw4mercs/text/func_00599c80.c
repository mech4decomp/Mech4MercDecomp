/*
 * FUN_00599C80 (extent 0x599c80-0x599c8b) - thunk: set [ecx]=0x7833a8,
 * tail-jump, trailing alignment nop.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void func_00599C80(void)
{
    __asm {
        mov dword ptr [ecx], 0x7833a8
        _emit 0xe9
        _emit 0x75
        _emit 0xd2
        _emit 0x05
        _emit 0x00
        nop
    }
}
