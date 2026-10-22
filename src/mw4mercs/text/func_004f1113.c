/*
 * FUN_004f1113 (extent 0x4f1113-0x4f116b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc134;
extern int    g_007dc13c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004f1113(void)
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1160
        mov    ecx, dword ptr [g_007dc134]
        push    0
        push    0
        push    ecx
        push    0x774e1c
        push    0x20e
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc13c], eax
        ret    
L_1160:
        mov    dword ptr [g_007dc13c], 0
        ret    
    }
}
