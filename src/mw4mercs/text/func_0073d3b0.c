/*
 * FUN_0073d3b0 (extent 0x73d3b0-0x73e151) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern float  g_0076d064;
extern char   g_007b7069;
extern int    g_007b73fc;
extern int    g_00849308;
extern int    g_00859d70;
extern int    g_0087bbf8;
extern int    g_0087bc48;
extern int    g_008aaf18;
extern int    g_008aaf1c;
extern int    g_008aaf2c;
extern int    g_008aaf30;
extern int    g_008aaf34;
extern int    g_008aaf38;
extern int    g_008aaf3c;
extern int    g_008aaf40;
extern int    g_008aaf48;
extern int    g_008ab950;
extern int    g_008ab954;
extern int    g_008ab958;
extern int    g_008ab95c;
extern int    g_008ab960;
extern int    g_008ab968;
extern int    g_008ab96c;
extern float  g_008ab970;
extern float  g_008ab974;
extern int    g_008ab978;
extern int    g_008ab97c;
extern int    g_008ab980;
extern int    g_008ab988;
extern int    g_008ab98c;
extern int    g_008ab990;
extern int    g_008ab994;
extern int    g_008ab998;
extern int    g_008ab99c;
extern int    g_008ab9a0;
extern int    g_008ab9a8;
extern int    g_008ab9ac;
extern float  g_008ab9b0;
extern float  g_008ab9b4;
extern int    g_008ab9b8;
extern int    g_008ab9bc;
extern int    g_008ab9c0;
extern int    g_008ab9c8;
extern int    g_008ab9cc;
extern int    g_008ab9d0;
extern int    g_008ab9d4;
extern int    g_008ab9d8;
extern int    g_008aba8c;
extern int    g_008abacc;
extern int    g_008b287c;
extern int    g_008b2880;
extern int    g_008b28d4;
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_0073cfc0(void);
extern void __cdecl FUN_0073d3b0(void);
extern void __cdecl FUN_0073d430(void);
extern void __cdecl FUN_0073d470(void);
extern void __cdecl FUN_0073d4d0(void);
extern void __cdecl FUN_0073d750(void);
extern void __cdecl FUN_0074c120(void);
extern void __cdecl FUN_007539e0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0073d3b0(void)
{
    __asm {
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [g_008abacc], eax
        and    eax, 0xffffff
        cmp    eax, 0xffffff
        mov    dword ptr [g_008aaf48], 0
        jne    L_d3e8
        cmp    dword ptr [g_0087bc48], 0xff000000
        jne    L_d3e8
        mov    eax, dword ptr [g_00859d70]
        test    eax, eax
        je    L_d3e8
        push    1
        jmp    L_d3ea
L_d3e8:
        push    3
L_d3ea:
        push    0x10
        call    FUN_00713cc0
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        xor    eax, eax
        mov    al, byte ptr [esi]
        test    al, al
        je    L_d40b
L_d3fe:
        push    eax
        inc    esi
        call    FUN_0073cfc0
        mov    al, byte ptr [esi]
        test    al, al
        jne    L_d3fe
L_d40b:
        mov    eax, dword ptr [g_008aaf48]
        test    eax, eax
        pop    esi
        je    L_d420
        push    eax
        push    0x8aaf50
        call    FUN_00713ae0
L_d420:
        mov    dword ptr [g_008aaf48], 0
        ret    8
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008b28d4]
        push    eax
        push    1
        call    FUN_00713cc0
        push    1
        push    7
        call    FUN_00713cc0
        xor    eax, eax
        mov    dword ptr [g_008aaf38], eax
        mov    dword ptr [g_008aaf34], eax
        mov    dword ptr [g_008aaf1c], 0x50
        mov    dword ptr [g_008aaf18], 0x28
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
        mov    eax, dword ptr [g_00849308]
        push    esi
        push    eax
        push    0x18
        call    FUN_006f3c80
        fld    dword ptr [esp + 0xc]
        mov    ecx, dword ptr [esp + 8]
        mov    esi, eax
        mov    dword ptr [esi + 0x14], ecx
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x14]
        mov    dword ptr [esi + 4], eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0xc], eax
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x18]
        mov    dword ptr [esi + 8], eax
        call    FUN_0075db4a
        mov    edx, dword ptr [g_008aba8c]
        mov    dword ptr [esi + 0x10], eax
        mov    dword ptr [esi], edx
        mov    dword ptr [g_008aba8c], esi
        pop    esi
        ret    0x14
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 8]
        fild    dword ptr [g_008ab9d8]
        mov    eax, dword ptr [g_008ab9d8]
        push    ebx
        add    eax, ecx
        fst    dword ptr [g_008ab950]
        mov    ecx, dword ptr [g_008ab9d4]
        fstp    dword ptr [g_008ab970]
        push    ebp
        mov    dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        xor    eax, eax
        xor    ebx, ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        fst    dword ptr [g_008ab990]
        mov    ax, word ptr [esi + 6]
        fstp    dword ptr [g_008ab9b0]
        mov    bx, word ptr [esi + 4]
        fild    dword ptr [g_008ab9d4]
        push    edi
        mov    edi, dword ptr [esp + 0x1c]
        lea    edx, [ecx + edi]
        fst    dword ptr [g_008ab954]
        mov    dword ptr [esp + 0x18], edx
        fild    dword ptr [esp + 0x18]
        mov    ebp, eax
        shr    ebx, 0xa
        and    ebx, 7
        fst    dword ptr [g_008ab974]
        shr    ebp, 7
        fstp    dword ptr [g_008ab994]
        and    ebp, 1
        lea    ebx, [ebp + ebx*2]
        fstp    dword ptr [g_008ab9b4]
        shr    eax, 0xe
        lea    eax, [eax + ebx*4]
        mov    ebx, eax
        shl    ebx, 5
        sub    ebx, eax
        mov    eax, dword ptr [ebx*4 + 0x8b7b18]
        test    eax, eax
        je    L_d6e0
        mov    eax, dword ptr [g_008aaf3c]
        lea    ebx, [eax + 0x12]
        cmp    ecx, ebx
        mov    dword ptr [esp + 0x14], ebx
        jl    L_d5ca
        lea    ebp, [eax + 0x14c]
        cmp    edx, ebp
        jge    L_d5ca
        push    esi
        push    1
        call    FUN_00713cc0
        push    0x8ab950
        call    FUN_0074c120
        mov    edx, dword ptr [g_008ab994]
        mov    eax, dword ptr [g_008ab990]
        mov    ecx, dword ptr [g_008ab954]
        push    edx
        mov    edx, dword ptr [g_008ab950]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_0073d470
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_d5ca:
        lea    ebp, [eax + 0x14c]
        cmp    ecx, ebp
        mov    dword ptr [esp + 0x18], ebp
        jge    L_d6e0
        cmp    edx, ebx
        jl    L_d6e0
        cmp    ecx, ebx
        jge    L_d662
        sub    eax, ecx
        add    eax, 0x12
        mov    dword ptr [esp + 0x18], eax
        fild    dword ptr [esp + 0x18]
        push    esi
        push    1
        fidiv    dword ptr [esp + 0x24]
        fst    dword ptr [g_008ab9cc]
        fstp    dword ptr [g_008ab96c]
        fild    dword ptr [esp + 0x1c]
        fst    dword ptr [g_008ab954]
        fstp    dword ptr [g_008ab9b4]
        call    FUN_00713cc0
        push    0x8ab950
        call    FUN_0074c120
        mov    eax, dword ptr [g_008ab994]
        mov    ecx, dword ptr [g_008ab990]
        mov    edx, dword ptr [g_008ab954]
        push    eax
        mov    eax, dword ptr [g_008ab950]
        push    ecx
        push    edx
        push    eax
        push    esi
        call    FUN_0073d470
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [g_008ab96c], 0
        mov    dword ptr [g_008ab9cc], 0
        pop    ebx
        ret    0xc
L_d662:
        fild    dword ptr [esp + 0x18]
        sub    ecx, eax
        lea    ecx, [ecx + edi - 0x14c]
        mov    dword ptr [esp + 0x18], ecx
        fst    dword ptr [g_008ab974]
        push    esi
        fstp    dword ptr [g_008ab994]
        push    1
        fild    dword ptr [esp + 0x20]
        fidiv    dword ptr [esp + 0x24]
        fsubr    dword ptr [g_0076d064]
        fst    dword ptr [g_008ab9ac]
        fstp    dword ptr [g_008ab98c]
        call    FUN_00713cc0
        push    0x8ab950
        call    FUN_0074c120
        mov    edx, dword ptr [g_008ab994]
        mov    eax, dword ptr [g_008ab990]
        mov    ecx, dword ptr [g_008ab954]
        push    edx
        mov    edx, dword ptr [g_008ab950]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_0073d470
        mov    dword ptr [g_008ab98c], 0x3f800000
        mov    dword ptr [g_008ab9ac], 0x3f800000
L_d6e0:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        cmp    eax, dword ptr [g_007b73fc]
        jne    L_d712
        push    0x7a71d8
        push    0xffffff
        call    FUN_0073d3b0
        mov    ecx, dword ptr [esp + 4]
        push    ecx
        jmp    L_d726
L_d712:
        push    0x7a71d0
        push    0xffffff
        call    FUN_0073d3b0
        mov    edx, dword ptr [esp + 4]
        push    edx
L_d726:
        push    0xffffff
        call    FUN_0073d3b0
        push    0x77a078
        push    0xffffff
        call    FUN_0073d3b0
        mov    eax, 1
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xa0
        push    ebx
        mov    ebx, dword ptr [esp + 0xac]
        push    ebp
        xor    ebp, ebp
        mov    eax, ebx
        push    esi
        mov    esi, dword ptr [g_008b287c]
        shr    eax, 2
        and    eax, 3
        and    ebx, 3
        cmp    esi, ebp
        push    edi
        mov    dword ptr [esp + 0x1c], ebp
        mov    dword ptr [esp + 0x20], ebp
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x18], ebp
        mov    dword ptr [esp + 0x24], ebp
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0xb8], ebx
        je    L_dfac
L_d79b:
        mov    al, byte ptr [g_007b7069]
        test    al, al
        je    L_d845
        mov    ecx, dword ptr [esp + 0xb4]
        xor    eax, eax
        mov    ax, word ptr [esi]
        cmp    eax, ecx
        jne    L_d845
        xor    ecx, ecx
        mov    cx, word ptr [esi + 4]
        shr    ecx, 0xd
        test    cl, 1
        jne    L_d845
        mov    eax, dword ptr [esp + 0x20]
        push    3
        inc    eax
        push    1
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], eax
        call    FUN_007539e0
        push    0
        push    1
        mov    ecx, esi
        mov    edi, eax
        call    FUN_007539e0
        mov    edx, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [g_008b2880]
        sub    eax, edi
        add    edx, eax
        add    ebp, edi
        cmp    ebx, 1
        mov    dword ptr [esp + 0x28], edx
        jne    L_d80b
        cmp    dword ptr [esi + 0x24], ecx
        je    L_d828
        jmp    L_d845
L_d80b:
        test    ebx, ebx
        jne    L_d816
        cmp    dword ptr [esi + 0x24], ecx
        jne    L_d828
        jmp    L_d845
L_d816:
        cmp    ebx, 2
        jne    L_d823
        test    byte ptr [esi + 4], 1
        jne    L_d828
        jmp    L_d845
L_d823:
        cmp    ebx, 3
        jne    L_d845
L_d828:
        mov    ecx, dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x24]
        inc    ecx
        mov    dword ptr [esp + 0x1c], ecx
        mov    ecx, dword ptr [esp + 0x18]
        add    edx, edi
        add    ecx, eax
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x18], ecx
L_d845:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_d869
        and    eax, 0xffff
        lea    edx, [eax*8]
        sub    edx, eax
        lea    esi, [esi + edx*8]
        test    esi, esi
        jne    L_d79b
L_d869:
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_dfac
        mov    ebx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [g_008aaf3c]
        mov    esi, dword ptr [esp + 0x28]
        mov    edi, dword ptr [esp + 0x24]
        mov    edx, dword ptr [g_008ab9d4]
        shr    ebx, 0xa
        lea    ecx, [eax + 0x14c]
        shr    ebp, 0xa
        shr    esi, 0xa
        shr    edi, 0xa
        cmp    edx, ecx
        mov    dword ptr [esp + 0x18], ebx
        mov    ebx, dword ptr [g_0076b420]
        jg    L_d9b4
        call    FUN_0073d430
        push    3
        push    0xd
        call    FUN_00713cc0
        mov    eax, dword ptr [g_008ab9d4]
        mov    edx, dword ptr [g_008ab9d8]
        add    eax, 2
        mov    dword ptr [g_008aaf2c], eax
        mov    eax, dword ptr [esp + 0xb8]
        cmp    eax, 1
        mov    dword ptr [g_008aaf30], edx
        jne    L_d909
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
        push    ebp
        push    edi
        push    esi
        push    ecx
        mov    ecx, dword ptr [esp + 0xc4]
        push    edx
        push    eax
        push    ecx
        push    0x7a7344
        lea    edx, [esp + 0x50]
        push    edx
        jmp    L_d97c
L_d909:
        cmp    eax, 2
        jne    L_d934
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x1c]
        push    ebp
        push    edi
        push    esi
        push    eax
        mov    eax, dword ptr [esp + 0xc4]
        push    ecx
        push    edx
        push    eax
        push    0x7a72fc
        lea    ecx, [esp + 0x50]
        push    ecx
        jmp    L_d97c
L_d934:
        cmp    eax, 3
        push    ebp
        jne    L_d959
        mov    edx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esp + 0xb8]
        push    esi
        push    edx
        push    eax
        lea    ecx, [esp + 0x40]
        push    0x7a72cc
        push    ecx
        call    ebx
        add    esp, 0x18
        jmp    L_d981
L_d959:
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x20]
        push    edi
        push    esi
        push    edx
        mov    edx, dword ptr [esp + 0xc4]
        push    eax
        push    ecx
        push    edx
        push    0x7a7284
        lea    eax, [esp + 0x50]
        push    eax
L_d97c:
        call    ebx
        add    esp, 0x24
L_d981:
        mov    eax, dword ptr [g_008aaf3c]
        mov    ecx, dword ptr [g_008ab9d4]
        lea    edx, [eax + 0x12]
        cmp    ecx, edx
        jl    L_d9b4
        lea    edx, [eax + 0x14c]
        add    ecx, 0xe
        cmp    ecx, edx
        jge    L_d9b4
        lea    eax, [esp + 0x30]
        push    eax
        push    0xf0f0f0
        call    FUN_0073d3b0
        mov    eax, dword ptr [g_008aaf3c]
L_d9b4:
        mov    ecx, dword ptr [g_008ab9d4]
        add    ecx, 0xe
        add    eax, 0x14c
        cmp    ecx, eax
        mov    dword ptr [g_008ab9d4], ecx
        jg    L_da02
        push    0
        push    0x11
        call    FUN_00713cc0
        push    1
        push    4
        call    FUN_00713cc0
        push    2
        push    0xb
        call    FUN_00713cc0
        push    1
        push    0xf
        call    FUN_00713cc0
        push    3
        push    0x10
        call    FUN_00713cc0
        push    3
        push    0xd
        call    FUN_00713cc0
L_da02:
        mov    eax, dword ptr [esp + 0x2c]
        test    eax, eax
        mov    esi, dword ptr [g_008b287c]
        je    L_de4e
        test    esi, esi
        je    L_de1b
L_da1c:
        mov    al, byte ptr [g_007b7069]
        test    al, al
        je    L_ddf7
        mov    eax, dword ptr [esp + 0xb4]
        xor    ecx, ecx
        mov    cx, word ptr [esi]
        cmp    ecx, eax
        jne    L_ddf7
        xor    edx, edx
        mov    dx, word ptr [esi + 4]
        shr    edx, 0xd
        test    dl, 1
        jne    L_ddf7
        mov    eax, dword ptr [esp + 0xb8]
        cmp    eax, 1
        jne    L_da6a
        mov    eax, dword ptr [g_008b2880]
        cmp    dword ptr [esi + 0x24], eax
        je    L_da97
        jmp    L_ddf7
L_da6a:
        test    eax, eax
        jne    L_da7e
        mov    ecx, dword ptr [g_008b2880]
        cmp    dword ptr [esi + 0x24], ecx
        jne    L_da97
        jmp    L_ddf7
L_da7e:
        cmp    eax, 2
        jne    L_da8e
        test    byte ptr [esi + 4], 1
        jne    L_da97
        jmp    L_ddf7
L_da8e:
        cmp    eax, 3
        jne    L_ddf7
L_da97:
        mov    eax, dword ptr [esp + 0xb4]
        xor    edi, edi
        mov    di, word ptr [esi + 2]
        mov    ebp, 0x40
        mov    ecx, ebp
        cmp    edi, eax
        je    L_dacc
        jbe    L_dabc
        shl    eax, 6
        xor    edx, edx
        div    edi
        mov    ebp, eax
        jmp    L_dacc
L_dabc:
        mov    eax, edi
        shl    eax, 6
        xor    edx, edx
        div    dword ptr [esp + 0xb4]
        mov    ecx, eax
L_dacc:
        cmp    dword ptr [esp + 0x2c], 1
        je    L_dad9
        test    byte ptr [esi + 4], 1
        je    L_dae1
L_dad9:
        push    ecx
        push    ebp
        push    esi
        call    FUN_0073d4d0
L_dae1:
        mov    eax, dword ptr [g_008aaf3c]
        mov    ecx, dword ptr [g_008ab9d4]
        lea    edx, [eax + 0xa]
        cmp    ecx, edx
        jl    L_ddb2
        add    eax, 0x12c
        cmp    ecx, eax
        jg    L_ddb2
        mov    eax, dword ptr [g_008aaf1c]
        mov    dword ptr [esp + 0x24], eax
        sub    eax, 0x16
        mov    dword ptr [g_008aaf1c], eax
        mov    eax, dword ptr [g_008b28d4]
        push    eax
        push    1
        call    FUN_00713cc0
        push    1
        push    7
        call    FUN_00713cc0
        mov    ecx, dword ptr [g_008aaf40]
        mov    eax, dword ptr [esi + 0x14]
        mov    edx, dword ptr [g_008ab9d4]
        add    ecx, 0x8c
        push    eax
        mov    dword ptr [g_008aaf30], ecx
        lea    ecx, [esp + 0x34]
        xor    ebp, ebp
        add    edx, 0xf
        push    0x78acac
        push    ecx
        mov    dword ptr [g_008aaf38], ebp
        mov    dword ptr [g_008aaf34], ebp
        mov    dword ptr [g_008aaf2c], edx
        call    ebx
        add    esp, 0xc
        lea    edx, [esp + 0x30]
        push    edx
        push    0xffffff
        call    FUN_0073d3b0
        mov    eax, dword ptr [g_008aaf40]
        mov    ecx, dword ptr [g_008ab9d4]
        lea    edx, [esp + 0x30]
        add    eax, 0x8c
        add    ecx, 0x19
        push    0x7a7254
        push    edx
        mov    dword ptr [g_008aaf30], eax
        mov    dword ptr [g_008aaf2c], ecx
        call    ebx
        add    esp, 8
        lea    eax, [esp + 0x30]
        push    eax
        push    0x808080
        call    FUN_0073d3b0
        mov    ecx, dword ptr [g_008aaf40]
        mov    eax, dword ptr [esp + 0xb4]
        mov    edx, dword ptr [g_008ab9d4]
        push    edi
        add    ecx, 0x8c
        push    eax
        mov    dword ptr [g_008aaf30], ecx
        lea    ecx, [esp + 0x38]
        add    edx, 0x23
        push    0x7a7248
        push    ecx
        mov    dword ptr [g_008aaf2c], edx
        call    ebx
        add    esp, 0x10
        lea    edx, [esp + 0x30]
        push    edx
        push    0xc0c0c0
        call    FUN_0073d3b0
        xor    eax, eax
        mov    ax, word ptr [esi + 6]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 4]
        mov    edx, eax
        shr    edx, 7
        shr    ecx, 0xa
        and    ecx, 7
        shr    eax, 0xe
        and    edx, 1
        lea    ecx, [edx + ecx*2]
        lea    ecx, [eax + ecx*4]
        mov    eax, ecx
        shl    eax, 5
        sub    eax, ecx
        shl    eax, 2
        mov    ecx, dword ptr [eax + 0x8b7b28]
        cmp    ecx, 0xf800
        ja    L_dc62
        je    L_dc5b
        cmp    ecx, 0xf00
        je    L_dc54
        cmp    ecx, 0x7c00
        jne    L_dc6a
        push    0x7a7240
        jmp    L_dc85
L_dc54:
        push    0x7a7238
        jmp    L_dc85
L_dc5b:
        push    0x7a7230
        jmp    L_dc85
L_dc62:
        cmp    ecx, 0xff0000
        je    L_dc71
L_dc6a:
        push    0x7a7228
        jmp    L_dc85
L_dc71:
        cmp    dword ptr [eax + 0x8b7b34], ebp
        jne    L_dc80
        push    0x7a7220
        jmp    L_dc85
L_dc80:
        push    0x7a7218
L_dc85:
        push    0xc0c0c0
        call    FUN_0073d3b0
        push    1
        push    1
        mov    ecx, esi
        xor    edi, edi
        xor    ebp, ebp
        mov    byte ptr [esp + 0x1f], 0x4e
        mov    byte ptr [esp + 0x1d], 0x4e
        mov    byte ptr [esp + 0x1b], 0x4e
        mov    byte ptr [esp + 0x1a], 0x4e
        mov    byte ptr [esp + 0x1c], 0x4e
        mov    byte ptr [esp + 0x1e], 0x4e
        call    FUN_007539e0
        test    eax, eax
        je    L_dcd2
        test    byte ptr [esi + 7], 8
        mov    edi, eax
        mov    byte ptr [esp + 0x17], 0x59
        je    L_dcd2
        mov    byte ptr [esp + 0x15], 0x59
L_dcd2:
        push    2
        push    1
        mov    ecx, esi
        call    FUN_007539e0
        test    eax, eax
        je    L_dcf3
        add    edi, eax
        test    byte ptr [esi + 6], 1
        mov    byte ptr [esp + 0x13], 0x59
        jne    L_dcf3
        mov    byte ptr [esp + 0x12], 0x59
L_dcf3:
        push    3
        push    1
        mov    ecx, esi
        call    FUN_007539e0
        test    eax, eax
        je    L_dd14
        mov    ebp, eax
        test    byte ptr [esi + 6], 1
        mov    byte ptr [esp + 0x14], 0x59
        jne    L_dd14
        mov    byte ptr [esp + 0x16], 0x59
L_dd14:
        mov    al, byte ptr [esi + 6]
        shr    edi, 0xa
        shr    ebp, 0xa
        test    al, 8
        je    L_dd2d
        push    0x7a7210
        push    0xffff00
        jmp    L_dd4a
L_dd2d:
        mov    eax, dword ptr [esi + 0x1c]
        test    eax, eax
        je    L_dd40
        push    0x7a7208
        push    0xff00
        jmp    L_dd4a
L_dd40:
        push    0x7a7200
        push    0xff0000
L_dd4a:
        call    FUN_0073d3b0
        mov    dl, byte ptr [esi + 4]
        shr    dl, 1
        test    dl, 1
        mov    eax, 0x770080
        jne    L_dd63
        mov    eax, 0x76b768
L_dd63:
        movsx    ecx, byte ptr [esp + 0x14]
        movsx    edx, byte ptr [esp + 0x12]
        push    eax
        movsx    eax, byte ptr [esp + 0x1a]
        push    eax
        movsx    eax, byte ptr [esp + 0x1b]
        push    ecx
        movsx    ecx, byte ptr [esp + 0x21]
        push    ebp
        push    edx
        movsx    edx, byte ptr [esp + 0x2b]
        push    eax
        push    ecx
        push    edx
        push    edi
        lea    eax, [esp + 0x54]
        push    0x7a71e0
        push    eax
        call    ebx
        add    esp, 0x2c
        lea    ecx, [esp + 0x30]
        push    ecx
        push    0xc0c0c0
        call    FUN_0073d3b0
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [g_008aaf1c], edx
L_ddb2:
        mov    ebp, dword ptr [g_008ab9d8]
        mov    edi, dword ptr [g_008ab9d4]
        mov    eax, dword ptr [g_008ab9d0]
        add    ebp, 0x45
        add    edi, 0x25
        inc    eax
        cmp    eax, 2
        mov    dword ptr [g_008ab9d8], ebp
        mov    dword ptr [g_008ab9d4], edi
        mov    dword ptr [g_008ab9d0], eax
        jne    L_ddf7
        mov    eax, dword ptr [g_008aaf40]
        add    eax, 4
        mov    dword ptr [g_008ab9d8], eax
        mov    dword ptr [g_008ab9d0], 0
L_ddf7:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_de1b
        and    eax, 0xffff
        lea    ecx, [eax*8]
        sub    ecx, eax
        lea    esi, [esi + ecx*8]
        test    esi, esi
        jne    L_da1c
L_de1b:
        mov    edx, dword ptr [g_008aaf40]
        mov    eax, dword ptr [g_008ab9d4]
        pop    edi
        pop    esi
        add    edx, 4
        add    eax, 0x25
        pop    ebp
        mov    dword ptr [g_008ab9d0], 0
        mov    dword ptr [g_008ab9d8], edx
        mov    dword ptr [g_008ab9d4], eax
        pop    ebx
        add    esp, 0xa0
        ret    8
L_de4e:
        test    esi, esi
        mov    ecx, dword ptr [g_008ab9d0]
        je    L_df8a
L_de5c:
        mov    al, byte ptr [g_007b7069]
        test    al, al
        je    L_df66
        mov    edx, dword ptr [esp + 0xb4]
        xor    eax, eax
        mov    ax, word ptr [esi]
        cmp    eax, edx
        jne    L_df66
        xor    edx, edx
        mov    dx, word ptr [esi + 4]
        shr    edx, 0xd
        test    dl, 1
        jne    L_df66
        mov    eax, dword ptr [esp + 0xb8]
        cmp    eax, 1
        jne    L_deaa
        mov    eax, dword ptr [g_008b2880]
        cmp    dword ptr [esi + 0x24], eax
        je    L_ded7
        jmp    L_df66
L_deaa:
        test    eax, eax
        jne    L_debe
        mov    edx, dword ptr [g_008b2880]
        cmp    dword ptr [esi + 0x24], edx
        jne    L_ded7
        jmp    L_df66
L_debe:
        cmp    eax, 2
        jne    L_dece
        test    byte ptr [esi + 4], 1
        jne    L_ded7
        jmp    L_df66
L_dece:
        cmp    eax, 3
        jne    L_df66
L_ded7:
        mov    ebp, dword ptr [esp + 0xb4]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 2]
        mov    ebx, 0x40
        mov    edi, ebx
        cmp    ecx, ebp
        je    L_df09
        jbe    L_defe
        mov    eax, ebp
        shl    eax, 6
        xor    edx, edx
        div    ecx
        mov    ebx, eax
        jmp    L_df09
L_defe:
        mov    eax, ecx
        shl    eax, 6
        xor    edx, edx
        div    ebp
        mov    edi, eax
L_df09:
        push    edi
        push    ebx
        push    esi
        call    FUN_0073d4d0
        mov    ecx, dword ptr [g_008ab9d8]
        mov    edx, 0x45
        add    ecx, edx
        mov    dword ptr [g_008ab9d8], ecx
        mov    ecx, dword ptr [g_008ab9d0]
        inc    ecx
        lea    eax, [ecx + ecx*2]
        shl    eax, 3
        sub    eax, ecx
        lea    eax, [eax + eax*2]
        cmp    eax, 0x1ce
        mov    dword ptr [g_008ab9d0], ecx
        jle    L_df66
        mov    ecx, dword ptr [g_008aaf40]
        mov    eax, dword ptr [g_008ab9d4]
        add    ecx, 4
        add    eax, edx
        mov    dword ptr [g_008ab9d8], ecx
        xor    ecx, ecx
        mov    dword ptr [g_008ab9d4], eax
        mov    dword ptr [g_008ab9d0], ecx
L_df66:
        xor    eax, eax
        mov    ax, word ptr [esi + 0x1a]
        test    ax, ax
        je    L_df8a
        and    eax, 0xffff
        lea    edx, [eax*8]
        sub    edx, eax
        lea    esi, [esi + edx*8]
        test    esi, esi
        jne    L_de5c
L_df8a:
        test    ecx, ecx
        je    L_dfac
        mov    eax, dword ptr [g_008aaf40]
        add    eax, 4
        mov    dword ptr [g_008ab9d8], eax
        add    dword ptr [g_008ab9d4], 0x45
        mov    dword ptr [g_008ab9d0], 0
L_dfac:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0xa0
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_008aba8c]
        test    eax, eax
        je    L_dfe0
L_dfc9:
        mov    ecx, dword ptr [eax]
        push    eax
        mov    dword ptr [g_008aba8c], ecx
        call    FUN_006f4230
        mov    eax, dword ptr [g_008aba8c]
        test    eax, eax
        jne    L_dfc9
L_dfe0:
        mov    edx, dword ptr [g_008aaf40]
        mov    eax, dword ptr [g_008aaf3c]
        push    esi
        add    edx, 4
        add    eax, 0x14c
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    dword ptr [g_008ab9d8], edx
        mov    dword ptr [g_008ab9d4], eax
        mov    dword ptr [g_008ab9d0], 0
        mov    esi, 0x1000
L_e013:
        push    edi
        push    esi
        call    FUN_0073d750
        sar    esi, 1
        cmp    esi, 4
        jge    L_e013
        mov    ecx, dword ptr [g_008aaf3c]
        mov    eax, dword ptr [g_008ab9d4]
        mov    edx, ecx
        sub    edx, eax
        mov    eax, dword ptr [g_0087bbf8]
        add    edx, 0x28c
        cmp    eax, edx
        jge    L_e046
        mov    eax, edx
        mov    dword ptr [g_0087bbf8], eax
L_e046:
        test    eax, eax
        jle    L_e051
        xor    eax, eax
        mov    dword ptr [g_0087bbf8], eax
L_e051:
        mov    edx, dword ptr [g_008aaf40]
        lea    eax, [eax + ecx + 0x12]
        mov    ecx, dword ptr [g_0087bc48]
        mov    dword ptr [g_008ab9d4], eax
        lea    eax, [ecx + 0xffffff]
        add    edx, 4
        mov    dword ptr [g_008ab9d8], edx
        mov    dword ptr [g_008ab9d0], 0
        mov    dword ptr [g_008ab960], eax
        mov    dword ptr [g_008ab980], eax
        mov    dword ptr [g_008ab9a0], eax
        mov    dword ptr [g_008ab9c0], eax
        mov    dword ptr [g_008ab968], 0
        mov    dword ptr [g_008ab988], 0
        mov    dword ptr [g_008ab9a8], 0x3f800000
        mov    dword ptr [g_008ab9c8], 0x3f800000
        mov    dword ptr [g_008ab96c], 0
        mov    dword ptr [g_008ab98c], 0x3f800000
        mov    dword ptr [g_008ab9ac], 0x3f800000
        mov    dword ptr [g_008ab9cc], 0
        mov    dword ptr [g_008ab958], 0
        mov    dword ptr [g_008ab978], 0
        mov    dword ptr [g_008ab998], 0
        mov    dword ptr [g_008ab9b8], 0
        mov    dword ptr [g_008ab95c], 0x3f800000
        mov    dword ptr [g_008ab97c], 0x3f800000
        mov    dword ptr [g_008ab99c], 0x3f800000
        mov    dword ptr [g_008ab9bc], 0x3f800000
        mov    esi, 0x1000
L_e138:
        push    edi
        push    esi
        call    FUN_0073d750
        sar    esi, 1
        cmp    esi, 4
        jge    L_e138
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        ret    
    }
}
