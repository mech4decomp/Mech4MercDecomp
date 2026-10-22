/*
 * FUN_0057e590 (extent 0x57e590-0x57f62b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0077f674;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern char   g_007dde2c;
extern int    g_007f23d8;
extern int    g_007f268c;
extern int    g_007f2d2c;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004ebcf0(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00559b50(void);
extern void __cdecl FUN_0055b770(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_00566690(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_005670b0(void);
extern void __cdecl FUN_00567100(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_005805a0(void);
extern void __cdecl FUN_00580630(void);
extern void __cdecl FUN_00580640(void);
extern void __cdecl FUN_005809d0(void);
extern void __cdecl FUN_005810a0(void);
extern void __cdecl FUN_00581210(void);
extern void __cdecl FUN_00581300(void);
extern void __cdecl FUN_00584e30(void);
extern void __cdecl FUN_00628c80(void);
extern void __cdecl FUN_00628cc0(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_0063b370(void);
extern void __cdecl FUN_00647450(void);
extern void __cdecl FUN_006478c0(void);
extern void __cdecl FUN_0064d3d0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_00665ce0(void);
extern void __cdecl FUN_00665d40(void);
extern void __cdecl FUN_00666250(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_007047f0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0057e590(void)
{
    __asm {
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
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x14
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
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_e8c9
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        jne    L_e8c9
        push    0x781450
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_e8c9
        int 3    
L_e8c9:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        xor    edi, edi
        push    esi
        mov    dword ptr [ebp - 8], eax
        mov    dword ptr [ebp - 0x14], edi
        mov    dword ptr [ebp - 0x10], edi
        mov    dword ptr [ebp - 0xc], edi
        call    FUN_00566c30
        mov    esi, eax
        add    esp, 4
        test    esi, 0xf00000
        je    L_e920
        lea    ecx, [ebp - 0x14]
        push    ecx
        add    esi, 0xff100000
        push    esi
        call    FUN_005810a0
        add    esp, 8
        jmp    L_ea04
L_e920:
        call    FUN_00566c80
        mov    ebx, eax
        push    esi
        mov    ecx, ebx
        call    FUN_0064e600
        test    al, al
        je    L_ea04
        push    esi
        mov    ecx, ebx
        call    FUN_0064e540
        mov    edi, eax
        mov    ecx, edi
        call    FUN_0064e100
        mov    ebx, dword ptr [eax]
        mov    ecx, edi
        call    FUN_0064e100
        cmp    ebx, dword ptr [eax + 4]
        je    L_ea02
L_e95a:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [ebx]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_e9ef
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_e9ef
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_e9ef
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_e9ef
        mov    eax, dword ptr [g_007f23d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_e9ef
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_e9ef
        mov    eax, dword ptr [ebp - 0x10]
        cmp    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [ebp - 4], esi
        je    L_e9e0
        test    eax, eax
        je    L_e9d8
        mov    dword ptr [eax], esi
        mov    eax, dword ptr [ebp - 0x10]
L_e9d8:
        add    eax, 4
        mov    dword ptr [ebp - 0x10], eax
        jmp    L_e9ef
L_e9e0:
        push    1
        lea    ecx, [ebp - 4]
        push    ecx
        push    eax
        lea    ecx, [ebp - 0x14]
        call    FUN_00581210
L_e9ef:
        mov    ecx, edi
        add    ebx, 4
        call    FUN_0064e100
        cmp    ebx, dword ptr [eax + 4]
        jne    L_e95a
L_ea02:
        xor    edi, edi
L_ea04:
        mov    edx, dword ptr [ebp - 8]
        push    edx
        lea    eax, [ebp - 0x14]
        push    eax
        call    FUN_00665d40
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        add    esp, 8
        cmp    esi, ecx
        mov    bl, al
        mov    dword ptr [g_0080592c], esi
        jb    L_ea3e
        push    edi
        call    FUN_00563060
        add    esp, 4
L_ea3e:
        xor    edx, edx
        test    bl, bl
        setne    dl
        mov    dword ptr [esi], edx
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0xc]
        mov    esi, dword ptr [g_0080d9b0]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        call    FUN_00580640
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 8
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        pop    esi
        mov    dword ptr [g_00805908], edx
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
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
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        add    esp, 4
        test    al, al
        je    L_ead5
        test    esi, esi
        jne    L_ead5
        push    0x78147c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_ead5
        int 3    
L_ead5:
        mov    ecx, esi
        call    FUN_00584e30
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
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
        mov    dword ptr [esp + 0x14], edx
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
        mov    dword ptr [esp + 0x18], edx
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
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        cmp    ecx, 1
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        sete    bl
        xor    eax, ecx
        mov    esi, dword ptr [eax + 0x40]
        mov    byte ptr [esp + 0x10], bl
        mov    ecx, dword ptr [esp + 0x10]
        xor    esi, 0x85739531
        push    ecx
        mov    ecx, esi
        call    FUN_00628cc0
        test    bl, bl
        je    L_ec85
        push    0x13
        mov    ecx, esi
        call    FUN_00629290
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    esi, eax
        mov    dword ptr [esi + 0x54], edx
        cmp    dword ptr [esp + 0x18], 1
        sete    al
        mov    byte ptr [esi + 0x5c], al
        xor    eax, eax
        test    edi, edi
        mov    dword ptr [esi + 0x50], ebp
        mov    dword ptr [esi + 0x34], ecx
        je    L_ec82
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_004fcb30
L_ec82:
        mov    dword ptr [esi + 0x58], eax
L_ec85:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
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
        nop    
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
        push    esi
        inc    eax
        push    edi
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
        mov    dword ptr [esp + 0x1c], edx
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
        mov    dword ptr [esp + 0x18], edx
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
        mov    dword ptr [esp + 0x14], edx
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
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        cmp    ecx, 1
        movsx    ecx, byte ptr [eax]
        sete    bl
        inc    eax
        mov    byte ptr [esp + 0x10], bl
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    esi, dword ptr [eax + 0x40]
        mov    ecx, dword ptr [esp + 0x10]
        xor    esi, 0x85739531
        push    ecx
        mov    ecx, esi
        call    FUN_00628c80
        test    bl, bl
        je    L_ee18
        push    0x14
        mov    ecx, esi
        call    FUN_00629290
        fild    dword ptr [esp + 0x14]
        push    ebp
        push    edi
        push    ecx
        fstp    dword ptr [esp]
        push    ecx
        fild    dword ptr [esp + 0x28]
        fstp    dword ptr [esp]
        push    ecx
        fild    dword ptr [esp + 0x30]
        mov    ecx, eax
        fmul    dword ptr [g_0077f674]
        fstp    dword ptr [esp]
        call    FUN_00666250
L_ee18:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], edx
        xor    eax, eax
        pop    ebx
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
        sub    esp, 0x14
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
        push    esi
        inc    eax
        push    edi
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
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax]
        add    eax, 4
        push    2
        push    ecx
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064d3d0
        mov    eax, dword ptr [g_0080592c]
        mov    edi, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        add    esp, 8
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        sub    eax, 4
        cmp    ecx, 1
        mov    ecx, dword ptr [g_007dab40]
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [edx]
        sete    bl
        xor    eax, ecx
        mov    esi, dword ptr [eax + 0x40]
        mov    byte ptr [esp + 0x10], bl
        mov    ecx, dword ptr [esp + 0x10]
        xor    esi, 0x85739531
        push    ecx
        mov    ecx, esi
        call    FUN_00628c80
        test    bl, bl
        je    L_ef5e
        push    0x14
        mov    ecx, esi
        call    FUN_00629290
        fild    dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x1c], 0x3f666666
        mov    dword ptr [eax + 0x34], ebp
        fmul    dword ptr [g_0077f674]
        fstp    dword ptr [eax + 0x50]
        fild    dword ptr [edi]
        fild    dword ptr [edi + 4]
        fstp    dword ptr [esp + 0x1c]
        mov    edx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax + 0x18], edx
        fstp    dword ptr [eax + 0x14]
L_ef5e:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    ebx
        add    esp, 0x14
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        push    ebx
        inc    eax
        push    ebp
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
        mov    ebx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_0080592c]
        mov    ebp, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [esi]
        shl    eax, 8
        add    eax, edi
        shl    eax, 8
        add    eax, ebx
        shl    eax, 8
        add    eax, ebp
        mov    edi, eax
        mov    eax, dword ptr [g_00805928]
        add    eax, 0xa000
        cmp    esi, eax
        jb    L_f048
        push    0
        call    FUN_00563060
        add    esp, 4
L_f048:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [esi], edi
        pop    edi
        pop    esi
        inc    eax
        pop    ebp
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], ecx
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
        sub    esp, 0x70
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
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
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    ecx, dword ptr [g_0080592c]
        mov    eax, dword ptr [ecx]
        sub    ecx, 4
        cmp    eax, 1
        mov    dword ptr [g_0080592c], ecx
        mov    dword ptr [esp + 0xc], eax
        jge    L_f0dc
        mov    dword ptr [esp + 0xc], 1
L_f0dc:
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea    edx, [esp + 0x13]
        push    edx
        lea    ecx, [esp + 0x34]
        xor    bl, bl
        call    FUN_00580540
        lea    eax, [esp + 0x30]
        push    0
        push    eax
        call    FUN_0063b370
        mov    ecx, dword ptr [esp + 0x38]
        add    esp, 8
        test    eax, eax
        jle    L_f10a
        lea    ecx, [ecx + eax*4]
L_f10a:
        mov    eax, dword ptr [esp + 0x34]
        push    ecx
        push    eax
        push    eax
        call    FUN_005809d0
        mov    edx, dword ptr [esp + 0x3c]
        mov    dword ptr [esp + 0x40], eax
        sub    eax, edx
        add    esp, 0xc
        sar    eax, 2
        mov    esi, eax
        je    L_f304
L_f12e:
        call    FUN_007047f0
        xor    edx, edx
        div    esi
        mov    ebp, dword ptr [esp + 0x30]
        test    edx, edx
        jle    L_f143
        lea    ebp, [ebp + edx*4]
L_f143:
        mov    ecx, dword ptr [ebp]
        mov    eax, dword ptr [ecx + 0x2fc]
        test    eax, eax
        je    L_f2cb
        mov    edx, dword ptr [eax + 0x170]
        test    edx, edx
        je    L_f2cb
        mov    edx, dword ptr [edx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_f2cb
        mov    edx, dword ptr [eax + 0x30c]
        test    edx, edx
        je    L_f2cb
        mov    ecx, dword ptr [esp + 0x20]
        mov    esi, dword ptr [eax + 0x30c]
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_00412570
        mov    edi, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esp + 0x14]
        push    edi
        push    edx
        lea    ecx, [esp + 0x2c]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        lea    ecx, [esp + 0x24]
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0x14]
        push    0x7814a4
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_00412740
        lea    ecx, [esp + 0x28]
        call    FUN_0040d9b0
        push    0x77471c
        lea    ecx, [esp + 0x1c]
        call    FUN_00412570
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        lea    ecx, [esp + 0x34]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00412740
        lea    ecx, [esp + 0x2c]
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0x18]
        push    0
        push    eax
        lea    ecx, [esp + 0x44]
        call    FUN_004d2000
        mov    eax, dword ptr [esp + 0x78]
        test    eax, eax
        je    L_f28c
        mov    eax, dword ptr [esp + 0x58]
        test    eax, eax
        jbe    L_f28c
        mov    ecx, dword ptr [esp + 0x14]
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    ecx
        push    1
        call    FUN_004ebcf0
        mov    esi, eax
        add    esp, 0x18
        test    esi, esi
        je    L_f280
        push    0
        mov    ecx, esi
        call    FUN_004ebe90
        mov    ebx, dword ptr [g_007f2d2c]
        test    ebx, ebx
        je    L_f280
        push    edi
        call    FUN_00566690
        add    esp, 4
        push    eax
        push    esi
        mov    ecx, ebx
        call    FUN_00647450
L_f280:
        dec    dword ptr [esp + 0x1c]
        mov    bl, 1
        je    L_f36f
L_f28c:
        lea    ecx, [esp + 0x3c]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_f2b0
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f2b0
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f2b0:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_f2cb
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f2cb
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f2cb:
        mov    eax, dword ptr [esp + 0x34]
        lea    ecx, [ebp + 4]
        cmp    ecx, eax
        je    L_f2ec
        mov    edx, dword ptr [esp + 0x2c]
        push    0
        push    edx
        push    ebp
        push    eax
        push    ecx
        call    FUN_00581300
        mov    eax, dword ptr [esp + 0x48]
        add    esp, 0x14
L_f2ec:
        mov    ecx, dword ptr [esp + 0x30]
        sub    eax, 4
        mov    dword ptr [esp + 0x34], eax
        sub    eax, ecx
        mov    esi, eax
        sar    esi, 2
        jne    L_f12e
L_f304:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_f32b
        push    0
        call    FUN_00563060
        add    esp, 4
L_f32b:
        xor    ecx, ecx
        test    bl, bl
        setne    cl
        mov    dword ptr [esi], ecx
        mov    eax, dword ptr [esp + 0x30]
        mov    edx, dword ptr [esp + 0x38]
        mov    esi, dword ptr [g_0080d9b0]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        call    FUN_00580630
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    esp, 8
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        pop    esi
        pop    ebp
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        add    esp, 0x70
        ret    
L_f36f:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_f396
        push    0
        call    FUN_00563060
        add    esp, 4
L_f396:
        mov    dword ptr [esi], 1
        mov    esi, dword ptr [g_0080d9b0]
        lea    ecx, [esp + 0x3c]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_f3c6
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f3c6
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f3c6:
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_f3e1
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f3e1
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f3e1:
        mov    eax, dword ptr [esp + 0x30]
        mov    ecx, dword ptr [esp + 0x38]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [esp + 0x40]
        call    FUN_005805a0
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        pop    esi
        pop    ebp
        mov    dword ptr [g_00805908], edx
        pop    ebx
        add    esp, 0x70
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
        sub    esp, 8
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
        mov    esi, dword ptr [eax]
        sub    eax, 4
        cmp    esi, 0x74
        mov    dword ptr [g_0080592c], eax
        jne    L_f49b
        mov    ecx, dword ptr [g_007dd268]
        mov    edx, dword ptr [ecx + 0x40ee8]
        mov    ecx, dword ptr [edx + 0x48]
        test    ecx, ecx
        jne    L_f49b
        add    eax, 4
        mov    dword ptr [g_0080592c], eax
        mov    esi, eax
        jmp    L_f4fa
L_f49b:
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        je    L_f4d7
        push    esi
        call    FUN_006478c0
        push    eax
        call    FUN_005670b0
        add    esp, 4
        cmp    al, 1
        jne    L_f4d7
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, edx
        jmp    L_f506
L_f4d7:
        mov    edx, dword ptr [esi*4 + 0x7b5238]
        push    edx
        call    FUN_00567100
        add    esp, 4
        cmp    al, 1
        jne    L_f537
        mov    esi, dword ptr [g_0080592c]
        add    esi, 4
        mov    dword ptr [g_0080592c], esi
L_f4fa:
        mov    eax, dword ptr [g_00805928]
        add    eax, 0xa000
        cmp    esi, eax
L_f506:
        jb    L_f512
        push    0
        call    FUN_00563060
        add    esp, 4
L_f512:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [esi], 1
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9b0]
        mov    dword ptr [g_00805908], ecx
        pop    esi
        add    esp, 8
        ret    
L_f537:
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_00412570
        mov    eax, dword ptr [esi*4 + 0x7b5238]
        mov    edx, dword ptr [esp + 8]
        push    eax
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0xc]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_f57c
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f57c
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f57c:
        mov    eax, dword ptr [esp + 8]
        push    0x3f4ccccd
        push    0x3f000000
        push    0x3f800000
        push    0x3f800000
        push    eax
        push    1
        call    FUN_004ebcf0
        mov    edi, eax
        add    esp, 0x18
        test    edi, edi
        je    L_f5bf
        push    0
        mov    ecx, edi
        call    FUN_004ebe90
        mov    ecx, dword ptr [g_007f2d2c]
        test    ecx, ecx
        je    L_f5bf
        push    esi
        push    edi
        call    FUN_00647450
L_f5bf:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_f5e8
        push    0
        call    FUN_00563060
        add    esp, 4
L_f5e8:
        mov    dword ptr [esi], 0
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        mov    esi, dword ptr [g_0080d9b0]
        je    L_f60f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_f60f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f60f:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_00805908], edx
        pop    esi
        add    esp, 8
        ret    
    }
}
