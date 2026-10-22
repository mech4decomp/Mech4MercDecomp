/*
 * FUN_007510c5 (extent 0x7510c5-0x7510fa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_007510c5(void)
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        xor    ecx, ecx
        mov    eax, 1
        mov    edx, 0x20
L_10e1:
        test    eax, esi
        je    L_10e6
        inc    ecx
L_10e6:
        shl    eax, 1
        dec    edx
        jne    L_10e1
        cmp    ecx, 9
        pop    esi
        lea    eax, [ecx + 0x37]
        ja    L_10f7
        lea    eax, [ecx + 0x30]
L_10f7:
        ret    4
    }
}
