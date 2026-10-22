/*
 * FUN_005acdf6 (extent 0x5acdf6-0x5ace9d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007dc8cc;
extern int    g_007f20d4;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005acdf6(void)
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
        mov    eax, dword ptr [g_007b8810]
        push    esi
        push    eax
        push    0xc
        mov    esi, ecx
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_ce4b
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax], 0x785978
        pop    esi
        ret    
L_ce4b:
        xor    eax, eax
        pop    esi
        ret    
        nop    
        push    esi
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ce91
        mov    eax, dword ptr [g_007dc8cc]
        push    0x5052a0
        push    0x5aced0
        push    0x785988
        push    1
        push    eax
        push    0x7859a4
        push    0x49a
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f20d4], esi
        pop    esi
        ret    
L_ce91:
        mov    dword ptr [g_007f20d4], 0
        pop    esi
        ret    
    }
}
