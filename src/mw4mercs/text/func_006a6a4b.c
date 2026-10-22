/*
 * FUN_006a6a4b (extent 0x6a6a4b-0x6a6ca8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415020(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_005b6830(void);
extern void __cdecl FUN_006a8040(void);
extern void __cdecl FUN_006a8100(void);
extern void __cdecl FUN_006a8230(void);

__declspec(naked) void FUN_006a6a4b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov    dword ptr [esp + 4], eax
        je    L_6a68
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6a68:
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_6a78
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_6a78:
        test    byte ptr [esp + 0xc], 1
        mov    dword ptr [esi], 0x795450
        je    L_6a8e
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_6a8e:
        mov    eax, esi
        pop    esi
        pop    ecx
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
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        mov    ebx, ecx
        push    edi
        lea    eax, [esp + 0x14]
        lea    esi, [ebx + 4]
        push    eax
        lea    ecx, [esp + 0x17]
        xor    ebp, ebp
        push    ecx
        mov    dword ptr [ebx], 0x795450
        lea    ecx, [esi + 8]
        mov    dword ptr [esi], ebp
        mov    dword ptr [esi + 4], ebp
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_005b6830
        lea    edx, [esp + 0x14]
        lea    edi, [ebx + 0x10]
        push    edx
        lea    eax, [esp + 0x17]
        push    eax
        lea    ecx, [edi + 8]
        mov    dword ptr [edi], ebp
        mov    dword ptr [edi + 4], ebp
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_006a8040
        mov    eax, dword ptr [esi + 4]
        cmp    eax, dword ptr [esi + 8]
        mov    dword ptr [ebx], 0x799e4c
        je    L_6b0d
        cmp    eax, ebp
        je    L_6b05
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax], ecx
L_6b05:
        add    eax, 4
        mov    dword ptr [esi + 4], eax
        jmp    L_6b1c
L_6b0d:
        push    1
        lea    edx, [esp + 0x20]
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00566570
L_6b1c:
        mov    eax, dword ptr [edi + 4]
        cmp    eax, dword ptr [edi + 8]
        mov    ecx, dword ptr [esp + 0x20]
        mov    dword ptr [esp + 0x20], ecx
        je    L_6b3a
        cmp    eax, ebp
        je    L_6b32
        mov    dword ptr [eax], ecx
L_6b32:
        add    eax, 4
        mov    dword ptr [edi + 4], eax
        jmp    L_6b49
L_6b3a:
        push    1
        lea    ecx, [esp + 0x24]
        push    ecx
        push    eax
        mov    ecx, edi
        call    FUN_006a8100
L_6b49:
        mov    eax, dword ptr [esi + 4]
        cmp    eax, dword ptr [esi + 8]
        je    L_6b63
        cmp    eax, ebp
        je    L_6b5b
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [eax], edx
L_6b5b:
        add    eax, 4
        mov    dword ptr [esi + 4], eax
        jmp    L_6b72
L_6b63:
        push    1
        lea    ecx, [esp + 0x28]
        push    ecx
        push    eax
        mov    ecx, esi
        call    FUN_00566570
L_6b72:
        mov    eax, dword ptr [edi + 4]
        cmp    eax, dword ptr [edi + 8]
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esp + 0x20], ecx
        je    L_6b90
        cmp    eax, ebp
        je    L_6b88
        mov    dword ptr [eax], ecx
L_6b88:
        add    eax, 4
        mov    dword ptr [edi + 4], eax
        jmp    L_6b9f
L_6b90:
        push    1
        lea    edx, [esp + 0x24]
        push    edx
        push    eax
        mov    ecx, edi
        call    FUN_006a8100
L_6b9f:
        mov    eax, dword ptr [esi + 4]
        cmp    eax, dword ptr [esi + 8]
        je    L_6bb9
        cmp    eax, ebp
        je    L_6bb1
        mov    ecx, dword ptr [esp + 0x2c]
        mov    dword ptr [eax], ecx
L_6bb1:
        add    eax, 4
        mov    dword ptr [esi + 4], eax
        jmp    L_6bc8
L_6bb9:
        push    1
        lea    edx, [esp + 0x30]
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00566570
L_6bc8:
        mov    eax, dword ptr [esp + 0x30]
        mov    esi, dword ptr [edi + 4]
        mov    dword ptr [esp + 0x20], eax
        cmp    esi, dword ptr [edi + 8]
        je    L_6bf8
        lea    ecx, [esp + 0x20]
        push    ecx
        push    esi
        call    FUN_006a8230
        add    esp, 8
        add    esi, 4
        mov    dword ptr [edi + 4], esi
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ebx
        pop    ebx
        add    esp, 8
        ret    0x18
L_6bf8:
        push    1
        lea    edx, [esp + 0x24]
        push    edx
        push    esi
        mov    ecx, edi
        call    FUN_006a8100
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, ebx
        pop    ebx
        add    esp, 8
        ret    0x18
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
        sub    esp, 8
        mov    eax, dword ptr [ecx + 0x14]
        push    ebx
        push    esi
        sub    eax, dword ptr [ecx + 0x10]
        xor    ebx, ebx
        sar    eax, 2
        mov    dword ptr [esp + 8], 0
        mov    dword ptr [esp + 0xc], 0
        je    L_6c89
        mov    esi, dword ptr [ecx + 4]
        push    ebp
        mov    ebp, dword ptr [ecx + 0x10]
        push    edi
        mov    edi, dword ptr [ecx + 0x14]
        sub    edi, ebp
        sar    edi, 2
        sub    ebp, esi
L_6c54:
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esi + ebp]
        mov    edx, dword ptr [ecx]
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        push    eax
        call    dword ptr [edx]
        fmul    dword ptr [esi]
        inc    ebx
        add    esi, 4
        cmp    ebx, edi
        fadd    dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [esi - 4]
        fstp    dword ptr [esp + 0x14]
        jb    L_6c54
        pop    edi
        pop    ebp
L_6c89:
        fld    dword ptr [esp + 8]
        pop    esi
        fdiv    dword ptr [esp + 8]
        pop    ebx
        add    esp, 8
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00415020
        ret    0xc
    }
}
