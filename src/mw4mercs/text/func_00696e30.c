/*
 * FUN_00696e30 (18 B) — __thiscall: copies *param1 into the object and
 * clears bit 0 of *param1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00696e30(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        and     edx, 0xfffffffe
        mov     dword ptr [ecx], edx
        ret     4
    }
}
