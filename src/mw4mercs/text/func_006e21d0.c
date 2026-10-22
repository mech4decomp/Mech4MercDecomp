/*
 * FUN_006e21d0 (extent 0x6e21d0-0x6e27aa) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_0076b320;
extern void __cdecl FUN_006e1c70(void);
extern void __cdecl FUN_006e1e40(void);
extern void __cdecl FUN_006e1e50(void);
extern void __cdecl FUN_006e1ef0(void);
extern void __cdecl FUN_006e23c0(void);
extern void __cdecl FUN_006e2780(void);
extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e2850(void);
extern void __cdecl FUN_006e29e0(void);
extern void __cdecl FUN_006e2a70(void);
extern void __cdecl FUN_006e2b60(void);
extern void __cdecl FUN_006e2eb0(void);
extern void __cdecl FUN_006e2f20(void);
extern void __cdecl FUN_006e30b0(void);
extern void __cdecl FUN_006e3af0(void);

__declspec(naked) void FUN_006e21d0(void)
{
    __asm {
        sub    esp, 0xf4
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        lea    ebx, [edi + 0x14]
        push    ebx
        mov    dword ptr [esp + 0x1c], ebx
        call    dword ptr [g_0076b110]
        mov    esi, dword ptr [esp + 0x108]
        push    esi
        lea    ecx, [esp + 0x14]
        call    FUN_006e2a70
        lea    ecx, [esp + 0x90]
        call    FUN_006e2840
        lea    eax, [esp + 0x10]
        xor    ebp, ebp
        push    eax
        lea    ecx, [esp + 0x94]
        mov    dword ptr [esp + 0x104], ebp
        call    FUN_006e2b60
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x94], 2
        call    FUN_006e29e0
        push    esi
        lea    ecx, [esp + 0x18]
        call    FUN_006e2a70
        mov    al, byte ptr [edi + 0x38]
        test    al, al
        je    L_2389
        lea    ecx, [esp + 0x90]
        push    ecx
        mov    ecx, edi
        call    FUN_006e23c0
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x98]
        cmp    eax, dword ptr [edx - 8]
        je    L_2274
        push    ebp
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_006e30b0
L_2274:
        mov    eax, dword ptr [edi + 0x44]
        test    eax, eax
        jle    L_22c0
        mov    edx, dword ptr [edi + 0x40]
L_227e:
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [edx]
L_2284:
        mov    bl, byte ptr [eax]
        mov    cl, bl
        cmp    bl, byte ptr [esi]
        jne    L_22a8
        test    cl, cl
        je    L_22a4
        mov    bl, byte ptr [eax + 1]
        mov    cl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_22a8
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_2284
L_22a4:
        xor    eax, eax
        jmp    L_22ad
L_22a8:
        sbb    eax, eax
        sbb    eax, -1
L_22ad:
        test    eax, eax
        je    L_22bc
        mov    eax, dword ptr [edi + 0x44]
        inc    ebp
        add    edx, 8
        cmp    ebp, eax
        jl    L_227e
L_22bc:
        mov    ebx, dword ptr [esp + 0x18]
L_22c0:
        cmp    ebp, dword ptr [edi + 0x44]
        je    L_2333
        mov    eax, dword ptr [edi + 0x40]
        lea    ecx, [esp + 0x90]
        push    ecx
        push    edi
        call    dword ptr [eax + ebp*8 + 4]
        add    esp, 8
        test    al, al
        jne    L_2389
        push    0x7b6900
        lea    ecx, [esp + 0x14]
        call    FUN_006e2a70
        lea    ecx, [esp + 0x1c]
        call    FUN_006e2840
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x90], 0
        call    FUN_006e2b60
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], 1
        call    FUN_006e1c70
        lea    ecx, [esp + 0x1c]
        call    FUN_006e29e0
        lea    ecx, [esp + 0x10]
        jmp    L_2384
L_2333:
        push    0x7b6910
        lea    ecx, [esp + 0x14]
        call    FUN_006e2a70
        lea    ecx, [esp + 0x1c]
        call    FUN_006e2840
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x90], 0
        call    FUN_006e2b60
        lea    edx, [esp + 0x1c]
        push    edx
        mov    ecx, edi
        mov    dword ptr [esp + 0x24], 1
        call    FUN_006e1c70
        lea    ecx, [esp + 0x1c]
        call    FUN_006e29e0
        lea    ecx, [esp + 0x10]
L_2384:
        call    FUN_006e29e0
L_2389:
        lea    ecx, [esp + 0x14]
        call    FUN_006e29e0
        lea    ecx, [esp + 0x90]
        call    FUN_006e29e0
        push    ebx
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xf4
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
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        add    ecx, 0x14
        push    edi
        push    ecx
        mov    dword ptr [esp + 0x14], ecx
        call    dword ptr [g_0076b110]
        mov    esi, dword ptr [esp + 0x18]
        mov    ecx, esi
        xor    bl, bl
        call    FUN_006e3af0
        mov    eax, dword ptr [esi]
        mov    ebp, dword ptr [eax - 8]
        push    0
        mov    ecx, esi
        mov    dword ptr [esi + 8], 0xffffffff
        call    FUN_006e2eb0
        xor    ecx, ecx
        test    ebp, ebp
        mov    edi, eax
        jle    L_2424
L_23fd:
        mov    dl, byte ptr [edi]
        cmp    dl, 0x20
        jne    L_2414
        test    bl, bl
        jne    L_2414
        mov    edx, dword ptr [esi + 0x70]
        mov    dword ptr [esi + edx*4 + 0xc], ecx
        inc    dword ptr [esi + 0x70]
        jmp    L_241e
L_2414:
        cmp    dl, 0x22
        jne    L_241e
        test    bl, bl
        sete    bl
L_241e:
        inc    ecx
        inc    edi
        cmp    ecx, ebp
        jl    L_23fd
L_2424:
        push    -1
        mov    ecx, esi
        call    FUN_006e2f20
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [esi + 0x70]
        mov    edx, dword ptr [eax - 8]
        mov    dword ptr [esi + ecx*4 + 0xc], edx
        mov    ecx, dword ptr [esi + 0x70]
        mov    eax, dword ptr [esi + 0xc]
        inc    ecx
        mov    dword ptr [esi + 0x70], ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        mov    dword ptr [esi + 8], eax
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        ret    
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
        push    ebp
        push    esi
        mov    esi, ecx
        lea    ebp, [esi + 0x14]
        push    ebp
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_24bc
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx]
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        lea    eax, [edi - 1]
        push    eax
        push    edx
        push    ebx
        call    dword ptr [g_0076b320]
        add    esp, 0xc
        mov    ecx, esi
        mov    byte ptr [edi + ebx - 1], 0
        call    FUN_006e1e50
        pop    edi
        pop    ebx
        push    ebp
        call    dword ptr [g_0076b100]
        pop    esi
        pop    ebp
        ret    8
L_24bc:
        mov    eax, dword ptr [esp + 0x10]
        push    ebp
        mov    byte ptr [eax], 0
        call    dword ptr [g_0076b100]
        pop    esi
        pop    ebp
        ret    8
        nop    
        sub    esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        push    edi
        lea    edi, [esi + 0x14]
        push    edi
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], edi
        call    dword ptr [g_0076b110]
        mov    al, byte ptr [esi + 0x38]
        test    al, al
        jne    L_2505
        push    edi
        call    dword ptr [g_0076b100]
        xor    al, al
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    8
L_2505:
        mov    edx, dword ptr [esi + 0x44]
        xor    ebp, ebp
        test    edx, edx
        jle    L_255e
        mov    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [eax]
        mov    edi, dword ptr [esi + 0x40]
        mov    dword ptr [esp + 0x10], ecx
L_251b:
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edi]
L_2521:
        mov    bl, byte ptr [eax]
        mov    cl, bl
        cmp    bl, byte ptr [esi]
        jne    L_2545
        test    cl, cl
        je    L_2541
        mov    bl, byte ptr [eax + 1]
        mov    cl, bl
        cmp    bl, byte ptr [esi + 1]
        jne    L_2545
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_2521
L_2541:
        xor    eax, eax
        jmp    L_254a
L_2545:
        sbb    eax, eax
        sbb    eax, -1
L_254a:
        test    eax, eax
        je    L_2556
        inc    ebp
        add    edi, 8
        cmp    ebp, edx
        jl    L_251b
L_2556:
        mov    esi, dword ptr [esp + 0x14]
        mov    edi, dword ptr [esp + 0x18]
L_255e:
        cmp    ebp, edx
        je    L_2580
        mov    edx, dword ptr [esi + 0x40]
        mov    eax, dword ptr [esp + 0x24]
        push    edi
        mov    dword ptr [edx + ebp*8 + 4], eax
        call    dword ptr [g_0076b100]
        mov    al, 1
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    8
L_2580:
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x28]
        push    ecx
        push    ecx
        mov    ecx, esp
        push    edx
        call    FUN_006e2850
        lea    ecx, [esp + 0x20]
        call    FUN_006e2780
        push    eax
        mov    ecx, esi
        call    FUN_006e1ef0
        lea    ecx, [esp + 0x18]
        call    FUN_006e29e0
        push    edi
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x10
        ret    8
        nop    
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov    ebx, ecx
        push    edi
        lea    esi, [ebx + 0x14]
        push    esi
        mov    dword ptr [esp + 0x14], esi
        call    dword ptr [g_0076b110]
        mov    al, byte ptr [ebx + 0x38]
        test    al, al
        jne    L_25ed
        push    esi
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        pop    ecx
        ret    4
L_25ed:
        mov    eax, dword ptr [ebx + 0x44]
        xor    ebp, ebp
        test    eax, eax
        jle    L_2645
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [eax]
        mov    edi, dword ptr [ebx + 0x40]
        mov    dword ptr [esp + 0x18], ecx
L_2603:
        mov    esi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [edi]
L_2609:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_262d
        test    cl, cl
        je    L_2629
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_262d
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_2609
L_2629:
        xor    eax, eax
        jmp    L_2632
L_262d:
        sbb    eax, eax
        sbb    eax, -1
L_2632:
        test    eax, eax
        je    L_2641
        mov    eax, dword ptr [ebx + 0x44]
        inc    ebp
        add    edi, 8
        cmp    ebp, eax
        jl    L_2603
L_2641:
        mov    esi, dword ptr [esp + 0x10]
L_2645:
        mov    eax, dword ptr [ebx + 0x44]
        cmp    ebp, eax
        jne    L_265d
        push    esi
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        pop    ecx
        ret    4
L_265d:
        dec    eax
        cmp    ebp, eax
        mov    dword ptr [ebx + 0x44], eax
        jge    L_2692
        mov    ecx, dword ptr [ebx + 0x40]
        lea    ecx, [ecx + ebp*8]
        sub    eax, ebp
        lea    esi, [ecx + 4]
        lea    edi, [ecx + 0xc]
        mov    ebx, eax
L_2675:
        lea    edx, [esi + 4]
        push    edx
        lea    ecx, [esi - 4]
        call    FUN_006e2b60
        mov    eax, dword ptr [edi]
        mov    dword ptr [esi], eax
        add    edi, 8
        add    esi, 8
        dec    ebx
        jne    L_2675
        mov    esi, dword ptr [esp + 0x10]
L_2692:
        push    esi
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
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
        nop    
        nop    
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_26fe
        mov    eax, dword ptr [esi - 4]
        push    ebp
        lea    ebp, [esi - 4]
        lea    ecx, [eax*8]
        sub    ecx, eax
        lea    edx, [eax + ecx*4]
        dec    eax
        lea    esi, [esi + edx*4]
        js    L_26e8
        push    edi
        lea    edi, [eax + 1]
L_26da:
        sub    esi, 0x74
        mov    ecx, esi
        call    FUN_006e29e0
        dec    edi
        jne    L_26da
        pop    edi
L_26e8:
        test    bl, 1
        je    L_26f6
        push    ebp
        call    FUN_006e1e40
        add    esp, 4
L_26f6:
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_26fe:
        mov    ecx, esi
        call    FUN_006e29e0
        test    bl, 1
        je    L_2713
        push    esi
        call    FUN_006e1e40
        add    esp, 4
L_2713:
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov    esi, ecx
        je    L_2762
        mov    eax, dword ptr [esi - 4]
        push    ebp
        lea    ebp, [esi - 4]
        lea    esi, [esi + eax*8]
        dec    eax
        js    L_274c
        push    edi
        lea    edi, [eax + 1]
L_273e:
        sub    esi, 8
        mov    ecx, esi
        call    FUN_006e29e0
        dec    edi
        jne    L_273e
        pop    edi
L_274c:
        test    bl, 1
        je    L_275a
        push    ebp
        call    FUN_006e1e40
        add    esp, 4
L_275a:
        mov    eax, ebp
        pop    ebp
        pop    esi
        pop    ebx
        ret    4
L_2762:
        mov    ecx, esi
        call    FUN_006e29e0
        test    bl, 1
        je    L_2777
        push    esi
        call    FUN_006e1e40
        add    esp, 4
L_2777:
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_006e2840
        lea    eax, [esp + 8]
        push    eax
        mov    ecx, esi
        call    FUN_006e2b60
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [esi + 4], ecx
        lea    ecx, [esp + 8]
        call    FUN_006e29e0
        mov    eax, esi
        pop    esi
        ret    8
    }
}
