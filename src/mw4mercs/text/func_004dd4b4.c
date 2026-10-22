/*
 * FUN_004dd4b4 (extent 0x4dd4b4-0x4dd507) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6a0;
extern int    g_007dc6a4;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);

__declspec(naked) void FUN_004dd4b4(void)
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
        je    L_d4fc
        mov    ecx, dword ptr [g_007dc6a0]
        push    ecx
        push    0x773840
        push    0x1dc
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc6a4], eax
        ret    
L_d4fc:
        mov    dword ptr [g_007dc6a4], 0
        ret    
    }
}
