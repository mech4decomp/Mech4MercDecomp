/*
 * FUN_004df917 (extent 0x4df917-0x4df99e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fc90(void);

__declspec(naked) void FUN_004df917(void)
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_f94b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x77392c
        pop    esi
        ret    
L_f94b:
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
        je    L_f97b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x773928
        pop    esi
        ret    
L_f97b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_f998
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f998:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
