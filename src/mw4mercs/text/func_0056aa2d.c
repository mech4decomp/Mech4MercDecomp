/*
 * FUN_0056aa2d (extent 0x56aa2d-0x56affb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_007dde2c;
extern int    g_007f1f84;
extern int    g_007f24d8;
extern int    g_00805908;
extern int    g_00805918;
extern int    g_00805928;
extern int    g_0080592c;
extern int    g_0080d9bc;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_005668b0(void);
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566ef0(void);
extern void __cdecl FUN_0056ac20(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_005dbbd0(void);
extern void __cdecl FUN_005dbd60(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0056aa2d(void)
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
        mov    dword ptr [g_0080592c], eax
        mov    al, byte ptr [g_007dde2c]
        test    al, al
        je    L_aa89
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_aa89
        push    0x77fcb0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_aa89
        int 3    
L_aa89:
        push    esi
        call    FUN_005668b0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_aae6
        mov    eax, dword ptr [g_007f1f84]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_aae6
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [edx + 4]
        mov    edi, dword ptr [eax + 0x634]
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_aae1
        push    0
        call    FUN_00563060
        add    esp, 4
L_aae1:
        mov    dword ptr [esi], edi
        pop    edi
        jmp    L_ab15
L_aae6:
        mov    esi, dword ptr [g_0080592c]
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_ab0f
        push    0
        call    FUN_00563060
        add    esp, 4
L_ab0f:
        mov    dword ptr [esi], 0x2c
L_ab15:
        mov    eax, dword ptr [g_00805918]
        movsx    edx, byte ptr [eax]
        inc    eax
        mov    dword ptr [g_00805918], eax
        mov    eax, dword ptr [g_0080d9bc]
        mov    dword ptr [g_00805908], edx
        pop    esi
        ret    
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
        je    L_ab89
        push    esi
        call    FUN_00566bf0
        add    esp, 4
        test    al, al
        je    L_ab89
        push    0x77fcd8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add    esp, 8
        test    eax, eax
        je    L_ab89
        int 3    
L_ab89:
        push    esi
        call    FUN_005668b0
        add    esp, 4
        test    eax, eax
        jne    L_abc6
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_abbe
        push    eax
        call    FUN_00563060
        add    esp, 4
L_abbe:
        mov    dword ptr [esi], 0
        jmp    L_abfa
L_abc6:
        mov    edx, dword ptr [eax]
        push    edi
        mov    ecx, eax
        call    dword ptr [edx + 0x60]
        mov    esi, dword ptr [g_0080592c]
        mov    edi, eax
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_abf7
        push    0
        call    FUN_00563060
        add    esp, 4
L_abf7:
        mov    dword ptr [esi], edi
        pop    edi
L_abfa:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
        push    edi
        lea    eax, [esp + 8]
        push    eax
        lea    ecx, [esp + 0xb]
        push    ecx
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], 0
        mov    dword ptr [esp + 0x10], 0
        call    FUN_00580580
        mov    eax, dword ptr [esp + 0x1c]
        push    0
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_00566ef0
        mov    edi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        add    esp, 0xc
        cmp    edi, eax
        je    L_acab
        push    ebx
        mov    ebx, dword ptr [esp + 0x24]
        push    esi
L_ac75:
        mov    esi, dword ptr [edi]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x60]
        cmp    eax, ebx
        je    L_ac9a
        mov    ecx, dword ptr [esi + 0x2fc]
        test    ecx, ecx
        mov    dword ptr [esi + 0x140], ebx
        je    L_ac9a
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0xec]
L_ac9a:
        mov    eax, dword ptr [esp + 0x18]
        add    edi, 4
        cmp    edi, eax
        jne    L_ac75
        mov    edi, dword ptr [esp + 0x14]
        pop    esi
        pop    ebx
L_acab:
        test    edi, edi
        je    L_acb8
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_acb8:
        pop    edi
        add    esp, 0x14
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
    }
}
