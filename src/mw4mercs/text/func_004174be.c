/*
 * FUN_004174be (extent 0x4174be-0x4174ee) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00415bb0(void);
extern void __cdecl FUN_00415ce0(void);

__declspec(naked) void FUN_004174be(void)
{
    __asm {
        nop    
        nop    
        jmp    FUN_00415ce0
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
        push    0
        call    FUN_00415bb0
        mov    dword ptr [esi + 8], 0
        mov    dword ptr [esi + 0xc], 0
        mov    eax, esi
        pop    esi
        ret    4
    }
}
