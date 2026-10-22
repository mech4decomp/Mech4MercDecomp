/*
 * FUN_00733325 (extent 0x733325-0x733389) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_008aa1fc;

__declspec(naked) void FUN_00733325(void)
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
        inc    dword ptr [g_008aa1fc]
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [g_008aa1fc]
        mov    eax, dword ptr [esp + 0xc]
        inc    edx
        cmp    eax, 0xb
        mov    dword ptr [g_008aa1fc], edx
        jne    L_337a
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
L_335e:
        test    eax, 0x80000000
        jne    L_3374
        and    eax, 0xfffffffd
        or    eax, 0x80000000
        mov    byte ptr [ecx + 4], 0
        inc    edx
        jmp    L_335e
L_3374:
        mov    dword ptr [g_008aa1fc], edx
L_337a:
        ret    0x14
        nop    
        nop    
        nop    
        fld    dword ptr [g_0076c5b0]
        ret    8
    }
}
