/*
 * FUN_006f58b0 (extent 0x6f58b0-0x6f5a7f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006f5320(void);
extern void __cdecl FUN_006f5c10(void);

__declspec(naked) void FUN_006f58b0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        push    eax
        call    dword ptr [edi + 0x10]
        xor    ecx, ecx
        mov    cx, word ptr [edi + 6]
        mov    esi, eax
        and    esi, 0xffff
        and    esi, ecx
        mov    ecx, dword ptr [edi + 8]
        shl    esi, 4
        mov    ebx, dword ptr [esi + ecx]
        add    esi, ecx
        cmp    ebx, esi
        je    L_5903
L_58e0:
        test    dword ptr [ebx + 0xc], 0x80000000
        jne    L_58fd
        mov    edx, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [ebx + 8]
        push    edx
        push    ebp
        mov    dword ptr [esp + 0x1c], ebp
        call    dword ptr [edi + 0xc]
        test    al, al
        jne    L_590f
L_58fd:
        mov    ebx, dword ptr [ebx]
        cmp    ebx, esi
        jne    L_58e0
L_5903:
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 8
        ret    4
L_590f:
        mov    eax, dword ptr [edi + 0x14]
        test    eax, eax
        je    L_5919
        push    ebp
        call    eax
L_5919:
        test    ebp, ebp
        je    L_5903
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        call    dword ptr [edi + 0x10]
        xor    ecx, ecx
        mov    cx, word ptr [edi + 6]
        mov    ebp, eax
        and    ebp, 0xffff
        and    ebp, ecx
        mov    ecx, dword ptr [edi + 8]
        shl    ebp, 4
        mov    esi, dword ptr [ebp + ecx]
        add    ebp, ecx
        cmp    esi, ebp
        je    L_5903
L_5945:
        test    dword ptr [esi + 0xc], 0x80000000
        mov    ebx, dword ptr [esi]
        je    L_596d
        mov    eax, dword ptr [esi + 4]
        mov    dword ptr [eax], ebx
        mov    dword ptr [ebx + 4], eax
        push    esi
        mov    dword ptr [esi + 4], 0
        mov    dword ptr [esi], 0
        call    FUN_006f5320
        jmp    L_5981
L_596d:
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esi + 8]
        push    edx
        push    eax
        mov    dword ptr [esp + 0x18], eax
        call    dword ptr [edi + 0xc]
        test    al, al
        jne    L_5993
L_5981:
        cmp    ebx, ebp
        mov    esi, ebx
        jne    L_5945
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 8
        ret    4
L_5993:
        mov    eax, dword ptr [edi + 0x2c]
        xor    ebp, ebp
        cmp    eax, ebp
        jne    L_59b1
        mov    eax, dword ptr [esi + 4]
        mov    dword ptr [eax], ebx
        mov    dword ptr [ebx + 4], eax
        push    esi
        mov    dword ptr [esi + 4], ebp
        mov    dword ptr [esi], ebp
        call    FUN_006f5320
        jmp    L_59c6
L_59b1:
        mov    eax, dword ptr [esi + 0xc]
        test    eax, 0x80000000
        jne    L_59c9
        or    eax, 0x80000000
        mov    dword ptr [esi + 0xc], eax
        mov    dword ptr [esi + 8], ebp
L_59c6:
        dec    dword ptr [edi + 0x28]
L_59c9:
        cmp    dword ptr [esp + 0x10], ebp
        je    L_5903
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 8
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebp
        xor    eax, eax
        mov    ebp, ecx
        cmp    word ptr [ebp + 4], ax
        mov    dword ptr [esp + 4], eax
        jbe    L_5a79
        push    ebx
        push    esi
        push    edi
L_5a03:
        mov    edx, dword ptr [ebp + 8]
        mov    ebx, eax
        and    ebx, 0xffff
        shl    ebx, 4
        mov    esi, dword ptr [ebx + edx]
        add    ebx, edx
        cmp    esi, ebx
        je    L_5a61
L_5a1a:
        mov    eax, 0x6f5c10
        test    eax, eax
        je    L_5a38
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        je    L_5a38
        push    ebp
        push    eax
        call    FUN_006f5c10
        mov    dword ptr [esi + 8], 0
L_5a38:
        mov    eax, dword ptr [esi + 4]
        mov    edi, dword ptr [esi]
        mov    dword ptr [eax], edi
        mov    ecx, dword ptr [esi]
        mov    dword ptr [ecx + 4], eax
        push    esi
        mov    dword ptr [esi + 4], 0
        mov    dword ptr [esi], 0
        call    FUN_006f5320
        cmp    edi, ebx
        mov    esi, edi
        jne    L_5a1a
        mov    eax, dword ptr [esp + 0x10]
L_5a61:
        inc    eax
        cmp    ax, word ptr [ebp + 4]
        mov    dword ptr [esp + 0x10], eax
        jb    L_5a03
        pop    edi
        pop    esi
        pop    ebx
        mov    dword ptr [ebp + 0x28], 0
        pop    ebp
        pop    ecx
        ret    
L_5a79:
        mov    dword ptr [ebp + 0x28], eax
        pop    ebp
        pop    ecx
        ret    
    }
}
