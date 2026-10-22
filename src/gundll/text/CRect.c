/*
 * CRect (32 B) - __thiscall, RET 0x10. CRect::CRect(int,int,int,int):
 * stores 4 int args into this[0..3].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void CRect(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], edx
        ret     0x10
    }
}
