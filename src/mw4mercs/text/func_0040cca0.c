/*
 * FUN_0040cca0 (37 B) - 3-component vector component-wise divide.
 * __thiscall (ECX = dest), RET 0x8 (2 stack params: src1 @ [esp+4],
 * src2 @ [esp+8]).
 *
 *   dest[i] = src1[i] / src2[i]  for i in 0..2
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040cca0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        fld     dword ptr [ecx]
        fdiv    dword ptr [edx]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x4]
        fdiv    dword ptr [edx + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x8]
        fdiv    dword ptr [edx + 0x8]
        fstp    dword ptr [eax + 0x8]
        ret     0x8
    }
}
