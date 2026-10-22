/*
 * FUN_0040ccd0 (25 B) - 3-component vector copy (12 bytes).
 * __thiscall (ECX = dest), RET 0x4 (1 stack param: src @ [esp+4]).
 *
 *   dest[i] = src[i]  for i in 0..2
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040ccd0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
