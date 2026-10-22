/*
 * FUN_004B6F40 (50 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004B7040(void);

__declspec(naked) void FUN_004B6F40(void)
{
    __asm {
        push   esi
        push   edi
        mov    edi, dword ptr [esp + 0xc]
        push   0x4b6fe0
        mov    esi, ecx
        push   edi
        call   FUN_004B7040
        test   eax, eax
        je     L_4b6f6b
        mov    eax, dword ptr [edi + 8]
        test   eax, eax
        jne    L_4b6f64
        mov    eax, dword ptr [esi + 0x14]
        mov    dword ptr [edi + 8], eax
L_4b6f64:
        pop    edi
        mov    al, 1
        pop    esi
        ret    4
L_4b6f6b:
        pop    edi
        xor    al, al
        pop    esi
        ret    4
    }
}
