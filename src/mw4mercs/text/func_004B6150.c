/*
 * FUN_004B6150 (43 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004C6960(void);
extern void __cdecl FUN_00421EC0(void);

__declspec(naked) void FUN_004B6150(void)
{
    __asm {
        push   esi
        push   edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push   edi
        call   FUN_004C6960
        push   edi
        call   FUN_00421EC0
        mov    eax, dword ptr [esi + 0x190]
        mov    ecx, dword ptr [eax + 0x10]
        mov    edx, dword ptr [ecx]
        add    esp, 4
        push   edi
        call   dword ptr [edx + 4]
        pop    edi
        pop    esi
        ret    4
    }
}
