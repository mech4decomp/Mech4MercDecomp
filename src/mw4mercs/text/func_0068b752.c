/*
 * FUN_0068b752 (extent 0x68b752-0x68bb5c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b220c;
extern int    g_007f2440;
extern int    g_007f244c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_005b8a00(void);
extern void __cdecl FUN_005b8a30(void);
extern void __cdecl FUN_005cb540(void);
extern void __cdecl FUN_005d93b0(void);
extern void __cdecl FUN_0068c240(void);
extern void __cdecl FUN_0068c280(void);
extern void __cdecl FUN_006b0520(void);
extern void __cdecl FUN_006b0740(void);
extern void __cdecl FUN_006b0750(void);
extern void __cdecl FUN_006b0780(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0068b752(void)
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
        mov    eax, dword ptr [g_007f244c]
        sub    esp, 0x24
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    edi, dword ptr [esp + 0x38]
        mov    edx, dword ptr [edi]
        push    1
        lea    eax, [esi + 0x24]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x28]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x2c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esi + 0x4c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    edx, dword ptr [edi]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [esp + 0x10]
        xor    ebp, ebp
        test    eax, eax
        jle    L_b815
        lea    ebx, [esi + 0x34]
L_b7c7:
        mov    edx, dword ptr [edi]
        push    0xc
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, edi
        call    dword ptr [edx + 0x20]
        mov    eax, dword ptr [ebx + 4]
        cmp    eax, dword ptr [ebx + 8]
        je    L_b7fd
        test    eax, eax
        je    L_b7f5
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [eax], ecx
        mov    edx, dword ptr [esp + 0x2c]
        mov    dword ptr [eax + 4], edx
        mov    ecx, dword ptr [esp + 0x30]
        mov    dword ptr [eax + 8], ecx
L_b7f5:
        add    eax, 0xc
        mov    dword ptr [ebx + 4], eax
        jmp    L_b80c
L_b7fd:
        push    1
        lea    edx, [esp + 0x2c]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_005cb540
L_b80c:
        mov    eax, dword ptr [esp + 0x10]
        inc    ebp
        cmp    ebp, eax
        jl    L_b7c7
L_b815:
        mov    eax, dword ptr [edi]
        push    4
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x20]
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov    dword ptr [esp + 0x1c], 0
        jle    L_b939
L_b837:
        push    0x2c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_b855
        mov    edx, dword ptr [g_007f2440]
        push    edx
        mov    ecx, eax
        call    FUN_005d93b0
        jmp    L_b857
L_b855:
        xor    eax, eax
L_b857:
        mov    dword ptr [esp + 0x14], eax
        mov    edx, dword ptr [eax]
        push    edi
        mov    ecx, eax
        call    dword ptr [edx + 4]
        mov    ebx, dword ptr [esi + 0x44]
        mov    ebp, dword ptr [esi + 0x48]
        cmp    ebx, ebp
        je    L_b882
        test    ebx, ebx
        je    L_b877
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [ebx], eax
L_b877:
        add    ebx, 4
        mov    dword ptr [esi + 0x44], ebx
        jmp    L_b924
L_b882:
        mov    edi, dword ptr [esi + 0x40]
        mov    eax, ebx
        sub    eax, edi
        sar    eax, 2
        cmp    eax, 1
        mov    dword ptr [esp + 0x18], 1
        mov    dword ptr [esp + 0x20], eax
        lea    ecx, [esp + 0x18]
        jb    L_b8a5
        lea    ecx, [esp + 0x20]
L_b8a5:
        mov    ecx, dword ptr [ecx]
        add    ecx, eax
        mov    dword ptr [esp + 0x20], ecx
        je    L_b8c1
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x18], eax
        jmp    L_b8c9
L_b8c1:
        mov    dword ptr [esp + 0x18], 0
L_b8c9:
        mov    edx, dword ptr [esp + 0x38]
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ebx
        push    edi
        call    FUN_0068c280
        add    esp, 0x10
        test    eax, eax
        je    L_b8e7
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax], ecx
L_b8e7:
        mov    edx, dword ptr [esp + 0x38]
        push    edx
        add    eax, 4
        push    eax
        push    ebx
        push    ebx
        call    FUN_0068c280
        sub    ebp, edi
        sar    ebp, 2
        push    ebp
        push    edi
        mov    ebx, eax
        mov    dword ptr [esp + 0x3c], edi
        call    FUN_0068c240
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x38]
        mov    edi, dword ptr [esp + 0x50]
        lea    edx, [eax + ecx*4]
        add    esp, 0x18
        mov    dword ptr [esi + 0x40], eax
        mov    dword ptr [esi + 0x44], ebx
        mov    dword ptr [esi + 0x48], edx
L_b924:
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x10]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [esp + 0x1c], eax
        jl    L_b837
L_b939:
        push    edi
        mov    ecx, esi
        call    FUN_006b0520
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x24
        ret    4
        sub    esp, 0x14
        mov    eax, dword ptr [g_007f244c]
        push    ebx
        push    ebp
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x14], ecx
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_006b0740
        mov    ecx, dword ptr [esi + 0x38]
        mov    ebp, dword ptr [esi + 0x34]
        sub    ecx, ebp
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        je    L_b9de
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        mov    ecx, dword ptr [esi + 0x38]
        mov    ebx, ebp
        sub    ecx, ebx
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        lea    ecx, [edx + edx*2]
        mov    edx, ebp
        lea    eax, [edx + ecx*4 - 0xc]
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_baf1
L_b9de:
        mov    eax, dword ptr [esi + 0x3c]
        mov    ebp, dword ptr [esi + 0x38]
        cmp    ebp, eax
        mov    dword ptr [esp + 0x10], eax
        je    L_ba1d
        test    ebp, ebp
        je    L_ba05
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [ebp], edx
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [ebp + 4], eax
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [ebp + 8], ecx
L_ba05:
        add    ebp, 0xc
        mov    dword ptr [esi + 0x38], ebp
        mov    byte ptr [esi + 0x24], 1
        call    FUN_006f49a0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    4
L_ba1d:
        push    edi
        mov    edi, dword ptr [esi + 0x34]
        mov    ecx, ebp
        sub    ecx, edi
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        cmp    edx, 1
        mov    dword ptr [esp + 0x28], 1
        mov    dword ptr [esp + 0x10], edx
        lea    eax, [esp + 0x28]
        jb    L_ba4e
        lea    eax, [esp + 0x10]
L_ba4e:
        mov    ebx, dword ptr [eax]
        add    ebx, edx
        je    L_ba69
        lea    ecx, [ebx + ebx*2]
        shl    ecx, 2
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x28], eax
        jmp    L_ba71
L_ba69:
        mov    dword ptr [esp + 0x28], 0
L_ba71:
        mov    edx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        push    ebp
        push    edi
        call    FUN_005b8a30
        add    esp, 0x10
        test    eax, eax
        mov    dword ptr [esp + 0x10], eax
        je    L_ba9d
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, eax
        call    FUN_0040c5d0
        mov    eax, dword ptr [esp + 0x10]
L_ba9d:
        mov    edx, dword ptr [esp + 0x28]
        push    edx
        add    eax, 0xc
        push    eax
        push    ebp
        push    ebp
        call    FUN_005b8a30
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x24]
        sub    eax, edi
        mov    ecx, eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    esp, 0x10
        add    edx, eax
        push    edx
        push    edi
        mov    dword ptr [esp + 0x18], edi
        lea    edi, [esi + 0x3c]
        mov    ecx, edi
        call    FUN_005b8a00
        mov    eax, dword ptr [esp + 0x28]
        lea    ecx, [ebx + ebx*2]
        lea    edx, [eax + ecx*4]
        mov    dword ptr [edi], edx
        mov    dword ptr [esi + 0x34], eax
        mov    dword ptr [esi + 0x38], ebp
        pop    edi
        mov    byte ptr [esi + 0x24], 1
L_baf1:
        call    FUN_006f49a0
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_006b0750
        ret    4
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_006b0780
        mov    edx, dword ptr [esi + 0x2c]
        mov    eax, dword ptr [esi + 0x14]
        mov    cl, byte ptr [eax + 0xc]
        dec    edx
        mov    dword ptr [esi + 0x4c], edx
        xor    edx, edx
        cmp    cl, dl
        jne    L_bb45
        pop    edi
        mov    byte ptr [esi + 0x19], dl
        pop    esi
        ret    0xc
L_bb45:
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        mov    dword ptr [eax + 0x10], edx
        mov    eax, dword ptr [edi]
        push    ecx
        mov    ecx, edi
        call    dword ptr [eax + 0x1c8]
        pop    edi
        pop    esi
        ret    0xc
    }
}
