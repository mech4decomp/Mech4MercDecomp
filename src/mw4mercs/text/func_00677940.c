/*
 * FUN_00677940 (38 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006747E0(void);
extern void __cdecl FUN_00411C40(void);

__declspec(naked) void FUN_00677940(void)
{
    __asm {
        push   esi
        push   edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push   edi
        call   FUN_006747E0
        mov    eax, dword ptr [esi + 0x190]
        push   eax
        push   0x7973dc
        mov    ecx, edi
        call   FUN_00411C40
        pop    edi
        pop    esi
        ret    4
    }
}
