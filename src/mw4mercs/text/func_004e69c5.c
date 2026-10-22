/*
 * FUN_004e69c5 (extent 0x4e69c5-0x4e6a1b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc140;
extern int    g_007dc774;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004d5c10(void);

__declspec(naked) void FUN_004e69c5(void)
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
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6a10
        mov    ecx, dword ptr [g_007dc140]
        push    0
        push    0
        push    ecx
        push    0x7741e4
        push    0x236
        mov    ecx, eax
        call    FUN_004d5c10
        mov    dword ptr [g_007dc774], eax
        ret    
L_6a10:
        mov    dword ptr [g_007dc774], 0
        ret    
    }
}
