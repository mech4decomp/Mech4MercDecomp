/*
 * FUN_004fbd82 (extent 0x4fbd82-0x4fbde7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dc8d0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004fbd82(void)
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_bddc
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x775e8c
        push    0x232
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc8d0], eax
        ret    
L_bddc:
        mov    dword ptr [g_007dc8d0], 0
        ret    
    }
}
