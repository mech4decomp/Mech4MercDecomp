/*
 * FUN_0064fe7b (extent 0x64fe7b-0x64ff4f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008058b4;
extern int    g_0080da30;
extern void __cdecl FUN_00562f10(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_0064fe7b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [esp + 8]
        push    ebp
        mov    ebp, dword ptr [eax]
        test    ebp, ebp
        mov    dword ptr [esp + 4], ebp
        je    L_fefc
        dec    dword ptr [ebp]
        jne    L_fefc
        test    ebp, ebp
        push    ebx
        mov    ebx, dword ptr [g_008058b4]
        je    L_fef1
        mov    eax, dword ptr [ebx + 0x14]
        push    esi
        mov    esi, dword ptr [ebx + 0x10]
        cmp    esi, eax
        je    L_feea
        push    edi
        lea    edi, [esi + 4]
L_feaf:
        cmp    dword ptr [esi], ebp
        jne    L_fede
        mov    edx, dword ptr [ebx + 0x14]
        cmp    edi, edx
        je    L_fed6
        mov    eax, edx
        sub    eax, edi
        sar    eax, 2
        test    eax, eax
        mov    ecx, esi
        jle    L_fed6
L_fec7:
        mov    ebp, dword ptr [ecx + 4]
        mov    dword ptr [ecx], ebp
        add    ecx, 4
        dec    eax
        jne    L_fec7
        mov    ebp, dword ptr [esp + 0x10]
L_fed6:
        add    edx, -4
        mov    dword ptr [ebx + 0x14], edx
        jmp    L_fee4
L_fede:
        add    esi, 4
        add    edi, 4
L_fee4:
        cmp    esi, dword ptr [ebx + 0x14]
        jne    L_feaf
        pop    edi
L_feea:
        push    ebp
        call    FUN_006f4230
        pop    esi
L_fef1:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx], 0
        pop    ebx
L_fefc:
        pop    ebp
        pop    ecx
        ret    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [g_0080da30]
        push    esi
        mov    esi, dword ptr [eax + 0x40]
        xor    eax, eax
        test    ecx, ecx
        jle    L_ff25
        mov    edx, 0x80d9c0
L_ff19:
        cmp    dword ptr [edx], esi
        je    L_ff4d
        inc    eax
        add    edx, 4
        cmp    eax, ecx
        jl    L_ff19
L_ff25:
        cmp    ecx, 0x19
        jle    L_ff3f
        push    0x792e88
        push    0
        call    FUN_00562f10
        mov    ecx, dword ptr [g_0080da30]
        add    esp, 8
L_ff3f:
        mov    dword ptr [ecx*4 + 0x80d9c0], esi
        inc    ecx
        mov    dword ptr [g_0080da30], ecx
L_ff4d:
        pop    esi
        ret    
    }
}
