/*
 * FUN_006feaa0 (extent 0x6feaa0-0x6febf5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f7970(void);
extern void __cdecl FUN_006f8430(void);
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f5230(void);

__declspec(naked) void FUN_006feaa0(void)
{
    __asm {
        mov    ecx, 0x856770
        jmp    FUN_006f5230
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x44
        push    ebp
        push    esi
        push    edi
        call    FUN_006f89f0
        mov    edi, eax
        test    edi, edi
        je    L_ebce
        mov    esi, dword ptr [edi + 0x3c]
        test    esi, esi
        mov    dword ptr [esp + 0xc], esi
        je    L_ebce
        mov    eax, dword ptr [esp + 0x54]
        push    eax
        lea    ecx, [esp + 0x14]
        push    0x7a0d70
        push    ecx
        call    dword ptr [g_0076b420]
        add    esp, 0xc
        mov    ecx, esi
        xor    ebp, ebp
        call    FUN_006f8430
        test    eax, eax
        jle    L_ebce
L_eafd:
        lea    edx, [esp + 0x54]
        push    edx
        push    ebp
        mov    ecx, esi
        mov    dword ptr [esp + 0x5c], 0
        call    FUN_006f7970
        test    al, al
        je    L_ebbe
        mov    eax, dword ptr [esp + 0x54]
        push    0x79fad4
        push    eax
        mov    ecx, edi
        call    FUN_006f5b80
        test    eax, eax
        je    L_ebbe
        mov    esi, 0x79fb30
L_eb38:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_eb5c
        test    cl, cl
        je    L_eb58
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_eb5c
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_eb38
L_eb58:
        xor    eax, eax
        jmp    L_eb61
L_eb5c:
        sbb    eax, eax
        sbb    eax, -1
L_eb61:
        test    eax, eax
        jne    L_ebba
        mov    eax, dword ptr [esp + 0x54]
        push    0x79fafc
        push    eax
        mov    ecx, edi
        call    FUN_006f5b80
        test    eax, eax
        je    L_ebba
        mov    esi, eax
        lea    eax, [esp + 0x10]
L_eb80:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_eba4
        test    cl, cl
        je    L_eba0
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_eba4
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_eb80
L_eba0:
        xor    eax, eax
        jmp    L_eba9
L_eba4:
        sbb    eax, eax
        sbb    eax, -1
L_eba9:
        test    eax, eax
        jne    L_ebba
        mov    ecx, dword ptr [esp + 0x54]
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x10]
        dec    ebp
L_ebba:
        mov    esi, dword ptr [esp + 0xc]
L_ebbe:
        mov    ecx, esi
        inc    ebp
        call    FUN_006f8430
        cmp    ebp, eax
        jl    L_eafd
L_ebce:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x44
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
        xor    eax, eax
        ret    0xc
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
        xor    eax, eax
        ret    0xc
    }
}
