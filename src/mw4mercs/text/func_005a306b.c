/*
 * FUN_005a306b (extent 0x5a306b-0x5a30ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005a306b(void)
{
    __asm {
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
        push    edi
        mov    edi, dword ptr [esi + 0x1c]
        test    edi, edi
        je    L_30cb
        push    0
        call    FUN_00707e70
        fcomp    qword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 1
        jne    L_30cb
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [ecx + 0x10]
        and    eax, 7
        cmp    eax, 4
        je    L_30be
        test    eax, eax
        jne    L_30cb
L_30be:
        mov    dword ptr [ecx + 0x5ac], edi
        mov    dword ptr [esi + 0x1c], 0
L_30cb:
        pop    edi
        pop    esi
        ret    
    }
}
