/*
 * FUN_005d8457 (extent 0x5d8457-0x5d8816) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d598;
extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_005d8820(void);
extern void __cdecl FUN_005d9f90(void);
extern void __cdecl FUN_005d9fb0(void);
extern void __cdecl FUN_005da020(void);
extern void __cdecl FUN_005da050(void);
extern void __cdecl FUN_005da270(void);
extern void __cdecl FUN_005da4e0(void);
extern void __cdecl FUN_005da550(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d8457(void)
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
        mov    edx, dword ptr [ecx + 0x14]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0x10]
        sub    edx, edi
        sar    edx, 2
        xor    esi, esi
        test    edx, edx
        jle    L_84a5
        mov    ebx, dword ptr [esp + 0x18]
        mov    ecx, edi
        mov    edi, dword ptr [esp + 0x14]
        mov    eax, ecx
L_8481:
        mov    ebp, dword ptr [eax]
        test    ebp, ebp
        je    L_849d
        cmp    dword ptr [ebp + 4], ebx
        jne    L_8491
        cmp    dword ptr [ebp + 8], edi
        je    L_84b2
L_8491:
        mov    ebp, dword ptr [eax]
        cmp    dword ptr [ebp + 4], edi
        jne    L_849d
        cmp    dword ptr [ebp + 8], ebx
        je    L_84d8
L_849d:
        inc    esi
        add    eax, 4
        cmp    esi, edx
        jl    L_8481
L_84a5:
        fld    dword ptr [g_0076d598]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_84b2:
        mov    esi, dword ptr [ecx + esi*4]
        cmp    dword ptr [esi + 4], edi
        jne    L_84c9
        mov    eax, dword ptr [esp + 0x1c]
        fld    dword ptr [esi + eax*8 + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_84c9:
        mov    ecx, dword ptr [esp + 0x1c]
        fld    dword ptr [esi + ecx*8 + 0x18]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_84d8:
        mov    esi, dword ptr [ecx + esi*4]
        cmp    dword ptr [esi + 4], edi
        jne    L_84ef
        mov    edx, dword ptr [esp + 0x1c]
        fld    dword ptr [esi + edx*8 + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_84ef:
        mov    eax, dword ptr [esp + 0x1c]
        fld    dword ptr [esi + eax*8 + 0x18]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x20]
        mov    edx, dword ptr [ecx + 0x1c]
        sub    eax, edx
        push    esi
        sar    eax, 2
        xor    esi, esi
        cmp    eax, esi
        jle    L_852b
        mov    ecx, edx
        mov    edx, eax
L_8516:
        mov    eax, dword ptr [ecx]
        cmp    eax, esi
        je    L_8525
        mov    dword ptr [eax + 0x38], esi
        mov    dword ptr [eax + 0x3c], esi
        mov    dword ptr [eax + 0x40], esi
L_8525:
        add    ecx, 4
        dec    edx
        jne    L_8516
L_852b:
        pop    esi
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0x40
        push    ebx
        push    ebp
        push    esi
        push    edi
        lea    eax, [esp + 0x13]
        mov    edi, ecx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_005d9f90
        mov    ecx, dword ptr [edi + 0x1c]
        mov    esi, dword ptr [edi + 0x20]
        mov    eax, dword ptr [esp + 0x14]
        sub    esi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        sub    ecx, eax
        sar    esi, 2
        sar    ecx, 2
        cmp    ecx, esi
        jae    L_85c6
        mov    ecx, dword ptr [esp + 0x18]
        mov    ebp, ecx
        sub    ebp, eax
        sar    ebp, 2
        test    eax, eax
        je    L_859a
        push    ecx
        push    eax
        push    esi
        lea    ecx, [esp + 0x20]
        call    FUN_005da550
        mov    edx, dword ptr [esp + 0x1c]
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x14]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_005da020
        jmp    L_85b4
L_859a:
        test    esi, esi
        je    L_85b2
        lea    eax, [esi*4]
        push    eax
        call    FUN_004084d0
        add    esp, 4
        mov    ebx, eax
        jmp    L_85b4
L_85b2:
        xor    ebx, ebx
L_85b4:
        lea    ecx, [ebx + ebp*4]
        lea    edx, [ebx + esi*4]
        mov    dword ptr [esp + 0x14], ebx
        mov    dword ptr [esp + 0x18], ecx
        mov    dword ptr [esp + 0x1c], edx
L_85c6:
        mov    ecx, dword ptr [edi + 0x20]
        mov    esi, dword ptr [edi + 0x1c]
        mov    ebp, dword ptr [esp + 0x60]
        mov    eax, dword ptr [esp + 0x64]
        sub    ecx, esi
        test    ecx, 0xfffffffc
        mov    dword ptr [ebp], 0
        mov    dword ptr [eax], 0
        jne    L_85fe
        lea    ecx, [esp + 0x14]
        call    FUN_005d9fb0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x40
        ret    0x14
L_85fe:
        mov    edx, dword ptr [edi + 0x20]
        mov    ebx, dword ptr [edi + 0x1c]
        sub    edx, ebx
        and    edx, 0xfffffffc
        cmp    edx, 4
        jne    L_862c
        mov    edi, ebx
        mov    ecx, dword ptr [edi]
        mov    edx, ecx
        mov    dword ptr [ebp], ecx
        lea    ecx, [esp + 0x14]
        mov    dword ptr [eax], edx
        call    FUN_005d9fb0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x40
        ret    0x14
L_862c:
        mov    eax, dword ptr [g_007f2464]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [esp + 0x54]
        push    ecx
        lea    ecx, [esp + 0x3c]
        call    FUN_0040c410
        mov    esi, dword ptr [edi + 0x1c]
        mov    ebx, dword ptr [edi + 0x20]
        cmp    esi, ebx
        mov    dword ptr [esp + 0x3c], 0
        je    L_86fe
L_865b:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_86f3
        add    eax, 8
        push    eax
        lea    ecx, [esp + 0x48]
        call    FUN_0040c5d0
        lea    edx, [esp + 0x44]
        push    edx
        lea    ecx, [esp + 0x30]
        call    FUN_0040c410
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x38], 0
        call    FUN_0040ca10
        fld    dword ptr [esp + 0x28]
        fld    st(0)
        mov    dword ptr [esp + 0x24], 0
        mov    edx, dword ptr [esi]
        fmul st(0), st(1)
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x48]
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        jne    L_86f3
        mov    eax, dword ptr [esp + 0x18]
        cmp    eax, dword ptr [esp + 0x1c]
        je    L_86e6
        push    esi
        push    eax
        call    FUN_005da4e0
        mov    eax, dword ptr [esp + 0x20]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x18], eax
        jmp    L_86f3
L_86e6:
        push    1
        push    esi
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_005da270
L_86f3:
        add    esi, 4
        cmp    esi, ebx
        jne    L_865b
L_86fe:
        mov    ebx, dword ptr [esp + 0x58]
        push    ebx
        lea    ecx, [esp + 0x3c]
        call    FUN_0040c410
        mov    esi, dword ptr [esp + 0x14]
        cmp    esi, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x3c], 0
        je    L_8796
L_871e:
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [eax + 8]
        add    eax, 8
        mov    dword ptr [esp + 0x44], ecx
        mov    edx, dword ptr [eax + 4]
        lea    ecx, [esp + 0x44]
        mov    dword ptr [esp + 0x48], edx
        mov    eax, dword ptr [eax + 8]
        push    ecx
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x50], eax
        call    FUN_0040c410
        lea    edx, [esp + 0x2c]
        push    edx
        lea    eax, [esp + 0x3c]
        push    eax
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x38], 0
        call    FUN_0040ca10
        fld    dword ptr [esp + 0x28]
        fld    st(0)
        mov    dword ptr [esp + 0x24], 0
        mov    ecx, dword ptr [esi]
        fmul st(0), st(1)
        fld    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x20]
        faddp st(1), st(0)
        fld    dword ptr [ecx + 0x48]
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        je    L_87e4
        mov    eax, dword ptr [esp + 0x18]
        add    esi, 4
        cmp    esi, eax
        jne    L_871e
L_8796:
        mov    edx, dword ptr [esp + 0x54]
        push    0
        push    0
        push    edx
        mov    ecx, edi
        call    FUN_005d8820
        mov    dword ptr [ebp], eax
        mov    eax, dword ptr [esp + 0x5c]
        push    0
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_005d8820
        mov    ecx, dword ptr [esp + 0x64]
        mov    dword ptr [ecx], eax
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x1c]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        call    FUN_005da050
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x40
        ret    0x14
L_87e4:
        mov    esi, dword ptr [esi]
        mov    edx, dword ptr [esp + 0x64]
        mov    dword ptr [ebp], esi
        mov    dword ptr [edx], esi
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x1c]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_005da020
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x40
        ret    0x14
    }
}
