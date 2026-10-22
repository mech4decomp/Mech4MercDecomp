/*
 * FUN_006a435e (extent 0x6a435e-0x6a466a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d22c;
extern float  g_0077431c;
extern float  g_00774600;
extern float  g_00799d40;
extern float  g_00799dd8;
extern float  g_00799e08;
extern float  g_00799e0c;
extern float  g_00799e10;
extern int    g_007f1f84;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00662ee0(void);
extern void __cdecl FUN_00663900(void);
extern void __cdecl FUN_00663bd0(void);
extern void __cdecl FUN_006651d0(void);
extern void __cdecl FUN_00665500(void);
extern void __cdecl FUN_00665670(void);
extern void __cdecl FUN_006a22a0(void);
extern void __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a4b30(void);
extern void __cdecl FUN_006a4b70(void);
extern void __cdecl FUN_006a4c30(void);
extern void __cdecl FUN_006a4ee0(void);

__declspec(naked) void FUN_006a435e(void)
{
    __asm {
        nop    
        nop    
        mov    al, byte ptr [ecx + 0xc]
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
        sub    esp, 8
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi]
        mov    ebp, ecx
        push    edi
        mov    ecx, esi
        call    dword ptr [eax + 0x38]
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [g_00799e10]
        mov    eax, dword ptr [eax + 0x2bc]
        mov    dword ptr [esp + 0x18], eax
        fdiv    dword ptr [esp + 0x18]
        xor    edi, edi
        push    edi
        push    1
        push    1
        push    edi
        push    esi
        fstp    dword ptr [esp + 0x24]
        call    FUN_00665670
        mov    edx, dword ptr [esi]
        add    esp, 0x14
        mov    ecx, esi
        call    dword ptr [edx + 0xd4]
        cmp    al, 1
        jne    L_43ce
        push    1
        push    esi
        call    FUN_00662ee0
        add    esp, 8
L_43ce:
        push    esi
        call    FUN_006a22f0
        add    esp, 4
        test    al, al
        jne    L_43ea
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 8
        ret    4
L_43ea:
        fld    dword ptr [g_00799e0c]
        mov    eax, dword ptr [ebp + 8]
        sub    eax, edi
        fdiv    dword ptr [esp + 0x18]
        push    ebx
        fstp    dword ptr [esp + 0x10]
        je    L_453f
        dec    eax
        je    L_44b6
        dec    eax
        jne    L_4631
        push    0x41200000
        push    esi
        call    FUN_00665500
        push    0x41000000
        push    esi
        call    FUN_006651d0
        mov    eax, dword ptr [esi]
        add    esp, 0x10
        mov    ecx, esi
        call    dword ptr [eax + 0xdc]
        fcomp    dword ptr [g_00774600]
        fnstsw  ax
        test    ah, 1
        jne    L_449b
        fld    dword ptr [g_00799e08]
        push    ecx
        fdiv    dword ptr [esp + 0x20]
        fstp    dword ptr [esp]
        push    esi
        call    FUN_006a4c30
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 0x41
        je    L_449b
        push    0x3f800000
        push    esi
        call    FUN_006a4b30
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 0x41
        je    L_449b
        push    esi
        call    FUN_006a4ee0
        fcomp    dword ptr [g_00799d40]
        add    esp, 4
        fnstsw  ax
        test    ah, 1
        je    L_4631
L_449b:
        fld    dword ptr [g_0076d064]
        pop    ebx
        mov    dword ptr [ebp + 8], edi
        pop    edi
        pop    esi
        mov    byte ptr [ebp + 0xc], 1
        mov    byte ptr [ebp + 4], 1
        pop    ebp
        add    esp, 8
        ret    4
L_44b6:
        push    0x41000000
        push    esi
        call    FUN_006651d0
        mov    ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    esi
        call    FUN_006a4c30
        fcomp    dword ptr [g_00799d40]
        add    esp, 0x10
        fnstsw  ax
        test    ah, 0x41
        jne    L_4631
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xdc]
        fcomp    dword ptr [g_00799dd8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4528
        push    esi
        call    FUN_006a4ee0
        fcomp    dword ptr [g_00799d40]
        add    esp, 4
        fnstsw  ax
        test    ah, 0x41
        jne    L_4528
        fld    dword ptr [g_0076d064]
        pop    ebx
        pop    edi
        pop    esi
        mov    dword ptr [ebp + 8], 2
        mov    byte ptr [ebp + 4], 1
        pop    ebp
        add    esp, 8
        ret    4
L_4528:
        fld    dword ptr [g_0076d064]
        pop    ebx
        mov    dword ptr [ebp + 8], edi
        pop    edi
        pop    esi
        mov    byte ptr [ebp + 4], 1
        pop    ebp
        add    esp, 8
        ret    4
L_453f:
        fld    dword ptr [esp + 0x10]
        push    ecx
        fmul    dword ptr [g_0077431c]
        fstp    dword ptr [esp]
        push    esi
        call    FUN_006a4c30
        fsubr    dword ptr [g_0076d064]
        add    esp, 8
        fcomp    dword ptr [g_00799d40]
        fnstsw  ax
        test    ah, 0x41
        jne    L_459b
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xdc]
        fcomp    dword ptr [g_0076d22c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_459b
        fld    dword ptr [g_0076d064]
        pop    ebx
        pop    edi
        pop    esi
        mov    dword ptr [ebp + 8], 1
        mov    byte ptr [ebp + 4], 1
        pop    ebp
        add    esp, 8
        ret    4
L_459b:
        mov    ebx, dword ptr [esp + 0x10]
        push    ebx
        push    esi
        call    FUN_006a4b70
        fcomp    dword ptr [g_00799d40]
        mov    edx, dword ptr [esi]
        add    esp, 8
        push    0x40800000
        fnstsw  ax
        mov    ecx, esi
        test    ah, 0x41
        jne    L_45fb
        call    dword ptr [edx + 0x78]
        test    al, al
        je    L_45ef
        mov    eax, dword ptr [esi]
        mov    edi, dword ptr [g_007f1f84]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    edi
        call    FUN_00415230
        test    al, al
        je    L_45ef
        mov    eax, 2
        push    eax
        push    ebx
        push    esi
        call    FUN_00663900
        jmp    L_462e
L_45ef:
        xor    eax, eax
        push    eax
        push    ebx
        push    esi
        call    FUN_00663900
        jmp    L_462e
L_45fb:
        call    dword ptr [edx + 0x78]
        test    al, al
        je    L_4623
        mov    eax, dword ptr [esi]
        mov    edi, dword ptr [g_007f1f84]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    edi
        call    FUN_00415230
        test    al, al
        je    L_4623
        mov    eax, 2
        jmp    L_4625
L_4623:
        xor    eax, eax
L_4625:
        push    0
        push    eax
        push    esi
        call    FUN_00663bd0
L_462e:
        add    esp, 0xc
L_4631:
        fld    dword ptr [g_0076d064]
        pop    ebx
        pop    edi
        pop    esi
        mov    byte ptr [ebp + 4], 1
        pop    ebp
        add    esp, 8
        ret    4
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
        push    esi
        mov    esi, ecx
        call    FUN_006a22a0
        xor    eax, eax
        mov    dword ptr [esi + 8], eax
        mov    byte ptr [esi + 0xc], al
        mov    dword ptr [esi], 0x799e14
        mov    eax, esi
        pop    esi
        ret    
    }
}
