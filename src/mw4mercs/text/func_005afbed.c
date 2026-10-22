/*
 * FUN_005afbed (extent 0x5afbed-0x5afc77) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f20e8;
extern int    g_007f20ec;
extern int    g_007f20f0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005afbed(void)
{
    __asm {
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
        je    L_fc6b
        mov    eax, dword ptr [g_007f20e8]
        mov    ecx, dword ptr [g_007f20f0]
        push    0x502c60
        push    0x5028b0
        push    0x678670
        push    0x62ec80
        push    0x678650
        push    eax
        push    0x678600
        push    0x5afcb0
        push    0
        push    0
        push    ecx
        push    0x785d9c
        push    0x42b
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f20ec], esi
        pop    esi
        ret    
L_fc6b:
        mov    dword ptr [g_007f20ec], 0
        pop    esi
        ret    
    }
}
