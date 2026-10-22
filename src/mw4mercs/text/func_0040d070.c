/*
 * FUN_0040d070 (31 B) - copies 4 dwords from a single source pointer
 * param into dest[0..3]. __thiscall (ECX = dest), RET 0x4 (one stack
 * param: src @ [esp+4]).
 *
 *   dest[0] = src[0]; dest[1] = src[1]; dest[2] = src[2]; dest[3] = src[3];
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d070(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     ecx, dword ptr [ecx + 0xc]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], ecx
        ret     0x4
    }
}
