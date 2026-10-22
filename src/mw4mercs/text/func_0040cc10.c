/*
 * FUN_0040cc10 (37 B) - 3-component vector scale. __thiscall (ECX = dest),
 * RET 0x8 (2 stack params: src @ [esp+4], scalar @ [esp+8]).
 *
 *   dest[i] = scalar * src[i]  for i in 0..2
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040cc10(void)
{
    __asm {
        fld     dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        fmul    dword ptr [ecx]
        fstp    dword ptr [eax]
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [ecx + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [ecx + 0x8]
        fstp    dword ptr [eax + 0x8]
        ret     0x8
    }
}
