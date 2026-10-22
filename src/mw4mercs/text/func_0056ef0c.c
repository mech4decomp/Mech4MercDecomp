/*
 * FUN_0056ef0c (extent 0x56ef0c-0x56f5e1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0077f670;
extern float  g_0077f688;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f23b0;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_0056ed70(void);
extern void __cdecl FUN_0056f050(void);
extern void __cdecl FUN_00580660(void);
extern void __cdecl FUN_00580e40(void);
extern void __cdecl FUN_00580fb0(void);
extern void __cdecl FUN_00581370(void);
extern void __cdecl FUN_005c77d0(void);
extern void __cdecl FUN_005dcff0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0056ef0c(void)
{
    __asm {
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
        jne    L_ef8a
        call    FUN_00566c30
        push    eax
        call    FUN_0056ed70
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 8
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        cmp    esi, edx
L_ef77:
        jb    L_ef83
        push    0
        call    FUN_00563060
        add    esp, 4
L_ef83:
        mov    dword ptr [esi], edi
        jmp    L_f026
L_ef8a:
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_eff7
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0077f688]
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005dcff0
        test    eax, eax
        jne    L_efd5
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_f020
        jmp    L_f016
L_efd5:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        mov    edi, dword ptr [eax + 0x30]
        add    esi, 4
        add    ecx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, ecx
        jmp    L_ef77
L_eff7:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_f020
L_f016:
        push    0
        call    FUN_00563060
        add    esp, 4
L_f020:
        mov    dword ptr [esi], 0xfffffffe
L_f026:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x18]
        test    esi, 0xf00000
        push    edi
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 0
        je    L_f093
        lea    eax, [esp + 0xc]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_00580e40
        add    esp, 8
        jmp    L_f183
L_f093:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_f183
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
        je    L_f183
L_f0cd:
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
        je    L_f170
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_f170
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_f170
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_f170
        mov    eax, dword ptr [g_007f23b0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_f170
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_f170
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x1c], esi
        je    L_f15f
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    eax
        call    FUN_00581370
        mov    eax, dword ptr [esp + 0x18]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x10], eax
        jmp    L_f170
L_f15f:
        push    1
        lea    edx, [esp + 0x20]
        push    edx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00580fb0
L_f170:
        mov    ecx, ebp
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_f0cd
L_f183:
        mov    esi, dword ptr [esp + 0xc]
        cmp    esi, dword ptr [esp + 0x10]
        je    L_f1b2
        mov    edi, dword ptr [esp + 0x20]
L_f191:
        mov    eax, dword ptr [g_0077f670]
        mov    ecx, dword ptr [esi]
        push    eax
        push    edi
        call    FUN_005c77d0
        cmp    al, 1
        je    L_f1ce
        mov    eax, dword ptr [esp + 0x10]
        add    esi, 4
        cmp    esi, eax
        jne    L_f191
        mov    esi, dword ptr [esp + 0xc]
L_f1b2:
        mov    ecx, dword ptr [esp + 0x14]
        sub    ecx, esi
        sar    ecx, 2
        push    ecx
        push    esi
        call    FUN_00580660
        add    esp, 8
        pop    edi
        pop    esi
        xor    al, al
        pop    ebp
        add    esp, 0xc
        ret    
L_f1ce:
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_f1df
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f1df:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebp
        add    esp, 0xc
        ret    
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
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_f295
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f275
        push    0x780460
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f275
        int 3    
L_f275:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, eax
        jmp    L_f351
L_f295:
        push    edi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_f306
        push    esi
        push    edi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0056f050
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 8
        cmp    esi, edx
        mov    bl, al
        mov    dword ptr [g_0080592c], esi
        jb    L_f2e0
        push    0
        call    FUN_00563060
        add    esp, 4
L_f2e0:
        xor    eax, eax
        test    bl, bl
        setne    al
        pop    edi
        mov    dword ptr [esi], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
L_f306:
        push    edi
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        jne    L_f380
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f334
        push    0x780444
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f334
        int 3    
L_f334:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, edx
L_f351:
        jb    L_f35d
        push    0
        call    FUN_00563060
        add    esp, 4
L_f35d:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        inc    eax
        mov    dword ptr [esi], 0
        pop    esi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        ret    
L_f380:
        mov    edx, dword ptr [g_0077f670]
        push    edx
        push    esi
        mov    ecx, eax
        call    FUN_005c77d0
        mov    esi, dword ptr [g_0080592c]
        mov    bl, al
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_f3b8
        push    0
        call    FUN_00563060
        add    esp, 4
L_f3b8:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        pop    edi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f438
        push    ecx
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_f438
        push    0x78047c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f438
        int 3    
L_f438:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        add    eax, 0xa000
        cmp    esi, eax
        jb    L_f470
        push    0
        call    FUN_00563060
        add    esp, 4
L_f470:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        mov    dword ptr [g_0080592c], ecx
        mov    cl, byte ptr [g_007dde2c]
        test    cl, cl
        je    L_f4f9
        push    eax
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_f4f9
        push    0x7804a4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f4f9
        int 3    
L_f4f9:
        mov    edx, dword ptr [g_00805928]
        push    esi
        mov    esi, dword ptr [g_0080592c]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_f523
        push    0
        call    FUN_00563060
        add    esp, 4
L_f523:
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [esi], 1
        pop    esi
        ret    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_f588
        push    ecx
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_f588
        push    0x7804d4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_f588
        int 3    
L_f588:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        add    eax, 0xa000
        cmp    esi, eax
        jb    L_f5c0
        push    0
        call    FUN_00563060
        add    esp, 4
L_f5c0:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [esi], 1
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
    }
}
