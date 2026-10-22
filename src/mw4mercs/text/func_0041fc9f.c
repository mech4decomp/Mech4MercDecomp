/*
 * FUN_0041fc9f (extent 0x41fc9f-0x41fcca) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0041fc9f(void)
{
    __asm {
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
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 4]
        test    ecx, ecx
        je    L_fcc8
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
        mov    dword ptr [esi + 4], 0
L_fcc8:
        pop    esi
        ret    
    }
}
