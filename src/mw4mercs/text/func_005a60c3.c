/*
 * FUN_005a60c3 (extent 0x5a60c3-0x5a612d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2068;
extern int    g_007f25b0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005a60c3(void)
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
        je    L_6121
        mov    eax, dword ptr [g_007f25b0]
        push    0x5052a0
        push    0x5a6160
        push    0x784970
        push    2
        push    eax
        push    0x784990
        push    0x451
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f2068], esi
        pop    esi
        ret    
L_6121:
        mov    dword ptr [g_007f2068], 0
        pop    esi
        ret    
    }
}
