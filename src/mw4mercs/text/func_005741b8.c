/*
 * FUN_005741b8 (extent 0x5741b8-0x5749f2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dde2c;
extern int    g_007f1f70;
extern int    g_007f20f4;
extern int    g_007f23b0;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d964;
extern int    g_0080d9b0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_005c1770(void);
extern void __cdecl FUN_005c17e0(void);
extern void __cdecl FUN_005c1990(void);
extern void __cdecl FUN_005c19e0(void);
extern void __cdecl FUN_0064c950(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_005741b8(void)
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
        push    ecx
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
        cmp    ecx, 1
        sete    dl
        push    -1
        mov    dword ptr [g_0080592c], eax
        mov    byte ptr [esp + 8], dl
        call    FUN_00566b60
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_424f
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_422d
        push    0
        call    FUN_00563060
        add    esp, 4
L_422d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 0
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        pop    ecx
        ret    
L_424f:
        push    edi
        lea    edi, [esi + 0x1c8]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_42b1
        mov    ecx, edi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_42b1
        mov    edi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    edi, 4
        add    eax, 0xa000
        cmp    edi, eax
        mov    dword ptr [g_0080592c], edi
        jb    L_429d
        push    0
        call    FUN_00563060
        add    esp, 4
L_429d:
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [edi], 0
        call    FUN_005c1770
        jmp    L_42e0
L_42b1:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_42da
        push    0
        call    FUN_00563060
        add    esp, 4
L_42da:
        mov    dword ptr [esi], 1
L_42e0:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
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
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    ecx, 1
        mov    dword ptr [g_0080592c], eax
        sete    al
        push    -1
        mov    byte ptr [esp + 0xc], al
        call    FUN_00566b60
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_43a3
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, ecx
L_438c:
        jb    L_4398
        push    0
        call    FUN_00563060
        add    esp, 4
L_4398:
        mov    dword ptr [esi], 0
        jmp    L_443a
L_43a3:
        cmp    edi, 0x7d0
        jne    L_43b9
        mov    eax, dword ptr [esp + 8]
        push    eax
        mov    ecx, esi
        call    FUN_005c1770
        jmp    L_43c8
L_43b9:
        mov    ecx, dword ptr [esp + 8]
        push    1
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_005c17e0
L_43c8:
        add    esi, 0x1c8
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_440b
        mov    ecx, esi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_440b
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, eax
        jmp    L_438c
L_440b:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_4434
        push    0
        call    FUN_00563060
        add    esp, 4
L_4434:
        mov    dword ptr [esi], 1
L_443a:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        pop    esi
        pop    ecx
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
        mov    eax, dword ptr [g_00805928]
        push    esi
        mov    esi, dword ptr [g_0080592c]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_4488
        push    0
        call    FUN_00563060
        add    esp, 4
L_4488:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 1
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
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [g_0080d964]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_44eb
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_44f6
        push    0x780ca0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_44f6
        int 3    
        jmp    L_44f6
L_44eb:
        mov    ecx, dword ptr [g_0080d964]
        call    FUN_005c1990
L_44f6:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
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
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_007f20f4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_459d
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_457c
        push    0
        call    FUN_00563060
        add    esp, 4
L_457c:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 1
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
L_459d:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_4607
        mov    eax, dword ptr [g_007f20f4]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_45d6
        push    0x780cf4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_45d6
        int 3    
L_45d6:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_4607
        mov    edx, dword ptr [g_007f1f70]
        mov    al, byte ptr [edx + 0x2f9]
        test    al, al
        je    L_4607
        push    0x780cd0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4607
        int 3    
L_4607:
        mov    ecx, dword ptr [g_007f1f70]
        mov    eax, dword ptr [ecx]
        push    ebx
        push    esi
        call    dword ptr [eax + 0x1ec]
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    bl, al
        mov    dword ptr [g_0080592c], esi
        jb    L_4642
        push    0
        call    FUN_00563060
        add    esp, 4
L_4642:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        xor    edx, edx
        test    bl, bl
        setne    dl
        inc    eax
        pop    ebx
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [esi], edx
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
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_46d9
        mov    eax, dword ptr [g_007f20f4]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_46a9
        push    0x780d18
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_46a9
        int 3    
L_46a9:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_46d9
        mov    eax, dword ptr [g_007f1f70]
        mov    cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        je    L_46d9
        push    0x780cd0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_46d9
        int 3    
L_46d9:
        mov    ecx, dword ptr [g_007f1f70]
        mov    edx, dword ptr [ecx]
        push    ebx
        push    esi
        call    dword ptr [edx + 0x1f0]
        mov    esi, dword ptr [g_0080592c]
        mov    bl, al
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_4712
        push    0
        call    FUN_00563060
        add    esp, 4
L_4712:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [esi], ecx
        pop    esi
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
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_47a9
        mov    eax, dword ptr [g_007f20f4]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_4779
        push    0x780d5c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4779
        int 3    
L_4779:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_47a9
        mov    eax, dword ptr [g_007f1f70]
        mov    cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        je    L_47a9
        push    0x780d38
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_47a9
        int 3    
L_47a9:
        mov    ecx, dword ptr [g_007f1f70]
        mov    edx, dword ptr [ecx]
        push    ebx
        push    esi
        call    dword ptr [edx + 0x1f4]
        mov    esi, dword ptr [g_0080592c]
        mov    bl, al
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_47e2
        push    0
        call    FUN_00563060
        add    esp, 4
L_47e2:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [esi], ecx
        pop    esi
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
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_4879
        mov    eax, dword ptr [g_007f20f4]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_4849
        push    0x780dac
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4849
        int 3    
L_4849:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_4879
        mov    eax, dword ptr [g_007f1f70]
        mov    cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        je    L_4879
        push    0x780d84
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4879
        int 3    
L_4879:
        mov    ecx, dword ptr [g_007f1f70]
        mov    edx, dword ptr [ecx]
        push    ebx
        push    esi
        call    dword ptr [edx + 0x1f8]
        mov    esi, dword ptr [g_0080592c]
        mov    bl, al
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_48b2
        push    0
        call    FUN_00563060
        add    esp, 4
L_48b2:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [esi], ecx
        pop    esi
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0xc
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        add    eax, 4
        push    2
        push    ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        push    eax
        call    FUN_0064c950
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        fild    dword ptr [eax + 8]
        sub    ecx, 4
        fild    dword ptr [eax + 4]
        add    esp, 0xc
        fild    dword ptr [eax]
        mov    eax, dword ptr [g_00805918]
        inc    eax
        mov    dword ptr [g_0080592c], ecx
        fstp    dword ptr [ebp - 0xc]
        mov    dword ptr [g_00805918], eax
        fstp    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 4]
        movsx    edx, byte ptr [eax - 1]
        mov    dword ptr [g_00805908], edx
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    esi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_49c7
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_4997
        push    0x780dfc
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_4997
        int 3    
L_4997:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_49c7
        mov    eax, dword ptr [g_007f1f70]
        mov    cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        je    L_49c7
        push    0x780dd4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_49c7
        int 3    
L_49c7:
        push    esi
        lea    ecx, [ebp - 0xc]
        push    ecx
        mov    ecx, dword ptr [g_007f1f70]
        call    FUN_005c19e0
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
