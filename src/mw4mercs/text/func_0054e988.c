/*
 * FUN_0054e988 (extent 0x54e988-0x54f1a3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416c80(void);
extern void __cdecl FUN_00416ca0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416d00(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_004dae60(void);
extern void __cdecl FUN_004f88f0(void);
extern void __cdecl FUN_005311f0(void);
extern void __cdecl FUN_0053f140(void);
extern void __cdecl FUN_0054f090(void);
extern void __cdecl FUN_0054f1b0(void);
extern void __cdecl FUN_0054fdb0(void);
extern void __cdecl FUN_00551890(void);
extern void __cdecl FUN_00551c60(void);
extern void __cdecl FUN_00553670(void);
extern void __cdecl FUN_00553d20(void);
extern void __cdecl FUN_005541c0(void);
extern void __cdecl FUN_005564b0(void);
extern void __cdecl FUN_00558a00(void);
extern void __cdecl FUN_00558af0(void);
extern void __cdecl FUN_005592f0(void);
extern void __cdecl FUN_00559810(void);
extern void __cdecl FUN_00559960(void);
extern void __cdecl FUN_00559ab0(void);
extern void __cdecl FUN_00627300(void);
extern void __cdecl FUN_00629290(void);
extern void __cdecl FUN_0062c5f0(void);
extern void __cdecl FUN_006f17b0(void);
extern void __cdecl FUN_006f1870(void);
extern void __cdecl FUN_006f1ff0(void);

__declspec(naked) void FUN_0054e988(void)
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
        sub    esp, 0x18
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        xor    ebx, ebx
        push    edi
        lea    ecx, [esi + 0x760]
        mov    byte ptr [esi + 0x740], 0
        mov    dword ptr [esi + 0x754], ebx
        call    FUN_0041fcb0
        lea    ecx, [esi + 0x758]
        call    FUN_0041fcb0
        push    0x7b8d88
        lea    ecx, [esi + 0x768]
        call    FUN_0040c410
        lea    ecx, [esi + 0x828]
        mov    byte ptr [esi + 0x741], bl
        mov    dword ptr [esi + 0x81c], ebx
        call    FUN_0041fcb0
        lea    ecx, [esi + 0x820]
        call    FUN_0041fcb0
        push    0x7b8d88
        lea    ecx, [esi + 0x830]
        call    FUN_0040c410
        mov    eax, dword ptr [esi + 0xe0]
        cmp    dword ptr [eax + 0x14], 5
        jne    L_ecc1
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        lea    eax, [edx + 0xc]
        xor    ecx, 0x85739531
        mov    dl, byte ptr [ecx + 0x16]
        test    dl, dl
        je    L_ea3e
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    ebp, dword ptr [edx + 0x50]
        jmp    L_ea48
L_ea3e:
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    ebp, dword ptr [eax + 0x54]
L_ea48:
        mov    edx, dword ptr [esi + 0x78]
        lea    edi, [esi + 0x78]
        mov    ecx, edi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x384]
        mov    edx, dword ptr [ecx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_ecc1
        fld    dword ptr [esi + 0x5a8]
        fcomp    dword ptr [eax + 0x84]
        fnstsw  ax
        test    ah, 1
        jne    L_ecc1
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, edx
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        cmp    byte ptr [edx + 0x17], 0
        je    L_eba4
        cmp    dword ptr [ebp + 0x44], ebx
        je    L_eb32
        cmp    dword ptr [ebp + 0x38], ebx
        je    L_eb16
        mov    ecx, dword ptr [ecx + 0x4c8]
        cmp    ecx, dword ptr [ebp + 0x3c]
        jl    L_eb16
        cmp    dword ptr [ebp + 0xa8], ebx
        jne    L_eae2
        mov    ecx, dword ptr [g_007db090]
        xor    edx, edx
        mov    dl, byte ptr [ecx + 0x28]
        mov    ecx, dword ptr [eax + 0xc]
        push    ebx
        xor    ecx, 0x85739531
        push    edx
        call    FUN_0053f140
        jmp    L_ec89
L_eae2:
        mov    edx, dword ptr [eax + 0x40]
        xor    edx, 0x85739531
        je    L_ec89
        mov    ecx, dword ptr [eax + 0x40]
        push    0x17
        xor    ecx, 0x85739531
        call    FUN_00629290
        mov    edi, eax
        mov    ecx, edi
        call    FUN_0062c5f0
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x10]
        jmp    L_ec89
L_eb16:
        mov    ecx, dword ptr [eax + 0xc]
        mov    edx, dword ptr [edi]
        xor    ecx, 0x85739531
        mov    byte ptr [ecx + 0xcd], 1
        mov    ecx, edi
        call    dword ptr [edx + 4]
        jmp    L_ebdd
L_eb32:
        mov    ecx, esi
        call    FUN_00553d20
        test    al, al
        je    L_ec89
        cmp    dword ptr [ebp + 0x38], ebx
        je    L_eb90
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x4c8]
        cmp    ecx, dword ptr [ebp + 0x3c]
        jl    L_eb90
        cmp    dword ptr [ebp + 0xa8], ebx
        jne    L_ec89
        mov    eax, dword ptr [g_007db090]
        mov    ecx, dword ptr [g_007dab44]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x28]
        push    ebx
        push    edx
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        call    FUN_0053f140
        jmp    L_ec89
L_eb90:
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        jmp    L_ebc9
L_eba4:
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        cmp    dword ptr [edx + 0x302c], 1
        jne    L_ec2a
        cmp    dword ptr [ebp + 0x38], ebx
        je    L_ec12
        mov    ecx, dword ptr [ecx + 0x4c8]
        cmp    ecx, dword ptr [ebp + 0x3c]
        jge    L_ebf4
        mov    edx, dword ptr [eax + 0xc]
L_ebc9:
        mov    eax, dword ptr [edi]
        xor    edx, 0x85739531
        mov    ecx, edi
        mov    byte ptr [edx + 0xcd], 1
        call    dword ptr [eax + 4]
L_ebdd:
        fld    dword ptr [eax + 0x84]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esi + 0x5a8]
        jmp    L_ec89
L_ebf4:
        mov    ecx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax]
        mov    dword ptr [ecx + 0xac], ebx
        push    ebx
        mov    ecx, eax
        jmp    L_ec86
L_ec12:
        mov    eax, dword ptr [eax + 0xc]
        mov    edx, dword ptr [edi]
        xor    eax, 0x85739531
        mov    ecx, edi
        mov    byte ptr [eax + 0xcd], 1
        call    dword ptr [edx + 4]
        jmp    L_ebdd
L_ec2a:
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        call    FUN_004f88f0
        test    al, al
        mov    eax, dword ptr [g_007dab44]
        je    L_ec5d
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0xcd], 1
        jmp    L_ec89
L_ec5d:
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x20]
        xor    ecx, 0x85739531
        je    L_ec7a
        mov    dl, byte ptr [ecx + 0x21e4]
        test    dl, dl
        jne    L_ec89
L_ec7a:
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    ebx
L_ec86:
        call    dword ptr [edx + 0x2c]
L_ec89:
        lea    edi, [esi + 0x6a0]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_ecc1
        mov    ecx, esi
        call    FUN_005564b0
        test    al, al
        je    L_ecb5
        mov    ecx, edi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xd8]
        push    eax
        jmp    L_ecb6
L_ecb5:
        push    ebx
L_ecb6:
        mov    ecx, dword ptr [esi + 0x6b0]
        call    FUN_004c3d50
L_ecc1:
        cmp    dword ptr [esi + 0x4ac], ebx
        je    L_ed40
        mov    al, byte ptr [esi + 0x4b0]
        test    al, al
        je    L_ecdc
        mov    byte ptr [esi + 0x4b0], 0
        jmp    L_ed40
L_ecdc:
        mov    ecx, esi
        call    FUN_00553d20
        test    al, al
        je    L_ed40
        mov    eax, dword ptr [esi + 0xe0]
        cmp    dword ptr [eax + 0x14], 2
        jne    L_ed40
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_ed40
        mov    cl, byte ptr [eax + 0x2f8]
        test    cl, cl
        jne    L_ed40
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_ed4e
        mov    edx, dword ptr [esp + 0x30]
        mov    eax, dword ptr [esp + 0x2c]
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_005541c0
        mov    al, byte ptr [esi + 0x48c]
        test    al, al
        je    L_ed40
        mov    dword ptr [esi + 0x46c], ebx
        mov    byte ptr [esi + 0x48c], 0
L_ed40:
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        je    L_eef7
L_ed4e:
        mov    ecx, esi
        call    FUN_00553d20
        test    al, al
        je    L_eef7
        lea    ebx, [esi + 0x5b0]
        mov    ecx, ebx
        call    FUN_0041fd80
        mov    ecx, esi
        mov    dword ptr [esp + 0x10], eax
        call    FUN_0054f090
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    edx, ecx
        mov    ebp, dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi + 0x5b8]
        xor    ebp, 0x85739531
        cmp    edx, 1
        jne    L_ee67
        xor    eax, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        add    ecx, 0x4b0
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0x77d098
        call    FUN_00416c80
        lea    ecx, [esp + 0x14]
        call    FUN_00416d00
        mov    edi, eax
        test    edi, edi
        je    L_ee01
L_edd8:
        mov    edx, dword ptr [edi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_ee01
        cmp    dword ptr [esp + 0x10], edi
        je    L_ee61
        lea    ecx, [esp + 0x14]
        call    FUN_00416ca0
        lea    ecx, [esp + 0x14]
        call    FUN_00416d00
        mov    edi, eax
        test    edi, edi
        jne    L_edd8
L_ee01:
        mov    ecx, ebx
        call    FUN_0041fd80
        cmp    eax, edi
        jne    L_ee61
        mov    eax, dword ptr [g_007dab44]
        mov    ebx, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x10], 0
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x10]
        xor    eax, ebx
        push    ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        call    FUN_005311f0
        test    al, al
        je    L_ee58
        push    0
        push    0
        mov    ecx, ebp
        call    FUN_006f17b0
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        mov    ecx, ebp
        call    FUN_006f1870
        mov    ecx, ebp
        call    FUN_006f1ff0
L_ee58:
        push    2
        mov    ecx, esi
        call    FUN_0054f1b0
L_ee61:
        lea    ecx, [esp + 0x14]
        jmp    L_eee6
L_ee67:
        xor    eax, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        add    ecx, 0x4b0
        push    ecx
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0x77d098
        call    FUN_00416c80
        lea    ecx, [esp + 0x14]
        call    FUN_00416d00
        mov    edi, eax
        test    edi, edi
        je    L_eed9
L_eea1:
        mov    edx, dword ptr [edi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_eec6
        lea    ecx, [esp + 0x14]
        call    FUN_00416ca0
        lea    ecx, [esp + 0x14]
        call    FUN_00416d00
        mov    edi, eax
        test    edi, edi
        jne    L_eea1
        jmp    L_eed9
L_eec6:
        test    edi, edi
        je    L_eed9
        mov    ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov    ecx, ebx
        call    FUN_0041fcd0
L_eed9:
        push    1
        mov    ecx, esi
        call    FUN_0054f1b0
        lea    ecx, [esp + 0x14]
L_eee6:
        call    FUN_00416c60
        mov    dword ptr [esi + 0x46c], 0
        xor    ebx, ebx
L_eef7:
        cmp    dword ptr [esi + 0x55c], ebx
        mov    ecx, esi
        je    L_ef08
        call    FUN_00551890
        jmp    L_ef0d
L_ef08:
        call    FUN_0054fdb0
L_ef0d:
        mov    edi, dword ptr [esp + 0x30]
        mov    ebp, dword ptr [esp + 0x2c]
        push    edi
        push    ebp
        mov    ecx, esi
        call    FUN_00551c60
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        mov    dl, byte ptr [ecx + 0x8c]
        test    dl, dl
        jne    L_ef58
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x10]
        test    al, al
        je    L_ef58
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xd8]
L_ef58:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x40]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x40]
        je    L_f06f
        mov    cl, byte ptr [esi + 0x5ac]
        test    cl, cl
        jne    L_f06f
        mov    edx, dword ptr [esi + 0x648]
        mov    ecx, dword ptr [esi + 0x644]
        push    edx
        mov    edx, dword ptr [esi + 0x638]
        push    ecx
        mov    ecx, dword ptr [esi + 0x634]
        push    edx
        mov    edx, dword ptr [esi + 0x630]
        push    ecx
        mov    ecx, dword ptr [eax]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_00627300
        mov    ecx, esi
        call    FUN_00553670
        mov    ecx, esi
        call    FUN_00558af0
        mov    ecx, esi
        call    FUN_00558a00
        mov    ecx, esi
        call    FUN_005592f0
        mov    al, byte ptr [esi + 0x585]
        test    al, al
        je    L_f06f
        mov    ecx, esi
        call    FUN_00559ab0
        mov    al, byte ptr [esi + 0x588]
        test    al, al
        je    L_f068
        mov    eax, dword ptr [esi + 0x384]
        cmp    eax, ebx
        je    L_f050
        mov    ecx, dword ptr [eax + 0x410]
        mov    edx, dword ptr [eax + 0x40c]
        sub    ecx, edx
        sar    ecx, 2
        je    L_f050
        cmp    dword ptr [edx], ebx
        je    L_f050
        mov    ecx, dword ptr [eax + 0x410]
        sub    ecx, edx
        sar    ecx, 2
        je    L_f023
        mov    ecx, dword ptr [edx]
        jmp    L_f025
L_f023:
        xor    ecx, ecx
L_f025:
        cmp    dword ptr [ecx + 0x1e0], 4
        je    L_f068
        mov    ecx, dword ptr [eax + 0x410]
        mov    edx, dword ptr [eax + 0x40c]
        sub    ecx, edx
        sar    ecx, 2
        je    L_f045
        mov    eax, dword ptr [edx]
        jmp    L_f047
L_f045:
        xor    eax, eax
L_f047:
        cmp    dword ptr [eax + 0x1e0], 5
        je    L_f068
L_f050:
        mov    al, byte ptr [esi + 0x587]
        test    al, al
        mov    ecx, esi
        je    L_f063
        call    FUN_00559960
        jmp    L_f068
L_f063:
        call    FUN_00559810
L_f068:
        mov    byte ptr [esi + 0x585], 0
L_f06f:
        push    edi
        push    ebp
        mov    ecx, esi
        call    FUN_004dae60
        mov    eax, dword ptr [esi + 0x4ac]
        pop    edi
        inc    eax
        mov    dword ptr [esi + 0x4ac], eax
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x18
        ret    8
        nop    
        sub    esp, 0x14
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx]
        xor    edx, 0x85739531
        push    edi
        add    edx, 0x4b0
        push    edx
        lea    ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea    edi, [esi + 0x5b0]
        mov    ecx, edi
        mov    dword ptr [esp + 0xc], 0x77d098
        call    FUN_0041fd80
        test    eax, eax
        jne    L_f0ef
        lea    ecx, [esp + 0xc]
        call    FUN_00416d00
        test    eax, eax
        je    L_f193
        push    eax
        jmp    L_f18c
L_f0ef:
        lea    ecx, [esp + 0xc]
        xor    bl, bl
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_f136
L_f100:
        test    bl, bl
        je    L_f11a
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_f11a
        mov    ecx, dword ptr [esi + 0xe0]
        cmp    dword ptr [ecx + 0x14], 1
        jne    L_f184
L_f11a:
        mov    ecx, edi
        call    FUN_0041fd80
        cmp    eax, esi
        jne    L_f127
        mov    bl, 1
L_f127:
        lea    ecx, [esp + 0xc]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_f100
L_f136:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c80
        lea    ecx, [esp + 0xc]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_f193
L_f14e:
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_f165
        mov    eax, dword ptr [esi + 0xe0]
        cmp    dword ptr [eax + 0x14], 1
        jne    L_f184
L_f165:
        lea    ecx, [esp + 0xc]
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_f14e
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x14
        ret    
L_f184:
        mov    ecx, edi
        call    FUN_0041fcb0
        push    esi
L_f18c:
        mov    ecx, edi
        call    FUN_0041fcd0
L_f193:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x14
        ret    
    }
}
