/*
 * FUN_0040cb70 (57 B) — __thiscall vector lerp.
 * this->v[i] = a[i] + (b[i] - a[i]) * t for i in 0..2 (3 floats).
 * Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040cb70(void)
{
    __asm {
        mov     edx, dword ptr [esp+4]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+8]
        fld     dword ptr [ecx]
        fsub    dword ptr [edx]
        fmul    dword ptr [esp+0xc]
        fadd    dword ptr [edx]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx+4]
        fsub    dword ptr [edx+4]
        fmul    dword ptr [esp+0xc]
        fadd    dword ptr [edx+4]
        fstp    dword ptr [eax+4]
        fld     dword ptr [ecx+8]
        fsub    dword ptr [edx+8]
        fmul    dword ptr [esp+0xc]
        fadd    dword ptr [edx+8]
        fstp    dword ptr [eax+8]
        ret     0xc
    }
}
