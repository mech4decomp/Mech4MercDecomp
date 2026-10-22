/*
 * func_00436150 - thiscall getter (stdcall, ret 8)
 * Writes [ecx+0xa8] to *[esp+4] and [ecx+0xac] to *[esp+8]
 */

__declspec(naked) void func_00436150()
{
    __asm {
        mov     eax, dword ptr [ecx + 0xa8]
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx + 0xac]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        ret     8
    }
}
