/*
 * FUN_00767cc0 (extent 0x767cc0-0x767d15) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00767a40(void);
extern void __cdecl FUN_00767a60(void);

__declspec(naked) void FUN_00767cc0(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        call    FUN_00767a40
        mov    dword ptr [esi], 0x7afd30
        mov    eax, esi
        pop    esi
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
        mov    dword ptr [ecx], 0x7afd30
        jmp    FUN_00767a60
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        je    L_7d06
        mov    ecx, dword ptr [esp + 4]
L_7cfb:
        cmp    dword ptr [eax + 4], ecx
        je    L_7d0b
        mov    eax, dword ptr [eax]
        test    eax, eax
        jne    L_7cfb
L_7d06:
        xor    eax, eax
        ret    4
L_7d0b:
        test    eax, eax
        je    L_7d06
        add    eax, 8
        ret    4
    }
}
