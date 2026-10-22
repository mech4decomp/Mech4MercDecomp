/*
 * FUN_007047d9 (extent 0x7047d9-0x70481a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00858a54;

__declspec(naked) void FUN_007047d9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [g_00858a54], eax
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00858a54]
        lea    ecx, [eax + eax*2]
        lea    edx, [eax + ecx*4]
        shl    edx, 4
        add    edx, eax
        shl    edx, 8
        sub    edx, eax
        lea    eax, [eax + edx*4 + 0x269ec3]
        mov    dword ptr [g_00858a54], eax
        sar    eax, 0x10
        and    eax, 0x7fff
        ret    
    }
}
