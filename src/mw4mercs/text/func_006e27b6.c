/*
 * FUN_006e27b6 (extent 0x6e27b6-0x6e2850) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b114;
extern int    g_0076b118;
extern int    g_0076b11c;
extern int    g_0076b128;
extern void __cdecl FUN_006e27b0(void);

__declspec(naked) void FUN_006e27b6(void)
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_27cb
        xor    al, al
        ret    
L_27cb:
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        push    eax
        call    dword ptr [g_0076b11c]
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jne    L_27eb
        xor    al, al
        ret    
L_27eb:
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        push    eax
        call    dword ptr [g_0076b114]
        neg    eax
        sbb    eax, eax
        inc    eax
        ret    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        test    esi, esi
        push    edi
        je    L_2836
        mov    edi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        call    dword ptr [g_0076b128]
        test    eax, eax
        jne    L_2836
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        je    L_282e
        push    edi
        push    esi
        call    dword ptr [g_0076b118]
        test    eax, eax
        jne    L_2836
L_282e:
        pop    edi
        mov    eax, 1
        pop    esi
        ret    
L_2836:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_006e27b0
        mov    eax, dword ptr [eax]
        mov    dword ptr [esi], eax
        mov    eax, esi
        pop    esi
        ret    
    }
}
