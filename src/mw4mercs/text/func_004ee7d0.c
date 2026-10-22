__declspec(naked) void __stdcall FUN_004ee7d0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        ret     4
    }
}
