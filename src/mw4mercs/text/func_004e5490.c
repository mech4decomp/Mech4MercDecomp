/*
 * FUN_004e5490 (extent 0x4e5490-0x4e5547) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b4354;
extern int    g_007dc740;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040eda0(void);
extern void __cdecl FUN_00411d10(void);
extern void __cdecl FUN_004e5570(void);

__declspec(naked) void FUN_004e5490(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b4354]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    dword ptr [g_007b4354], 0
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4354]
        xor    eax, eax
        cmp    ecx, 1
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4354], 1
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b4354]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    dword ptr [g_007b4354], 2
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 4]
        test    ecx, ecx
        je    L_5515
        push    0x76d9ec
        call    FUN_0040eda0
        mov    ecx, dword ptr [g_007b4354]
        push    ecx
        push    0x773fe0
        mov    ecx, eax
        call    FUN_00411d10
L_5515:
        mov    eax, dword ptr [g_007dc740]
        push    esi
        mov    esi, dword ptr [eax]
        test    esi, esi
        je    L_553f
        mov    ecx, esi
        call    FUN_004e5570
        push    esi
        call    FUN_004084e0
        mov    edx, dword ptr [g_007dc740]
        add    esp, 4
        mov    dword ptr [edx], 0
        pop    esi
        ret    
L_553f:
        mov    dword ptr [eax], 0
        pop    esi
        ret    
    }
}
