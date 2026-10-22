/*
 * FUN_0040cb20 (67 B) — __thiscall linear combination.
 * this->v[i] = a[i]*s1 + b[i]*s2 for i in 0..2 (3 floats).
 * Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040cb20(void)
{
    __asm {
        fld     dword ptr [esp+8]
        mov     edx, dword ptr [esp+0xc]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        fmul    dword ptr [ecx]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx]
        faddp   st(1),st(0)
        fstp    dword ptr [eax]
        fld     dword ptr [esp+8]
        fmul    dword ptr [ecx+4]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+4]
        faddp   st(1),st(0)
        fstp    dword ptr [eax+4]
        fld     dword ptr [esp+8]
        fmul    dword ptr [ecx+8]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [edx+8]
        faddp   st(1),st(0)
        fstp    dword ptr [eax+8]
        ret     0x10
    }
}
