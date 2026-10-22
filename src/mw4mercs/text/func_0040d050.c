/*
 * FUN_0040d050 (31 B) - copies 3 dwords from 3 separate pointer params
 * into dest[0..2]. __thiscall (ECX = dest), RET 0xc (3 stack params:
 * p0 @ [esp+4], p1 @ [esp+8], p2 @ [esp+0xc]).
 *
 *   dest[0] = *p0; dest[1] = *p1; dest[2] = *p2;
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d050(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax + 0x8], edx
        ret     0xc
    }
}
