/*
 * FUN_0069b8c2 (extent 0x69b8c2-0x69b91b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0069b8e0(void);

__declspec(naked) void FUN_0069b8c2(void)
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
        xor    eax, eax
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        mov    eax, dword ptr [edi + 8]
        test    eax, eax
        jne    L_b8fc
        push    edi
        call    FUN_0069b8e0
        add    esp, 4
        mov    dword ptr [edi + 8], eax
L_b8fc:
        mov    eax, dword ptr [esi + 0x18]
        cmp    eax, -1
        jne    L_b90d
        mov    eax, dword ptr [edi + 8]
        pop    edi
        mov    dword ptr [esi + 8], eax
        pop    esi
        ret    
L_b90d:
        mov    ecx, dword ptr [edi + 8]
        imul    ecx, eax
        pop    edi
        mov    dword ptr [esi + 8], ecx
        mov    eax, ecx
        pop    esi
        ret    
    }
}
