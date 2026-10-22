/*
 * FUN_00641000 (11 B) — __thiscall accessor: *param = *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00641000(void)
{
    __asm {
        mov     ecx, dword ptr [ecx]
        mov     eax, dword ptr [esp+0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
