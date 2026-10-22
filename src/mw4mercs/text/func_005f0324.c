/*
 * FUN_005f0324 (extent 0x5f0324-0x5f038d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8cc;
extern int    g_007f25b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005f0324(void)
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
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0381
        mov    eax, dword ptr [g_007dc8cc]
        push    0x5052a0
        push    0x5f03c0
        push    0x78a0a8
        push    2
        push    eax
        push    0x78a0d8
        push    0x48b
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f25b0], esi
        pop    esi
        ret    
L_0381:
        mov    dword ptr [g_007f25b0], 0
        pop    esi
        ret    
    }
}
