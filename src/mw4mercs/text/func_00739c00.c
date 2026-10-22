/*
 * FUN_00739c00 (extent 0x739c00-0x739c2f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b294;
extern int    g_0076b2d0;

__declspec(naked) void FUN_00739c00(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b294]
        add    esp, 4
        ret    4
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    dword ptr [g_0076b2d0]
        pop    ecx
        ret    4
    }
}
