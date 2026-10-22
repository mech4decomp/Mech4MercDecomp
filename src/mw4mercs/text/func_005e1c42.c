/*
 * FUN_005e1c42 (extent 0x5e1c42-0x5e1d35) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2528;
extern int    g_007f252c;
extern int    g_007f2530;
extern int    g_007f268c;
extern int    g_007f26a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005e1c42(void)
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
        nop    
        nop    
        ret    
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
        nop    
        nop    
        nop    
        ret    
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
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        xor    edi, edi
        add    esp, 4
        cmp    esi, edi
        je    L_1cdc
        mov    eax, dword ptr [g_007f26a0]
        mov    ecx, dword ptr [g_007f268c]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5e1da0
        push    edi
        push    edi
        push    ecx
        push    0x788900
        push    0x4c7
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f2528], esi
        jmp    L_1ce2
L_1cdc:
        mov    dword ptr [g_007f2528], edi
L_1ce2:
        push    8
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_1cfc
        mov    dword ptr [eax + 4], edi
        mov    dword ptr [eax], edi
        mov    dword ptr [g_007f252c], eax
        jmp    L_1d02
L_1cfc:
        mov    dword ptr [g_007f252c], edi
L_1d02:
        push    0xc
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, edi
        je    L_1d2c
        mov    ecx, dword ptr [g_007f252c]
        mov    edx, dword ptr [ecx]
        pop    edi
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x7888fc
        mov    dword ptr [g_007f2530], eax
        pop    esi
        ret    
L_1d2c:
        mov    dword ptr [g_007f2530], edi
        pop    edi
        pop    esi
        ret    
    }
}
