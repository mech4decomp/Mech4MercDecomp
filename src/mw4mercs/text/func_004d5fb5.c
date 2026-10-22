/*
 * FUN_004d5fb5 (extent 0x4d5fb5-0x4d6007) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dc144;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004d5fb5(void)
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
        je    L_5ffc
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x772c84
        push    0x1d9
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc144], eax
        ret    
L_5ffc:
        mov    dword ptr [g_007dc144], 0
        ret    
    }
}
