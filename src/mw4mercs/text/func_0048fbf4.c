/*
 * FUN_0048fbf4 (extent 0x48fbf4-0x48fc64) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c08;
extern int    g_007da850;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_0048fbf4(void)
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
        je    L_fc2b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x76ff10
        pop    esi
        ret    
L_fc2b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fc59
        mov    ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76ff14
        push    0x45
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007da850], eax
        ret    
L_fc59:
        mov    dword ptr [g_007da850], 0
        ret    
    }
}
