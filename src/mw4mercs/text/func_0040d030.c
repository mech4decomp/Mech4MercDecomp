/*
 * FUN_0040d030 (26 B) - copies 3 dwords from src into dest at strided
 * offsets (0xc, 0x1c, 0x2c). __thiscall (ECX = dest), RET 0x4
 * (1 stack param: src @ [esp+4]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d030(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0xc], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x1c], edx
        mov     dword ptr [eax + 0x2c], ecx
        ret     0x4
    }
}
