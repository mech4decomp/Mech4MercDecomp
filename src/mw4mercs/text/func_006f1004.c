/*
 * FUN_006f1004 (extent 0x6f1004-0x6f1035) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006f1040(void);
extern void __cdecl FUN_006f39c0(void);

__declspec(naked) void FUN_006f1004(void)
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
        push    esi
        mov    esi, ecx
        call    FUN_006f39c0
        mov    ecx, esi
        mov    byte ptr [esi + 0x2c], 1
        call    FUN_006f1040
        pop    esi
        ret    
    }
}
