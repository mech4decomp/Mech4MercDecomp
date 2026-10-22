/*
 * FUN_00547e79 (extent 0x547e79-0x547fc8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00547e79(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax + 0x18]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_7e97
        xor    eax, eax
        ret    8
L_7e97:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [ecx + 0x18]
        cmp    eax, ecx
        jne    L_7ec6
        xor    eax, eax
        ret    8
L_7ec6:
        xor    edx, edx
        cmp    eax, ecx
        setle    dl
        dec    edx
        and    edx, 2
        dec    edx
        mov    eax, edx
        ret    8
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
        jb    L_7f07
        lea    ecx, [esp + 0x10]
L_7f07:
        mov    ecx, dword ptr [ecx]
        add    ecx, eax
        mov    dword ptr [esp + 0x10], ecx
        je    L_7f27
        lea    eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x20], eax
        jmp    L_7f2f
L_7f27:
        mov    dword ptr [esp + 0x20], 0
L_7f2f:
        mov    edx, dword ptr [esp + 0x18]
        cmp    ebp, edx
        mov    eax, dword ptr [esp + 0x20]
        je    L_7f4f
        mov    ecx, ebp
L_7f3d:
        test    eax, eax
        je    L_7f45
        mov    ebp, dword ptr [ecx]
        mov    dword ptr [eax], ebp
L_7f45:
        add    ecx, 4
        add    eax, 4
        cmp    ecx, edx
        jne    L_7f3d
L_7f4f:
        cmp    esi, 1
        jne    L_7f65
        test    eax, eax
        je    L_7f60
        mov    ecx, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [ecx]
        mov    dword ptr [eax], ecx
L_7f60:
        add    eax, 4
        jmp    L_7f7d
L_7f65:
        test    esi, esi
        jbe    L_7f7d
        mov    ecx, esi
        mov    esi, dword ptr [esp + 0x1c]
L_7f6f:
        test    eax, eax
        je    L_7f77
        mov    ebp, dword ptr [esi]
        mov    dword ptr [eax], ebp
L_7f77:
        add    eax, 4
        dec    ecx
        jne    L_7f6f
L_7f7d:
        cmp    edx, edi
        mov    esi, eax
        je    L_7f9a
        mov    ecx, edx
        sub    ecx, eax
L_7f87:
        test    esi, esi
        je    L_7f90
        mov    edx, dword ptr [ecx + esi]
        mov    dword ptr [esi], edx
L_7f90:
        add    esi, 4
        lea    eax, [ecx + esi]
        cmp    eax, edi
        jne    L_7f87
L_7f9a:
        mov    eax, dword ptr [ebx]
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        je    L_7fad
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7fad:
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
    }
}
