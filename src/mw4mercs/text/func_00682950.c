/*
 * FUN_00682950 (16 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005C85A0(void);

__declspec(naked) void FUN_00682950(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 4]
        push   eax
        call   FUN_005C85A0
        ret    4
    }
}
