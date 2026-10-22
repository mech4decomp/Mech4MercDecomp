/*
 * FUN_0040ca40 (37 B) — __thiscall vector scale. this->v = a->v * scalar
 * component-wise (3 floats). Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040ca40(void)
{
    __asm {
        fld     dword ptr [esp+8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        fmul    dword ptr [ecx]
        fstp    dword ptr [eax]
        fld     dword ptr [esp+8]
        fmul    dword ptr [ecx+4]
        fstp    dword ptr [eax+4]
        fld     dword ptr [esp+8]
        fmul    dword ptr [ecx+8]
        fstp    dword ptr [eax+8]
        ret     8
    }
}
