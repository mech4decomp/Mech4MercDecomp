/*
 * FUN_005a2f8d (extent 0x5a2f8d-0x5a2fdb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc140;
extern int    g_007f203c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_005a2f8d(void)
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_2fd0
        mov    ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x783f70
        push    0x449
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007f203c], eax
        ret    
L_2fd0:
        mov    dword ptr [g_007f203c], 0
        ret    
    }
}
