/*
 * FUN_006e3373 (extent 0x6e3373-0x6e383c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b134;
extern int    g_0076b298;
extern int    g_0076b2a8;
extern int    g_0076b318;
extern int    g_0076b3a8;
extern int    g_0076b3ac;
extern int    g_0076b3ec;
extern int    g_0076b404;
extern int    g_0076b408;
extern void __cdecl FUN_006e2840(void);
extern void __cdecl FUN_006e2850(void);
extern void __cdecl FUN_006e29e0(void);
extern void __cdecl FUN_006e2a10(void);
extern void __cdecl FUN_006e2eb0(void);
extern void __cdecl FUN_006e2f20(void);
extern void __cdecl FUN_006e3380(void);
extern void __cdecl FUN_006e3450(void);

__declspec(naked) void FUN_006e3373(void)
{
    __asm {
        call    FUN_006e3380
        mov    eax, esi
        pop    esi
        ret    8
        nop    
        nop    
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        test    edi, edi
        mov    ebx, ecx
        jge    L_338f
        xor    edi, edi
L_338f:
        mov    esi, dword ptr [esp + 0x18]
        test    esi, esi
        jge    L_3399
        xor    esi, esi
L_3399:
        mov    eax, dword ptr [ebx]
        mov    eax, dword ptr [eax - 8]
        lea    ecx, [edi + esi]
        cmp    ecx, eax
        jle    L_33a9
        mov    esi, eax
        sub    esi, edi
L_33a9:
        cmp    edi, eax
        jle    L_33af
        xor    esi, esi
L_33af:
        lea    ecx, [esp + 0x14]
        call    FUN_006e2840
        push    0
        push    edi
        push    esi
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, ebx
        call    FUN_006e2a10
        mov    esi, dword ptr [esp + 0x10]
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    FUN_006e2850
        lea    ecx, [esp + 0x14]
        call    FUN_006e29e0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        test    esi, esi
        push    edi
        mov    edi, ecx
        jge    L_3400
        xor    esi, esi
        jmp    L_340b
L_3400:
        mov    eax, dword ptr [edi]
        mov    eax, dword ptr [eax - 8]
        cmp    esi, eax
        jle    L_340b
        mov    esi, eax
L_340b:
        lea    ecx, [esp + 0x10]
        call    FUN_006e2840
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [ecx - 8]
        push    0
        sub    edx, esi
        push    edx
        push    esi
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, edi
        call    FUN_006e2a10
        mov    esi, dword ptr [esp + 0xc]
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        call    FUN_006e2850
        lea    ecx, [esp + 0x10]
        call    FUN_006e29e0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        test    esi, esi
        push    edi
        mov    edi, ecx
        jge    L_3460
        xor    esi, esi
        jmp    L_346b
L_3460:
        mov    eax, dword ptr [edi]
        mov    eax, dword ptr [eax - 8]
        cmp    esi, eax
        jle    L_346b
        mov    esi, eax
L_346b:
        lea    ecx, [esp + 0x10]
        call    FUN_006e2840
        push    0
        push    0
        push    esi
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, edi
        call    FUN_006e2a10
        mov    esi, dword ptr [esp + 0xc]
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        call    FUN_006e2850
        lea    ecx, [esp + 0x10]
        call    FUN_006e29e0
        pop    edi
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esi]
        push    eax
        push    ecx
        call    dword ptr [g_0076b3ac]
        mov    edi, dword ptr [esp + 0x14]
        add    esp, 8
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_006e3450
        mov    eax, edi
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        push    edi
        mov    esi, ecx
        mov    ecx, dword ptr [esi]
        push    eax
        push    ecx
        call    dword ptr [g_0076b3a8]
        mov    edi, dword ptr [esp + 0x14]
        add    esp, 8
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_006e3450
        mov    eax, edi
        pop    edi
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx]
        and    eax, 0xff
        push    eax
        push    esi
        call    dword ptr [g_0076b2a8]
        add    esp, 8
        test    eax, eax
        jne    L_3532
        or    eax, 0xffffffff
        pop    esi
        ret    4
L_3532:
        sub    eax, esi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [ecx]
        push    eax
        push    esi
        call    dword ptr [g_0076b298]
        add    esp, 8
        test    eax, eax
        jne    L_355d
        or    eax, 0xffffffff
        pop    esi
        ret    4
L_355d:
        sub    eax, esi
        pop    esi
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
        sub    esp, 0x10
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x20]
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        mov    al, byte ptr [edi]
        mov    esi, ecx
        xor    ecx, ecx
        xor    ebx, ebx
        test    al, al
        mov    dword ptr [esp + 0x18], esi
        mov    dword ptr [esp + 0x1c], ebp
        mov    dword ptr [esp + 0x14], ecx
        je    L_380e
        jmp    L_359f
L_359d:
        xor    ebx, ebx
L_359f:
        cmp    byte ptr [edi], 0x25
        jne    L_37f9
        mov    al, byte ptr [edi + 1]
        inc    edi
        cmp    al, 0x25
        je    L_37f9
        xor    esi, esi
        test    al, al
        mov    dword ptr [esp + 0x28], ebx
        je    L_35f9
L_35be:
        cmp    al, 0x23
        jne    L_35c7
        add    ecx, 2
        jmp    L_35e7
L_35c7:
        cmp    al, 0x2a
        jne    L_35d7
        mov    eax, dword ptr [ebp]
        add    ebp, 4
        mov    dword ptr [esp + 0x28], eax
        jmp    L_35e7
L_35d7:
        cmp    al, 0x2d
        je    L_35e7
        cmp    al, 0x2b
        je    L_35e7
        cmp    al, 0x30
        je    L_35e7
        cmp    al, 0x20
        jne    L_35ef
L_35e7:
        mov    al, byte ptr [edi + 1]
        inc    edi
        test    al, al
        jne    L_35be
L_35ef:
        cmp    dword ptr [esp + 0x28], ebx
        mov    dword ptr [esp + 0x14], ecx
        jne    L_3626
L_35f9:
        push    edi
        call    dword ptr [g_0076b318]
        mov    dword ptr [esp + 0x2c], eax
        mov    al, byte ptr [edi]
        add    esp, 4
        test    al, al
        je    L_3626
L_360d:
        movsx    ecx, al
        push    ecx
        call    dword ptr [g_0076b408]
        add    esp, 4
        test    eax, eax
        je    L_3626
        mov    al, byte ptr [edi + 1]
        inc    edi
        test    al, al
        jne    L_360d
L_3626:
        cmp    byte ptr [edi], 0x2e
        mov    dword ptr [esp + 0x10], ebx
        jne    L_3673
        mov    al, byte ptr [edi + 1]
        inc    edi
        cmp    al, 0x2a
        jne    L_3644
        mov    edx, dword ptr [ebp]
        add    ebp, 4
        mov    dword ptr [esp + 0x10], edx
        inc    edi
        jmp    L_3673
L_3644:
        push    edi
        call    dword ptr [g_0076b318]
        mov    dword ptr [esp + 0x14], eax
        mov    al, byte ptr [edi]
        add    esp, 4
        test    al, al
        je    L_3673
        mov    ebx, dword ptr [g_0076b408]
L_365e:
        movsx    eax, al
        push    eax
        call    ebx
        add    esp, 4
        test    eax, eax
        je    L_3673
        mov    al, byte ptr [edi + 1]
        inc    edi
        test    al, al
        jne    L_365e
L_3673:
        movsx    eax, byte ptr [edi]
        add    eax, -0x46
        xor    ecx, ecx
        cmp    eax, 0x26
        ja    L_369c
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x6e384c]
        jmp    dword ptr [edx*4 + 0x6e383c]
        mov    ecx, 0x10000
        jmp    L_369b
        mov    ecx, 0x20000
L_369b:
        inc    edi
L_369c:
        movsx    ebx, byte ptr [edi]
        mov    eax, ebx
        or    eax, ecx
        cmp    eax, 0x10063
        jg    L_372f
        je    L_3783
        cmp    eax, 0x73
        jg    L_3721
        je    L_3712
        cmp    eax, 0x43
        je    L_3783
        cmp    eax, 0x53
        je    L_3765
        cmp    eax, 0x63
L_36d0:
        je    L_3783
L_36d6:
        lea    eax, [ebx - 0x47]
        cmp    eax, 0x31
        ja    L_37e7
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x6e3888]
        jmp    dword ptr [ecx*4 + 0x6e3874]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x28]
        mov    esi, 0x20
        add    eax, edx
        add    ebp, 4
        cmp    eax, esi
        jl    L_37e7
        mov    esi, eax
        jmp    L_37e7
L_3712:
        mov    ecx, dword ptr [ebp]
        add    ebp, 4
        push    ecx
        call    dword ptr [g_0076b134]
        jmp    L_3775
L_3721:
        sub    eax, 0x10043
        je    L_3783
        sub    eax, 0x10
        je    L_3746
        jmp    L_36d6
L_372f:
        cmp    eax, 0x20053
        jg    L_3755
        je    L_3765
        cmp    eax, 0x10073
        je    L_3746
        cmp    eax, 0x20043
        jmp    L_36d0
L_3746:
        mov    edx, dword ptr [ebp]
        add    ebp, 4
        push    edx
        call    dword ptr [g_0076b134]
        jmp    L_3775
L_3755:
        sub    eax, 0x20063
        je    L_3783
        sub    eax, 0x10
        jne    L_36d6
L_3765:
        mov    eax, dword ptr [ebp]
        add    ebp, 4
        push    eax
        call    dword ptr [g_0076b404]
        add    esp, 4
L_3775:
        mov    esi, eax
        cmp    esi, 1
        jge    L_378d
        mov    esi, 1
        jmp    L_3795
L_3783:
        mov    esi, 2
        add    ebp, 4
        jmp    L_3795
L_378d:
        test    esi, esi
        je    L_36d6
L_3795:
        mov    eax, dword ptr [esp + 0x28]
        cmp    esi, eax
        jg    L_379f
        mov    esi, eax
L_379f:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_37e7
        cmp    esi, eax
        jl    L_37e7
        mov    esi, eax
        jmp    L_37e7
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x28]
        mov    esi, 0x80
        lea    eax, [ecx + edx]
        add    ebp, 8
        cmp    eax, esi
        jl    L_37e7
        mov    esi, eax
        jmp    L_37e7
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x28]
        mov    esi, 0x20
        add    eax, ecx
        add    ebp, 4
        cmp    eax, esi
        jl    L_37e7
        mov    esi, eax
        jmp    L_37e7
        add    ebp, 4
L_37e7:
        mov    eax, dword ptr [esp + 0x14]
        add    eax, esi
        mov    esi, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x14], eax
        mov    ecx, eax
        jmp    L_37fe
L_37f9:
        inc    ecx
        mov    dword ptr [esp + 0x14], ecx
L_37fe:
        mov    al, byte ptr [edi + 1]
        inc    edi
        test    al, al
        jne    L_359d
        mov    edi, dword ptr [esp + 0x24]
L_380e:
        push    ecx
        mov    ecx, esi
        call    FUN_006e2eb0
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esi]
        push    edx
        push    edi
        push    eax
        call    dword ptr [g_0076b3ec]
        add    esp, 0xc
        push    -1
        mov    ecx, esi
        call    FUN_006e2f20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x10
        ret    8
        nop    
        // jump-table data @ 0x006E383C (0 relocated pointers)
        // jump-table data @ 0x006E3874 (0 relocated pointers)
        // jump-table data @ 0x006E393C (0 relocated pointers)
        // jump-table data @ 0x006E3954 (0 relocated pointers)
    }
}
