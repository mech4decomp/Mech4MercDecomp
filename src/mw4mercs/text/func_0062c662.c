/*
 * FUN_0062c662 (extent 0x62c662-0x62d586) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_0076d5f0;
extern float  g_00788104;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db094;
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_0041ea60(void);
extern void __cdecl FUN_0041eae0(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0041ee20(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005b7da0(void);
extern void __cdecl FUN_005b7dd0(void);
extern void __cdecl FUN_005b7e00(void);
extern void __cdecl FUN_005b7e20(void);
extern void __cdecl FUN_005b7e40(void);
extern void __cdecl FUN_005b7e50(void);
extern void __cdecl FUN_005df390(void);
extern void __cdecl FUN_005df4f0(void);
extern void __cdecl FUN_005df620(void);
extern void __cdecl FUN_005e1b90(void);
extern void __cdecl FUN_005e1ba0(void);
extern void __cdecl FUN_005e1e70(void);
extern void __cdecl FUN_0067f7b0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0062c662(void)
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
        sub    esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    esi, dword ptr [edi + 0x50]
        mov    dword ptr [esp + 0x20], 0x43c80000
        mov    dword ptr [esp + 0x24], 0x44160000
        mov    dword ptr [esp + 0x28], 0x3f666666
        mov    al, byte ptr [esi + 4]
        xor    ebx, ebx
        cmp    al, bl
        je    L_c75b
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        add    eax, 5
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], ebx
        fild    qword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x18], ecx
        mov    dword ptr [esp + 0x1c], ebx
        push    1
        fsubr    dword ptr [esp + 0x28]
        sub    esp, 0xc
        lea    edx, [esp + 0x30]
        mov    ecx, esp
        fstp    dword ptr [esp + 0x34]
        push    edx
        fild    qword ptr [esp + 0x2c]
        fmul    dword ptr [g_0076d070]
        fsubr    dword ptr [g_00788104]
        fstp    dword ptr [esp + 0x34]
        mov    ebp, dword ptr [esi]
        mov    dword ptr [esi + 0x104], 0xff000000
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        fld    dword ptr [esp + 0x20]
        fsub    dword ptr [g_0076d5f0]
        push    1
        sub    esp, 0xc
        lea    eax, [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        mov    ecx, esp
        fld    dword ptr [esp + 0x34]
        push    eax
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp + 0x38]
        mov    ebp, dword ptr [esi]
        mov    dword ptr [esi + 0x104], 0xff00ff00
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        fld    dword ptr [esp + 0x24]
        fadd    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp + 0x24]
L_c75b:
        mov    esi, dword ptr [edi + 0x5c]
        cmp    byte ptr [esi + 4], bl
        je    L_c827
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x24], 0x43c80000
        mov    edx, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x10]
        add    edx, 0xa
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], ebx
        fild    qword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], ebx
        push    1
        fsubr    dword ptr [esp + 0x28]
        sub    esp, 0xc
        lea    edx, [esp + 0x30]
        mov    ecx, esp
        fstp    dword ptr [esp + 0x34]
        push    edx
        fild    qword ptr [esp + 0x2c]
        fmul    dword ptr [g_0076d070]
        fsubr    dword ptr [esp + 0x34]
        fstp    dword ptr [esp + 0x34]
        mov    ebp, dword ptr [esi]
        mov    dword ptr [esi + 0x104], 0xff000000
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        fld    dword ptr [esp + 0x20]
        fsub    dword ptr [g_0076d5f0]
        push    1
        sub    esp, 0xc
        lea    eax, [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        mov    ecx, esp
        fld    dword ptr [esp + 0x34]
        push    eax
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp + 0x38]
        mov    ebp, dword ptr [esi]
        mov    dword ptr [esi + 0x104], 0xff00ff00
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        fld    dword ptr [esp + 0x24]
        fadd    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp + 0x24]
L_c827:
        fld    qword ptr [edi + 0x6c]
        fcomp    qword ptr [edi + 0x64]
        fnstsw  ax
        test    ah, 0x41
        jne    L_c995
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        cmp    byte ptr [edx + 0x16], bl
        je    L_c862
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x50]
        jmp    L_c86e
L_c862:
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x54]
L_c86e:
        mov    edx, dword ptr [eax + 0x20]
        xor    edx, 0x85739531
        je    L_c8de
        mov    eax, dword ptr [eax + 0x20]
        xor    eax, 0x85739531
        je    L_c8de
        mov    eax, dword ptr [eax + 0x226c]
        cmp    eax, ebx
        jle    L_c8de
        mov    ecx, dword ptr [ecx + 0x40]
        dec    ecx
        cmp    eax, ecx
        jl    L_c8de
        mov    esi, dword ptr [edi + 0x58]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x24], 0x43c80000
        mov    edx, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x10]
        add    edx, 5
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], ebx
        fild    qword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], ebx
        fsubr    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fild    qword ptr [esp + 0x18]
        jmp    L_c925
L_c8de:
        mov    esi, dword ptr [edi + 0x54]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x24], 0x43c80000
        mov    edx, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x10]
        add    edx, 5
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], ebx
        fild    qword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x1c], ebx
        fsubr    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x24]
        fild    qword ptr [esp + 0x18]
L_c925:
        fmul    dword ptr [g_0076d070]
        push    1
        sub    esp, 0xc
        lea    edx, [esp + 0x30]
        fsubr    dword ptr [g_00788104]
        mov    ecx, esp
        push    edx
        fstp    dword ptr [esp + 0x34]
        mov    ebp, dword ptr [esi]
        mov    dword ptr [esi + 0x104], 0xff000000
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
        fld    dword ptr [esp + 0x20]
        fsub    dword ptr [g_0076d5f0]
        push    1
        sub    esp, 0xc
        lea    eax, [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        mov    ecx, esp
        fld    dword ptr [esp + 0x34]
        push    eax
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp + 0x38]
        mov    ebp, dword ptr [esi]
        mov    dword ptr [esi + 0x104], 0xff00ff00
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [ebp + 0x14]
L_c995:
        mov    esi, dword ptr [edi + 0x60]
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x24], 0x44480000
        mov    dword ptr [esp + 0x28], 0x40400000
        mov    dword ptr [esp + 0x2c], 0x3f666666
        mov    edx, dword ptr [esi]
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        add    edx, 5
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], ebx
        fild    qword ptr [esp + 0x18]
        push    1
        sub    esp, 0xc
        lea    eax, [esp + 0x30]
        fsubr    dword ptr [esp + 0x30]
        mov    ecx, esp
        push    eax
        fstp    dword ptr [esp + 0x34]
        mov    edi, dword ptr [esi]
        mov    dword ptr [esi + 0x104], 0xff000000
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [edi + 0x14]
        fld    dword ptr [esp + 0x20]
        fsub    dword ptr [g_0076d5f0]
        push    1
        sub    esp, 0xc
        lea    edx, [esp + 0x30]
        fstp    dword ptr [esp + 0x30]
        mov    ecx, esp
        fld    dword ptr [esp + 0x34]
        push    edx
        fsub    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp + 0x38]
        mov    edi, dword ptr [esi]
        mov    dword ptr [esi + 0x104], 0xff00ff00
        call    FUN_00551870
        mov    ecx, esi
        call    dword ptr [edi + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
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
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x4c]
        test    ecx, ecx
        jle    L_cae7
        mov    edi, dword ptr [eax + 0x48]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        push    esi
        add    edi, 0x14
        mov    ebx, ecx
L_ca7d:
        mov    ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        je    L_cade
        lea    edx, [esp + 0x1c]
        push    edx
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x1c]
        test    al, al
        mov    ecx, esi
        je    L_cad9
        call    FUN_005b7e00
        push    2
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x10]
        sub    eax, 0
        je    L_cad0
        dec    eax
        jne    L_cade
        mov    ecx, esi
        call    FUN_005b7da0
        jmp    L_cade
L_cad0:
        mov    ecx, esi
        call    FUN_005b7dd0
        jmp    L_cade
L_cad9:
        call    FUN_005b7e20
L_cade:
        add    edi, 0x1c
        dec    ebx
        jne    L_ca7d
        pop    esi
        pop    ebp
        pop    ebx
L_cae7:
        pop    edi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x4c]
        test    ecx, ecx
        jle    L_cb59
        mov    edi, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov    esi, dword ptr [eax + 0x48]
        add    esi, 0x14
        mov    ebp, ecx
L_cb1c:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        test    eax, eax
        je    L_cb51
        lea    edx, [esp + 0x14]
        push    edx
        mov    ecx, edi
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        je    L_cb51
        push    2
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], 0
        call    FUN_0041eb40
L_cb51:
        add    esi, 0x1c
        dec    ebp
        jne    L_cb1c
        pop    esi
        pop    ebp
L_cb59:
        pop    edi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x10]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x4c]
        lea    eax, [eax + eax*2]
        ret    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x4c]
        test    ecx, ecx
        jle    L_cc0b
        mov    edi, dword ptr [eax + 0x48]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        push    esi
        add    edi, 0x14
        mov    ebx, ecx
L_cbad:
        mov    ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        je    L_cc02
        mov    ecx, esi
        call    FUN_005b7e50
        test    al, al
        je    L_cbf1
        lea    edx, [esp + 0x1c]
        push    edx
        mov    ecx, ebp
        mov    byte ptr [esp + 0x20], 1
        call    FUN_0041eae0
        mov    ecx, esi
        call    FUN_005b7e40
        mov    dword ptr [esp + 0x10], eax
        push    2
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, ebp
        call    FUN_0041ec50
        jmp    L_cc02
L_cbf1:
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, ebp
        mov    byte ptr [esp + 0x20], 0
        call    FUN_0041eae0
L_cc02:
        add    edi, 0x1c
        dec    ebx
        jne    L_cbad
        pop    esi
        pop    ebp
        pop    ebx
L_cc0b:
        pop    edi
        pop    ecx
        ret    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x44]
        test    ecx, ecx
        jle    L_cca4
        mov    edi, dword ptr [eax + 0x40]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        push    esi
        add    edi, 0x14
        mov    ebx, ecx
L_cc3d:
        mov    ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        je    L_cc9b
        lea    edx, [esp + 0x1c]
        push    edx
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x1c]
        test    al, al
        je    L_cc9b
        mov    ecx, esi
        call    FUN_005e1e70
        push    3
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, ebp
        mov    byte ptr [esp + 0x18], 0
        call    FUN_0041eb40
        cmp    byte ptr [esp + 0x10], 7
        jne    L_cc8b
        mov    dword ptr [esi + 0x420], 0xffffffff
        jmp    L_cc9b
L_cc8b:
        mov    ecx, dword ptr [esp + 0x10]
        and    ecx, 0xff
        mov    dword ptr [esi + 0x420], ecx
L_cc9b:
        add    edi, 0x1c
        dec    ebx
        jne    L_cc3d
        pop    esi
        pop    ebp
        pop    ebx
L_cca4:
        pop    edi
        pop    ecx
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
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x44]
        test    ecx, ecx
        jle    L_cd16
        mov    edi, dword ptr [esp + 0xc]
        push    ebp
        push    esi
        mov    esi, dword ptr [eax + 0x40]
        add    esi, 0x14
        mov    ebp, ecx
L_ccdc:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        test    eax, eax
        je    L_cd0e
        lea    edx, [esp + 0x14]
        push    edx
        mov    ecx, edi
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x14]
        test    al, al
        je    L_cd0e
        push    3
        lea    eax, [esp + 0x13]
        push    eax
        mov    ecx, edi
        mov    byte ptr [esp + 0x17], 0
        call    FUN_0041eb40
L_cd0e:
        add    esi, 0x1c
        dec    ebp
        jne    L_ccdc
        pop    esi
        pop    ebp
L_cd16:
        pop    edi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x10]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x44]
        shl    eax, 2
        ret    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x44]
        test    ecx, ecx
        jle    L_cdd9
        mov    edi, dword ptr [eax + 0x40]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        push    esi
        add    edi, 0x14
        mov    ebx, ecx
L_cd6d:
        mov    ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov    esi, eax
        test    esi, esi
        je    L_cdd0
        mov    al, byte ptr [esi + 0x41c]
        test    al, al
        je    L_cdbf
        lea    edx, [esp + 0x13]
        push    edx
        mov    ecx, ebp
        mov    byte ptr [esp + 0x17], 1
        call    FUN_0041eae0
        cmp    dword ptr [esi + 0x420], -1
        jne    L_cda5
        mov    byte ptr [esp + 0x1c], 7
        jmp    L_cdaf
L_cda5:
        mov    al, byte ptr [esi + 0x420]
        mov    byte ptr [esp + 0x1c], al
L_cdaf:
        push    3
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, ebp
        call    FUN_0041ec50
        jmp    L_cdd0
L_cdbf:
        lea    edx, [esp + 0x13]
        push    edx
        mov    ecx, ebp
        mov    byte ptr [esp + 0x17], 0
        call    FUN_0041eae0
L_cdd0:
        add    edi, 0x1c
        dec    ebx
        jne    L_cd6d
        pop    esi
        pop    ebp
        pop    ebx
L_cdd9:
        pop    edi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x7c
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x8c]
        push    esi
        push    edi
        xor    eax, dword ptr [g_007dab40]
        mov    esi, dword ptr [eax + 0x20]
        mov    edi, dword ptr [eax + 0x10]
        xor    esi, 0x85739531
        mov    cl, byte ptr [esi + 0x2a1]
        lea    edx, [esp + 0x12]
        mov    byte ptr [esp + 0x12], cl
        push    edx
        mov    ecx, ebp
        xor    edi, 0x85739531
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x12]
        push    2
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    byte ptr [esi + 0x2a1], al
        xor    ebx, ebx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_0041eb40
        mov    eax, dword ptr [edi + 0x8c]
        cmp    eax, ebx
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [esi + 0x29c], edx
        jle    L_d144
        mov    edi, dword ptr [edi + 0x88]
        add    edi, 0x14
        mov    dword ptr [esp + 0x14], edi
        mov    dword ptr [esp + 0x28], eax
L_ce6a:
        mov    ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov    esi, eax
        cmp    esi, ebx
        je    L_d12e
        lea    eax, [esp + 0x13]
        push    eax
        mov    ecx, ebp
        call    FUN_0041ea60
        cmp    byte ptr [esp + 0x13], bl
        je    L_d12e
        mov    ecx, esi
        call    FUN_005df390
        push    2
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x24], ebx
        call    FUN_0041eb40
        mov    edx, dword ptr [esp + 0x1c]
        push    edx
        mov    ecx, esi
        call    FUN_005e1ba0
        push    2
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x20]
        cmp    eax, ebx
        jne    L_cfd5
        mov    ecx, esi
        call    FUN_005df620
        test    eax, eax
        je    L_cee7
        push    ebx
        mov    ecx, esi
        call    FUN_005df4f0
L_cee7:
        mov    eax, dword ptr [esi + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        lea    edi, [eax + 0x80]
        mov    dword ptr [esp + 0x40], ecx
        mov    edx, dword ptr [edi + 0x1c]
        mov    dword ptr [esp + 0x44], edx
        mov    eax, dword ptr [edi + 0x2c]
        mov    dword ptr [esp + 0x48], eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        lea    edx, [esp + 0x34]
        push    edx
        mov    edx, dword ptr [g_007dab44]
        lea    eax, [esp + 0x3c]
        push    eax
        mov    eax, dword ptr [edx]
        lea    ecx, [esp + 0x44]
        push    ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    ebx
        push    0x1a
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x38]
        mov    edx, dword ptr [esp + 0x3c]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x4c]
        push    eax
        mov    ecx, ebp
        call    FUN_0041edd0
        push    1
        push    1
        push    0x1a
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x40]
        mov    edx, dword ptr [esp + 0x44]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, ebp
        call    FUN_0041edd0
        push    edi
        lea    ecx, [esp + 0x50]
        call    FUN_0041afd0
        mov    ecx, dword ptr [esp + 0x40]
        mov    edx, dword ptr [esp + 0x44]
        mov    eax, dword ptr [esp + 0x48]
        mov    dword ptr [esp + 0x68], ecx
        lea    ecx, [esp + 0x4c]
        push    ecx
        lea    ecx, [esp + 0x60]
        mov    dword ptr [esp + 0x7c], edx
        mov    dword ptr [esp + 0x8c], eax
        call    FUN_0041a160
        lea    edx, [esp + 0x5c]
        push    edx
        mov    ecx, esi
        call    FUN_004daa20
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0x48]
        mov    edi, dword ptr [esp + 0x14]
        jmp    L_d12e
L_cfd5:
        cmp    eax, 1
        jne    L_d08f
        push    0x10
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_0041eb40
        mov    edx, dword ptr [g_007db094]
        mov    cx, word ptr [esp + 0x14]
        mov    al, byte ptr [edx + 0x28]
        mov    word ptr [esp + 0x26], cx
        mov    ecx, esi
        mov    byte ptr [esp + 0x24], al
        call    FUN_005df620
        test    eax, eax
        je    L_d02c
        mov    ecx, esi
        call    FUN_005df620
        mov    dx, word ptr [eax + 0x16]
        cmp    dx, word ptr [esp + 0x14]
        je    L_d02c
        push    ebx
        mov    ecx, esi
        call    FUN_005df4f0
L_d02c:
        mov    ecx, esi
        call    FUN_005df620
        test    eax, eax
        jne    L_d12e
        mov    eax, dword ptr [g_007db094]
        mov    cl, byte ptr [eax + 0x28]
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        mov    byte ptr [esp + 0x3c], cl
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esp + 0x3c]
        and    ecx, 0xff
        push    ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        cmp    eax, ebx
        je    L_d12e
        lea    edx, [esp + 0x24]
        push    edx
        mov    ecx, eax
        call    FUN_004ceeb0
        cmp    eax, ebx
        je    L_d12e
        jmp    L_d126
L_d08f:
        push    8
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, ebp
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_0041eb40
        mov    ecx, esi
        call    FUN_005df620
        test    eax, eax
        je    L_d0c7
        mov    ecx, esi
        call    FUN_005df620
        movzx    cx, byte ptr [eax + 0x14]
        cmp    cx, word ptr [esp + 0x14]
        je    L_d0c7
        push    ebx
        mov    ecx, esi
        call    FUN_005df4f0
L_d0c7:
        mov    ecx, esi
        call    FUN_005df620
        test    eax, eax
        jne    L_d12e
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esp + 0x14]
        lea    edx, [eax + 0xc]
        and    ecx, 0xffff
        mov    eax, ecx
        shl    eax, 7
        add    eax, ecx
        shl    eax, 3
        sub    eax, ecx
        mov    ecx, dword ptr [edx]
        shl    eax, 3
        xor    ecx, 0x85739531
        cmp    dword ptr [ecx + eax + 0x3584], ebx
        je    L_d12e
        mov    edx, dword ptr [edx]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + eax + 0x3584]
        mov    eax, dword ptr [eax + 0x170]
        cmp    eax, ebx
        je    L_d12e
L_d126:
        push    eax
        mov    ecx, esi
        call    FUN_005df4f0
L_d12e:
        mov    eax, dword ptr [esp + 0x28]
        add    edi, 0x1c
        dec    eax
        mov    dword ptr [esp + 0x14], edi
        mov    dword ptr [esp + 0x28], eax
        jne    L_ce6a
L_d144:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x7c
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x28
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x34]
        xor    ecx, edx
        push    edi
        mov    edi, dword ptr [ecx + 0x10]
        lea    edx, [esp + 0xf]
        push    edx
        mov    ecx, esi
        xor    edi, 0x85739531
        call    FUN_0041ea60
        push    2
        lea    eax, [esp + 0x1c]
        xor    ebx, ebx
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_0041eb40
        mov    eax, dword ptr [edi + 0x8c]
        cmp    eax, ebx
        jle    L_d294
        mov    edi, dword ptr [edi + 0x88]
        push    ebp
        add    edi, 0x14
        mov    ebp, eax
L_d1ac:
        mov    ecx, dword ptr [edi]
        call    FUN_0041fd80
        test    eax, eax
        je    L_d289
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ea60
        cmp    byte ptr [esp + 0x3c], bl
        je    L_d289
        push    2
        lea    edx, [esp + 0x24]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], ebx
        call    FUN_0041eb40
        push    2
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_0041eb40
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, ebx
        jne    L_d265
        lea    ecx, [esp + 0x28]
        push    ecx
        lea    edx, [esp + 0x30]
        push    edx
        mov    edx, dword ptr [g_007dab44]
        lea    eax, [esp + 0x38]
        push    eax
        mov    eax, dword ptr [edx]
        lea    ecx, [esp + 0x40]
        push    ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    ebx
        push    0x1a
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_0041eb40
        push    1
        push    1
        push    0x1a
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x18]
        mov    dword ptr [esp + 0x18], ebx
        push    edx
        jmp    L_d282
L_d265:
        cmp    eax, 1
        jne    L_d277
        push    0x10
        lea    eax, [esp + 0x28]
        mov    dword ptr [esp + 0x28], ebx
        push    eax
        jmp    L_d282
L_d277:
        push    8
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x28], ebx
        push    ecx
L_d282:
        mov    ecx, esi
        call    FUN_0041eb40
L_d289:
        add    edi, 0x1c
        dec    ebp
        jne    L_d1ac
        pop    ebp
L_d294:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x28
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    eax, dword ptr [g_007dab40]
        push    esi
        xor    ecx, eax
        mov    edx, dword ptr [ecx + 0x10]
        push    1
        xor    edx, 0x85739531
        mov    esi, dword ptr [edx + 0x44]
        push    0
        push    0x1a
        call    FUN_0067f7b0
        add    eax, 5
        imul    eax, esi
        add    esp, 0xc
        add    eax, 3
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
        sub    esp, 0x3c
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x50]
        xor    eax, edx
        mov    ebp, dword ptr [eax + 0x10]
        push    edi
        mov    edi, dword ptr [eax + 0x20]
        xor    edi, 0x85739531
        mov    cl, byte ptr [edi + 0x2a1]
        lea    edx, [esp + 0x13]
        mov    byte ptr [esp + 0x13], cl
        push    edx
        mov    ecx, esi
        xor    ebp, 0x85739531
        call    FUN_0041eae0
        mov    eax, dword ptr [edi + 0x29c]
        push    2
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x28], eax
        call    FUN_0041ec50
        mov    eax, dword ptr [ebp + 0x8c]
        xor    ebx, ebx
        cmp    eax, ebx
        jle    L_d4ea
        mov    ebp, dword ptr [ebp + 0x88]
        add    ebp, 0x14
        mov    dword ptr [esp + 0x18], ebp
        mov    dword ptr [esp + 0x1c], eax
L_d35b:
        mov    ecx, dword ptr [ebp]
        call    FUN_0041fd80
        mov    edi, eax
        cmp    edi, ebx
        je    L_d4d0
        mov    dl, byte ptr [edi + 0x41c]
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x58], dl
        call    FUN_0041eae0
        cmp    byte ptr [esp + 0x54], bl
        je    L_d4d0
        mov    ecx, edi
        call    FUN_005e1b90
        push    2
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_0041ec50
        mov    ecx, edi
        call    FUN_005df620
        mov    ebp, eax
        cmp    ebp, ebx
        mov    dword ptr [esp + 0x14], ebx
        jne    L_d46d
        push    2
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_0041ec50
        mov    eax, dword ptr [edi + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        mov    edi, dword ptr [g_007dab40]
        add    eax, 0x80
        mov    dword ptr [esp + 0x40], ecx
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x44], edx
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x48], eax
        lea    ecx, [esp + 0x28]
        push    ecx
        lea    edx, [esp + 0x30]
        push    edx
        mov    edx, dword ptr [g_007dab44]
        lea    eax, [esp + 0x38]
        push    eax
        mov    eax, dword ptr [edx]
        lea    ecx, [esp + 0x40]
        push    ecx
        xor    eax, edi
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    ebx
        push    0x1a
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x34]
        mov    edx, dword ptr [esp + 0x38]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x4c]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    1
        push    0x1a
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x3c]
        mov    edx, dword ptr [esp + 0x40]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        jmp    L_d4d0
L_d46d:
        mov    edx, dword ptr [g_007db094]
        mov    cl, byte ptr [ebp + 0x14]
        cmp    cl, byte ptr [edx + 0x28]
        jne    L_d4a3
        push    2
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], 1
        call    FUN_0041ec50
        xor    ecx, ecx
        mov    cx, word ptr [ebp + 0x16]
        push    0x10
        lea    edx, [esp + 0x3c]
        mov    dword ptr [esp + 0x3c], ecx
        jmp    L_d4c8
L_d4a3:
        push    2
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], 2
        call    FUN_0041ec50
        xor    ecx, ecx
        mov    cl, byte ptr [ebp + 0x14]
        push    8
        lea    edx, [esp + 0x40]
        mov    dword ptr [esp + 0x40], ecx
L_d4c8:
        push    edx
        mov    ecx, esi
        call    FUN_0041ec50
L_d4d0:
        mov    ebp, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        add    ebp, 0x1c
        dec    eax
        mov    dword ptr [esp + 0x18], ebp
        mov    dword ptr [esp + 0x1c], eax
        jne    L_d35b
L_d4ea:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x3c
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
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        push    0x20
        lea    eax, [esp + 0xc]
        push    eax
        mov    dword ptr [esp + 0x10], 0
        call    FUN_0041eb40
        fld    dword ptr [esp + 8]
        fadd    dword ptr [esp + 0x20]
        mov    ecx, dword ptr [g_007dab44]
        mov    esi, dword ptr [g_007dab40]
        xor    edi, edi
        fst    dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        xor    edx, esi
        fstp    dword ptr [esp + 0x14]
        mov    esi, dword ptr [edx + 0x20]
        xor    esi, 0x85739531
        mov    eax, dword ptr [esi + 0x21e0]
        add    esi, 0x21b8
        cmp    eax, edi
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 8], edi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 0xc], edi
        je    L_d56a
        push    edi
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x18]
L_d56a:
        mov    dword ptr [esi + 0x20], edi
        mov    dword ptr [esi + 0x10], edi
        push    edi
        mov    dword ptr [esi + 0x24], edi
        mov    dword ptr [esi + 0x14], edi
        call    FUN_00707e70
        fsub    dword ptr [esp + 0x14]
        pop    edi
        fstp    qword ptr [esi]
        pop    esi
        pop    ecx
        ret    
    }
}
