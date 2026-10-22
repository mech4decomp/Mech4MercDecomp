/*
 * FUN_00568488 (extent 0x568488-0x568c1b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077f684;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f24d8;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_00568290(void);
extern void __cdecl FUN_00568320(void);
extern void __cdecl FUN_00568790(void);
extern void __cdecl FUN_005805c0(void);
extern void __cdecl FUN_005805e0(void);
extern void __cdecl FUN_00580650(void);
extern void __cdecl FUN_00580a00(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_00568488(void)
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
        mov    edi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_851d
        push    edi
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_00568320
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 8
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
L_851d:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_85ec
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_8560
        mov    eax, dword ptr [esi + 0x170]
        test    eax, eax
        je    L_8560
        cmp    dword ptr [eax + 0x30], edi
        jne    L_8560
        push    0x77f958
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8560
        int 3    
L_8560:
        mov    edx, dword ptr [esi + 0x170]
        cmp    dword ptr [edx + 0x30], edi
        jne    L_8584
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
L_8584:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_85e2
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_85b7
        push    0x77f930
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_85b7
        int 3    
L_85b7:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_85e2
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_85e2
        push    0x77f908
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_85e2
        int 3    
L_85e2:
        push    edi
        push    esi
        call    FUN_00568290
        add    esp, 8
L_85ec:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
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
        je    L_8669
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_8669
        push    0x77f9cc
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8669
        int 3    
L_8669:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_873a
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_86da
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_86af
        push    0x77f9a8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_86af
        int 3    
L_86af:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_86da
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_86da
        push    0x77f980
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_86da
        int 3    
L_86da:
        lea    ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        test    eax, eax
        jne    L_870a
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_8763
        jmp    L_8759
L_870a:
        mov    esi, dword ptr [g_0080592c]
        push    edi
        mov    edi, dword ptr [eax + 0x30]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_8735
        push    0
        call    FUN_00563060
        add    esp, 4
L_8735:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_8769
L_873a:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_8763
L_8759:
        push    0
        call    FUN_00563060
        add    esp, 4
L_8763:
        mov    dword ptr [esi], 0xfffffffe
L_8769:
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
        nop    
        nop    
        nop    
        sub    esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x17]
        xor    ebx, ebx
        push    ecx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x20], ebx
        mov    dword ptr [esp + 0x24], ebx
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_005805c0
        mov    esi, dword ptr [esp + 0x28]
        test    esi, 0xf00000
        je    L_87dd
        lea    edx, [esp + 0x18]
        push    edx
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_88a3
L_87dd:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_88a3
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    ebp, eax
        mov    ecx, ebp
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, ebp
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_88a3
L_8817:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [edi]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        cmp    esi, ebx
        je    L_8890
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_8890
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_8890
        mov    esi, dword ptr [esi + 0x2fc]
        cmp    esi, ebx
        je    L_8890
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_8890
        cmp    byte ptr [esi + 0x2f9], bl
        jne    L_8890
        lea    eax, [esp + 0x28]
        push    eax
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x2c], esi
        call    FUN_00580a00
L_8890:
        mov    ecx, ebp
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_8817
L_88a3:
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [esp + 0x1c]
        mov    ebp, eax
        je    L_89a3
L_88b3:
        mov    edi, dword ptr [ebp]
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0077f684]
        fld    dword ptr [edi + 0x1d8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_8947
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx]
        xor    eax, edx
        mov    edx, dword ptr [eax + 0x10]
        xor    edx, 0x85739531
        je    L_8947
        mov    ecx, dword ptr [edi + 0x1d4]
        cmp    ecx, -1
        je    L_8947
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_8947
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_8947
        mov    ecx, dword ptr [edi + 0x170]
        cmp    esi, ecx
        je    L_8947
        test    ecx, ecx
        je    L_8957
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x60]
        cmp    eax, ebx
        jne    L_8957
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0xc8]
        cmp    al, 1
        jne    L_8957
L_8947:
        mov    eax, dword ptr [esp + 0x1c]
        add    ebp, 4
        cmp    ebp, eax
        je    L_89a3
        jmp    L_88b3
L_8957:
        mov    edi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        mov    esi, dword ptr [esi + 0x30]
        add    edi, 4
        add    eax, 0xa000
        cmp    edi, eax
        mov    dword ptr [g_0080592c], edi
        jb    L_8981
        push    0
        call    FUN_00563060
        add    esp, 4
L_8981:
        mov    dword ptr [edi], esi
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x20]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_005805e0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
        ret    
L_89a3:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_89cc
        push    0
        call    FUN_00563060
        add    esp, 4
L_89cc:
        mov    dword ptr [esi], 0xfffffffe
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x20]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        call    FUN_00580650
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
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
        nop    
        nop    
        nop    
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
        mov    esi, dword ptr [eax]
        sub    eax, 4
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        push    esi
        jne    L_8a4d
        call    FUN_00566c30
        push    eax
        call    FUN_00568790
        add    esp, 8
        jmp    L_8bff
L_8a4d:
        call    FUN_005669d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_8bd2
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_8abd
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_8a92
        push    0x77fa14
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8a92
        int 3    
L_8a92:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_8abd
        mov    al, byte ptr [edi + 0x2f9]
        test    al, al
        je    L_8abd
        push    0x77f9f0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_8abd
        int 3    
L_8abd:
        cmp    byte ptr [edi + 0x2f9], 1
        jne    L_8aee
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_8bf9
        jmp    L_8bef
L_8aee:
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0077f684]
        fld    dword ptr [edi + 0x1d8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_8b81
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        je    L_8b81
        mov    ecx, dword ptr [edi + 0x1d4]
        cmp    ecx, -1
        je    L_8b81
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_8b81
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_8b81
        mov    ecx, dword ptr [edi + 0x170]
        cmp    esi, ecx
        je    L_8b81
        test    ecx, ecx
        je    L_8ba2
        mov    eax, dword ptr [ecx]
        push    ebx
        call    dword ptr [eax + 0x60]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    ebx, eax
        call    dword ptr [edx + 0x60]
        cmp    eax, ebx
        pop    ebx
        jne    L_8ba2
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0xc8]
        cmp    al, 1
        jne    L_8ba2
L_8b81:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_8bf9
        jmp    L_8bef
L_8ba2:
        mov    edi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        mov    esi, dword ptr [esi + 0x30]
        add    edi, 4
        add    edx, 0xa000
        cmp    edi, edx
        mov    dword ptr [g_0080592c], edi
        jb    L_8bce
        push    0
        call    FUN_00563060
        add    esp, 4
L_8bce:
        mov    dword ptr [edi], esi
        jmp    L_8bff
L_8bd2:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_8bf9
L_8bef:
        push    0
        call    FUN_00563060
        add    esp, 4
L_8bf9:
        mov    dword ptr [esi], 0xfffffffe
L_8bff:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
    }
}
