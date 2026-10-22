/*
 * FUN_00415bc1 (extent 0x415bc1-0x415c08) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00415bc1(void)
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
        push    esi
        mov    esi, dword ptr [ecx + 4]
        test    esi, esi
        je    L_5c04
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
L_5bf2:
        mov    eax, dword ptr [esi]
        push    edi
        push    ebx
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        jne    L_5bf2
        pop    edi
        pop    ebx
L_5c04:
        pop    esi
        ret    8
    }
}
