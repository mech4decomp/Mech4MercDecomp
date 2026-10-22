/*
 * FUN_0040d150 (46 B) - element-wise multiply of two 4-float vectors.
 * __thiscall (ECX = dest), RET 0x8 (two stack params: a @ [esp+4],
 * b @ [esp+8]).
 *
 *   dest[i] = a[i] * b[i];   (i = 0..3)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040d150(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        fld     dword ptr [ecx]
        fmul    dword ptr [edx]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx + 0x4]
        fmul    dword ptr [edx + 0x4]
        fstp    dword ptr [eax + 0x4]
        fld     dword ptr [ecx + 0x8]
        fmul    dword ptr [edx + 0x8]
        fstp    dword ptr [eax + 0x8]
        fld     dword ptr [ecx + 0xc]
        fmul    dword ptr [edx + 0xc]
        fstp    dword ptr [eax + 0xc]
        ret     0x8
    }
}
