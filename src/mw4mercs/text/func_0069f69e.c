/*
 * FUN_0069f69e (extent 0x69f69e-0x69fb2e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00799b90;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f23b0;
extern int    g_007f268c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005621b0(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_00580570(void);
extern void __cdecl FUN_005805a0(void);
extern void __cdecl FUN_00580630(void);
extern void __cdecl FUN_005ca800(void);
extern void __cdecl FUN_00647ac0(void);
extern void __cdecl FUN_0064dfc0(void);
extern void __cdecl FUN_0069f260(void);
extern void __cdecl FUN_0069fb30(void);
extern void __cdecl FUN_0069fb90(void);
extern void __cdecl FUN_0069fbe0(void);
extern void __cdecl FUN_0069fc30(void);
extern void __cdecl FUN_0069fc40(void);
extern void __cdecl FUN_0069fc60(void);
extern void __cdecl FUN_0069fd30(void);
extern void __cdecl FUN_0069fd40(void);
extern void __cdecl FUN_0069fdf0(void);
extern void __cdecl FUN_006a02d0(void);
extern void __cdecl FUN_006a02e0(void);
extern void __cdecl FUN_006a0400(void);
extern void __cdecl FUN_006a04e0(void);
extern void __cdecl FUN_006a04f0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0069f69e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, 0xfa4
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
        sub    esp, 0x38
        mov    eax, dword ptr [esp + 0x40]
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x44]
        push    edi
        push    eax
        mov    ebx, ecx
        push    esi
        call    FUN_006a02d0
        fld    dword ptr [g_00799b90]
        fadd    dword ptr [ebx + 0x14]
        push    0
        fstp    dword ptr [esp + 0x50]
        call    FUN_00707e70
        fcomp    dword ptr [esp + 0x4c]
        fnstsw  ax
        test    ah, 1
        jne    L_f8cd
        push    0
        call    FUN_00707e70
        fstp    dword ptr [ebx + 0x14]
        lea    ecx, [esp + 0x4c]
        push    ecx
        lea    edx, [esp + 0x4c]
        push    edx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [ebx + 0x10], 0xfffffffe
        call    FUN_0069fb90
        lea    eax, [esp + 0x4c]
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_00580540
        lea    ecx, [esp + 0x2c]
        push    ecx
        mov    ecx, esi
        call    FUN_0064dfc0
        mov    edi, dword ptr [esp + 0x2c]
        cmp    edi, dword ptr [esp + 0x30]
        je    L_f77c
L_f732:
        mov    edx, dword ptr [edi]
        mov    esi, dword ptr [edx + 0x2fc]
        test    esi, esi
        je    L_f76d
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_f76d
        mov    ecx, esi
        call    FUN_005ca800
        test    eax, eax
        je    L_f76d
        add    eax, 0x30
        push    eax
        lea    eax, [esp + 0x50]
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_0069fc60
L_f76d:
        mov    eax, dword ptr [esp + 0x30]
        add    edi, 4
        cmp    edi, eax
        jne    L_f732
        mov    edi, dword ptr [esp + 0x2c]
L_f77c:
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        jne    L_f7e3
        mov    ecx, dword ptr [esp + 0x34]
        sub    ecx, edi
        sar    ecx, 2
        push    ecx
        push    edi
        call    FUN_00580630
        mov    eax, dword ptr [esp + 0x2c]
        add    esp, 8
        test    eax, eax
        je    L_f7d1
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [edx + 4]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00647ac0
        mov    eax, dword ptr [esp + 0x20]
        mov    dword ptr [eax + 8], eax
        mov    ecx, dword ptr [esp + 0x20]
        mov    dword ptr [ecx + 4], 0
        mov    eax, dword ptr [esp + 0x20]
        mov    dword ptr [eax + 0xc], eax
        mov    dword ptr [esp + 0x24], 0
L_f7d1:
        lea    ecx, [esp + 0x20]
        call    FUN_0069fc30
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x38
        ret    8
L_f7e3:
        lea    edx, [esp + 0x14]
        push    edx
        lea    ecx, [esp + 0x24]
        call    FUN_00580570
        mov    esi, dword ptr [eax]
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_0069fd30
        mov    edi, dword ptr [eax]
        lea    ecx, [esp + 0x4c]
        push    ecx
        lea    edx, [esp + 0x4c]
        push    edx
        lea    ecx, [esp + 0x40]
        call    FUN_0069fb90
        push    esi
        push    edi
        lea    ecx, [esp + 0x40]
        call    FUN_0069fdf0
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x3c]
        xor    esi, esi
        xor    edi, edi
        call    FUN_0069fd30
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x10], eax
        call    FUN_00580570
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0xc]
        cmp    ecx, eax
        je    L_f890
L_f851:
        lea    eax, [ecx + 0x10]
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_0069fd40
        cmp    eax, esi
        jbe    L_f86b
        mov    edx, dword ptr [esp + 0xc]
        mov    edi, dword ptr [edx + 0x10]
        mov    esi, eax
L_f86b:
        lea    eax, [esp + 0xc]
        push    eax
        call    FUN_005621b0
        add    esp, 4
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x3c]
        call    FUN_00580570
        mov    eax, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0xc]
        cmp    ecx, eax
        jne    L_f851
L_f890:
        lea    ecx, [esp + 0x38]
        call    FUN_0069fb30
        mov    eax, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x34]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [ebx + 0x10], edi
        call    FUN_005805a0
        lea    ecx, [esp + 0x20]
        call    FUN_0069fbe0
        mov    eax, dword ptr [esp + 0x20]
        push    1
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_0069fc40
L_f8cd:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x38
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
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        push    eax
        push    edx
        call    FUN_006a02e0
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
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        push    edx
        call    FUN_006a0400
        ret    0x10
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        push    esi
        mov    edi, ecx
        push    eax
        call    FUN_006a04e0
        mov    ebx, dword ptr [esi + 0x2fc]
        test    ebx, ebx
        je    L_fa00
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_fa00
        push    ebp
        push    0x10
        call    FUN_004084d0
        mov    ebp, eax
        add    esp, 4
        test    ebp, ebp
        je    L_f980
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x60]
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        push    edi
        mov    ecx, ebp
        call    FUN_0069f260
        jmp    L_f982
L_f980:
        xor    eax, eax
L_f982:
        or    eax, 1
        lea    esi, [ebx + 0x5f4]
        lea    ecx, [esp + 0x14]
        cmp    ecx, esi
        mov    edi, eax
        pop    ebp
        je    L_f9cc
        mov    ecx, dword ptr [esi]
        mov    edx, ecx
        and    edx, 1
        cmp    dl, 1
        jne    L_f9c7
        mov    eax, ecx
        and    eax, 2
        cmp    al, 2
        jne    L_f9ba
        and    ecx, 0xfffffffc
        mov    dword ptr [esi], ecx
        je    L_f9c7
        mov    edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
        jmp    L_f9c7
L_f9ba:
        and    ecx, 0xfffffffc
        mov    dword ptr [esi], ecx
        je    L_f9c7
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_f9c7:
        mov    dword ptr [esi], edi
        and    edi, 0xfffffffe
L_f9cc:
        mov    ecx, edi
        and    ecx, 1
        cmp    cl, 1
        jne    L_fa00
        mov    edx, edi
        and    edx, 2
        cmp    dl, 2
        jne    L_f9f3
        and    edi, 0xfffffffc
        mov    ecx, edi
        je    L_fa00
        mov    eax, dword ptr [ecx]
        push    3
        call    dword ptr [eax]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
L_f9f3:
        and    edi, 0xfffffffc
        je    L_fa00
        mov    edx, dword ptr [edi]
        push    1
        mov    ecx, edi
        call    dword ptr [edx]
L_fa00:
        pop    edi
        pop    esi
        pop    ebx
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    esi
        push    eax
        call    FUN_006a04f0
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_fabc
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_fabc
        add    esi, 0x5f4
        lea    ecx, [esp + 0xc]
        cmp    ecx, esi
        mov    eax, 1
        je    L_fa8a
        mov    ecx, dword ptr [esi]
        mov    edx, ecx
        and    edx, eax
        cmp    dl, al
        jne    L_fa82
        mov    eax, ecx
        and    eax, 2
        cmp    al, 2
        jne    L_fa75
        and    ecx, 0xfffffffc
        mov    dword ptr [esi], ecx
        je    L_fa82
        mov    edx, dword ptr [ecx]
        push    3
        call    dword ptr [edx]
        jmp    L_fa82
L_fa75:
        and    ecx, 0xfffffffc
        mov    dword ptr [esi], ecx
        je    L_fa82
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_fa82:
        mov    dword ptr [esi], 1
        xor    eax, eax
L_fa8a:
        mov    ecx, eax
        and    ecx, 1
        cmp    cl, 1
        jne    L_fabc
        mov    edx, eax
        and    edx, 2
        cmp    dl, 2
        jne    L_faaf
        and    eax, 0xfffffffc
        je    L_fabc
        mov    edx, dword ptr [eax]
        push    3
        mov    ecx, eax
        call    dword ptr [edx]
        pop    esi
        ret    8
L_faaf:
        and    eax, 0xfffffffc
        je    L_fabc
        mov    edx, dword ptr [eax]
        push    1
        mov    ecx, eax
        call    dword ptr [edx]
L_fabc:
        pop    esi
        ret    8
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
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x10]
        test    ecx, ecx
        jl    L_fb29
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_fb22
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        je    L_fb22
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_fb22
        pop    edi
        mov    eax, esi
        pop    esi
        ret    
L_fb22:
        mov    dword ptr [edi + 0x10], 0xfffffffe
L_fb29:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
    }
}
