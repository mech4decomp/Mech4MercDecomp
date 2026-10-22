/*
 * FUN_0050d8c7 (extent 0x50d8c7-0x50d955) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0050d690(void);

__declspec(naked) void FUN_0050d8c7(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi]
        xor    esi, esi
        test    eax, eax
        jle    L_d902
        push    ebx
        mov    ebx, dword ptr [esp + 0x18]
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
L_d8e8:
        push    ebx
        push    esi
        push    edi
        call    FUN_0050d690
        add    esp, 8
        push    eax
        call    ebp
        mov    eax, dword ptr [edi]
        add    esp, 8
        inc    esi
        cmp    esi, eax
        jl    L_d8e8
        pop    ebp
        pop    ebx
L_d902:
        pop    edi
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
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        xor    esi, esi
        test    ebp, ebp
        push    edi
        jle    L_d93e
        mov    edi, dword ptr [esp + 0x18]
        mov    ebx, dword ptr [esp + 0x20]
L_d926:
        mov    eax, dword ptr [esp + 0x14]
        push    edi
        push    eax
        call    dword ptr [esp + 0x2c]
        add    esp, 8
        test    eax, eax
        je    L_d945
        inc    esi
        add    edi, ebx
        cmp    esi, ebp
        jl    L_d926
L_d93e:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        ret    
L_d945:
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, esi
        imul    eax, ebx
        pop    edi
        pop    esi
        pop    ebp
        add    eax, ecx
        pop    ebx
        ret    
    }
}
