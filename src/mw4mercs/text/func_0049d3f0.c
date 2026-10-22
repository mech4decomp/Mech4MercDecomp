__declspec(naked) void __fastcall FUN_0049d3f0(void *dst, void *src)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [ecx + 8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 8], edx
        mov     dword ptr [eax + 0xc], ecx
        ret     4
    }
}
