/*
 * FUN_00760e42 (extent 0x760e42-0x760e66) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b128;

__declspec(naked) void FUN_00760e42(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    dword ptr [g_0076b128]
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
    }
}
