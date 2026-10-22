/*
 * FUN_004ce928 (extent 0x4ce928-0x4ce99e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007db084;
extern int    g_007db09c;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004ce928(void)
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_e95b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x771afc
        pop    esi
        ret    
L_e95b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_e993
        mov    ecx, dword ptr [g_007db084]
        push    0x771b68
        push    2
        push    ecx
        push    0x771b98
        push    0x1d8
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007db09c], eax
        ret    
L_e993:
        mov    dword ptr [g_007db09c], 0
        ret    
    }
}
