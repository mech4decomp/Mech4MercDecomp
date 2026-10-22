/*
 * FUN_00641050 (22 B) — __thiscall accessor: this[0]=*p1; this[1]=*p2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00641050(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp+0x8]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax+0x4], edx
        ret     0x8
    }
}
