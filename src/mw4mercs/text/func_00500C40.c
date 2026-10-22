/*
 * FUN_00500C40 (20 bytes) - .text data block 0x50097C.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00767430(void);

__declspec(naked) void FUN_00500C40(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 0x1c]
        push   eax
        add    ecx, dword ptr [esp + 8]
        call   FUN_00767430
        ret    8
    }
}
