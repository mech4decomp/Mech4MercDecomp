/*
 * FUN_00572027 (extent 0x572027-0x57244c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00779d44;
extern float  g_0078096c;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f1f70;
extern int    g_007f20f4;
extern int    g_007f23b0;
extern int    g_007f23d8;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_0080592c;
extern int    g_0080d964;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_00580640(void);
extern void __cdecl FUN_005810a0(void);
extern void __cdecl FUN_00581210(void);
extern void __cdecl FUN_00581330(void);
extern void __cdecl FUN_005c1990(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0065a180(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00572027(void)
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
        mov    eax, dword ptr [g_0080d964]
        mov    byte ptr [eax + 0x2fa], 0
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
        mov    eax, dword ptr [g_007f20f4]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_20ef
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_20e1
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_20b1
        push    0x780948
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_20b1
        int 3    
L_20b1:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_20e1
        mov    eax, dword ptr [g_007f1f70]
        mov    cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        je    L_20e1
        push    0x780924
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_20e1
        int 3    
L_20e1:
        mov    ecx, dword ptr [g_007f1f70]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x194]
L_20ef:
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [g_007f1f70]
        mov    ecx, dword ptr [ecx + 4]
        push    esi
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_212d
        mov    esi, dword ptr [g_007f1f70]
        mov    al, byte ptr [esi + 0x51c]
        test    al, al
        je    L_212d
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x104]
        test    al, al
        je    L_212d
        mov    ecx, esi
        call    FUN_005c1990
L_212d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x28
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
        mov    ecx, dword ptr [eax + 1]
        inc    eax
        add    eax, 4
        push    2
        push    ecx
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        mov    eax, dword ptr [g_0080592c]
        mov    ebx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        add    eax, 4
        push    2
        push    ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 0x10
        inc    eax
        mov    dword ptr [ebp - 0x1c], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [ebp - 0x18], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [ebp - 0x10], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        cmp    ecx, 1
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        sete    dl
        test    al, al
        mov    byte ptr [ebp - 0xc], dl
        je    L_22c9
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        jne    L_22c9
        push    0x780970
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_22c9
        int 3    
L_22c9:
        xor    eax, eax
        push    esi
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0x24], eax
        mov    dword ptr [ebp - 0x20], eax
        call    FUN_00566c30
        mov    esi, eax
        add    esp, 4
        test    esi, 0xf00000
        je    L_22ff
        lea    eax, [ebp - 0x28]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_005810a0
        add    esp, 8
        jmp    L_23ec
L_22ff:
        push    edi
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_23eb
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    esi, eax
        mov    ecx, esi
        mov    dword ptr [ebp - 8], esi
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, esi
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_23eb
L_233d:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        xor    eax, edx
        mov    edx, dword ptr [edi]
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_23d7
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_23d7
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_23d7
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_23d7
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_23d7
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_23d7
        mov    eax, dword ptr [ebp - 0x24]
        cmp    eax, dword ptr [ebp - 0x20]
        mov    dword ptr [ebp - 4], esi
        je    L_23c8
        lea    ecx, [ebp - 4]
        push    ecx
        push    eax
        call    FUN_00581330
        mov    eax, dword ptr [ebp - 0x24]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [ebp - 0x24], eax
        jmp    L_23d7
L_23c8:
        push    1
        lea    edx, [ebp - 4]
        push    edx
        push    eax
        lea    ecx, [ebp - 0x28]
        call    FUN_00581210
L_23d7:
        mov    ecx, dword ptr [ebp - 8]
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_233d
L_23eb:
        pop    edi
L_23ec:
        fild    dword ptr [ebp - 0x18]
        mov    eax, dword ptr [ebp - 0xc]
        mov    ecx, dword ptr [ebp - 0x10]
        mov    edx, dword ptr [ebp - 0x14]
        fmul    dword ptr [g_0078096c]
        push    eax
        push    ecx
        fmul    dword ptr [g_00779d44]
        push    edx
        call    FUN_0075db4a
        push    eax
        mov    eax, dword ptr [ebp - 0x1c]
        push    eax
        lea    ecx, [ebp - 0x28]
        push    ebx
        push    ecx
        call    FUN_0065a180
        mov    eax, dword ptr [ebp - 0x28]
        mov    edx, dword ptr [ebp - 0x20]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        call    FUN_00580640
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 0x24
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
