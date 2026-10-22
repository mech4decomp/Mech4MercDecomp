/*
 * FUN_00696c40 (extent 0x696c40-0x696dad) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00694ce0(void);

__declspec(naked) void FUN_00696c40(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        mov    ebx, ecx
        mov    ebp, dword ptr [ebx]
        push    edi
        mov    edi, dword ptr [ebx + 4]
        mov    eax, edi
        sub    eax, ebp
        sar    eax, 2
        cmp    eax, esi
        mov    dword ptr [esp + 0x10], eax
        lea    ecx, [esp + 0x20]
        jb    L_6c67
        lea    ecx, [esp + 0x10]
L_6c67:
        mov    ecx, dword ptr [ecx]
        add    ecx, eax
        mov    dword ptr [esp + 0x10], ecx
        je    L_6c87
        lea    eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x20], eax
        jmp    L_6c8f
L_6c87:
        mov    dword ptr [esp + 0x20], 0
L_6c8f:
        mov    edx, dword ptr [esp + 0x18]
        cmp    ebp, edx
        mov    eax, dword ptr [esp + 0x20]
        je    L_6caf
        mov    ecx, ebp
L_6c9d:
        test    eax, eax
        je    L_6ca5
        mov    ebp, dword ptr [ecx]
        mov    dword ptr [eax], ebp
L_6ca5:
        add    ecx, 4
        add    eax, 4
        cmp    ecx, edx
        jne    L_6c9d
L_6caf:
        cmp    esi, 1
        jne    L_6cc5
        test    eax, eax
        je    L_6cc0
        mov    ecx, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [eax], ecx
L_6cc0:
        add    eax, 4
        jmp    L_6cdd
L_6cc5:
        test    esi, esi
        jbe    L_6cdd
        mov    ecx, esi
        mov    esi, dword ptr [esp + 0x1c]
L_6ccf:
        test    eax, eax
        je    L_6cd7
        mov    ebp, dword ptr [esi]
        mov    dword ptr [eax], ebp
L_6cd7:
        add    eax, 4
        dec    ecx
        jne    L_6ccf
L_6cdd:
        cmp    edx, edi
        mov    esi, eax
        je    L_6cfa
        mov    ecx, edx
        sub    ecx, eax
L_6ce7:
        test    esi, esi
        je    L_6cf0
        mov    edx, dword ptr [ecx + esi]
        mov    dword ptr [esi], edx
L_6cf0:
        add    esi, 4
        lea    eax, [ecx + esi]
        cmp    eax, edi
        jne    L_6ce7
L_6cfa:
        mov    eax, dword ptr [ebx]
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        je    L_6d0d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6d0d:
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esp + 0x10]
        pop    edi
        mov    dword ptr [ebx + 4], esi
        pop    esi
        lea    edx, [eax + ecx*4]
        pop    ebp
        mov    dword ptr [ebx], eax
        mov    dword ptr [ebx + 8], edx
        pop    ebx
        pop    ecx
        ret    0xc
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
        mov    edi, ecx
        mov    ecx, dword ptr [edi]
        mov    eax, ecx
        and    eax, 1
        cmp    al, 1
        jne    L_6da4
        mov    edx, ecx
        and    edx, 2
        cmp    dl, 2
        jne    L_6d8b
        and    ecx, 0xfffffffc
        mov    dword ptr [edi], ecx
        je    L_6da4
        mov    eax, dword ptr [ecx - 4]
        push    ebp
        lea    ebp, [ecx - 4]
        lea    edx, [eax*8]
        sub    edx, eax
        dec    eax
        lea    esi, [ecx + edx*8]
        js    L_6d78
        push    ebx
        lea    ebx, [eax + 1]
L_6d6a:
        sub    esi, 0x38
        mov    ecx, esi
        call    FUN_00694ce0
        dec    ebx
        jne    L_6d6a
        pop    ebx
L_6d78:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
        pop    ebp
        mov    dword ptr [edi], 0
        pop    edi
        pop    esi
        ret    
L_6d8b:
        mov    esi, ecx
        and    esi, 0xfffffffc
        mov    dword ptr [edi], esi
        je    L_6da4
        mov    ecx, esi
        call    FUN_00694ce0
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6da4:
        mov    dword ptr [edi], 0
        pop    edi
        pop    esi
        ret    
    }
}
