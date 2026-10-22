/*
 * FUN_005a7e03 (extent 0x5a7e03-0x5a7e31) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005a7e40(void);
extern void __cdecl FUN_005f09f0(void);

__declspec(naked) void FUN_005a7e03(void)
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
        xor    al, al
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
        push    esi
        mov    esi, ecx
        call    FUN_005f09f0
        mov    ecx, esi
        call    FUN_005a7e40
        pop    esi
        ret    
    }
}
