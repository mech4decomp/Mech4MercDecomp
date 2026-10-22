/*
 * FUN_0055e256 (extent 0x55e256-0x55e30e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416bf0(void);
extern void __cdecl FUN_0041fc90(void);

__declspec(naked) void FUN_0055e256(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        je    L_e28b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x77d010
        pop    esi
        ret    
L_e28b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_e2bb
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x77d13c
        pop    esi
        ret    
L_e2bb:
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
        je    L_e2e7
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x77d098
        mov    eax, esi
        pop    esi
        ret    
L_e2e7:
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
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_e308
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_e308:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
