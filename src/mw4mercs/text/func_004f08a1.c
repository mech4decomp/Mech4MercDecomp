/*
 * FUN_004f08a1 (extent 0x4f08a1-0x4f08d0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_004f08a1(void)
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
        mov    al, byte ptr [ecx + 0x28]
        test    al, al
        je    L_08cf
        mov    ecx, dword ptr [ecx + 0x24]
        mov    eax, dword ptr [ecx]
        jmp    dword ptr [eax + 0x24]
L_08cf:
        ret    
    }
}
