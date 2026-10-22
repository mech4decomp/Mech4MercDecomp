/*
 * FUN_00415940 (extent 0x415940-0x415975) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_00415940(void)
{
    __asm {
        push    esi
        push    0x14
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5971
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x76d424
        pop    esi
        ret    
L_5971:
        xor    eax, eax
        pop    esi
        ret    
    }
}
