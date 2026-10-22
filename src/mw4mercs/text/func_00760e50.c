/*
 * FUN_00760e50 (extent 0x760e50-0x760e86) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b118;
extern int    g_0076b128;

__declspec(naked) void FUN_00760e50(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    dword ptr [g_0076b128]
        neg    eax
        sbb    eax, eax
        inc    eax
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    dword ptr [g_0076b118]
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
    }
}
