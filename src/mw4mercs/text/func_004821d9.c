/*
 * FUN_004821d9 (extent 0x4821d9-0x48221b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;

__declspec(naked) void FUN_004821d9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
        nop    
        nop    
        fld    dword ptr [esp + 8]
        mov    eax, dword ptr [esp + 4]
        fsub    dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        mov    dword ptr [ecx + 0x80], eax
        mov    dword ptr [ecx + 0x84], edx
        fdivr    dword ptr [g_0076d064]
        fstp    dword ptr [ecx + 0x88]
        ret    8
    }
}
