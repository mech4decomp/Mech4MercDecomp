/*
 * FUN_006d5572 (extent 0x6d5572-0x6d5a07) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006d4350(void);
extern void __cdecl FUN_006d4370(void);
extern void __cdecl FUN_006d43a0(void);

__declspec(naked) void FUN_006d5572(void)
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
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x20]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esp + 0x28]
        mov    eax, esi
        imul    eax, dword ptr [edi + 0xc]
        add    eax, ecx
        mov    ecx, dword ptr [edi + 0x124]
        lea    ebx, [ecx + eax*8]
        mov    eax, dword ptr [ebx + 4]
        test    eax, eax
        je    L_55c1
        mov    edx, dword ptr [ebx]
        push    edx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebx], 0
        mov    dword ptr [ebx + 4], 0
L_55c1:
        mov    ecx, dword ptr [edi + 0x118]
        xor    eax, eax
        test    ecx, ecx
        mov    dword ptr [esp + 0x18], eax
        jle    L_570d
L_55d5:
        mov    ecx, dword ptr [edi + 0x11c]
        mov    ebx, dword ptr [ecx + eax*4]
        mov    esi, dword ptr [ebx + 0xc]
        mov    ecx, dword ptr [edi + 4]
        mov    eax, esi
        sar    eax, cl
        xor    edx, edx
        mov    ebp, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x14], ebx
        test    eax, eax
        setl    dl
        dec    edx
        and    edx, eax
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [ebx + 4]
        mov    eax, dword ptr [edx + 8]
        add    eax, esi
        sar    eax, cl
        inc    eax
        cmp    eax, ebp
        jle    L_560e
        mov    eax, ebp
L_560e:
        mov    esi, dword ptr [ebx + 8]
        mov    edx, dword ptr [edx + 4]
        sar    esi, cl
        xor    ebx, ebx
        test    esi, esi
        setl    bl
        dec    ebx
        and    esi, ebx
        mov    ebx, dword ptr [esp + 0x14]
        add    edx, dword ptr [ebx + 8]
        sar    edx, cl
        inc    edx
        cmp    edx, ebp
        jle    L_5631
        mov    edx, dword ptr [edi + 0xc]
L_5631:
        mov    ecx, dword ptr [esp + 0x24]
        cmp    ecx, dword ptr [esp + 0x10]
        jl    L_56f2
        cmp    ecx, eax
        jge    L_56f2
        mov    eax, dword ptr [esp + 0x28]
        cmp    eax, esi
        jl    L_56f2
        cmp    eax, edx
        jge    L_56f2
        imul    ecx, dword ptr [edi + 0xc]
        add    ecx, eax
        mov    eax, dword ptr [edi + 0x124]
        mov    ebx, dword ptr [eax + ecx*8 + 4]
        lea    esi, [eax + ecx*8]
        lea    ebp, [ebx + 1]
        mov    eax, ebx
        cmp    ebp, eax
        mov    dword ptr [esp + 0x10], ebx
        je    L_56e9
        test    ebp, ebp
        jbe    L_56d5
        lea    ecx, [ebp*4]
        push    ecx
        call    FUN_004084d0
        mov    edx, dword ptr [esi]
        add    esp, 4
        test    edx, edx
        mov    ebx, eax
        mov    dword ptr [esp + 0x1c], ebx
        je    L_56cd
        mov    ecx, dword ptr [esi + 4]
        cmp    ebp, ecx
        jae    L_56a4
        mov    ecx, ebp
L_56a4:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_56c2
        lea    eax, [ebx + ecx*4]
        sub    edx, ebx
        inc    ecx
L_56b1:
        mov    ebx, dword ptr [edx + eax]
        mov    dword ptr [eax], ebx
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_56b1
        mov    ebx, dword ptr [esp + 0x1c]
L_56c2:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_56cd:
        mov    dword ptr [esi], ebx
        mov    ebx, dword ptr [esp + 0x10]
        jmp    L_56e6
L_56d5:
        mov    ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], 0
L_56e6:
        mov    dword ptr [esi + 4], ebp
L_56e9:
        mov    edx, dword ptr [esi]
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edx + ebx*4], eax
L_56f2:
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [edi + 0x118]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [esp + 0x18], eax
        jl    L_55d5
        mov    esi, dword ptr [esp + 0x24]
L_570d:
        imul    esi, dword ptr [edi + 0xc]
        add    esi, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [edi + 0x124]
        mov    ebp, dword ptr [ecx + esi*8 + 4]
        lea    edi, [ecx + esi*8]
        mov    eax, 0x38e38e39
        imul    ebp
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        mov    esi, 1
        add    edx, eax
        cmp    edx, esi
        mov    dword ptr [esp + 0x1c], edi
        mov    dword ptr [esp + 0x10], ebp
        jle    L_574f
L_5743:
        lea    esi, [esi + esi*2 + 1]
        cmp    esi, edx
        jl    L_5743
        test    esi, esi
        jle    L_57c7
L_574f:
        cmp    esi, ebp
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], ecx
        jge    L_57b3
        mov    edx, dword ptr [edi]
L_575b:
        cmp    ecx, esi
        mov    edi, dword ptr [edx + ecx*4]
        lea    eax, [ecx*4]
        mov    dword ptr [esp + 0x28], edi
        mov    ebx, ecx
        jl    L_57a3
        mov    ebp, dword ptr [edi + 0x18]
        lea    edi, [esi*4]
L_5779:
        mov    ecx, eax
        sub    ecx, edi
        mov    ecx, dword ptr [ecx + edx]
        cmp    dword ptr [ecx + 0x18], ebp
        jle    L_5797
        mov    ecx, eax
        sub    ecx, edi
        mov    ecx, dword ptr [ecx + edx]
        mov    dword ptr [eax + edx], ecx
        sub    ebx, esi
        sub    eax, edi
        cmp    ebx, esi
        jge    L_5779
L_5797:
        mov    ebp, dword ptr [esp + 0x10]
        mov    edi, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x24]
L_57a3:
        inc    ecx
        cmp    ecx, ebp
        mov    dword ptr [edx + ebx*4], edi
        mov    dword ptr [esp + 0x24], ecx
        jl    L_575b
        mov    edi, dword ptr [esp + 0x1c]
L_57b3:
        mov    eax, 0x55555556
        imul    esi
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        mov    esi, edx
        test    esi, esi
        jg    L_574f
L_57c7:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x34
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 8]
        xor    esi, esi
        cmp    edi, esi
        mov    dword ptr [esp + 0x28], ecx
        mov    dword ptr [esp + 0x10], esi
        mov    dword ptr [esp + 0x38], edi
        jle    L_5a01
        mov    edx, dword ptr [ecx + 0xc]
        push    ebx
        push    ebp
        mov    dword ptr [esp + 0x3c], edx
        mov    dword ptr [esp + 0x34], esi
        mov    dword ptr [esp + 0x20], esi
L_580f:
        test    edx, edx
        mov    dword ptr [esp + 0x10], 0
        jle    L_59d0
        mov    ebx, dword ptr [ecx + 0x128]
        mov    ecx, dword ptr [ecx + 0x124]
        mov    edi, dword ptr [esp + 0x20]
        lea    eax, [esi + ecx + 4]
        mov    dword ptr [esp + 0x28], ebx
        mov    dword ptr [esp + 0x2c], edi
        mov    dword ptr [esp + 0x14], esi
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x1c], eax
        jmp    L_584d
L_5849:
        mov    ebx, dword ptr [esp + 0x28]
L_584d:
        mov    esi, dword ptr [edi + ebx]
        test    esi, esi
        je    L_586b
        mov    ecx, esi
        call    FUN_006d4370
        push    esi
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi + ebx], 0
L_586b:
        mov    ecx, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [ecx]
        test    ebp, ebp
        je    L_598f
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5890
        mov    ecx, eax
        call    FUN_006d4350
        jmp    L_5892
L_5890:
        xor    eax, eax
L_5892:
        mov    edx, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        mov    dword ptr [esp + 0x3c], ecx
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [ecx + edx]
        mov    edx, dword ptr [ecx]
        push    edx
        mov    ecx, eax
        mov    dword ptr [edi + ebx], eax
        call    FUN_006d43a0
        mov    ebx, 1
        cmp    ebp, ebx
        jle    L_598f
L_58cc:
        push    0x20
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_58e5
        mov    ecx, eax
        call    FUN_006d4350
        mov    esi, eax
        jmp    L_58e7
L_58e5:
        xor    esi, esi
L_58e7:
        cmp    ebx, ebp
        jge    L_5924
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [eax + ecx]
        lea    edi, [edx + ebx*4]
L_58f9:
        mov    eax, dword ptr [esp + 0x38]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x18]
        push    eax
        mov    eax, dword ptr [edi]
        push    ecx
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_006d43a0
        test    al, al
        jne    L_591e
        inc    ebx
        add    edi, 4
        cmp    ebx, ebp
        jl    L_58f9
L_591e:
        mov    edi, dword ptr [esp + 0x2c]
        cmp    ebx, ebp
L_5924:
        je    L_597b
        mov    ecx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [edi + ecx]
        mov    edx, dword ptr [esi + 8]
        cmp    dword ptr [eax + 8], edx
        jle    L_5940
        mov    dword ptr [esi + 0x18], eax
        mov    dword ptr [eax + 0x1c], esi
        mov    dword ptr [edi + ecx], esi
        jmp    L_5970
L_5940:
        mov    ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        je    L_5955
L_5947:
        cmp    dword ptr [ecx + 8], edx
        jg    L_5955
        mov    eax, ecx
        mov    ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        jne    L_5947
L_5955:
        mov    ecx, dword ptr [eax + 0x18]
        test    ecx, ecx
        jne    L_5964
        mov    dword ptr [eax + 0x18], esi
        mov    dword ptr [esi + 0x1c], eax
        jmp    L_5970
L_5964:
        mov    dword ptr [esi + 0x18], ecx
        mov    dword ptr [ecx + 0x1c], esi
        mov    dword ptr [esi + 0x1c], eax
        mov    dword ptr [eax + 0x18], esi
L_5970:
        inc    ebx
        cmp    ebx, ebp
        jl    L_58cc
        jmp    L_598f
L_597b:
        test    esi, esi
        je    L_598f
        mov    ecx, esi
        call    FUN_006d4370
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_598f:
        mov    eax, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x3c]
        mov    ecx, 8
        inc    eax
        add    ebx, ecx
        add    esi, ecx
        add    edi, 4
        cmp    eax, edx
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x14], ebx
        mov    dword ptr [esp + 0x1c], esi
        mov    dword ptr [esp + 0x2c], edi
        jl    L_5849
        mov    edi, dword ptr [esp + 0x40]
        mov    esi, dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esp + 0x30]
L_59d0:
        mov    ebp, dword ptr [esp + 0x20]
        mov    ebx, dword ptr [esp + 0x18]
        lea    eax, [edx*4]
        add    ebp, eax
        inc    ebx
        lea    eax, [edx*8]
        add    esi, eax
        cmp    ebx, edi
        mov    dword ptr [esp + 0x18], ebx
        mov    dword ptr [esp + 0x20], ebp
        mov    dword ptr [esp + 0x34], esi
        jl    L_580f
        pop    ebp
        pop    ebx
L_5a01:
        pop    edi
        pop    esi
        add    esp, 0x34
        ret    
    }
}
