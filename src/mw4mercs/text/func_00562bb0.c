// 0x00562BB0: conditional copy - if dst != NULL, copies 8 bytes from src to dst
// __cdecl with 2 params

__declspec(naked) void __cdecl func_00562bb0(void *dst, void *src)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        je skip
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [eax], edx
        mov dword ptr [eax + 4], ecx
skip:
        ret
    }
}
