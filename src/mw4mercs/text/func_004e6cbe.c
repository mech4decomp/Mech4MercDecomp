/*
 * FUN_004e6cbe (extent 0x4e6cbe-0x4e6d05) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dc770;
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void FUN_004e6cbe(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007dc770]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    FUN_006f3c80
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
        mov    edx, dword ptr [ecx + 0x10]
        mov    dword ptr [ecx + 0x14], edx
        mov    dx, word ptr [g_007db0ac]
        xor    eax, eax
        mov    word ptr [ecx + 0x24], dx
        mov    dx, word ptr [g_007db0ae]
        mov    dword ptr [ecx + 0x18], eax
        mov    word ptr [ecx + 0x26], dx
        mov    dword ptr [ecx + 0x28], eax
        ret    
    }
}
