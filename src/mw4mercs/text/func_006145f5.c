/*
 * FUN_006145f5 (extent 0x6145f5-0x61499d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077d038;
extern float  g_0078b7c0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_006145f5(void)
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_4616:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_463e
        test    cl, cl
        je    L_463a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_463e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4616
L_463a:
        xor    eax, eax
        jmp    L_4643
L_463e:
        sbb    eax, eax
        sbb    eax, -1
L_4643:
        test    eax, eax
        jne    L_464e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_464e:
        mov    esi, edi
        mov    eax, ebp
L_4652:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_467a
        test    cl, cl
        je    L_4676
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_467a
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4652
L_4676:
        xor    eax, eax
        jmp    L_467f
L_467a:
        sbb    eax, eax
        sbb    eax, -1
L_467f:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_46b5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_46dd
        test    cl, cl
        je    L_46d9
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_46dd
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_46b5
L_46d9:
        xor    eax, eax
        jmp    L_46e2
L_46dd:
        sbb    eax, eax
        sbb    eax, -1
L_46e2:
        test    eax, eax
        jne    L_46ed
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_46ed:
        mov    esi, edi
        mov    eax, ebp
L_46f1:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4719
        test    cl, cl
        je    L_4715
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4719
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_46f1
L_4715:
        xor    eax, eax
        jmp    L_471e
L_4719:
        sbb    eax, eax
        sbb    eax, -1
L_471e:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx + 0x18]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_4756:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_477e
        test    cl, cl
        je    L_477a
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_477e
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4756
L_477a:
        xor    eax, eax
        jmp    L_4783
L_477e:
        sbb    eax, eax
        sbb    eax, -1
L_4783:
        test    eax, eax
        jne    L_478e
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_478e:
        mov    esi, edi
        mov    eax, ebp
L_4792:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_47ba
        test    cl, cl
        je    L_47b6
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_47ba
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4792
L_47b6:
        xor    eax, eax
        jmp    L_47bf
L_47ba:
        sbb    eax, eax
        sbb    eax, -1
L_47bf:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 4]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [ecx]
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x18]
        mov    esi, edi
        mov    eax, ebp
L_47f5:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_481d
        test    cl, cl
        je    L_4819
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_481d
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_47f5
L_4819:
        xor    eax, eax
        jmp    L_4822
L_481d:
        sbb    eax, eax
        sbb    eax, -1
L_4822:
        test    eax, eax
        jne    L_482d
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_482d:
        mov    esi, edi
        mov    eax, ebp
L_4831:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4859
        test    cl, cl
        je    L_4855
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_4859
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_4831
L_4855:
        xor    eax, eax
        jmp    L_485e
L_4859:
        sbb    eax, eax
        sbb    eax, -1
L_485e:
        xor    ecx, ecx
        test    eax, eax
        setle    cl
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        dec    ecx
        and    ecx, 2
        dec    ecx
        mov    eax, ecx
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
        sub    esp, 0x4c
        push    ebx
        push    esi
        mov    ebx, ecx
        mov    esi, dword ptr [ebx + 0x14]
        test    esi, esi
        push    edi
        je    L_4892
        inc    byte ptr [esi - 1]
L_4892:
        push    esi
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        test    esi, esi
        je    L_48b5
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_48b5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_48b5:
        mov    edx, dword ptr [esp + 0xc]
        xor    esi, esi
L_48bb:
        test    edx, edx
        je    L_48e5
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, edx
        repne scasb
        not    ecx
        dec    ecx
        cmp    esi, ecx
        jae    L_48e5
        mov    al, byte ptr [esi + edx]
        cmp    al, 0x30
        jl    L_48da
        cmp    al, 0x39
        jle    L_48dd
L_48da:
        inc    esi
        jmp    L_48bb
L_48dd:
        mov    byte ptr [esi + edx], 0
        mov    edx, dword ptr [esp + 0xc]
L_48e5:
        push    ecx
        mov    eax, esp
        mov    dword ptr [eax], edx
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_48f5
        inc    byte ptr [eax - 1]
L_48f5:
        call    FUN_005178d0
        mov    ecx, dword ptr [eax + 0x90]
        call    FUN_006140c0
        lea    ecx, [esp + 0x14]
        mov    esi, eax
        call    FUN_004d1f10
        mov    ax, word ptr [esi + 0x10]
        mov    cx, word ptr [esi + 0x12]
        lea    edx, [esp + 0x10]
        mov    word ptr [esp + 0x10], ax
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    word ptr [esp + 0x1a], cx
        call    FUN_004da8d0
        mov    ecx, dword ptr [esp + 0x30]
        mov    esi, dword ptr [ebx + 0x20]
        mov    edx, dword ptr [ecx + 0x78]
        add    esp, 8
        xor    edi, edi
        cmp    esi, 1
        mov    dword ptr [esp + 0x10], edx
        jne    L_495a
        fild    dword ptr [esp + 0x10]
        fmul    qword ptr [g_0078b7c0]
        call    FUN_0075db4a
        mov    edi, eax
L_495a:
        cmp    esi, 3
        jne    L_4970
        fild    dword ptr [esp + 0x10]
        fmul    qword ptr [g_0077d038]
        call    FUN_0075db4a
        mov    edi, eax
L_4970:
        lea    ecx, [esp + 0x14]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_4994
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_4994
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4994:
        mov    eax, edi
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x4c
        ret    
    }
}
