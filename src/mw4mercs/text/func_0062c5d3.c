/*
 * FUN_0062c5d3 (extent 0x62c5d3-0x62c5fd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077a4a8;

__declspec(naked) void FUN_0062c5d3(void)
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
        fld    qword ptr [esp + 4]
        fst    qword ptr [ecx + 0x64]
        fstp    qword ptr [ecx + 0x2c]
        ret    8
        nop    
        nop    
        nop    
        fld    qword ptr [ecx + 0x64]
        fadd    qword ptr [g_0077a4a8]
        fstp    qword ptr [ecx + 0x6c]
        ret    
    }
}
