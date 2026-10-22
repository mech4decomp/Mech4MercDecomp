/*
 * FUN_006f498f (extent 0x6f498f-0x6f49e3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0084930c;
extern int    g_00849330;
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_006f498f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [g_0084930c]
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
        mov    eax, dword ptr [g_00849330]
        dec    eax
        cmp    eax, -1
        mov    dword ptr [g_00849330], eax
        jne    L_49d5
        push    0x79f9c0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_49c2
        int 3    
L_49c2:
        mov    eax, dword ptr [g_00849330]
        mov    ecx, dword ptr [eax*4 + 0x848d90]
        mov    dword ptr [g_0084930c], ecx
        ret    
L_49d5:
        mov    edx, dword ptr [eax*4 + 0x848d90]
        mov    dword ptr [g_0084930c], edx
        ret    
    }
}
