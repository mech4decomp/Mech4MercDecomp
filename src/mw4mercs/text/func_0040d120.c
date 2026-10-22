/*
 * FUN_0040d120 (47 B) - multiply a 4-float vector by a scalar.
 * __thiscall (ECX = dest), RET 0x8 (two stack params: src @ [esp+4],
 * scalar @ [esp+8]).
 *
 *   dest[i] = src[i] * scalar;   (i = 0..3)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d120(void)
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
        fld     dword ptr [esp + 0x8]
        fmul    dword ptr [ecx + 0xc]
        fstp    dword ptr [eax + 0xc]
        ret     0x8
    }
}
