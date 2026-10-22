/*
 * FUN_006247cd (extent 0x6247cd-0x62484e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416bf0(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) void FUN_006247cd(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_47fb
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x78cf90
        pop    esi
        ret    
L_47fb:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_4827
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x78cf94
        mov    eax, esi
        pop    esi
        ret    
L_4827:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00416c60
        test    byte ptr [esp + 8], 1
        je    L_4848
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_4848:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
