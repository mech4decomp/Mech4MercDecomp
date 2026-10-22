/*
 * FUN_0072D7B0 (extent 0x72D7B0-0x72D823, 115 B) - .text data block.
 * __stdcall, ret 4.
 */
#pragma warning(disable : 4035 4793)

extern int  g_00896b84;
extern int  g_007a5af0;
extern void (__cdecl *g_0076b0b8)(void);
extern void __cdecl FUN_006FAB90(void);
extern void __cdecl FUN_006F4230(void);

__declspec(naked) void __stdcall FUN_0072D7B0(void)
{
    __asm {
        push   ebp
        mov    ebp, esp
        mov    eax, dword ptr [ebp + 8]
        push   esi
        mov    esi, dword ptr [g_00896b84]
        push   edi
        xor    edi, edi
        test   esi, esi
        je     L_d0
    L_c4:
        cmp    eax, esi
        je     L_e9
        mov    edi, esi
        mov    esi, dword ptr [esi]
        test   esi, esi
        jne    L_c4
    L_d0:
        push   eax
        push   offset g_007a5af0
        call   FUN_006FAB90
        add    esp, 8
        test   eax, eax
        je     L_e3
        int    3
    L_e3:
        pop    edi
        pop    esi
        pop    ebp
        ret    4
    L_e9:
        dec    dword ptr [esi + 0x108]
        jne    L_e3
        mov    eax, dword ptr [esi + 4]
        push   eax
        call   dword ptr [g_0076b0b8]
        test   edi, edi
        je     L_0f
        mov    ecx, dword ptr [esi]
        push   esi
        mov    dword ptr [edi], ecx
        call   FUN_006F4230
        pop    edi
        pop    esi
        pop    ebp
        ret    4
    L_0f:
        mov    edx, dword ptr [esi]
        push   esi
        mov    dword ptr [g_00896b84], edx
        call   FUN_006F4230
        pop    edi
        pop    esi
        pop    ebp
        ret    4
    }
}
