__declspec(naked) int __stdcall FUN_004c9030(int *param_1)
{
    __asm {
        mov eax, [esp + 4]
        mov dword ptr [eax], 0x7dab48
        _emit 0xA1
        _emit 0x74
        _emit 0xAC
        _emit 0x7D
        _emit 0x00
        ret
    }
}
