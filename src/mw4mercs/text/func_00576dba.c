/*
 * FUN_00576dba (extent 0x576dba-0x57744c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc690;
extern char   g_007dde2c;
extern int    g_007f20d0;
extern char   g_007f23dc;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d964;
extern int    g_0080d9b0;
extern int    g_0080d9bc;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_0055b630(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_00566b60(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_00580560(void);
extern void __cdecl FUN_005acf50(void);
extern void __cdecl FUN_005acfa0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_00576dba(void)
{
    __asm {
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
        mov    edx, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        mov    edi, dword ptr [esi]
        add    edx, 0xa000
        cmp    esi, edx
        jb    L_6dff
        push    0
        call    FUN_00563060
        add    esp, 4
L_6dff:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    edi, 0x9000000
        mov    dword ptr [esi], edi
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x24
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
        mov    edx, dword ptr [eax]
        sub    eax, 4
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [g_0080592c], eax
        fild    dword ptr [ebp - 0xc]
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        fstp    dword ptr [ebp - 8]
        je    L_6eea
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        je    L_6eea
        push    0x7811f8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_6eea
        int 3    
L_6eea:
        push    esi
        call    FUN_00566c30
        mov    esi, eax
        add    esp, 4
        lea    eax, [ebp - 1]
        push    eax
        lea    ecx, [ebp - 0x18]
        call    FUN_00580540
        push    0
        lea    ecx, [ebp - 0x18]
        push    ecx
        push    esi
        call    FUN_00566ef0
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0x18]
        mov    edx, ecx
        sub    edx, eax
        add    esp, 0xc
        test    edx, 0xfffffffc
        jne    L_6f42
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, eax
        jmp    L_7119
L_6f42:
        cmp    eax, ecx
        mov    edi, eax
        mov    dword ptr [ebp - 0xc], edi
        je    L_712d
L_6f4f:
        push    ebx
        call    FUN_00566bf0
        add    esp, 4
        cmp    al, 1
        jne    L_6fb5
        lea    edx, [ebp - 1]
        push    edx
        lea    ecx, [ebp - 0x24]
        call    FUN_00580540
        push    0
        lea    eax, [ebp - 0x24]
        push    eax
        push    ebx
        call    FUN_00566ef0
        mov    esi, dword ptr [ebp - 0x24]
        mov    eax, dword ptr [ebp - 0x20]
        add    esp, 0xc
        cmp    esi, eax
        je    L_6fa8
        mov    edi, dword ptr [edi]
L_6f83:
        mov    eax, dword ptr [ebp - 8]
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [edi]
        push    1
        push    eax
        push    ecx
        mov    ecx, edi
        call    dword ptr [edx + 0x5c]
        test    al, al
        je    L_70bf
        mov    eax, dword ptr [ebp - 0x20]
        add    esi, 4
        cmp    esi, eax
        jne    L_6f83
        mov    edi, dword ptr [ebp - 0xc]
L_6fa8:
        lea    ecx, [ebp - 0x24]
        call    FUN_00580560
        jmp    L_70ad
L_6fb5:
        cmp    ebx, -1
        jne    L_6fc5
        mov    esi, dword ptr [g_0080d964]
        jmp    L_7097
L_6fc5:
        mov    al, byte ptr [g_007dde2c]
        mov    esi, ebx
        sar    esi, 0x18
        test    al, al
        je    L_7015
        test    esi, esi
        jge    L_6fef
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_6fef
        int 3    
L_6fef:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_7015
        cmp    esi, 0x12
        jl    L_7015
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_7015
        int 3    
L_7015:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x10]
        push    ebx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_708e
        test    esi, esi
        jne    L_705b
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_705b
        int 3    
L_705b:
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_708e
        mov    eax, dword ptr [g_007dc690]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_708e
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_708e
        int 3    
L_708e:
        test    esi, esi
        je    L_70fc
        cmp    esi, -1
        je    L_70fc
L_7097:
        test    esi, esi
        je    L_70fc
        mov    edx, dword ptr [ebp - 8]
        mov    ecx, dword ptr [edi]
        mov    eax, dword ptr [ecx]
        push    1
        push    edx
        push    esi
        call    dword ptr [eax + 0x5c]
        test    al, al
        je    L_70fc
L_70ad:
        mov    eax, dword ptr [ebp - 0x14]
        add    edi, 4
        cmp    edi, eax
        mov    dword ptr [ebp - 0xc], edi
        je    L_712d
        jmp    L_6f4f
L_70bf:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_70e6
        push    0
        call    FUN_00563060
        add    esp, 4
L_70e6:
        mov    dword ptr [esi], 0
        mov    esi, dword ptr [g_0080d9b0]
        lea    ecx, [ebp - 0x24]
        call    FUN_00580560
        jmp    L_7162
L_70fc:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        mov    dword ptr [g_0080592c], esi
        cmp    esi, edx
L_7119:
        jb    L_7125
        push    0
        call    FUN_00563060
        add    esp, 4
L_7125:
        mov    dword ptr [esi], 0
        jmp    L_715c
L_712d:
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_7156
        push    0
        call    FUN_00563060
        add    esp, 4
L_7156:
        mov    dword ptr [esi], 1
L_715c:
        mov    esi, dword ptr [g_0080d9b0]
L_7162:
        lea    ecx, [ebp - 0x18]
        call    FUN_00580560
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
        mov    dword ptr [g_00805918], eax
        mov    eax, esi
        pop    esi
        mov    dword ptr [g_00805908], ecx
        pop    ebx
        mov    esp, ebp
        pop    ebp
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
        push    esi
        inc    eax
        push    edi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_00805928]
        mov    esi, dword ptr [g_0080592c]
        mov    edi, dword ptr [esi]
        add    edx, 0xa000
        cmp    esi, edx
        jb    L_71cf
        push    0
        call    FUN_00563060
        add    esp, 4
L_71cf:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        add    edi, 0x9f00000
        mov    dword ptr [esi], edi
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    edx, dword ptr [g_007dab44]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [edx]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [eax + 0x18]
        xor    ecx, 0x85739531
        mov    esi, dword ptr [ecx + 0x178]
        mov    al, byte ptr [esi + 0x589]
        test    al, al
        jne    L_7250
        mov    ecx, dword ptr [g_007f20d0]
        call    FUN_005acf50
        push    1
        mov    ecx, esi
        call    FUN_0055b630
L_7250:
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        mov    dword ptr [g_00805908], ecx
        mov    ecx, dword ptr [g_007f20d0]
        inc    eax
        mov    dword ptr [g_00805918], eax
        call    FUN_005acfa0
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x18]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x178]
        push    0
        call    FUN_0055b630
        mov    byte ptr [g_007f23dc], 0
        xor    eax, eax
        ret    
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
        mov    eax, dword ptr [g_00805918]
        cmp    ecx, 1
        movsx    ecx, byte ptr [eax]
        sete    dl
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    byte ptr [g_007f23dc], dl
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        ret    
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
        call    FUN_00566b60
        add    esp, 4
        test    eax, eax
        je    L_736d
        cmp    edi, 1
        sete    cl
        mov    byte ptr [eax + 0x6a1], cl
L_736d:
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
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax + 1]
        inc    eax
        inc    eax
        push    esi
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        mov    esi, 4
        sub    edx, esi
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805918]
        mov    edx, dword ptr [g_0080592c]
        movsx    ecx, byte ptr [eax]
        sub    edx, esi
        inc    eax
        mov    dword ptr [g_0080592c], edx
        mov    dword ptr [g_00805908], ecx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    edx, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805918]
        sub    edx, esi
        mov    dword ptr [g_0080592c], edx
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805908], edx
        mov    dword ptr [g_00805918], eax
        call    FUN_0064db40
        mov    eax, dword ptr [g_00805918]
        mov    edx, dword ptr [g_0080592c]
        movsx    ecx, byte ptr [eax]
        sub    edx, esi
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    dword ptr [g_0080592c], edx
        mov    dword ptr [g_00805908], ecx
        xor    eax, eax
        pop    esi
        ret    
    }
}
