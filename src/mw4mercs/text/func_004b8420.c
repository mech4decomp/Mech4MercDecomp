/*
 * FUN_004b8420 (extent 0x4b8420-0x4b9963) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ac;
extern int    g_007da848;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_0048f380(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004b8420(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x30
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        call    FUN_00491280
        xor    eax, eax
        mov    ecx, 8
        lea    edi, [esi + 0x18]
        rep stosd
        mov    eax, dword ptr [ebp + 0xc]
        mov    edi, dword ptr [eax]
        push    0x770e9c
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x2c]
        push    0
        lea    ecx, [ebp - 2]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_84e2
        mov    al, byte ptr [ebp - 2]
        test    al, al
        je    L_848d
        mov    edx, dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, 0x10
        or    edx, eax
        or    ecx, eax
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 0x10], ecx
        jmp    L_849f
L_848d:
        mov    ecx, dword ptr [esi + 4]
        mov    eax, dword ptr [esi + 0x10]
        and    ecx, 0xffffffef
        or    eax, 0x10
        mov    dword ptr [esi + 4], ecx
        mov    dword ptr [esi + 0x10], eax
L_849f:
        push    0x770e80
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x2c]
        push    0
        lea    eax, [ebp - 2]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_84e2
        mov    al, byte ptr [ebp - 2]
        test    al, al
        mov    eax, dword ptr [esi + 0x14]
        je    L_84dc
        or    eax, 0x10
        jmp    L_84df
L_84dc:
        and    eax, 0xffffffef
L_84df:
        mov    dword ptr [esi + 0x14], eax
L_84e2:
        push    0x770e78
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp + 8]
        push    0
        lea    edx, [ebp - 0xa]
        push    edx
        push    eax
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8587
        mov    al, byte ptr [ebp - 0xa]
        test    al, al
        je    L_852e
        mov    edx, dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, 0x4000
        or    edx, eax
        or    ecx, eax
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 0x10], ecx
        jmp    L_8540
L_852e:
        mov    ecx, dword ptr [esi + 4]
        mov    eax, dword ptr [esi + 0x10]
        and    ecx, 0xffffffef
        or    eax, 0x10
        mov    dword ptr [esi + 4], ecx
        mov    dword ptr [esi + 0x10], eax
L_8540:
        push    0x770e64
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x2c]
        push    0
        lea    ecx, [ebp - 2]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8587
        mov    al, byte ptr [ebp - 0xa]
        test    al, al
        mov    eax, dword ptr [esi + 0x14]
        je    L_857f
        or    eax, 0x4000
        jmp    L_8584
L_857f:
        and    eax, 0xffffbfff
L_8584:
        mov    dword ptr [esi + 0x14], eax
L_8587:
        push    0x770e5c
        push    edi
        lea    ecx, [ebp - 0x2c]
        mov    dword ptr [ebp - 0x18], 0
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x2c]
        push    0
        lea    eax, [ebp - 0x18]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_00411bf0
        lea    ecx, [ebp - 0x2c]
        call    FUN_0040d9b0
        mov    eax, dword ptr [ebp - 0x18]
        test    eax, eax
        mov    ebx, dword ptr [g_0076b2ac]
        je    L_8753
        push    0x770e54
        push    eax
        call    ebx
        add    esp, 8
        test    eax, eax
        mov    edi, 0x1c000
        jne    L_85f2
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    ecx, 0xfffe3fff
        or    eax, edi
        mov    dword ptr [esi], ecx
        mov    dword ptr [esi + 8], eax
        jmp    L_8707
L_85f2:
        mov    edx, dword ptr [ebp - 0x18]
        push    0x770e48
        push    edx
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_861a
        mov    eax, dword ptr [esi]
        and    eax, 0xffffbfff
        or    eax, 0x18000
        mov    dword ptr [esi], eax
        or    dword ptr [esi + 8], edi
        jmp    L_8707
L_861a:
        mov    ecx, dword ptr [ebp - 0x18]
        push    0x770e40
        push    ecx
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_8649
        mov    edx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    edx, 0xfffe7fff
        or    edx, 0x4000
        or    eax, edi
        mov    dword ptr [esi], edx
        mov    dword ptr [esi + 8], eax
        jmp    L_8707
L_8649:
        mov    eax, dword ptr [ebp - 0x18]
        push    0x770e34
        push    eax
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_8678
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    ecx, 0xfffebfff
        or    ecx, 0x8000
        or    eax, edi
        mov    dword ptr [esi], ecx
        mov    dword ptr [esi + 8], eax
        jmp    L_8707
L_8678:
        mov    edx, dword ptr [ebp - 0x18]
        push    0x770e28
        push    edx
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_869d
        mov    eax, dword ptr [esi]
        and    eax, 0xfffeffff
        or    eax, 0xc000
        mov    dword ptr [esi], eax
        or    dword ptr [esi + 8], edi
        jmp    L_8707
L_869d:
        mov    ecx, dword ptr [ebp - 0x18]
        push    0x770e18
        push    ecx
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_86c9
        mov    edx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    edx, 0xffff3fff
        or    edx, 0x10000
        or    eax, edi
        mov    dword ptr [esi], edx
        mov    dword ptr [esi + 8], eax
        jmp    L_8707
L_86c9:
        mov    eax, dword ptr [ebp - 0x18]
        push    0x770e0c
        push    eax
        call    ebx
        add    esp, 8
        test    eax, eax
        jne    L_86f5
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    ecx, 0xffff7fff
        or    ecx, 0x14000
        or    eax, edi
        mov    dword ptr [esi], ecx
        mov    dword ptr [esi + 8], eax
        jmp    L_8707
L_86f5:
        push    0x770dfc
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8707
        int 3    
L_8707:
        mov    edx, dword ptr [ebp + 0xc]
        mov    edi, dword ptr [edx]
        push    0x770de8
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x2c]
        push    0
        lea    eax, [ebp - 0xc]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8753
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_874b
        or    eax, 0x1c000
        jmp    L_8750
L_874b:
        and    eax, 0xfffe3fff
L_8750:
        mov    dword ptr [esi + 0xc], eax
L_8753:
        push    0x770ddc
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp + 8]
        push    0
        lea    edx, [ebp - 5]
        push    edx
        push    eax
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_87ec
        mov    al, byte ptr [ebp - 5]
        test    al, al
        mov    ecx, dword ptr [esi]
        je    L_8792
        or    ecx, 0x400000
        jmp    L_8798
L_8792:
        and    ecx, 0xffbfffff
L_8798:
        mov    eax, dword ptr [esi + 8]
        push    0x770dc4
        mov    dword ptr [esi], ecx
        or    eax, 0x400000
        push    edi
        lea    ecx, [ebp - 0x2c]
        mov    dword ptr [esi + 8], eax
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x2c]
        push    0
        lea    ecx, [ebp - 5]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_87ec
        mov    al, byte ptr [ebp - 5]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_87e4
        or    eax, 0x400000
        jmp    L_87e9
L_87e4:
        and    eax, 0xffbfffff
L_87e9:
        mov    dword ptr [esi + 0xc], eax
L_87ec:
        push    0x770dbc
        push    edi
        lea    ecx, [ebp - 0x2c]
        mov    dword ptr [ebp - 0x20], 0
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x2c]
        push    0
        lea    eax, [ebp - 0x20]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_00411bf0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8905
        mov    edx, dword ptr [ebp - 0x20]
        mov    edi, dword ptr [g_0076b2ac]
        push    0x770db0
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        mov    ebx, 0x60000
        jne    L_8856
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    ecx, 0xfff9ffff
        or    eax, ebx
        mov    dword ptr [esi], ecx
        mov    dword ptr [esi + 8], eax
        jmp    L_88b9
L_8856:
        mov    eax, dword ptr [ebp - 0x20]
        push    0x770da4
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8882
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    ecx, 0xfffbffff
        or    ecx, 0x20000
        or    eax, ebx
        mov    dword ptr [esi], ecx
        mov    dword ptr [esi + 8], eax
        jmp    L_88b9
L_8882:
        mov    edx, dword ptr [ebp - 0x20]
        push    0x770d98
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_88a7
        mov    eax, dword ptr [esi]
        and    eax, 0xfffdffff
        or    eax, 0x40000
        mov    dword ptr [esi], eax
        or    dword ptr [esi + 8], ebx
        jmp    L_88b9
L_88a7:
        push    0x770d88
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_88b9
        int 3    
L_88b9:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edi, dword ptr [ecx]
        push    0x770d74
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp + 8]
        push    0
        lea    edx, [ebp - 0xc]
        push    edx
        push    eax
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8905
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_88fd
        or    eax, 0x60000
        jmp    L_8902
L_88fd:
        and    eax, 0xfff9ffff
L_8902:
        mov    dword ptr [esi + 0xc], eax
L_8905:
        push    0x770d64
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x2c]
        push    0
        lea    ecx, [ebp - 7]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_899e
        mov    al, byte ptr [ebp - 7]
        test    al, al
        mov    ecx, dword ptr [esi]
        je    L_8944
        or    ecx, 0x20000000
        jmp    L_894a
L_8944:
        and    ecx, 0xdfffffff
L_894a:
        mov    eax, dword ptr [esi + 8]
        push    0x770d48
        mov    dword ptr [esi], ecx
        or    eax, 0x20000000
        push    edi
        lea    ecx, [ebp - 0x2c]
        mov    dword ptr [esi + 8], eax
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x2c]
        push    0
        lea    eax, [ebp - 7]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_899e
        mov    al, byte ptr [ebp - 7]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_8996
        or    eax, 0x20000000
        jmp    L_899b
L_8996:
        and    eax, 0xdfffffff
L_899b:
        mov    dword ptr [esi + 0xc], eax
L_899e:
        push    0x770d44
        push    edi
        lea    ecx, [ebp - 0x2c]
        mov    dword ptr [ebp - 0x1c], 0
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x2c]
        mov    ecx, dword ptr [ebp + 8]
        push    0
        lea    edx, [ebp - 0x1c]
        push    edx
        push    eax
        call    FUN_00411bf0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8ae6
        mov    ecx, dword ptr [ebp - 0x1c]
        mov    edi, dword ptr [g_0076b2ac]
        push    0x770d3c
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8a83
        mov    edx, dword ptr [ebp - 0x1c]
        push    0x770d38
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8a83
        mov    eax, dword ptr [ebp - 0x1c]
        push    0x76ff50
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8a29
        mov    ecx, dword ptr [esi]
        and    ecx, 0xfff7ffff
        or    ecx, 0x100000
        mov    dword ptr [esi], ecx
        jmp    L_8a93
L_8a29:
        mov    edx, dword ptr [ebp - 0x1c]
        push    0x770d30
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8a43
        or    dword ptr [esi], 0x180000
        jmp    L_8a93
L_8a43:
        mov    eax, dword ptr [ebp - 0x1c]
        push    0x770d28
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8a7b
        mov    ecx, dword ptr [ebp - 0x1c]
        push    0x770d24
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_8a7b
        push    0x770d14
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_8a9a
        int 3    
        jmp    L_8a9a
L_8a7b:
        and    dword ptr [esi], 0xffe7ffff
        jmp    L_8a93
L_8a83:
        mov    edx, dword ptr [esi]
        and    edx, 0xffefffff
        or    edx, 0x80000
        mov    dword ptr [esi], edx
L_8a93:
        or    dword ptr [esi + 8], 0x180000
L_8a9a:
        mov    eax, dword ptr [ebp + 0xc]
        mov    edi, dword ptr [eax]
        push    0x770d04
        push    edi
        lea    ecx, [ebp - 0x2c]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x2c]
        push    0
        lea    ecx, [ebp - 0xc]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x2c]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8ae6
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_8ade
        or    eax, 0x180000
        jmp    L_8ae3
L_8ade:
        and    eax, 0xffe7ffff
L_8ae3:
        mov    dword ptr [esi + 0xc], eax
L_8ae6:
        push    0x770cf0
        push    edi
        lea    ecx, [ebp - 0x30]
        mov    byte ptr [ebp - 0xc], 0
        mov    byte ptr [ebp - 1], 0
        mov    dword ptr [ebp - 0x2c], 0
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x30]
        push    0
        lea    eax, [ebp - 1]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x30]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8b35
        mov    al, byte ptr [ebp - 1]
        test    al, al
        mov    byte ptr [ebp - 0xc], 1
        je    L_8b35
        mov    dword ptr [ebp - 0x2c], 0x40
L_8b35:
        push    0x770ce0
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp + 8]
        push    0
        lea    edx, [ebp - 1]
        push    edx
        push    eax
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x30]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8b72
        mov    al, byte ptr [ebp - 1]
        test    al, al
        mov    byte ptr [ebp - 0xc], 1
        je    L_8b72
        or    dword ptr [ebp - 0x2c], 0x20
L_8b72:
        push    0x770cd0
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x30]
        push    0
        lea    ecx, [ebp - 1]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x30]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8bb2
        mov    al, byte ptr [ebp - 1]
        test    al, al
        mov    byte ptr [ebp - 0xc], 1
        je    L_8bb2
        or    dword ptr [ebp - 0x2c], 0x80
L_8bb2:
        push    0x770cc0
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x30]
        push    0
        lea    eax, [ebp - 1]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x30]
        mov    bl, al
        call    FUN_0040d9b0
        test    bl, bl
        je    L_8bf0
        mov    al, byte ptr [ebp - 1]
        test    al, al
        je    L_8bf7
        or    dword ptr [ebp - 0x2c], 0x100
        jmp    L_8bf7
L_8bf0:
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        je    L_8c13
L_8bf7:
        mov    edx, dword ptr [esi + 4]
        mov    ecx, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [esi + 0x10]
        and    edx, 0xfffffc1f
        or    edx, ecx
        or    eax, 0x3e0
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 0x10], eax
L_8c13:
        push    0x770ca8
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x30]
        mov    ebx, dword ptr [ebp + 8]
        push    0
        lea    eax, [ebp - 0xb]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_00411ec0
        lea    ecx, [ebp - 0x30]
        mov    byte ptr [ebp - 0xc], al
        call    FUN_0040d9b0
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        je    L_8c60
        mov    al, byte ptr [ebp - 0xb]
        test    al, al
        mov    eax, dword ptr [esi + 0x14]
        je    L_8c58
        or    eax, 0x3e0
        jmp    L_8c5d
L_8c58:
        and    eax, 0xfffffc1f
L_8c5d:
        mov    dword ptr [esi + 0x14], eax
L_8c60:
        push    0x770c90
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x30]
        push    0
        lea    edx, [ebp - 3]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp - 0xc], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_8c9c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8c9c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8c9c:
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        je    L_8d27
        mov    al, byte ptr [ebp - 3]
        test    al, al
        mov    ecx, dword ptr [esi]
        je    L_8cb8
        or    ecx, 0x800000
        jmp    L_8cbe
L_8cb8:
        and    ecx, 0xff7fffff
L_8cbe:
        mov    eax, dword ptr [esi + 8]
        push    0x770c6c
        mov    dword ptr [esi], ecx
        or    eax, 0x800000
        push    edi
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [esi + 8], eax
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x30]
        push    0
        lea    ecx, [ebp - 3]
        push    ecx
        push    edx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp - 0xc], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_8d07
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8d07
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8d07:
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        je    L_8d27
        mov    al, byte ptr [ebp - 3]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_8d1f
        or    eax, 0x800000
        jmp    L_8d24
L_8d1f:
        and    eax, 0xff7fffff
L_8d24:
        mov    dword ptr [esi + 0xc], eax
L_8d27:
        push    0x770c60
        push    edi
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [ebp - 0x14], 0
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x30]
        push    0
        lea    eax, [ebp - 0x14]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_00411bf0
        mov    byte ptr [ebp - 0xc], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_8d6a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_8d6a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8d6a:
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        je    L_9080
        mov    edx, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [g_0076b2ac]
        push    0x770c50
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        mov    ebx, 0xf
        jne    L_8da8
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    ecx, ebx
        and    eax, 0xfffffff0
        mov    dword ptr [esi + 0x10], ecx
        mov    dword ptr [esi + 4], eax
        jmp    L_901e
L_8da8:
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770c40
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8dd3
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffff1
        or    ecx, 1
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_901e
L_8dd3:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770c30
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8dfe
        mov    eax, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    eax, 0xfffffff2
        or    eax, 2
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], eax
        jmp    L_901e
L_8dfe:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770c20
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8e24
        or    dword ptr [esi + 0x10], ebx
        mov    edx, dword ptr [esi + 4]
        and    edx, 0xfffffff4
        or    edx, 4
        mov    dword ptr [esi + 4], edx
        jmp    L_901e
L_8e24:
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770c10
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8e4f
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffff5
        or    ecx, 5
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_901e
L_8e4f:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770c00
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8e7a
        mov    eax, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    eax, 0xfffffff6
        or    eax, 6
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], eax
        jmp    L_901e
L_8e7a:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770bf0
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8ea0
        or    dword ptr [esi + 0x10], ebx
        mov    edx, dword ptr [esi + 4]
        and    edx, 0xfffffff7
        or    edx, 7
        mov    dword ptr [esi + 4], edx
        jmp    L_901e
L_8ea0:
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770be0
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8ecb
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffff8
        or    ecx, 8
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_901e
L_8ecb:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770bd0
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8ef6
        mov    eax, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    eax, 0xfffffff9
        or    eax, 9
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], eax
        jmp    L_901e
L_8ef6:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770bbc
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8f1c
        or    dword ptr [esi + 0x10], ebx
        mov    edx, dword ptr [esi + 4]
        and    edx, 0xfffffffa
        or    edx, 0xa
        mov    dword ptr [esi + 4], edx
        jmp    L_901e
L_8f1c:
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770ba8
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8f47
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffffb
        or    ecx, 0xb
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_901e
L_8f47:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770b98
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8f72
        mov    eax, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    eax, 0xfffffffb
        or    eax, 0xb
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], eax
        jmp    L_901e
L_8f72:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770b88
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8f98
        or    dword ptr [esi + 0x10], ebx
        mov    edx, dword ptr [esi + 4]
        and    edx, 0xfffffffc
        or    edx, 0xc
        mov    dword ptr [esi + 4], edx
        jmp    L_901e
L_8f98:
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770b78
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8fc0
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffffd
        or    ecx, 0xd
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_901e
L_8fc0:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770b68
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_8fe8
        mov    eax, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    eax, 0xfffffffe
        or    eax, 0xe
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], eax
        jmp    L_901e
L_8fe8:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770b58
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_900c
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    ecx, ebx
        or    eax, ebx
        mov    dword ptr [esi + 0x10], ecx
        mov    dword ptr [esi + 4], eax
        jmp    L_901e
L_900c:
        push    0x770b48
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_901e
        int 3    
L_901e:
        mov    edx, dword ptr [ebp + 0xc]
        mov    edi, dword ptr [edx]
        push    0x770b30
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x30]
        push    0
        lea    eax, [ebp - 0xc]
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        call    FUN_00411ec0
        mov    byte ptr [ebp - 0xd], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_9060
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_9060
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_9060:
        mov    al, byte ptr [ebp - 0xd]
        test    al, al
        je    L_93ff
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        mov    eax, dword ptr [esi + 0x14]
        je    L_93f9
        or    eax, ebx
        jmp    L_93fc
L_9080:
        push    0x770b24
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x30]
        push    0
        lea    edx, [ebp - 0x14]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_00411bf0
        mov    bl, al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_90bb
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_90bb
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_90bb:
        test    bl, bl
        je    L_93ff
        mov    ecx, dword ptr [ebp - 0x14]
        mov    edi, dword ptr [g_0076b2ac]
        push    0x770b18
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        mov    ebx, 0xf
        je    L_9391
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770c50
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_9391
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770c40
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9125
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffff1
        or    ecx, 1
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_93a2
L_9125:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770b0c
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_937e
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770c30
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_937e
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770c20
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9177
        or    dword ptr [esi + 0x10], ebx
        mov    edx, dword ptr [esi + 4]
        and    edx, 0xfffffff4
        or    edx, 4
        mov    dword ptr [esi + 4], edx
        jmp    L_93a2
L_9177:
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770c10
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_91a2
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffff5
        or    ecx, 5
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_93a2
L_91a2:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770c00
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_91ca
        mov    edi, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    edi, ebx
        and    eax, 0xfffffff6
        mov    dword ptr [esi + 0x10], edi
        or    eax, 6
        jmp    L_939f
L_91ca:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770bf0
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_91f0
        or    dword ptr [esi + 0x10], ebx
        mov    edx, dword ptr [esi + 4]
        and    edx, 0xfffffff7
        or    edx, 7
        mov    dword ptr [esi + 4], edx
        jmp    L_93a2
L_91f0:
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770be0
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_921b
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffff8
        or    ecx, 8
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_93a2
L_921b:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770bd0
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9243
        mov    edi, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    edi, ebx
        and    eax, 0xfffffff9
        mov    dword ptr [esi + 0x10], edi
        or    eax, 9
        jmp    L_939f
L_9243:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770bbc
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9269
        or    dword ptr [esi + 0x10], ebx
        mov    edx, dword ptr [esi + 4]
        and    edx, 0xfffffffa
        or    edx, 0xa
        mov    dword ptr [esi + 4], edx
        jmp    L_93a2
L_9269:
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770ba8
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9294
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffffb
        or    ecx, 0xb
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_93a2
L_9294:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770b98
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_92bc
        mov    edi, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    edi, ebx
        and    eax, 0xfffffffb
        mov    dword ptr [esi + 0x10], edi
        or    eax, 0xb
        jmp    L_939f
L_92bc:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770b88
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_936d
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770b00
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        je    L_936d
        mov    eax, dword ptr [ebp - 0x14]
        push    0x770b78
        push    eax
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9313
        mov    ecx, dword ptr [esi + 4]
        mov    edi, dword ptr [esi + 0x10]
        or    edi, ebx
        and    ecx, 0xfffffffd
        or    ecx, 0xd
        mov    dword ptr [esi + 0x10], edi
        mov    dword ptr [esi + 4], ecx
        jmp    L_93a2
L_9313:
        mov    edx, dword ptr [ebp - 0x14]
        push    0x770b68
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9338
        mov    edi, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    edi, ebx
        and    eax, 0xfffffffe
        mov    dword ptr [esi + 0x10], edi
        or    eax, 0xe
        jmp    L_939f
L_9338:
        mov    ecx, dword ptr [ebp - 0x14]
        push    0x770b58
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9359
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    ecx, ebx
        mov    dword ptr [esi + 0x10], ecx
        or    eax, ebx
        jmp    L_939f
L_9359:
        push    0x770af0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_93a2
        int 3    
        jmp    L_93a2
L_936d:
        or    dword ptr [esi + 0x10], ebx
        mov    edx, dword ptr [esi + 4]
        and    edx, 0xfffffffc
        or    edx, 0xc
        mov    dword ptr [esi + 4], edx
        jmp    L_93a2
L_937e:
        mov    edi, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    edi, ebx
        and    eax, 0xfffffff2
        mov    dword ptr [esi + 0x10], edi
        or    eax, 2
        jmp    L_939f
L_9391:
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 4]
        or    ecx, ebx
        mov    dword ptr [esi + 0x10], ecx
        and    eax, 0xfffffff0
L_939f:
        mov    dword ptr [esi + 4], eax
L_93a2:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edi, dword ptr [ecx]
        push    0x770ad4
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x30]
        mov    ecx, dword ptr [ebp + 8]
        push    0
        lea    edx, [ebp - 0xc]
        push    edx
        push    eax
        call    FUN_00411ec0
        mov    byte ptr [ebp - 0xd], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_93e4
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_93e4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_93e4:
        mov    al, byte ptr [ebp - 0xd]
        test    al, al
        je    L_93ff
        mov    al, byte ptr [ebp - 0xc]
        test    al, al
        mov    eax, dword ptr [esi + 0x14]
        je    L_93f9
        or    eax, ebx
        jmp    L_93fc
L_93f9:
        and    eax, 0xfffffff0
L_93fc:
        mov    dword ptr [esi + 0x14], eax
L_93ff:
        push    0x770ac8
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x30]
        mov    ebx, dword ptr [ebp + 8]
        push    0
        lea    ecx, [ebp - 4]
        push    ecx
        push    edx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_943e
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_943e
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_943e:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_94c9
        mov    al, byte ptr [ebp - 4]
        test    al, al
        mov    ecx, dword ptr [esi]
        je    L_945a
        or    ecx, 0x10000000
        jmp    L_9460
L_945a:
        and    ecx, 0xefffffff
L_9460:
        mov    eax, dword ptr [esi + 8]
        push    0x770ab0
        mov    dword ptr [esi], ecx
        or    eax, 0x10000000
        push    edi
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [esi + 8], eax
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x30]
        push    0
        lea    eax, [ebp - 4]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_94a9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_94a9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_94a9:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_94c9
        mov    al, byte ptr [ebp - 4]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_94c1
        or    eax, 0x10000000
        jmp    L_94c6
L_94c1:
        and    eax, 0xefffffff
L_94c6:
        mov    dword ptr [esi + 0xc], eax
L_94c9:
        push    0x770aa8
        push    edi
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [ebp - 0x28], 0
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x30]
        push    0
        lea    edx, [ebp - 0x28]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_00411bf0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_950c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_950c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_950c:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_95b3
        mov    ecx, dword ptr [ebp - 0x28]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007da848]
        call    FUN_0048fac0
        test    eax, eax
        jne    L_953c
        mov    edx, dword ptr [ebp - 0x28]
        mov    ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048f380
L_953c:
        mov    ecx, dword ptr [esi + 8]
        mov    edx, dword ptr [eax + 0x1c]
        or    ecx, 0x3fff
        mov    dword ptr [esi + 8], ecx
        mov    ecx, dword ptr [esi]
        and    ecx, 0xffffc000
        or    ecx, edx
        push    0x770a94
        mov    dword ptr [esi], ecx
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x30]
        push    0
        lea    edx, [ebp - 0xd]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_9593
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_9593
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_9593:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_95b3
        mov    al, byte ptr [ebp - 0xd]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_95ab
        or    eax, 0x3fff
        jmp    L_95b0
L_95ab:
        and    eax, 0xffffc000
L_95b0:
        mov    dword ptr [esi + 0xc], eax
L_95b3:
        push    0x770a88
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x30]
        push    0
        lea    ecx, [ebp - 6]
        push    ecx
        push    edx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_95ef
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_95ef
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_95ef:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_967a
        mov    al, byte ptr [ebp - 6]
        test    al, al
        mov    ecx, dword ptr [esi]
        je    L_960b
        and    ecx, 0xffdfffff
        jmp    L_9611
L_960b:
        or    ecx, 0x200000
L_9611:
        mov    eax, dword ptr [esi + 8]
        push    0x770a70
        mov    dword ptr [esi], ecx
        or    eax, 0x200000
        push    edi
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [esi + 8], eax
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp - 0x30]
        push    0
        lea    eax, [ebp - 6]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_965a
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_965a
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_965a:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_967a
        mov    al, byte ptr [ebp - 6]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_9672
        or    eax, 0x200000
        jmp    L_9677
L_9672:
        and    eax, 0xffdfffff
L_9677:
        mov    dword ptr [esi + 0xc], eax
L_967a:
        push    0x770a64
        push    edi
        lea    ecx, [ebp - 0x30]
        mov    dword ptr [ebp - 0x24], 0
        call    FUN_004125e0
        mov    eax, dword ptr [ebp - 0x30]
        push    0
        lea    edx, [ebp - 0x24]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_00411bf0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_96bd
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_96bd
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_96bd:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_97c2
        mov    ecx, dword ptr [ebp - 0x24]
        mov    edi, dword ptr [g_0076b2ac]
        push    0x770a5c
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_96f7
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    ecx, 0xfcffffff
        or    eax, 0x3000000
        mov    dword ptr [esi], ecx
        mov    dword ptr [esi + 8], eax
        jmp    L_9761
L_96f7:
        mov    edx, dword ptr [ebp - 0x24]
        push    0x770a54
        push    edx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_9720
        mov    eax, dword ptr [esi]
        and    eax, 0xfdffffff
        or    eax, 0x1000000
        mov    dword ptr [esi], eax
        or    dword ptr [esi + 8], 0x3000000
        jmp    L_9761
L_9720:
        mov    ecx, dword ptr [ebp - 0x24]
        push    0x770a44
        push    ecx
        call    edi
        add    esp, 8
        test    eax, eax
        jne    L_974f
        mov    edx, dword ptr [esi]
        mov    eax, dword ptr [esi + 8]
        and    edx, 0xfeffffff
        or    edx, 0x2000000
        or    eax, 0x3000000
        mov    dword ptr [esi], edx
        mov    dword ptr [esi + 8], eax
        jmp    L_9761
L_974f:
        push    0x770a30
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_9761
        int 3    
L_9761:
        mov    eax, dword ptr [ebp + 0xc]
        mov    edi, dword ptr [eax]
        push    0x770a18
        push    edi
        lea    ecx, [ebp - 0x30]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp - 0x30]
        push    0
        lea    ecx, [ebp + 0xb]
        push    ecx
        push    edx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xf], al
        mov    eax, dword ptr [ebp - 0x30]
        test    eax, eax
        je    L_97a2
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_97a2
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_97a2:
        mov    al, byte ptr [ebp + 0xf]
        test    al, al
        je    L_97c2
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_97ba
        or    eax, 0x3000000
        jmp    L_97bf
L_97ba:
        and    eax, 0xfcffffff
L_97bf:
        mov    dword ptr [esi + 0xc], eax
L_97c2:
        push    0x770a08
        push    edi
        lea    ecx, [ebp + 0xc]
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp + 0xc]
        push    0
        lea    eax, [ebp - 8]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp + 0xc]
        test    eax, eax
        je    L_97fe
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_97fe
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_97fe:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_9889
        mov    al, byte ptr [ebp - 8]
        test    al, al
        mov    ecx, dword ptr [esi]
        je    L_981a
        or    ecx, 0x4000000
        jmp    L_9820
L_981a:
        and    ecx, 0xfbffffff
L_9820:
        mov    eax, dword ptr [esi + 8]
        push    0x7709ec
        mov    dword ptr [esi], ecx
        or    eax, 0x4000000
        push    edi
        lea    ecx, [ebp + 0xc]
        mov    dword ptr [esi + 8], eax
        call    FUN_004125e0
        mov    eax, dword ptr [ebp + 0xc]
        push    0
        lea    edx, [ebp - 8]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp + 0xc]
        test    eax, eax
        je    L_9869
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_9869
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_9869:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_9889
        mov    al, byte ptr [ebp - 8]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_9881
        or    eax, 0x4000000
        jmp    L_9886
L_9881:
        and    eax, 0xfbffffff
L_9886:
        mov    dword ptr [esi + 0xc], eax
L_9889:
        push    0x7709dc
        push    edi
        lea    ecx, [ebp + 0xc]
        call    FUN_004125e0
        mov    edx, dword ptr [ebp + 0xc]
        push    0
        lea    ecx, [ebp - 9]
        push    ecx
        push    edx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    byte ptr [ebp + 0xb], al
        mov    eax, dword ptr [ebp + 0xc]
        test    eax, eax
        je    L_98c5
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_98c5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_98c5:
        mov    al, byte ptr [ebp + 0xb]
        test    al, al
        je    L_9958
        mov    al, byte ptr [ebp - 9]
        test    al, al
        mov    ecx, dword ptr [esi]
        je    L_98e1
        or    ecx, 0x8000000
        jmp    L_98e7
L_98e1:
        and    ecx, 0xf7ffffff
L_98e7:
        mov    eax, dword ptr [esi + 8]
        push    0x7709c0
        mov    dword ptr [esi], ecx
        or    eax, 0x8000000
        push    edi
        lea    ecx, [ebp + 8]
        mov    dword ptr [esi + 8], eax
        call    FUN_004125e0
        mov    ecx, dword ptr [ebp + 8]
        push    0
        lea    eax, [ebp - 9]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_00411ec0
        mov    bl, al
        mov    eax, dword ptr [ebp + 8]
        test    eax, eax
        je    L_992f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_992f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_992f:
        test    bl, bl
        je    L_9958
        mov    al, byte ptr [ebp - 9]
        test    al, al
        mov    eax, dword ptr [esi + 0xc]
        je    L_9950
        or    eax, 0x8000000
        mov    dword ptr [esi + 0xc], eax
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_9950:
        and    eax, 0xf7ffffff
        mov    dword ptr [esi + 0xc], eax
L_9958:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
