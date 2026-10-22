/*
 * FUN_004f172b (extent 0x4f172b-0x4f1775) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004f08c0(void);

__declspec(naked) void FUN_004f172b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    4
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
        mov    esi, dword ptr [ecx + 0x18]
L_1754:
        test    esi, esi
        je    L_1773
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_1773
        mov    eax, dword ptr [ecx + 4]
        cmp    dword ptr [eax], 0x21e
        jne    L_1754
        call    FUN_004f08c0
        jmp    L_1754
L_1773:
        pop    esi
        ret    
    }
}
