/*
 * FUN_004d5f21 (extent 0x4d5f21-0x4d5f66) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_004d5f21(void)
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
        mov    eax, dword ptr [g_007b8c10]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_00415180
        xor    eax, eax
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi + 8], eax
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 0x14], eax
        mov    dword ptr [esi], 0x772c80
        mov    eax, esi
        pop    esi
        ret    
    }
}
