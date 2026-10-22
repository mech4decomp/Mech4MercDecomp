/*
 * FUN_006ca22a (extent 0x6ca22a-0x6ca95b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b304;
extern int    g_0076b420;
extern int    g_0082e22c;
extern int    g_0083a258;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006c8660(void);
extern void __cdecl FUN_006c8670(void);
extern void __cdecl FUN_006c8950(void);
extern void __cdecl FUN_006c8e20(void);
extern void __cdecl FUN_006ca740(void);
extern void __cdecl FUN_006ca900(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006fbe80(void);
extern void __cdecl FUN_006fc400(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fc580(void);
extern void __cdecl FUN_006fc620(void);

__declspec(naked) void FUN_006ca22a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1bc
        push    ebx
        push    ebp
        mov    ebp, dword ptr [g_0076b304]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x1d0]
        push    0
        push    edi
        mov    dword ptr [esp + 0x18], 1
        call    ebp
        mov    ebx, dword ptr [g_0076b420]
        add    esp, 4
        push    eax
        lea    eax, [esp + 0x54]
        push    eax
        call    ebx
        add    esp, 0xc
        lea    ecx, [esp + 0x4c]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jne    L_a289
        push    1
        push    edi
        call    ebp
        add    esp, 4
        push    eax
        lea    edx, [esp + 0x54]
        push    edx
        call    ebx
        add    esp, 0xc
L_a289:
        lea    eax, [esp + 0x4c]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jne    L_a2a9
        lea    ecx, [esp + 0x4c]
        push    ecx
        push    0x79e284
        call    FUN_006bfa50
        add    esp, 8
L_a2a9:
        xor    esi, esi
        push    esi
        push    edi
        call    ebp
        add    esp, 4
        push    eax
        lea    edx, [esp + 0x54]
        push    edx
        call    ebx
        add    esp, 0xc
        lea    eax, [esp + 0x4c]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        je    L_a2cf
        mov    dword ptr [esp + 0x10], esi
L_a2cf:
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        lea    edx, [esp + 0x50]
        push    edi
        push    edx
        call    ebx
        mov    eax, dword ptr [esp + 0x1c]
        add    esp, 0xc
        lea    ecx, [esp + 0x4c]
        push    ecx
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_006fc4d0
        test    al, al
        je    L_a31f
L_a2f5:
        mov    eax, dword ptr [esp + 0x18]
        inc    esi
        inc    eax
        push    eax
        push    edi
        mov    dword ptr [esp + 0x20], eax
        call    ebp
        add    esp, 4
        push    eax
        lea    edx, [esp + 0x54]
        push    edx
        call    ebx
        add    esp, 0xc
        lea    eax, [esp + 0x4c]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jne    L_a2f5
L_a31f:
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edi
        call    ebp
        add    esp, 4
        push    eax
        lea    edx, [esp + 0x54]
        push    edx
        call    ebx
        mov    eax, dword ptr [g_0082e22c]
        push    eax
        push    0x28
        call    FUN_004084c0
        add    esp, 0x14
        test    eax, eax
        je    L_a35c
        push    1
        lea    ecx, [esp + 0x50]
        push    ecx
        mov    ecx, eax
        call    FUN_006c8950
        mov    edi, eax
        mov    dword ptr [esp + 0x1c], edi
        jmp    L_a368
L_a35c:
        mov    dword ptr [esp + 0x1c], 0
        mov    edi, dword ptr [esp + 0x1c]
L_a368:
        mov    al, 0x47
        push    edi
        mov    byte ptr [esp + 0x24], al
        mov    byte ptr [esp + 0x25], al
        mov    byte ptr [esp + 0x26], 0x41
        mov    byte ptr [esp + 0x27], 0x46
        mov    byte ptr [esp + 0x28], 5
        call    FUN_006c8660
        push    edi
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_006c8670
        mov    edx, dword ptr [esp + 0x1d4]
        push    1
        mov    dword ptr [esp + 0x30], eax
        push    edx
        lea    eax, [esp + 0x1c]
        push    eax
        mov    dword ptr [esp + 0x3c], esi
        mov    byte ptr [esp + 0x40], 3
        call    FUN_006fc400
        mov    edx, dword ptr [esp + 0x2c]
        imul    edx, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [g_0082e22c]
        push    ecx
        shl    edx, 2
        push    edx
        call    FUN_006f3c80
        mov    eax, dword ptr [g_0082e22c]
        push    eax
        push    0x989680
        call    FUN_006f3c80
        mov    ecx, dword ptr [g_0082e22c]
        push    ecx
        push    0x989680
        mov    ebp, eax
        call    FUN_006f3c80
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], eax
        call    FUN_006c8e20
        mov    edx, dword ptr [esp + 0x2c]
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        push    ebx
        call    FUN_006ca900
        mov    edx, dword ptr [esp + 0x14]
        push    0x18
        lea    ecx, [esp + 0x24]
        push    ecx
        push    edx
        mov    byte ptr [esp + 0x30], al
        call    FUN_006fc620
        mov    eax, dword ptr [esp + 0x2c]
        imul    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x14]
        shl    eax, 2
        push    eax
        push    ebx
        push    ecx
        call    FUN_006fc620
        mov    edx, dword ptr [g_0082e22c]
        lea    eax, [esi*4 + 8]
        push    edx
        push    eax
        mov    dword ptr [esp + 0x50], eax
        call    FUN_006f3c80
        mov    dword ptr [eax], 0x18
        mov    edx, dword ptr [esp + 0x2c]
        imul    edx, dword ptr [esp + 0x28]
        lea    edx, [edx*4 + 0x18]
        lea    ecx, [eax + 4]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [esp + 0x10]
        lea    esi, [esi + edx - 1]
        cmp    edx, esi
        mov    dword ptr [esp + 0x44], eax
        mov    dword ptr [esp + 0x38], 0
        mov    dword ptr [esp + 0x40], esi
        jae    L_a575
        mov    eax, edx
        mov    edi, ecx
L_a48f:
        inc    eax
        push    eax
        mov    dword ptr [esp + 0x40], eax
        mov    eax, dword ptr [esp + 0x1d4]
        push    eax
        call    dword ptr [g_0076b304]
        add    esp, 4
        push    eax
        lea    ecx, [esp + 0x154]
        push    ecx
        call    dword ptr [g_0076b420]
        mov    edx, dword ptr [g_0082e22c]
        push    edx
        push    0x28
        call    FUN_004084c0
        add    esp, 0x14
        test    eax, eax
        je    L_a4df
        push    1
        lea    ecx, [esp + 0x150]
        push    ecx
        mov    ecx, eax
        call    FUN_006c8950
        mov    esi, eax
        jmp    L_a4e1
L_a4df:
        xor    esi, esi
L_a4e1:
        mov    edx, dword ptr [esi + 4]
        imul    edx, dword ptr [esi + 8]
        shl    edx, 2
        mov    ecx, esi
        mov    dword ptr [esp + 0x10], edx
        call    FUN_006c8e20
        mov    ecx, dword ptr [esi + 8]
        mov    edx, dword ptr [esp + 0x24]
        mov    ebp, eax
        mov    eax, dword ptr [esi + 4]
        push    eax
        push    ecx
        push    ebx
        push    ebp
        and    edx, 0xff
        push    edx
        call    FUN_006ca740
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x18]
        push    0
        push    eax
        push    ebx
        push    ecx
        call    FUN_006fbe80
        push    4
        lea    edx, [esp + 0x14]
        mov    esi, eax
        mov    eax, dword ptr [esp + 0x18]
        push    edx
        push    eax
        call    FUN_006fc620
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    esi
        push    ecx
        push    edx
        call    FUN_006fc620
        mov    eax, dword ptr [edi]
        mov    edx, dword ptr [esp + 0x38]
        lea    ecx, [eax + esi + 4]
        mov    eax, dword ptr [esp + 0x3c]
        mov    dword ptr [edi + 4], ecx
        mov    ecx, dword ptr [esp + 0x40]
        add    edx, esi
        add    edi, 4
        cmp    eax, ecx
        mov    dword ptr [esp + 0x38], edx
        jb    L_a48f
        mov    edi, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x44]
L_a575:
        mov    edx, dword ptr [esp + 0x48]
        push    edx
        push    eax
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        call    FUN_006fc620
        test    edi, edi
        je    L_a591
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx]
L_a591:
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_006f4230
        push    ebp
        call    FUN_006f4230
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        call    FUN_006fc580
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x1bc
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        sub    esp, 0x90
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        call    dword ptr [g_0076b420]
        mov    eax, dword ptr [g_0082e22c]
        push    eax
        push    0x28
        call    FUN_004084c0
        xor    esi, esi
        add    esp, 0x14
        cmp    eax, esi
        je    L_a609
        push    1
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, eax
        call    FUN_006c8950
        mov    dword ptr [esp + 0x14], eax
        jmp    L_a60d
L_a609:
        mov    dword ptr [esp + 0x14], esi
L_a60d:
        mov    ecx, dword ptr [esp + 0x14]
        call    FUN_006c8e20
        mov    edi, dword ptr [esp + 0xb8]
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0xbc]
        cdq    
        and    edx, 3
        add    eax, edx
        xor    ecx, ecx
        mov    dword ptr [esp + 0xb4], ebp
        mov    dword ptr [esp + 0x1c], edi
        sar    eax, 2
L_a63c:
        mov    dword ptr [esp + 0x10], edi
        add    edi, 4
        cmp    ecx, eax
        jge    L_a66b
        mov    ebx, dword ptr [esp + 0xb0]
        lea    edx, [ebp + ecx*4]
        sub    ebx, ebp
L_a654:
        mov    ebp, dword ptr [edx]
        cmp    ebp, dword ptr [ebx + edx]
        jne    L_a664
        inc    esi
        inc    ecx
        add    edx, 4
        cmp    ecx, eax
        jl    L_a654
L_a664:
        mov    ebp, dword ptr [esp + 0xb4]
L_a66b:
        test    esi, esi
        je    L_a681
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edx], esi
        xor    esi, esi
        cmp    ecx, eax
        je    L_a711
        jmp    L_a63c
L_a681:
        cmp    ecx, eax
        jge    L_a6b7
        mov    ebx, dword ptr [ebp + ecx*4]
        cmp    ebx, dword ptr [ebp + ecx*4 + 4]
        lea    edx, [ebp + ecx*4]
        jne    L_a6b7
        mov    dword ptr [edi], ebx
L_a695:
        mov    ebx, dword ptr [edx]
        cmp    ebx, dword ptr [edx + 4]
        jne    L_a6a5
        inc    esi
        inc    ecx
        add    edx, 4
        cmp    ecx, eax
        jl    L_a695
L_a6a5:
        cmp    ecx, eax
        mov    ebx, dword ptr [esp + 0x10]
        lea    edx, [esi + 0x2000000]
        mov    dword ptr [ebx], edx
        je    L_a711
        jmp    L_a63c
L_a6b7:
        mov    edx, dword ptr [ebp + ecx*4]
        mov    dword ptr [edi], edx
        add    edi, 4
        inc    ecx
        cmp    ecx, eax
        mov    ebx, 1
        jge    L_a6fb
        mov    esi, dword ptr [esp + 0xb0]
        sub    esi, ebp
        lea    edx, [ebp + ecx*4]
        mov    dword ptr [esp + 0x18], esi
L_a6db:
        mov    esi, dword ptr [edx]
        mov    ebp, dword ptr [esp + 0x18]
        cmp    esi, dword ptr [edx + ebp]
        je    L_a6f4
        inc    ebx
        mov    dword ptr [edi], esi
        add    edi, 4
        inc    ecx
        add    edx, 4
        cmp    ecx, eax
        jl    L_a6db
L_a6f4:
        mov    ebp, dword ptr [esp + 0xb4]
L_a6fb:
        mov    edx, dword ptr [esp + 0x10]
        add    ebx, 0x1000000
        xor    esi, esi
        cmp    ecx, eax
        mov    dword ptr [edx], ebx
        jne    L_a63c
L_a711:
        mov    ecx, dword ptr [esp + 0x14]
        add    edi, 4
        test    ecx, ecx
        je    L_a722
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_a722:
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, edi
        pop    edi
        pop    esi
        sub    eax, edx
        pop    ebp
        sub    eax, 4
        pop    ebx
        add    esp, 0x90
        ret    0x1c
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    eax, 5
        push    ebx
        push    ebp
        push    esi
        push    edi
        je    L_a871
        dec    eax
        je    L_a7df
        dec    eax
        jne    L_a8f0
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        jle    L_a8f0
        mov    ecx, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x20]
        mov    edi, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x18], eax
L_a77f:
        test    esi, esi
        jle    L_a7b7
        mov    edx, edi
L_a785:
        mov    eax, dword ptr [ecx]
        mov    ebx, eax
        shr    ebx, 0x13
        and    ebx, 0x1f
        mov    ebp, eax
        shl    ebx, 6
        shr    ebp, 0xa
        and    ebp, 0x3f
        add    ebx, ebp
        shr    eax, 3
        shl    ebx, 5
        and    eax, 0x1f
        add    ebx, eax
        mov    word ptr [edx], bx
        add    ecx, 4
        add    edx, 2
        dec    esi
        jne    L_a785
        mov    esi, dword ptr [esp + 0x20]
L_a7b7:
        mov    ecx, dword ptr [esp + 0x24]
        lea    eax, [esi + esi]
        add    edi, eax
        lea    eax, [esi*4]
        add    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        dec    eax
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x18], eax
        jne    L_a77f
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x14
L_a7df:
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        jle    L_a8f0
        mov    ecx, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x20]
        mov    edi, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x18], eax
L_a7ff:
        test    esi, esi
        jle    L_a849
        mov    edx, edi
L_a805:
        mov    eax, dword ptr [ecx]
        mov    ebx, eax
        shr    ebx, 0x13
        and    ebx, 0x1f
        mov    ebp, eax
        shr    ebp, 0xb
        shl    ebx, 5
        and    ebp, 0x1f
        add    ebx, ebp
        mov    ebp, eax
        shr    ebp, 3
        shl    ebx, 5
        and    ebp, 0x1f
        and    eax, 0xff000000
        add    ebx, ebp
        neg    eax
        sbb    eax, eax
        and    eax, 0x8000
        add    ebx, eax
        mov    word ptr [edx], bx
        add    ecx, 4
        add    edx, 2
        dec    esi
        jne    L_a805
        mov    esi, dword ptr [esp + 0x20]
L_a849:
        mov    ecx, dword ptr [esp + 0x24]
        lea    eax, [esi + esi]
        add    edi, eax
        lea    eax, [esi*4]
        add    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        dec    eax
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x18], eax
        jne    L_a7ff
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x14
L_a871:
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        jle    L_a8f0
        mov    ecx, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x20]
        mov    edi, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x18], eax
L_a88d:
        test    esi, esi
        jle    L_a8cf
        mov    edx, edi
L_a893:
        mov    eax, dword ptr [ecx]
        mov    ebx, eax
        shr    ebx, 0x1c
        mov    ebp, eax
        shr    ebp, 0x14
        shl    ebx, 4
        and    ebp, 0xf
        add    ebx, ebp
        mov    ebp, eax
        shl    ebx, 4
        shr    ebp, 0xc
        and    ebp, 0xf
        add    ebx, ebp
        shr    eax, 4
        shl    ebx, 4
        and    eax, 0xf
        add    ebx, eax
        mov    word ptr [edx], bx
        add    ecx, 4
        add    edx, 2
        dec    esi
        jne    L_a893
        mov    esi, dword ptr [esp + 0x20]
L_a8cf:
        mov    ecx, dword ptr [esp + 0x24]
        lea    eax, [esi + esi]
        add    edi, eax
        lea    eax, [esi*4]
        add    ecx, eax
        mov    eax, dword ptr [esp + 0x18]
        dec    eax
        mov    dword ptr [esp + 0x24], ecx
        mov    dword ptr [esp + 0x18], eax
        jne    L_a88d
L_a8f0:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        imul    esi, dword ptr [esp + 0x10]
        push    edi
        xor    edi, edi
        test    esi, esi
        mov    al, 7
        jle    L_a944
        mov    edx, dword ptr [esp + 0xc]
L_a917:
        mov    ecx, dword ptr [edx]
        and    ecx, 0xff000000
        cmp    ecx, 0xff000000
        je    L_a935
        test    ecx, ecx
        jne    L_a942
        cmp    al, 7
        je    L_a933
        cmp    al, 6
        jne    L_a942
L_a933:
        mov    al, 6
L_a935:
        add    edx, 4
        inc    edi
        cmp    edi, esi
        jl    L_a917
        pop    edi
        pop    esi
        ret    0xc
L_a942:
        mov    al, 5
L_a944:
        pop    edi
        pop    esi
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_0083a258], 0
        ret    
    }
}
