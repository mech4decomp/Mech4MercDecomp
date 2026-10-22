/*
 * FUN_00415066 (extent 0x415066-0x4150d1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00414fd0(void);

__declspec(naked) void FUN_00415066(void)
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        cmp    esi, 1
        jg    L_507f
        mov    esi, 2
L_507f:
        mov    eax, 0x8000
        cdq    
        idiv    esi
        mov    eax, 0x7fff
        mov    dword ptr [ecx + 4], esi
        pop    esi
        sub    eax, edx
        mov    dword ptr [ecx], eax
        mov    eax, ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi]
L_50a6:
        call    FUN_00414fd0
        cmp    eax, esi
        jg    L_50a6
        cdq    
        idiv    dword ptr [edi + 4]
        pop    edi
        pop    esi
        mov    eax, edx
        inc    eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        jmp    L_50d0
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
L_50d0:
        ret    
    }
}
