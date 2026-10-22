/*
 * FUN_0059183b (extent 0x59183b-0x5918d4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f1fa8;
extern int    g_007f25b0;
extern int    g_007f25b4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005f07c0(void);

__declspec(naked) void FUN_0059183b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_005f07c0
        mov    dword ptr [eax + 0x3e8], 0
        ret    
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
        je    L_18c8
        mov    eax, dword ptr [g_007f25b0]
        mov    ecx, dword ptr [g_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x674890
        push    0
        push    0x674770
        push    eax
        push    0x6746e0
        push    0x591910
        push    0
        push    0
        push    ecx
        push    0x7824a8
        push    0x4cb
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x5f0a60
        mov    dword ptr [g_007f1fa8], esi
        pop    esi
        ret    
L_18c8:
        mov    dword ptr [g_007f1fa8], 0
        pop    esi
        ret    
    }
}
