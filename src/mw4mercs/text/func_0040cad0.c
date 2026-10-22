/*
 * FUN_0040cad0 (37 B) — __thiscall vector component-wise divide.
 * this->v = a->v / b->v (3 floats). Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040cad0(void)
{
    __asm {
        mov     edx, dword ptr [esp+8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        fld     dword ptr [ecx]
        fdiv    dword ptr [edx]
        fstp    dword ptr [eax]
        fld     dword ptr [ecx+4]
        fdiv    dword ptr [edx+4]
        fstp    dword ptr [eax+4]
        fld     dword ptr [ecx+8]
        fdiv    dword ptr [edx+8]
        fstp    dword ptr [eax+8]
        ret     8
    }
}
