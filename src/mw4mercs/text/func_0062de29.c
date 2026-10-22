/*
 * FUN_0062de29 (extent 0x62de29-0x62df23) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;

__declspec(naked) void FUN_0062de29(void)
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        test    esi, esi
        push    edi
        jne    L_de52
        pop    edi
        mov    eax, 7
        pop    esi
        ret    
L_de52:
        mov    edi, dword ptr [g_0076b2ac]
        push    0x78d194
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_de6a
        pop    edi
        pop    esi
        ret    
L_de6a:
        push    0x78d184
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_de81
        pop    edi
        mov    eax, 1
        pop    esi
        ret    
L_de81:
        push    0x78d174
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_de98
        pop    edi
        mov    eax, 2
        pop    esi
        ret    
L_de98:
        push    0x78d164
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_deaf
        pop    edi
        mov    eax, 3
        pop    esi
        ret    
L_deaf:
        push    0x78d154
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_dec6
        pop    edi
        mov    eax, 4
        pop    esi
        ret    
L_dec6:
        push    0x78d144
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_dedd
        pop    edi
        mov    eax, 5
        pop    esi
        ret    
L_dedd:
        push    0x78d134
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_def4
        pop    edi
        mov    eax, 6
        pop    esi
        ret    
L_def4:
        push    0x78d120
        push    esi
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_df0b
        pop    edi
        mov    eax, 8
        pop    esi
        ret    
L_df0b:
        push    0x78d110
        push    esi
        call    edi
        add    esp, 8
        neg    eax
        sbb    eax, eax
        and    eax, 0xfffffffe
        pop    edi
        add    eax, 9
        pop    esi
        ret    
    }
}
