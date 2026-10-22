/*
 * FUN_0069e195 (extent 0x69e195-0x69e933) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077de9c;
extern float  g_00786dd0;
extern int    g_00799a20;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041eae0(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0041ee20(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_0058b5f0(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_0069e195(void)
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
        push    esi
        push    1
        push    0xa
        push    0
        call    FUN_0067f7b0
        push    1
        push    0xb
        push    0
        mov    esi, eax
        call    FUN_0067f7b0
        push    1
        push    0
        push    0
        lea    esi, [esi + eax + 4]
        call    FUN_0067f7b0
        push    1
        push    1
        push    0
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    2
        push    0
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    3
        push    0
        add    esi, eax
        call    FUN_0067f7b0
        add    esp, 0x48
        push    1
        push    6
        push    0
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    7
        push    0
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    8
        push    0
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    9
        push    0
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    4
        push    0
        lea    esi, [esi + eax + 1]
        call    FUN_0067f7b0
        push    1
        push    5
        push    0
        add    esi, eax
        call    FUN_0067f7b0
        add    esp, 0x48
        lea    eax, [eax + esi + 5]
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x4c
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x60]
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    ecx, -0x14
        push    edi
        mov    dword ptr [esp + 0x30], eax
        je    L_e27a
        lea    eax, [eax + ecx - 8]
        mov    dword ptr [esp + 0x30], eax
L_e27a:
        mov    edi, dword ptr [esp + 0x60]
        mov    edx, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [edx + 4]
        mov    edx, dword ptr [edi + 0x40c]
        mov    ebx, eax
        mov    eax, dword ptr [edi + 0x410]
        sub    eax, edx
        sar    eax, 2
        je    L_e2a6
        mov    ecx, edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esp + 0x28], edx
        jmp    L_e2ae
L_e2a6:
        mov    dword ptr [esp + 0x28], 0
L_e2ae:
        mov    eax, dword ptr [esp + 0x28]
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        lea    ecx, [esp + 0x50]
        push    ecx
        lea    edx, [esp + 0x48]
        mov    ebp, eax
        mov    eax, dword ptr [edi]
        push    edx
        mov    ecx, edi
        call    dword ptr [eax + 0x154]
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        lea    edx, [esp + 0x28]
        push    edx
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x1c]
        lea    eax, [esp + 0x30]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        mov    eax, dword ptr [edi + 0xe0]
        mov    edx, dword ptr [eax + 0x14]
        xor    ecx, ecx
        cmp    edx, 1
        setne    cl
        push    1
        lea    edx, [esp + 0x38]
        push    edx
        mov    dword ptr [esp + 0x3c], ecx
        mov    ecx, esi
        call    FUN_0041ec50
        push    1
        push    0xa
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f8147ae
        push    0xbf8147ae
        lea    eax, [edi + 0x430]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    0xb
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f8147ae
        push    0xbf8147ae
        lea    ecx, [edi + 0x42c]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ee20
        mov    edx, dword ptr [edi + 0xe0]
        xor    ecx, ecx
        mov    dword ptr [esp + 0x14], ecx
        mov    eax, dword ptr [edx + 0x14]
        sub    eax, 8
        je    L_e39e
        dec    eax
        je    L_e394
        sub    eax, 2
        jne    L_e3a6
        mov    dword ptr [esp + 0x14], ecx
        jmp    L_e3a6
L_e394:
        mov    dword ptr [esp + 0x14], 1
        jmp    L_e3a6
L_e39e:
        mov    dword ptr [esp + 0x14], 2
L_e3a6:
        push    2
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    FUN_0041ec50
        mov    eax, dword ptr [esp + 0x14]
        sub    eax, 0
        je    L_e5dc
        dec    eax
        je    L_e4bd
        dec    eax
        jne    L_e6e6
        push    3
        lea    ecx, [edi + 0x5b0]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ec50
        push    1
        push    0
        push    0
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea    ecx, [esp + 0x50]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    1
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    edx, [esp + 0x54]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    2
        push    0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x30]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        lea    edx, [esp + 0x58]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        mov    eax, dword ptr [esp + 0x50]
        push    1
        push    3
        push    0
        mov    dword ptr [esp + 0x44], eax
        call    FUN_0067f7b0
        fld    dword ptr [g_00799a20]
        mov    ecx, dword ptr [g_00799a20]
        fchs    
        add    esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea    edx, [esp + 0x44]
        fstp    dword ptr [esp]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    6
        push    0
        call    FUN_0067f7b0
        fld    dword ptr [ebx + 0x2bc]
        fmul    dword ptr [g_0077de9c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [ebx + 0x2c4]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        lea    ecx, [edi + 0x440]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ee20
        jmp    L_e6e6
L_e4bd:
        push    1
        push    0
        push    0
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        lea    ecx, [esp + 0x50]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    1
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    edx, [esp + 0x54]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    2
        push    0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x30]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x24]
        push    eax
        push    ecx
        lea    edx, [esp + 0x58]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        mov    eax, dword ptr [esp + 0x50]
        push    1
        push    3
        push    0
        mov    dword ptr [esp + 0x48], eax
        call    FUN_0067f7b0
        fld    dword ptr [g_00799a20]
        mov    ecx, dword ptr [g_00799a20]
        fchs    
        add    esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea    edx, [esp + 0x48]
        fstp    dword ptr [esp]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    7
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        lea    eax, [edi + 0x168]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    8
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x43960000
        lea    ecx, [edi + 0x16c]
        push    0xc3960000
        push    ecx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    9
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x43960000
        push    0xc3960000
        lea    edx, [edi + 0x170]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        jmp    L_e6e6
L_e5dc:
        push    1
        push    0
        push    0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x28]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x1c]
        push    eax
        push    ecx
        lea    edx, [esp + 0x50]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    1
        push    0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    eax, [esp + 0x54]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    2
        push    0
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x30]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x58]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        mov    ecx, dword ptr [esp + 0x50]
        push    1
        push    3
        push    0
        mov    dword ptr [esp + 0x4c], ecx
        call    FUN_0067f7b0
        fld    dword ptr [g_00799a20]
        mov    edx, dword ptr [g_00799a20]
        fchs    
        add    esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea    eax, [esp + 0x4c]
        fstp    dword ptr [esp]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    6
        push    0
        call    FUN_0067f7b0
        fld    dword ptr [ebx + 0x2bc]
        fmul    dword ptr [g_0077de9c]
        add    esp, 0xc
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebx + 0x2c4]
        fstp    dword ptr [esp]
        push    ecx
        lea    edx, [edi + 0x440]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        mov    ecx, edi
        call    FUN_0058b5f0
        mov    byte ptr [esp + 0x60], al
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0xc0]
        mov    byte ptr [esp + 0x13], al
        lea    ecx, [esp + 0x60]
        push    ecx
        mov    ecx, esi
        call    FUN_0041eae0
        lea    edx, [esp + 0x13]
        push    edx
        mov    ecx, esi
        call    FUN_0041eae0
L_e6e6:
        mov    edi, dword ptr [edi + 0x3d4]
        test    edi, edi
        mov    byte ptr [esp + 0x64], 1
        je    L_e710
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0x64]
        sub    eax, 0
        je    L_e70b
        dec    eax
        jne    L_e710
        mov    byte ptr [esp + 0x64], 0
        jmp    L_e710
L_e70b:
        mov    byte ptr [esp + 0x64], 1
L_e710:
        lea    ecx, [esp + 0x64]
        push    ecx
        mov    ecx, esi
        call    FUN_0041eae0
        push    1
        push    4
        push    0
        call    FUN_0067f7b0
        fld    dword ptr [ebp + 0x640]
        mov    edx, dword ptr [ebp + 0x640]
        fchs    
        mov    edi, dword ptr [esp + 0x34]
        add    esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea    eax, [edi + 0x19c]
        fstp    dword ptr [esp]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    5
        push    0
        call    FUN_0067f7b0
        fld    dword ptr [ebp + 0x63c]
        mov    ecx, dword ptr [ebp + 0x63c]
        fchs    
        add    esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea    edx, [edi + 0x198]
        fstp    dword ptr [esp]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        mov    dword ptr [esp + 0x2c], 2
        mov    eax, dword ptr [edi + 0x1e0]
        test    eax, eax
        jl    L_e79b
        cmp    eax, 3
        mov    dword ptr [esp + 0x2c], eax
        jle    L_e7a3
L_e79b:
        mov    dword ptr [esp + 0x2c], 0
L_e7a3:
        push    2
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_0041ec50
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_e7c8
        lea    eax, [eax + esi - 8]
L_e7c8:
        mov    ecx, dword ptr [esp + 0x30]
        mov    ebp, dword ptr [g_007dab40]
        sub    eax, ecx
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, ebp
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x68]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x6068]
        add    ecx, 0x6060
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        pop    esi
        add    edx, eax
        pop    ebp
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
        add    esp, 0x4c
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        fsubr    dword ptr [esp + 0x14]
        add    eax, 0x80
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 4], edx
        fsub    dword ptr [esp + 4]
        fld    dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 8], eax
        fsub    dword ptr [esp + 8]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00786dd0]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_e892
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        jne    L_e894
L_e892:
        xor    al, al
L_e894:
        add    esp, 0xc
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
        xor    eax, eax
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
        xor    eax, eax
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
        xor    al, al
        ret    
    }
}
