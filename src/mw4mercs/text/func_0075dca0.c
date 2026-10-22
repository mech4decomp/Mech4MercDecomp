/*
 * FUN_0075dca0 (extent 0x75dca0-0x75de0a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0075dca0(void)
{
    __asm {
        push    ebx
        push    edi
        xor    edi, edi
        mov    eax, dword ptr [esp + 0x10]
        or    eax, eax
        jge    L_dcc0
        inc    edi
        mov    edx, dword ptr [esp + 0xc]
        neg    eax
        neg    edx
        sbb    eax, 0
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0xc], edx
L_dcc0:
        mov    eax, dword ptr [esp + 0x18]
        or    eax, eax
        jge    L_dcdb
        mov    edx, dword ptr [esp + 0x14]
        neg    eax
        neg    edx
        sbb    eax, 0
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x14], edx
L_dcdb:
        or    eax, eax
        jne    L_dcfa
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x10]
        xor    edx, edx
        div    ecx
        mov    eax, dword ptr [esp + 0xc]
        div    ecx
        mov    eax, edx
        xor    edx, edx
        dec    edi
        jns    L_dd46
        jmp    L_dd4d
L_dcfa:
        mov    ebx, eax
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
L_dd08:
        shr    ebx, 1
        rcr    ecx, 1
        shr    edx, 1
        rcr    eax, 1
        or    ebx, ebx
        jne    L_dd08
        div    ecx
        mov    ecx, eax
        mul    dword ptr [esp + 0x18]
        xchg    ecx, eax
        mul    dword ptr [esp + 0x14]
        add    edx, ecx
        jb    L_dd33
        cmp    edx, dword ptr [esp + 0x10]
        ja    L_dd33
        jb    L_dd3b
        cmp    eax, dword ptr [esp + 0xc]
        jbe    L_dd3b
L_dd33:
        sub    eax, dword ptr [esp + 0x14]
        sbb    edx, dword ptr [esp + 0x18]
L_dd3b:
        sub    eax, dword ptr [esp + 0xc]
        sbb    edx, dword ptr [esp + 0x10]
        dec    edi
        jns    L_dd4d
L_dd46:
        neg    edx
        neg    eax
        sbb    edx, 0
L_dd4d:
        pop    edi
        pop    ebx
        ret    0x10
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        push    edi
        push    esi
        push    ebx
        xor    edi, edi
        mov    eax, dword ptr [esp + 0x14]
        or    eax, eax
        jge    L_dd81
        inc    edi
        mov    edx, dword ptr [esp + 0x10]
        neg    eax
        neg    edx
        sbb    eax, 0
        mov    dword ptr [esp + 0x14], eax
        mov    dword ptr [esp + 0x10], edx
L_dd81:
        mov    eax, dword ptr [esp + 0x1c]
        or    eax, eax
        jge    L_dd9d
        inc    edi
        mov    edx, dword ptr [esp + 0x18]
        neg    eax
        neg    edx
        sbb    eax, 0
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x18], edx
L_dd9d:
        or    eax, eax
        jne    L_ddb9
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        xor    edx, edx
        div    ecx
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x10]
        div    ecx
        mov    edx, ebx
        jmp    L_ddfa
L_ddb9:
        mov    ebx, eax
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x10]
L_ddc7:
        shr    ebx, 1
        rcr    ecx, 1
        shr    edx, 1
        rcr    eax, 1
        or    ebx, ebx
        jne    L_ddc7
        div    ecx
        mov    esi, eax
        mul    dword ptr [esp + 0x1c]
        mov    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        mul    esi
        add    edx, ecx
        jb    L_ddf5
        cmp    edx, dword ptr [esp + 0x14]
        ja    L_ddf5
        jb    L_ddf6
        cmp    eax, dword ptr [esp + 0x10]
        jbe    L_ddf6
L_ddf5:
        dec    esi
L_ddf6:
        xor    edx, edx
        mov    eax, esi
L_ddfa:
        dec    edi
        jne    L_de04
        neg    edx
        neg    eax
        sbb    edx, 0
L_de04:
        pop    ebx
        pop    esi
        pop    edi
        ret    0x10
    }
}
