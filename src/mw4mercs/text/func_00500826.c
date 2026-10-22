/*
 * FUN_00500826 (extent 0x500826-0x500868) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern void __cdecl FUN_00500850(void);

__declspec(naked) void FUN_00500826(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    eax
        push    ecx
        call    FUN_00500850
        add    esp, 8
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [edx]
        push    ecx
        push    eax
        call    dword ptr [g_0076b2ac]
        add    esp, 8
        ret    
    }
}
