__declspec(naked) void func_004e2b40(void)
{
    __asm {
        mov     eax, [esp+4]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx+0x16C]
        fmul    dword ptr [ecx+0x170]
        fstp    dword ptr [eax]
        mov     eax, [esp+8]
        fld     dword ptr [eax]
        fsub    dword ptr [ecx+0x174]
        fmul    dword ptr [ecx+0x170]
        fstp    dword ptr [eax]
        ret     8
    }
}
