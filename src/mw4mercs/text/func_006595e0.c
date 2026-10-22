/*
 * FUN_006595e0 (22 B) — ABL tree-node helper (__thiscall): copies a dword
 * from arg1 and a byte from arg2 into the 5-byte record at this. RET 8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006595e0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp+8]
        mov     dword ptr [eax], edx
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax+4], dl
        ret     8
    }
}
