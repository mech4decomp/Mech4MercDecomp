/*
 * FUN_007275f0 (extent 0x7275f0-0x72762a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008816bc;
extern int    g_008816c0;

__declspec(naked) void FUN_007275f0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [g_008816c0], eax
        mov    dword ptr [g_008816bc], ecx
        ret    8
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
        mov    ecx, dword ptr [g_008816c0]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [eax], ecx
        mov    eax, dword ptr [g_008816bc]
        mov    dword ptr [edx], eax
        ret    8
    }
}
