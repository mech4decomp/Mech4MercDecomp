/*
 * FUN_005a5c23 (extent 0x5a5c23-0x5a5c4b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_005a5c20(void);
extern void __cdecl FUN_005f3990(void);

__declspec(naked) void FUN_005a5c23(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_005f3990
        push    edi
        mov    ecx, esi
        call    FUN_005a5c20
        pop    edi
        pop    esi
        ret    4
    }
}
