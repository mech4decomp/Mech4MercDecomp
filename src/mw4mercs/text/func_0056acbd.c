/*
 * FUN_0056acbd (extent 0x56acbd-0x56b209) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

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
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_0056ac20(void);
extern void __cdecl FUN_005805c0(void);
extern void __cdecl FUN_00580a00(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_005dbbd0(void);
extern void __cdecl FUN_005dbd60(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0056acbd(void)
{
    __asm {
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
        jne    L_ad36
        push    edi
        push    esi
        call    FUN_00566c30
        add    esp, 4
        push    eax
        call    FUN_0056ac20
        add    esp, 8
        jmp    L_ad98
L_ad36:
        push    esi
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        jne    L_ad75
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_ad6d
        push    eax
        call    FUN_00563060
        add    esp, 4
L_ad6d:
        mov    dword ptr [esi], 0
        jmp    L_ad98
L_ad75:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x60]
        cmp    eax, edi
        je    L_ad98
        mov    ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        mov    dword ptr [esi + 0x140], edi
        je    L_ad98
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0xec]
L_ad98:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
        pop    edi
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
        je    L_ae19
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_ae19
        push    0x77fd2c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ae19
        int 3    
L_ae19:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ae93
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_ae5b
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_ae5b
        push    0x77fd00
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ae5b
        int 3    
L_ae5b:
        push    edi
        mov    ecx, esi
        call    FUN_005dbbd0
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_ae8e
        push    0
        call    FUN_00563060
        add    esp, 4
L_ae8e:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_aec0
L_ae93:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_aeba
        push    0
        call    FUN_00563060
        add    esp, 4
L_aeba:
        mov    dword ptr [esi], 0
L_aec0:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
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
        je    L_af39
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_af39
        push    0x77fd84
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_af39
        int 3    
L_af39:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_afb3
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_af7b
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_af7b
        push    0x77fd58
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_af7b
        int 3    
L_af7b:
        push    edi
        mov    ecx, esi
        call    FUN_005dbd60
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    edi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_afae
        push    0
        call    FUN_00563060
        add    esp, 4
L_afae:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_afe0
L_afb3:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_afda
        push    0
        call    FUN_00563060
        add    esp, 4
L_afda:
        mov    dword ptr [esi], 0
L_afe0:
        mov    eax, dword ptr [g_00805918]
        movsx    ecx, byte ptr [eax]
        inc    eax
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x14
        push    ebx
        xor    eax, eax
        push    esi
        push    edi
        mov    dword ptr [ebp - 0x14], eax
        mov    dword ptr [ebp - 0x10], eax
        mov    dword ptr [ebp - 8], eax
        lea    eax, [ebp - 8]
        push    eax
        lea    ecx, [ebp - 1]
        push    ecx
        lea    ecx, [ebp - 0xc]
        call    FUN_005805c0
        mov    esi, dword ptr [ebp + 8]
        test    esi, 0xf00000
        je    L_b047
        lea    edx, [ebp - 0x14]
        push    edx
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_b10c
L_b047:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_b10c
        push    esi
        mov    ecx, edi
        call    FUN_0064e540
        mov    ebx, eax
        mov    ecx, ebx
        call    FUN_0064e100
        mov    edi, dword ptr [eax]
        mov    ecx, ebx
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        je    L_b10c
L_b081:
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
        je    L_b0f9
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_b0f9
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_b0f9
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_b0f9
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_b0f9
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_b0f9
        lea    eax, [ebp + 8]
        push    eax
        lea    ecx, [ebp - 0x14]
        mov    dword ptr [ebp + 8], esi
        call    FUN_00580a00
L_b0f9:
        mov    ecx, ebx
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_b081
L_b10c:
        mov    esi, dword ptr [ebp - 0x14]
        cmp    esi, dword ptr [ebp - 0x10]
        je    L_b1f5
        mov    edi, dword ptr [ebp + 0x14]
        mov    ebx, dword ptr [ebp + 0x10]
L_b11e:
        mov    ecx, dword ptr [ebp + 0xc]
        cmp    ecx, -1
        je    L_b164
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_b156
        mov    edx, dword ptr [esi]
        mov    al, byte ptr [edx + 0x2f9]
        test    al, al
        jne    L_b156
        push    0x77fe1c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_b153
        int 3    
L_b153:
        mov    ecx, dword ptr [ebp + 0xc]
L_b156:
        mov    eax, dword ptr [esi]
        mov    dword ptr [eax + 0x180], ecx
        mov    dword ptr [eax + 0x1b0], ecx
L_b164:
        cmp    ebx, -1
        je    L_b1a4
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_b196
        mov    eax, dword ptr [esi]
        mov    cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        jne    L_b196
        push    0x77fde4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_b196
        int 3    
L_b196:
        mov    eax, dword ptr [esi]
        mov    dword ptr [eax + 0x17c], ebx
        mov    dword ptr [eax + 0x1ac], ebx
L_b1a4:
        cmp    edi, -1
        je    L_b1e4
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_b1d6
        mov    ecx, dword ptr [esi]
        mov    al, byte ptr [ecx + 0x2f9]
        test    al, al
        jne    L_b1d6
        push    0x77fdac
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_b1d6
        int 3    
L_b1d6:
        mov    eax, dword ptr [esi]
        mov    dword ptr [eax + 0x184], edi
        mov    dword ptr [eax + 0x1b4], edi
L_b1e4:
        mov    eax, dword ptr [ebp - 0x10]
        add    esi, 4
        cmp    esi, eax
        jne    L_b11e
        mov    esi, dword ptr [ebp - 0x14]
L_b1f5:
        test    esi, esi
        je    L_b202
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_b202:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
