/*
 * FUN_0061da09 (extent 0x61da09-0x61db08) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0061ef00(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_0061da09(void)
{
    __asm {
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
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    ebp, dword ptr [esi + 0x10]
        push    edi
        mov    dword ptr [esi], 0x78c804
        mov    ebx, dword ptr [esi + 0x14]
        mov    edi, ebp
        cmp    edi, ebx
        je    L_da52
L_da39:
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_da4b
        push    eax
        call    FUN_006f4230
        mov    dword ptr [edi], 0
L_da4b:
        add    edi, 4
        cmp    edi, ebx
        jne    L_da39
L_da52:
        mov    eax, dword ptr [esi + 0x14]
        mov    edx, dword ptr [esi + 0x10]
        mov    ecx, eax
        sub    ecx, eax
        sar    ecx, 2
        xor    edi, edi
        cmp    ecx, edi
        jle    L_da72
L_da65:
        mov    ebx, dword ptr [eax]
        mov    dword ptr [edx], ebx
        add    eax, 4
        add    edx, 4
        dec    ecx
        jne    L_da65
L_da72:
        mov    eax, dword ptr [esi + 0xc]
        cmp    eax, edi
        mov    dword ptr [esi + 0x14], edx
        je    L_da86
        push    edi
        push    eax
        call    FUN_006f4850
        mov    dword ptr [esi + 0xc], edi
L_da86:
        mov    eax, dword ptr [esi + 0x24]
        cmp    eax, edi
        mov    dword ptr [esi + 0x1c], edi
        je    L_da99
        push    eax
        call    FUN_006f4230
        mov    dword ptr [esi + 0x24], edi
L_da99:
        mov    dword ptr [esi], 0x78c938
        mov    ebx, dword ptr [esi + 0x14]
        mov    edi, ebp
        cmp    edi, ebx
        je    L_dac1
L_daa8:
        mov    eax, dword ptr [edi]
        test    eax, eax
        je    L_daba
        push    eax
        call    FUN_006f4230
        mov    dword ptr [edi], 0
L_daba:
        add    edi, 4
        cmp    edi, ebx
        jne    L_daa8
L_dac1:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 0x14]
        push    0
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_0061ef00
        mov    dword ptr [esi + 0x14], eax
        mov    eax, dword ptr [esi + 0xc]
        add    esp, 0x14
        test    eax, eax
        je    L_daf2
        push    0
        push    eax
        call    FUN_006f4850
        mov    dword ptr [esi + 0xc], 0
L_daf2:
        mov    esi, dword ptr [esi + 0x10]
        test    esi, esi
        je    L_db02
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_db02:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
    }
}
