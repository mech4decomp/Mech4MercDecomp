/*
 * FUN_006cee16 (extent 0x6cee16-0x6cee47) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006cee30(void);
extern void __cdecl FUN_006cee50(void);

__declspec(naked) void FUN_006cee16(void)
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
        call    FUN_006cee30
        jmp    FUN_006cee50
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0x83f600
        mov    ecx, 0x80
L_ee3a:
        mov    dword ptr [eax], 0
        add    eax, 0xc
        dec    ecx
        jne    L_ee3a
        ret    
    }
}
