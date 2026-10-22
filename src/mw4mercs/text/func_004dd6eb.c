/*
 * FUN_004dd6eb (extent 0x4dd6eb-0x4dd737) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007dc6ac;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004dd6eb(void)
{
    __asm {
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
        je    L_d72c
        mov    ecx, dword ptr [g_007b8c10]
        push    ecx
        push    0x773890
        push    0x1de
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc6ac], eax
        ret    
L_d72c:
        mov    dword ptr [g_007dc6ac], 0
        ret    
    }
}
