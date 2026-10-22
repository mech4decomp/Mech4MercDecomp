/*
 * FUN_005e3d2d (extent 0x5e3d2d-0x5e3d9d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8c4;
extern int    g_007f254c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005e3d2d(void)
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
        je    L_3d91
        mov    eax, dword ptr [g_007dc8c4]
        push    0x5052a0
        push    0x5e3dd0
        push    0x788ed0
        push    7
        push    eax
        push    0x788f84
        push    0x472
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f254c], esi
        pop    esi
        ret    
L_3d91:
        mov    dword ptr [g_007f254c], 0
        pop    esi
        ret    
    }
}
