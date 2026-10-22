/*
 * FUN_0075dc60 (extent 0x75dc60-0x75dd52) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b40c;

__declspec(naked) void FUN_0075dc60(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0x10]
        or    ecx, eax
        mov    ecx, dword ptr [esp + 0xc]
        jne    L_dc79
        mov    eax, dword ptr [esp + 4]
        mul    ecx
        ret    0x10
L_dc79:
        push    ebx
        mul    ecx
        mov    ebx, eax
        mov    eax, dword ptr [esp + 8]
        mul    dword ptr [esp + 0x14]
        add    ebx, eax
        mov    eax, dword ptr [esp + 8]
        mul    ecx
        add    edx, ebx
        pop    ebx
        ret    0x10
        jmp    dword ptr [g_0076b40c]
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
        int 3    
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
    }
}
