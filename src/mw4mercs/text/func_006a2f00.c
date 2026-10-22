/*
 * FUN_006a2f00 (extent 0x6a2f00-0x6a3202) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d5f0;
extern float  g_0077016c;
extern float  g_0077431c;
extern float  g_00799d40;
extern float  g_00799d44;
extern int    g_00799d48;
extern int    g_007f1f84;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_006633f0(void);
extern void __cdecl FUN_00663900(void);
extern void __cdecl FUN_00663bb0(void);
extern void __cdecl FUN_00664320(void);
extern void __cdecl FUN_00664850(void);
extern void __cdecl FUN_00664b20(void);
extern void __cdecl FUN_00664dd0(void);
extern void __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a2a30(void);
extern void __cdecl FUN_006a4ae0(void);
extern void __cdecl FUN_006a4b70(void);
extern void __cdecl FUN_006a4da0(void);
extern void __cdecl FUN_006a5020(void);

__declspec(naked) void FUN_006a2f00(void)
{
    __asm {
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x34]
        lea    ecx, [edi + 0x34]
        push    esi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [g_00799d48]
        push    ecx
        push    esi
        call    FUN_006a4ae0
        fcomp    dword ptr [g_00799d40]
        mov    ebx, 1
        add    esp, 8
        fnstsw  ax
        test    ah, bl
        jne    L_2f3a
        mov    byte ptr [edi + 4], bl
        jmp    L_2f3e
L_2f3a:
        mov    byte ptr [edi + 4], 0
L_2f3e:
        push    esi
        call    FUN_006a22f0
        add    esp, 4
        test    al, al
        je    L_3069
        push    esi
        mov    ecx, edi
        call    FUN_006a2a30
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_2f74
        fld    dword ptr [g_0076d064]
        mov    byte ptr [edi + 4], 0
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_2f74:
        push    0
        push    0x41a00000
        push    esi
        call    FUN_006a4da0
        fcomp    dword ptr [g_00799d40]
        add    esp, 0xc
        fnstsw  ax
        test    ah, 1
        jne    L_2f96
        mov    dword ptr [edi + 0x30], ebx
        jmp    L_2fc0
L_2f96:
        push    0
        push    0x42700000
        push    esi
        call    FUN_006a4da0
        fsubr    dword ptr [g_0076d064]
        add    esp, 0xc
        fcomp    dword ptr [g_00799d40]
        fnstsw  ax
        test    ah, 1
        jne    L_2fc0
        mov    dword ptr [edi + 0x30], 0
L_2fc0:
        cmp    dword ptr [edi + 0x30], ebx
        jne    L_302c
        mov    edx, dword ptr [esi]
        push    0x40800000
        mov    ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        je    L_2ff8
        mov    eax, dword ptr [esi]
        push    ebp
        mov    ebp, dword ptr [g_007f1f84]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    ebp
        call    FUN_00415230
        test    al, al
        pop    ebp
        je    L_2ff8
        mov    eax, 2
        jmp    L_2ffa
L_2ff8:
        xor    eax, eax
L_2ffa:
        mov    edx, dword ptr [esi]
        push    eax
        push    0x42700000
        mov    ecx, esi
        call    dword ptr [edx + 0xd8]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00664850
        push    esi
        call    FUN_00664b20
        fld    dword ptr [g_0076d064]
        add    esp, 0x10
        mov    byte ptr [edi + 4], bl
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_302c:
        mov    eax, dword ptr [esi]
        push    0x40800000
        mov    ecx, esi
        call    dword ptr [eax + 0x78]
        test    al, al
        je    L_305d
        mov    edx, dword ptr [esi]
        mov    edi, dword ptr [g_007f1f84]
        mov    ecx, esi
        call    dword ptr [edx + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    edi
        call    FUN_00415230
        test    al, al
        je    L_305d
        mov    eax, 2
        jmp    L_305f
L_305d:
        xor    eax, eax
L_305f:
        push    eax
        push    esi
        call    FUN_006633f0
        add    esp, 8
L_3069:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        pop    ebx
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
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x30]
        lea    ecx, [edi + 0x30]
        push    esi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [g_00799d48]
        push    ecx
        push    esi
        call    FUN_006a4ae0
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_30b6
        mov    byte ptr [edi + 4], 1
        jmp    L_30ba
L_30b6:
        mov    byte ptr [edi + 4], 0
L_30ba:
        push    esi
        call    FUN_006a22f0
        add    esp, 4
        test    al, al
        je    L_31f7
        push    esi
        mov    ecx, edi
        call    FUN_006a2a30
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_30ef
        fld    dword ptr [g_0076d064]
        mov    byte ptr [edi + 4], 0
        pop    edi
        pop    esi
        ret    4
L_30ef:
        push    0
        push    0x42b40000
        push    esi
        call    FUN_006a4da0
        fsubr    dword ptr [g_0076d064]
        add    esp, 0xc
        fcomp    dword ptr [g_00799d40]
        fnstsw  ax
        test    ah, 1
        jne    L_3173
        mov    edx, dword ptr [esi]
        push    0x40800000
        mov    ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        je    L_3143
        mov    eax, dword ptr [esi]
        mov    edi, dword ptr [g_007f1f84]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    edi
        call    FUN_00415230
        test    al, al
        je    L_3143
        mov    eax, 2
        jmp    L_3145
L_3143:
        xor    eax, eax
L_3145:
        mov    edx, dword ptr [esi]
        push    eax
        push    0x42b40000
        mov    ecx, esi
        call    dword ptr [edx + 0xd8]
        fmul    dword ptr [g_0077431c]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00663900
        fld    dword ptr [g_0076d064]
        add    esp, 0xc
        pop    edi
        pop    esi
        ret    4
L_3173:
        push    1
        push    esi
        call    FUN_006a5020
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_31a4
        push    0x42a00000
        push    esi
        call    FUN_00664320
        fld    dword ptr [g_0076d064]
        add    esp, 8
        pop    edi
        pop    esi
        ret    4
L_31a4:
        fld    dword ptr [g_00799d44]
        push    ecx
        fadd    dword ptr [g_0077016c]
        fstp    dword ptr [esp]
        push    esi
        call    FUN_006a4b70
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_31de
        push    esi
        call    FUN_00663bb0
        fld    dword ptr [g_0076d064]
        add    esp, 4
        pop    edi
        pop    esi
        ret    4
L_31de:
        fld    dword ptr [g_00799d44]
        push    ecx
        fadd    dword ptr [g_0076d5f0]
        fstp    dword ptr [esp]
        push    esi
        call    FUN_00664dd0
        add    esp, 8
L_31f7:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        ret    4
    }
}
