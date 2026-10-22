/*
 * FUN_00548f5a (extent 0x548f5a-0x548fbd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc8cc;
extern int    g_007ddd70;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_00548f5a(void)
{
    __asm {
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
        push    esi
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_8fb1
        mov    eax, dword ptr [g_007dc8cc]
        push    0x5052a0
        push    0x548ff0
        push    0x77b9b0
        push    5
        push    eax
        push    0x77ca18
        push    0x48c
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007ddd70], esi
        pop    esi
        ret    
L_8fb1:
        mov    dword ptr [g_007ddd70], 0
        pop    esi
        ret    
    }
}
