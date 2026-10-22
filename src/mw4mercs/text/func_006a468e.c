/*
 * FUN_006a468e (extent 0x6a468e-0x6a49de) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0077de8c;
extern float  g_00799d40;
extern int    g_007f2104;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005b5290(void);
extern void __cdecl FUN_005b52f0(void);
extern void __cdecl FUN_00662ee0(void);
extern void __cdecl FUN_00663900(void);
extern void __cdecl FUN_00664680(void);
extern void __cdecl FUN_00665670(void);
extern void __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a26f0(void);
extern void __cdecl FUN_006a49e0(void);
extern void __cdecl FUN_006a4b70(void);
extern void __cdecl FUN_006a4ee0(void);
extern void __cdecl FUN_006a5220(void);

__declspec(naked) void FUN_006a468e(void)
{
    __asm {
        nop    
        nop    
        sub    esp, 0x48
        push    ebx
        mov    ebx, dword ptr [g_007f2104]
        push    esi
        mov    esi, dword ptr [esp + 0x54]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    ebx
        call    FUN_00415230
        test    al, al
        jne    L_46c8
        fld    dword ptr [g_0076c5b0]
        mov    byte ptr [edi + 4], al
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x48
        ret    4
L_46c8:
        mov    ebx, 1
        push    ebx
        push    ebx
        push    0
        push    0
        push    esi
        call    FUN_00665670
        mov    edx, dword ptr [esi]
        add    esp, 0x14
        mov    ecx, esi
        call    dword ptr [edx + 0xd4]
        cmp    al, bl
        jne    L_482c
        push    esi
        call    FUN_006a4ee0
        fcomp    dword ptr [g_00799d40]
        add    esp, 4
        fnstsw  ax
        test    ah, bl
        jne    L_470d
        push    ebx
        push    esi
        call    FUN_00662ee0
        add    esp, 8
L_470d:
        mov    eax, dword ptr [esi]
        push    ebp
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    ebp, eax
        call    dword ptr [edx + 0x34]
        mov    eax, dword ptr [eax + 0xd8]
        mov    edx, dword ptr [esi]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 0x20], eax
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0xac]
        mov    ecx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [edi + 8]
        sub    eax, 0
        mov    dword ptr [esp + 0x14], ecx
        je    L_47d8
        dec    eax
        jne    L_4819
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [g_0076d064]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_47b9
        push    0x44160000
        push    esi
        call    FUN_006a5220
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_479f
        fld    dword ptr [g_0076d064]
        pop    ebp
        mov    byte ptr [edi + 0xc], bl
        mov    byte ptr [edi + 4], bl
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x48
        ret    4
L_479f:
        fld    dword ptr [g_0076d064]
        pop    ebp
        mov    byte ptr [edi + 4], bl
        mov    dword ptr [edi + 8], 0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x48
        ret    4
L_47b9:
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        mov    ecx, ebp
        call    FUN_005b52f0
        fld    dword ptr [g_0076d064]
        pop    ebp
        mov    byte ptr [edi + 4], bl
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x48
        ret    4
L_47d8:
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [g_0077de8c]
        fst    dword ptr [esp + 0x5c]
        fsub    dword ptr [g_0076d064]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 1
        je    L_480d
        fld    dword ptr [g_0076d064]
        pop    ebp
        mov    dword ptr [edi + 8], ebx
        mov    byte ptr [edi + 4], bl
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x48
        ret    4
L_480d:
        mov    eax, dword ptr [esp + 0x5c]
        push    eax
        mov    ecx, ebp
        call    FUN_005b5290
L_4819:
        fld    dword ptr [g_0076d064]
        pop    ebp
        mov    byte ptr [edi + 4], bl
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x48
        ret    4
L_482c:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x48
        ret    4
        nop    
        nop    
        nop    
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
        sub    esp, 0xc
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xd4]
        test    al, al
        je    L_48b4
        push    1
        push    esi
        call    FUN_00662ee0
        push    esi
        call    FUN_006a22f0
        add    esp, 0xc
        cmp    al, 1
        jne    L_48b4
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x3c]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        add    eax, 0x80
        mov    dword ptr [esp + 4], ecx
        mov    edx, dword ptr [eax + 0x1c]
        mov    dword ptr [esp + 8], edx
        mov    eax, dword ptr [eax + 0x2c]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0xc], eax
        lea    eax, [esp + 4]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x10c]
L_48b4:
        fld    dword ptr [g_0076d064]
        pop    esi
        add    esp, 0xc
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
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0xc]
        lea    ecx, [edi + 0xc]
        push    esi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    edx, dword ptr [edi + 0x1c]
        lea    ecx, [edi + 0x1c]
        push    esi
        call    dword ptr [edx]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_49a9
        push    esi
        mov    ecx, edi
        call    FUN_006a26f0
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_49a9
        push    0x43e10000
        push    esi
        call    FUN_006a4b70
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        je    L_494c
        push    0
        push    0x43960000
        push    esi
        call    FUN_00663900
        fld    dword ptr [g_0076d064]
        add    esp, 0xc
        pop    edi
        pop    esi
        ret    4
L_494c:
        push    esi
        mov    edi, 2
        call    FUN_006a49e0
        fcomp    dword ptr [g_00799d40]
        add    esp, 4
        fnstsw  ax
        test    ah, 0x41
        je    L_499d
        push    0x43960000
        push    esi
        call    FUN_006a4b70
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_499d
        push    0x42c80000
        push    esi
        call    FUN_006a4b70
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 0x41
        jne    L_499f
L_499d:
        xor    edi, edi
L_499f:
        push    edi
        push    esi
        call    FUN_00664680
        add    esp, 8
L_49a9:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
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
        nop    
        mov    eax, dword ptr [esp + 4]
        push    0
        push    0
        push    1
        push    0
        push    eax
        call    FUN_00665670
        fld    dword ptr [g_0076d064]
        add    esp, 0x14
        ret    4
    }
}
