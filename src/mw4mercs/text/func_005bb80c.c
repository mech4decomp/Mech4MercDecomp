/*
 * FUN_005bb80c (extent 0x5bb80c-0x5bb85b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6dc;
extern int    g_007f2268;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_005bb80c(void)
{
    __asm {
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_b850
        mov    ecx, dword ptr [g_007dc6dc]
        push    0
        push    0
        push    ecx
        push    0x7870d4
        push    0x480
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007f2268], eax
        ret    
L_b850:
        mov    dword ptr [g_007f2268], 0
        ret    
    }
}
