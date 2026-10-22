/*
 * FUN_0056be8a (extent 0x56be8a-0x56c9b0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007ddd74;
extern char   g_007dde2c;
extern int    g_007f23b0;
extern int    g_007f2568;
extern int    g_007f25c0;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_0055b500(void);
extern void __cdecl FUN_0055b590(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566b00(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_0056bd00(void);
extern void __cdecl FUN_0056c300(void);
extern void __cdecl FUN_0056ca40(void);
extern void __cdecl FUN_00580e40(void);
extern void __cdecl FUN_00580fb0(void);
extern void __cdecl FUN_005b9510(void);
extern void __cdecl FUN_005b9cc0(void);
extern void __cdecl FUN_005c9850(void);
extern void __cdecl FUN_005c98a0(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0056be8a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        mov    ecx, dword ptr [eax + 1]
        inc    eax
        add    eax, 4
        push    2
        push    ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        push    eax
        call    FUN_0064c950
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        fild    dword ptr [eax]
        sub    ecx, 4
        mov    dword ptr [g_0080592c], ecx
        fstp    dword ptr [esp + 0x14]
        fild    dword ptr [eax + 4]
        fstp    dword ptr [esp + 0x18]
        fild    dword ptr [eax + 8]
        mov    eax, dword ptr [g_00805918]
        inc    eax
        mov    dword ptr [g_00805918], eax
        fstp    dword ptr [esp + 0x1c]
        movsx    ecx, byte ptr [eax - 1]
        mov    dword ptr [g_00805908], ecx
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 0x10
        cmp    al, 1
        jne    L_bf66
        fild    dword ptr [esp + 4]
        push    ecx
        lea    eax, [esp + 0xc]
        fstp    dword ptr [esp]
        push    eax
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0056bd00
        add    esp, 0xc
        jmp    L_bf9b
L_bf66:
        push    esi
        call    FUN_00566b00
        add    esp, 4
        test    eax, eax
        je    L_bf9b
        mov    ecx, dword ptr [esp + 8]
        fild    dword ptr [esp + 4]
        mov    dword ptr [eax + 0x3dc], ecx
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 0x3e0], edx
        mov    ecx, dword ptr [esp + 0x10]
        fstp    dword ptr [eax + 0x3e8]
        mov    dword ptr [eax + 0x3e4], ecx
L_bf9b:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        add    esp, 0x10
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    edi
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        xor    ebx, ebx
        cmp    esi, -2
        mov    edi, eax
        je    L_c032
        push    esi
        call    FUN_005668b0
        add    esp, 4
        mov    ebx, eax
L_c032:
        test    edi, edi
        je    L_c0aa
        mov    eax, dword ptr [edi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_c0aa
        mov    edi, dword ptr [edi + 0x3b0]
        test    edi, edi
        je    L_c0aa
        mov    eax, dword ptr [g_007ddd74]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_c0aa
        test    ebx, ebx
        je    L_c0a1
        mov    ecx, dword ptr [ebx + 0x10]
        shr    ecx, 0x13
        test    cl, al
        jne    L_c0a1
        mov    eax, dword ptr [edi + 0x384]
        test    eax, eax
        je    L_c09e
        mov    esi, dword ptr [eax + 0x3d4]
        test    esi, esi
        je    L_c09e
        mov    ecx, esi
        call    FUN_005b9510
        mov    eax, dword ptr [g_007f2568]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_c09e
        mov    ecx, esi
        call    FUN_005b9cc0
L_c09e:
        push    ebx
        jmp    L_c0a3
L_c0a1:
        push    0
L_c0a3:
        mov    ecx, edi
        call    FUN_0055b500
L_c0aa:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        pop    edi
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ebx
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_c196
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_c196
        mov    esi, dword ptr [eax + 0x3b0]
        test    esi, esi
        je    L_c196
        mov    eax, dword ptr [g_007ddd74]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_c196
        mov    ecx, esi
        call    FUN_0055b590
        test    eax, eax
        jne    L_c15d
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_c1bf
        jmp    L_c1b5
L_c15d:
        push    edi
        mov    ecx, esi
        call    FUN_0055b590
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        mov    edi, dword ptr [eax + 0x30]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_c191
        push    0
        call    FUN_00563060
        add    esp, 4
L_c191:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_c1c5
L_c196:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_c1bf
L_c1b5:
        push    0
        call    FUN_00563060
        add    esp, 4
L_c1bf:
        mov    dword ptr [esi], 0xfffffffe
L_c1c5:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_c2b1
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_c2b1
        mov    eax, dword ptr [eax + 0x3b0]
        test    eax, eax
        je    L_c2b1
        mov    ecx, dword ptr [g_007ddd74]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
        cmp    al, 1
        jne    L_c2b1
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        push    ebx
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x2c]
        add    esi, 4
        xor    edx, 0x85739531
        mov    bl, byte ptr [edx + 0x584]
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_c28c
        push    0
        call    FUN_00563060
        add    esp, 4
L_c28c:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        inc    eax
        pop    ebx
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [esi], ecx
        pop    esi
        ret    
L_c2b1:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_c2d8
        push    0
        call    FUN_00563060
        add    esp, 4
L_c2d8:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 0
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        je    L_c343
        lea    eax, [esp + 0xc]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_00580e40
        add    esp, 8
        jmp    L_c42b
L_c343:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_c42b
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    ebx, eax
        mov    ecx, ebx
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, ebx
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_c42b
L_c37d:
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [edi]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_c418
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_c418
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_c418
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_c418
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_c418
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_c418
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], esi
        je    L_c407
        test    eax, eax
        je    L_c3fe
        mov    dword ptr [eax], esi
        mov    eax, dword ptr [esp + 0x10]
L_c3fe:
        add    eax, 4
        mov    dword ptr [esp + 0x10], eax
        jmp    L_c418
L_c407:
        push    1
        lea    ecx, [esp + 0x20]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00580fb0
L_c418:
        mov    ecx, ebx
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_c37d
L_c42b:
        mov    esi, dword ptr [esp + 0xc]
        cmp    esi, dword ptr [esp + 0x10]
        je    L_c45c
        mov    bl, byte ptr [esp + 0x20]
L_c439:
        mov    edi, dword ptr [esi]
        mov    ecx, edi
        call    FUN_005c98a0
        cmp    al, bl
        je    L_c44d
        mov    ecx, edi
        call    FUN_005c9850
L_c44d:
        mov    eax, dword ptr [esp + 0x10]
        add    esi, 4
        cmp    esi, eax
        jne    L_c439
        mov    esi, dword ptr [esp + 0xc]
L_c45c:
        test    esi, esi
        je    L_c469
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_c469:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        push    ebx
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    ecx, 1
        sete    bl
        push    esi
        mov    dword ptr [g_0080592c], eax
        mov    byte ptr [esp + 0xc], bl
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_c4f5
        mov    eax, dword ptr [esp + 8]
        push    eax
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0056c300
        add    esp, 8
        jmp    L_c516
L_c4f5:
        push    esi
        call    FUN_00566b60
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c516
        mov    ecx, esi
        call    FUN_005c98a0
        cmp    al, bl
        je    L_c516
        mov    ecx, esi
        call    FUN_005c9850
L_c516:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_c5bd
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_c5bd
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_c5bd
        mov    eax, dword ptr [g_00805928]
        mov    esi, dword ptr [esi + 0x4cc]
        push    edi
        mov    edi, dword ptr [g_0080592c]
        add    edi, 4
        add    eax, 0xa000
        cmp    edi, eax
        mov    dword ptr [g_0080592c], edi
        jb    L_c5b8
        push    0
        call    FUN_00563060
        add    esp, 4
L_c5b8:
        mov    dword ptr [edi], esi
        pop    edi
        jmp    L_c5ec
L_c5bd:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_c5e6
        push    0
        call    FUN_00563060
        add    esp, 4
L_c5e6:
        mov    dword ptr [esi], 8
L_c5ec:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_c665
        test    esi, esi
        jl    L_c64d
        cmp    esi, 7
        jle    L_c665
L_c64d:
        push    0x7800b0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_c665
        int 3    
L_c665:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        jne    L_c6a5
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_c72a
        jmp    L_c720
L_c6a5:
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + esi*4 + 0x204d00]
        test    edx, edx
        je    L_c701
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + esi*4 + 0x204d00]
        call    FUN_0041fd80
        test    eax, eax
        je    L_c701
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_c6f9
        push    0
        call    FUN_00563060
        add    esp, 4
L_c6f9:
        mov    dword ptr [esi], 1
        jmp    L_c730
L_c701:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_c72a
L_c720:
        push    0
        call    FUN_00563060
        add    esp, 4
L_c72a:
        mov    dword ptr [esi], 0
L_c730:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [ecx]
        mov    edx, dword ptr [eax]
        xor    ecx, esi
        mov    esi, dword ptr [ecx + 0x14]
        sub    eax, 4
        xor    esi, 0x85739531
        mov    dword ptr [g_0080592c], eax
        je    L_c7c3
        mov    esi, dword ptr [ecx + 0x14]
        mov    ecx, dword ptr [ecx + 0xc]
        xor    esi, 0x85739531
        cmp    byte ptr [esi + 0x17fc], 1
        jne    L_c7b6
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x50]
        jmp    L_c7bf
L_c7b6:
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x54]
L_c7bf:
        test    ecx, ecx
        jne    L_c808
L_c7c3:
        mov    edx, dword ptr [g_00805928]
        add    eax, 4
        mov    esi, eax
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], eax
        jb    L_c7e7
        push    0
        call    FUN_00563060
        add    esp, 4
L_c7e7:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 0xffffffff
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
L_c808:
        cmp    edx, 0x23
        push    edi
        ja    L_c988
        jmp    dword ptr [edx*4 + 0x56c9b0]
        mov    edi, dword ptr [ecx + 0x2c]
L_c81c:
        mov    edx, dword ptr [g_00805928]
        add    eax, 4
        mov    esi, eax
        add    edx, 0xa000
        mov    dword ptr [g_0080592c], eax
        cmp    esi, edx
        jmp    L_c954
        mov    edi, dword ptr [ecx + 0x30]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x34]
L_c844:
        mov    ecx, dword ptr [g_00805928]
        add    eax, 4
        mov    esi, eax
        add    ecx, 0xa000
        mov    dword ptr [g_0080592c], eax
        cmp    esi, ecx
        jmp    L_c954
        mov    edi, dword ptr [ecx + 0x38]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0x3c]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x44]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0x48]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0x4c]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x50]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0x54]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0x58]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x5c]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0x60]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0x64]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x68]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0x6c]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0x70]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x1c]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0x74]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0x78]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x7c]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0x84]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0x88]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x8c]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0x94]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0x98]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0x9c]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0xa0]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0xa4]
        jmp    L_c93e
        mov    edi, dword ptr [ecx + 0xa8]
        jmp    L_c844
        mov    edi, dword ptr [ecx + 0xac]
        jmp    L_c81c
        mov    edi, dword ptr [ecx + 0xb0]
L_c93e:
        add    eax, 4
        mov    esi, eax
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805928]
        add    eax, 0xa000
        cmp    esi, eax
L_c954:
        jb    L_c960
        push    0
        call    FUN_00563060
        add    esp, 4
L_c960:
        mov    dword ptr [esi], edi
        jmp    L_c992
        mov    ecx, dword ptr [ecx + 0xb4]
        push    ecx
        jmp    L_c98a
        mov    edx, dword ptr [ecx + 0xb8]
        push    edx
        jmp    L_c98a
        mov    eax, dword ptr [ecx + 0xe4]
        push    eax
        jmp    L_c98a
        mov    ecx, dword ptr [ecx + 0xe8]
        push    ecx
        jmp    L_c98a
L_c988:
        push    -1
L_c98a:
        call    FUN_0056ca40
        add    esp, 4
L_c992:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        mov    edi, edi
        // jump-table data @ 0x0056C9B0 (0 relocated pointers)
    }
}
