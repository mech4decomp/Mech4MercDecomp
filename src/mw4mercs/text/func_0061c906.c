/*
 * FUN_0061c906 (extent 0x61c906-0x61c955) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_0061c920(void);

__declspec(naked) void FUN_0061c906(void)
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
        mov    al, 1
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
        test    esi, esi
        je    L_c953
L_c929:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_0061c920
        mov    eax, dword ptr [esi + 0x18]
        add    esp, 4
        cmp    eax, 9
        jne    L_c94c
        cmp    dword ptr [esi + 0x1c], 2
        jne    L_c94c
        push    0x46
        call    FUN_00562f40
        add    esp, 4
L_c94c:
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        jne    L_c929
L_c953:
        pop    esi
        ret    
    }
}
