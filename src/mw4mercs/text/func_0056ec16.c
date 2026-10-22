/*
 * FUN_0056ec16 (extent 0x56ec16-0x56f042) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077f688;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f24d8;
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
extern void __cdecl FUN_005669d0(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_00566c80(void);
extern void __cdecl FUN_0056ea80(void);
extern void __cdecl FUN_0056ed70(void);
extern void __cdecl FUN_00580be0(void);
extern void __cdecl FUN_00580d50(void);
extern void __cdecl FUN_00581350(void);
extern void __cdecl FUN_005dcff0(void);
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064e540(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0056ec16(void)
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
        jne    L_eca2
        push    ebx
        push    esi
        call    FUN_00566c30
        push    eax
        call    FUN_0056ea80
        mov    esi, dword ptr [g_0080592c]
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        add    esp, 8
        cmp    esi, edx
        mov    bl, al
        mov    dword ptr [g_0080592c], esi
        jb    L_ec93
        push    0
        call    FUN_00563060
        add    esp, 4
L_ec93:
        xor    eax, eax
        test    bl, bl
        setne    al
        pop    ebx
        mov    dword ptr [esi], eax
        jmp    L_ed48
L_eca2:
        push    esi
        call    FUN_005669d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ed1b
        push    0
        call    FUN_00707e70
        fsub    dword ptr [g_0077f688]
        sub    esp, 8
        mov    ecx, esi
        fstp    qword ptr [esp]
        call    FUN_005dcff0
        test    eax, eax
        mov    esi, dword ptr [g_0080592c]
        jne    L_ecf0
        mov    ecx, dword ptr [g_00805928]
        add    esi, 4
        add    ecx, 0xa000
        cmp    esi, ecx
        mov    dword ptr [g_0080592c], esi
        jb    L_ed42
        jmp    L_ed38
L_ecf0:
        mov    edx, dword ptr [g_00805928]
        add    esi, 4
        add    edx, 0xa000
        cmp    esi, edx
        mov    dword ptr [g_0080592c], esi
        jb    L_ed13
        push    0
        call    FUN_00563060
        add    esp, 4
L_ed13:
        mov    dword ptr [esi], 1
        jmp    L_ed48
L_ed1b:
        mov    esi, dword ptr [g_0080592c]
        mov    eax, dword ptr [g_00805928]
        add    esi, 4
        add    eax, 0xa000
        cmp    esi, eax
        mov    dword ptr [g_0080592c], esi
        jb    L_ed42
L_ed38:
        push    0
        call    FUN_00563060
        add    esp, 4
L_ed42:
        mov    dword ptr [esi], 0
L_ed48:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0x14
        push    ebx
        push    esi
        mov    esi, dword ptr [ebp + 8]
        xor    ebx, ebx
        test    esi, 0xf00000
        push    edi
        mov    dword ptr [esp + 0x14], ebx
        mov    dword ptr [esp + 0x18], ebx
        mov    dword ptr [esp + 0x1c], ebx
        je    L_edae
        lea    eax, [esp + 0x14]
        push    eax
        add    esi, 0xff100000
        push    esi
        call    FUN_00580be0
        add    esp, 8
        jmp    L_eea0
L_edae:
        call    FUN_00566c80
        mov    edi, eax
        push    esi
        mov    ecx, edi
        call    FUN_0064e600
        test    al, al
        je    L_eea0
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
        je    L_ee9e
L_ede8:
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
        je    L_ee8b
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_ee8b
        mov    eax, dword ptr [g_007f268c]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_ee8b
        mov    esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        je    L_ee8b
        mov    eax, dword ptr [g_007f24d8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_ee8b
        mov    al, byte ptr [esi + 0x2f9]
        test    al, al
        jne    L_ee8b
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x10], esi
        je    L_ee7a
        lea    ecx, [esp + 0x10]
        push    ecx
        push    eax
        call    FUN_00581350
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x18], eax
        jmp    L_ee8b
L_ee7a:
        push    1
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00580d50
L_ee8b:
        mov    ecx, ebx
        add    edi, 4
        call    FUN_0064e100
        cmp    edi, dword ptr [eax + 4]
        jne    L_ede8
L_ee9e:
        xor    ebx, ebx
L_eea0:
        mov    esi, dword ptr [esp + 0x14]
        cmp    esi, dword ptr [esp + 0x18]
        je    L_eed6
L_eeaa:
        push    ebx
        call    FUN_00707e70
        fsub    dword ptr [g_0077f688]
        mov    ecx, dword ptr [esi]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    FUN_005dcff0
        cmp    eax, ebx
        jne    L_eeef
        mov    eax, dword ptr [esp + 0x18]
        add    esi, 4
        cmp    esi, eax
        jne    L_eeaa
        mov    esi, dword ptr [esp + 0x14]
L_eed6:
        cmp    esi, ebx
        je    L_eee3
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_eee3:
        mov    eax, 0xfffffffe
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
L_eeef:
        mov    esi, dword ptr [eax + 0x30]
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, ebx
        je    L_ef03
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ef03:
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
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
    }
}
