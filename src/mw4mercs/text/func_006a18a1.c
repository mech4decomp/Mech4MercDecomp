/*
 * FUN_006a18a1 (extent 0x6a18a1-0x6a1900) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006a0db0(void);

__declspec(naked) void FUN_006a18a1(void)
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
        cmp    byte ptr [ecx + 0x24], 1
        setne    al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    al, al
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
        mov    esi, ecx
        call    FUN_006a0db0
        test    eax, eax
        je    L_18fa
        mov    ecx, dword ptr [esi + 4]
        cmp    eax, dword ptr [ecx + 0x170]
        je    L_18fa
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        mov    al, 1
        pop    esi
        ret    4
L_18fa:
        xor    al, al
        pop    esi
        ret    4
    }
}
