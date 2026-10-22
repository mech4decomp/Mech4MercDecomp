/*
 * FUN_0056d322 (extent 0x56d322-0x56d9ab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077f684;
extern int    g_007dab40;
extern int    g_007dab44;
extern char   g_007dde2c;
extern int    g_007f23d8;
extern int    g_007f24d8;
extern int    g_007f25c0;
extern int    g_007f268c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566b00(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_0056d1c0(void);
extern void __cdecl FUN_0056d560(void);
extern void __cdecl FUN_005805c0(void);
extern void __cdecl FUN_005805e0(void);
extern void __cdecl FUN_00580650(void);
extern void __cdecl FUN_00580a00(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_005dbb00(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0056d322(void)
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        push    esi
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
        jne    L_d379
        call    FUN_00566c30
        push    eax
        call    FUN_0056d1c0
        add    esp, 8
        xor    eax, eax
        pop    esi
        ret    
L_d379:
        call    FUN_00566b00
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d3ef
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d3e5
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_d3ba
        push    0x780374
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d3ba
        int 3    
L_d3ba:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_d3e5
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_d3e5
        push    0x780348
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d3e5
        int 3    
L_d3e5:
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1c4]
L_d3ef:
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
        push    ecx
        mov    dword ptr [g_0080592c], eax
        call    FUN_005669d0
        add    esp, 4
        mov    ecx, eax
        call    FUN_005dbb00
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
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
        je    L_d4b9
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_d4b9
        push    0x7803a0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_d4b9
        int 3    
L_d4b9:
        push    esi
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d516
        mov    eax, dword ptr [g_007f25c0]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_d516
        mov    edx, dword ptr [g_00805928]
        push    ebx
        mov    bl, byte ptr [esi + 0x2f8]
        mov    esi, dword ptr [g_0080592c]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_d50a
        push    0
        call    FUN_00563060
        add    esp, 4
L_d50a:
        xor    eax, eax
        test    bl, bl
        setne    al
        pop    ebx
        mov    dword ptr [esi], eax
        jmp    L_d545
L_d516:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_d53f
        push    0
        call    FUN_00563060
        add    esp, 4
L_d53f:
        mov    dword ptr [esi], 0
L_d545:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
        sub    esp, 0x14
        push    ebp
        push    esi
        push    edi
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x13]
        push    ecx
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x1c], 0
        mov    dword ptr [esp + 0x20], 0
        mov    dword ptr [esp + 0x18], 0
        call    FUN_005805c0
        mov    esi, dword ptr [esp + 0x24]
        test    esi, 0xf00000
        je    L_d5b6
        lea    edx, [esp + 0x14]
        push    edx
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_d67e
L_d5b6:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_d67e
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
        je    L_d67e
L_d5f0:
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
        test    esi, esi
        je    L_d66b
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_d66b
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_d66b
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_d66b
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_d66b
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_d66b
        lea    eax, [esp + 0x24]
        push    eax
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x28], esi
        call    FUN_00580a00
L_d66b:
        mov    ecx, ebp
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_d5f0
L_d67e:
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, dword ptr [esp + 0x18]
        mov    ebp, eax
        je    L_d786
L_d68e:
        mov    edi, dword ptr [ebp]
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0077f684]
        fld    dword ptr [edi + 0x1d8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_d72a
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx]
        xor    eax, edx
        mov    edx, dword ptr [eax + 0x10]
        xor    edx, 0x85739531
        je    L_d72a
        mov    ecx, dword ptr [edi + 0x1d4]
        cmp    ecx, -1
        je    L_d72a
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_d72a
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_d72a
        mov    ecx, dword ptr [edi + 0x170]
        cmp    esi, ecx
        je    L_d72a
        test    ecx, ecx
        je    L_d73a
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        mov    edx, eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], edx
        call    dword ptr [eax + 0x60]
        mov    ecx, dword ptr [esp + 0x24]
        cmp    eax, ecx
        jne    L_d73a
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0xc8]
        cmp    al, 1
        jne    L_d73a
L_d72a:
        mov    eax, dword ptr [esp + 0x18]
        add    ebp, 4
        cmp    ebp, eax
        je    L_d786
        jmp    L_d68e
L_d73a:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_d761
        push    0
        call    FUN_00563060
        add    esp, 4
L_d761:
        mov    dword ptr [esi], 1
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_005805e0
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x14
        ret    
L_d786:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_d7af
        push    0
        call    FUN_00563060
        add    esp, 4
L_d7af:
        mov    dword ptr [esi], 0
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        call    FUN_00580650
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
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
        jne    L_d82d
        call    FUN_00566c30
        push    eax
        call    FUN_0056d560
        add    esp, 8
        jmp    L_d98f
L_d82d:
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_d960
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        je    L_d871
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_d989
        jmp    L_d97f
L_d871:
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0077f684]
        fld    dword ptr [esi + 0x1d8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_d93f
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        je    L_d93f
        mov    ecx, dword ptr [esi + 0x1d4]
        cmp    ecx, -1
        je    L_d93f
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        test    eax, eax
        je    L_d93f
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_d93f
        mov    edi, dword ptr [esi + 0x170]
        cmp    eax, edi
        je    L_d93f
        test    edi, edi
        je    L_d910
        mov    edx, dword ptr [eax]
        push    ebx
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x60]
        cmp    ebx, eax
        pop    ebx
        jne    L_d910
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xc8]
        cmp    al, 1
        je    L_d93f
L_d910:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_d937
        push    0
        call    FUN_00563060
        add    esp, 4
L_d937:
        mov    dword ptr [esi], 1
        jmp    L_d98f
L_d93f:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_d989
        jmp    L_d97f
L_d960:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_d989
L_d97f:
        push    0
        call    FUN_00563060
        add    esp, 4
L_d989:
        mov    dword ptr [esi], 0
L_d98f:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        ret    
    }
}
