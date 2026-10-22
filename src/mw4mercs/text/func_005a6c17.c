/*
 * FUN_005a6c17 (extent 0x5a6c17-0x5a6ca4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2070;
extern int    g_007f255c;
extern int    g_007f2560;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005a6c17(void)
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
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_6c98
        mov    eax, dword ptr [g_007f255c]
        mov    ecx, dword ptr [g_007f2560]
        push    0x502c60
        push    0x5028b0
        push    0x6775b0
        push    0
        push    0x677590
        push    eax
        push    0x674b00
        push    0x5a6ce0
        push    0
        push    0
        push    ecx
        push    0x784af0
        push    0x4ac
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5ef970
        mov    dword ptr [g_007f2070], esi
        pop    esi
        ret    
L_6c98:
        mov    dword ptr [g_007f2070], 0
        pop    esi
        ret    
    }
}
