/*
 * FUN_006a0e10 (48 B) - __thiscall. Walks this->0x4->0x170->0xd8 and
 * writes three dwords (offsets 0x8c, 0x9c, 0xac) into the output param.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: output pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006a0e10(void *param)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [eax + 0x170]
        mov     ecx, dword ptr [ecx + 0xd8]
        mov     edx, dword ptr [ecx + 0x8c]
        mov     eax, dword ptr [esp + 0x4]
        add     ecx, 0x80
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x1c]
        mov     ecx, dword ptr [ecx + 0x2c]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret     4
    }
}
