/*
 * FUN_0057e0ed (extent 0x57e0ed-0x57e83e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0077f66c;
extern int    g_0077f670;
extern float  g_007b220c;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc690;
extern char   g_007dde2c;
extern int    g_007f1f84;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d964;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00545800(void);
extern void __cdecl FUN_00559b50(void);
extern void __cdecl FUN_0055b770(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_0057e080(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00665ce0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0057e0ed(void)
{
    __asm {
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
        push    esi
        mov    dword ptr [g_0080592c], eax
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        push    esi
        jne    L_e139
        call    FUN_00566c30
        push    eax
        call    FUN_0057e080
        add    esp, 8
        jmp    L_e154
L_e139:
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_e154
        mov    ecx, dword ptr [g_007f1f84]
        push    ecx
        mov    ecx, dword ptr [eax + 4]
        call    FUN_00415230
L_e154:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        call    FUN_00545800
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
        call    FUN_00566b60
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e24f
        mov    ecx, dword ptr [esi + 0x170]
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x60]
        cmp    dword ptr [esi + 0x570], eax
        je    L_e24f
        fld    dword ptr [esi + 0x56c]
        fcomp    dword ptr [g_0076d070]
        fnstsw  ax
        test    ah, 0x41
        jne    L_e24f
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_e247
        push    0
        call    FUN_00563060
        add    esp, 4
L_e247:
        mov    dword ptr [esi], 1
        jmp    L_e27e
L_e24f:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_e278
        push    0
        call    FUN_00563060
        add    esp, 4
L_e278:
        mov    dword ptr [esi], 0
L_e27e:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x28
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
        cmp    esi, -1
        mov    dword ptr [g_0080592c], eax
        jne    L_e2e2
        mov    esi, dword ptr [g_0080d964]
        jmp    L_e3bc
L_e2e2:
        mov    al, byte ptr [g_007dde2c]
        mov    edi, esi
        sar    edi, 0x18
        test    al, al
        je    L_e332
        test    edi, edi
        jge    L_e30c
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_e30c
        int 3    
L_e30c:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_e332
        cmp    edi, 0x12
        jl    L_e332
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_e332
        int 3    
L_e332:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    esi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_e3ab
        test    esi, esi
        jne    L_e378
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_e378
        int 3    
L_e378:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_e3ab
        mov    eax, dword ptr [g_007dc690]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_e3ab
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_e3ab
        int 3    
L_e3ab:
        test    esi, esi
        je    L_e4d0
        cmp    esi, -1
        je    L_e4d0
L_e3bc:
        test    esi, esi
        je    L_e4d0
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        mov    edx, dword ptr [g_007dab40]
        xor    eax, edx
        mov    edi, dword ptr [eax + 0x2c]
        add    eax, 0x2c
        xor    edi, 0x85739531
        je    L_e4d0
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edi, dword ptr [eax + 0x384]
        test    edi, edi
        je    L_e4d0
        mov    eax, dword ptr [esi + 0xd8]
        mov    esi, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [ebp - 0x28], esi
        mov    esi, dword ptr [eax + 0x1c]
        mov    dword ptr [ebp - 0x24], esi
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [ebp - 0x20], eax
        mov    ecx, dword ptr [ecx]
        mov    eax, dword ptr [g_0077f670]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x2c]
        xor    edx, 0x85739531
        mov    dword ptr [ebp - 4], eax
        mov    eax, dword ptr [edx + 0x384]
        mov    ecx, dword ptr [eax + 0xd8]
        add    ecx, 0x80
        push    ecx
        lea    edx, [ebp - 0x28]
        push    edx
        lea    ecx, [ebp - 0x1c]
        call    FUN_0041c830
        fld    dword ptr [ebp - 4]
        fabs    
        fstp    dword ptr [ebp - 4]
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [ebp - 0x14]
        fld    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x1c]
        faddp st(1), st(0)
        fstp    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x18]
        fadd    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0xc]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 0x10], eax
        fld    dword ptr [ebp - 0x10]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_e542
        mov    eax, dword ptr [ebp - 8]
        mov    dword ptr [ebp - 0x10], eax
        mov    eax, dword ptr [ebp - 0x10]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 8], eax
        fld    dword ptr [ebp - 8]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_e51c
        fld    dword ptr [ebp - 4]
        fcomp    dword ptr [g_0077f66c]
        fnstsw  ax
        test    ah, 1
        jne    L_e542
L_e4d0:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_e4f7
        push    0
        call    FUN_00563060
        add    esp, 4
L_e4f7:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [esi], 0
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
L_e51c:
        fld    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x14]
        fpatan    
        fabs    
        fcomp    dword ptr [ebp - 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_e4d0
        fld    dword ptr [ebp - 0x18]
        fld    dword ptr [ebp - 8]
        fpatan    
        fcomp    dword ptr [ebp - 4]
        fnstsw  ax
        test    ah, 1
        je    L_e4d0
L_e542:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_e56b
        push    0
        call    FUN_00563060
        add    esp, 4
L_e56b:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [esi], 1
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        sub    esp, 8
        inc    eax
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        test    eax, eax
        mov    dword ptr [g_0080592c], ecx
        mov    ecx, eax
        jle    L_e5c8
        lea    ecx, [eax - 1]
L_e5c8:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [g_007dab40]
        push    esi
        xor    eax, edx
        push    ecx
        mov    ecx, dword ptr [eax + 0x2c]
        xor    ecx, 0x85739531
        call    FUN_0055b770
        fadd    dword ptr [g_0076d064]
        push    0
        fstp    qword ptr [esp + 8]
        call    FUN_00707e70
        fcomp    qword ptr [esp + 4]
        mov    esi, dword ptr [g_0080592c]
        fnstsw  ax
        test    ah, 1
        je    L_e633
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_e62b
        push    0
        call    FUN_00563060
        add    esp, 4
L_e62b:
        mov    dword ptr [esi], 1
        jmp    L_e65c
L_e633:
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_e656
        push    0
        call    FUN_00563060
        add    esp, 4
L_e656:
        mov    dword ptr [esi], 0
L_e65c:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], edx
        pop    esi
        add    esp, 8
        ret    
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
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_e720
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x2c]
        xor    ecx, 0x85739531
        call    FUN_00559b50
        cmp    eax, esi
        jne    L_e720
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_e718
        push    0
        call    FUN_00563060
        add    esp, 4
L_e718:
        mov    dword ptr [esi], 1
        jmp    L_e74f
L_e720:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_e749
        push    0
        call    FUN_00563060
        add    esp, 4
L_e749:
        mov    dword ptr [esi], 0
L_e74f:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
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
        push    ecx
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        cmp    eax, -2
        mov    dword ptr [g_0080592c], ecx
        je    L_e7f3
        push    eax
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        je    L_e7f3
        push    eax
        call    FUN_00665ce0
        fstp    dword ptr [esp + 8]
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 4
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_e7e6
        push    0
        call    FUN_00563060
        add    esp, 4
L_e7e6:
        fld    dword ptr [esp + 4]
        call    FUN_0075db4a
        mov    dword ptr [esi], eax
        jmp    L_e822
L_e7f3:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_e81c
        push    0
        call    FUN_00563060
        add    esp, 4
L_e81c:
        mov    dword ptr [esi], 0
L_e822:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        pop    ecx
        ret    
    }
}
