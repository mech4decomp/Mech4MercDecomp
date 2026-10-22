/*
 * FUN_006a2cb8 (extent 0x6a2cb8-0x6a2e46) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_00799d40;
extern int    g_00799d48;
extern int    g_007f1f84;
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00663ad0(void);
extern void __cdecl FUN_00663bd0(void);
extern void __cdecl FUN_00664b20(void);
extern void __cdecl FUN_006a22f0(void);
extern void __cdecl FUN_006a29d0(void);
extern void __cdecl FUN_006a2a30(void);
extern void __cdecl FUN_006a4ae0(void);
extern void __cdecl FUN_006a4ee0(void);
extern void __cdecl FUN_006a5020(void);

__declspec(naked) void FUN_006a2cb8(void)
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x28]
        lea    ecx, [esi + 0x28]
        push    edi
        call    dword ptr [eax]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, dword ptr [g_00799d48]
        push    ecx
        push    edi
        call    FUN_006a4ae0
        fcomp    dword ptr [g_00799d40]
        add    esp, 8
        fnstsw  ax
        test    ah, 1
        jne    L_2cf6
        mov    byte ptr [esi + 4], 1
        jmp    L_2cfa
L_2cf6:
        mov    byte ptr [esi + 4], 0
L_2cfa:
        push    edi
        call    FUN_006a22f0
        add    esp, 4
        test    al, al
        je    L_2d73
        push    edi
        mov    ecx, esi
        call    FUN_006a29d0
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_2d2b
        fld    dword ptr [g_0076d064]
        pop    edi
        mov    byte ptr [esi + 4], 0
        pop    esi
        ret    4
L_2d2b:
        push    0x42c80000
        push    edi
        call    FUN_00663ad0
        push    1
        push    edi
        call    FUN_006a5020
        fsubr    dword ptr [g_0076d064]
        add    esp, 0x10
        fcomp    dword ptr [g_00799d40]
        fnstsw  ax
        test    ah, 1
        je    L_2d6a
        push    edi
        call    FUN_006a4ee0
        fcomp    dword ptr [g_00799d40]
        add    esp, 4
        fnstsw  ax
        test    ah, 1
        jne    L_2d73
L_2d6a:
        push    edi
        call    FUN_00664b20
        add    esp, 4
L_2d73:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        ret    4
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
        jne    L_2db6
        mov    byte ptr [edi + 4], 1
        jmp    L_2dba
L_2db6:
        mov    byte ptr [edi + 4], 0
L_2dba:
        push    esi
        call    FUN_006a22f0
        add    esp, 4
        test    al, al
        je    L_2e3b
        push    esi
        mov    ecx, edi
        call    FUN_006a2a30
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_2deb
        fld    dword ptr [g_0076d064]
        mov    byte ptr [edi + 4], 1
        pop    edi
        pop    esi
        ret    4
L_2deb:
        mov    edx, dword ptr [esi]
        push    0x40800000
        mov    ecx, esi
        call    dword ptr [edx + 0x78]
        test    al, al
        je    L_2e1c
        mov    eax, dword ptr [esi]
        mov    edi, dword ptr [g_007f1f84]
        mov    ecx, esi
        call    dword ptr [eax + 0x34]
        mov    ecx, dword ptr [eax + 4]
        push    edi
        call    FUN_00415230
        test    al, al
        je    L_2e1c
        mov    edi, 2
        jmp    L_2e1e
L_2e1c:
        xor    edi, edi
L_2e1e:
        mov    edx, dword ptr [esi]
        push    0x40a00000
        mov    ecx, esi
        call    dword ptr [edx + 0xd8]
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        push    esi
        call    FUN_00663bd0
        add    esp, 0xc
L_2e3b:
        fld    dword ptr [g_0076d064]
        pop    edi
        pop    esi
        ret    4
    }
}
