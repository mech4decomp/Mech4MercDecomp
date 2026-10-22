/*
 * FUN_0059A7B0 (extent 0x59a7b0-0x59a7bb) - thunk: set [ecx]=0x7836a0,
 * tail-jump, trailing alignment nop.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void func_0059A7B0(void)
{
    __asm {
        mov dword ptr [ecx], 0x7836a0
        _emit 0xe9
        _emit 0x25
        _emit 0xc6
        _emit 0x04
        _emit 0x00
        nop
    }
}
