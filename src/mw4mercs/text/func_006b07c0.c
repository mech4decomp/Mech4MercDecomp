/*
 * FUN_006b07c0 (extent 0x6b07c0-0x6b18c4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0077de9c;
extern float  g_00786dd0;
extern int    g_00799ff0;
extern int    g_007b8ce8;
extern int    g_007b8cec;
extern int    g_007b8cf0;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041ea60(void);
extern void __cdecl FUN_0041eae0(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0041ee20(void);
extern void __cdecl FUN_004e27f0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00584520(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_006b07c0(void)
{
    __asm {
        sub    esp, 0x30
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x44]
        mov    ebp, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebp, dword ptr [esi + 0x10]
        shl    ebp, 3
        cmp    eax, -0x14
        je    L_07e0
        lea    ebp, [eax + ebp - 8]
L_07e0:
        mov    edi, dword ptr [esp + 0x44]
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        lea    ecx, [esp + 0x48]
        push    ecx
        mov    ecx, esi
        mov    ebx, eax
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x48]
        test    al, al
        jne    L_0829
        mov    edx, dword ptr [edi + 0xe0]
        cmp    dword ptr [edx + 0x14], 1
        je    L_0ac6
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0xc8]
        mov    al, byte ptr [esp + 0x48]
        test    al, al
        je    L_0ac6
L_0829:
        mov    ecx, dword ptr [g_007b8cec]
        mov    edx, dword ptr [g_007b8ce8]
        mov    eax, dword ptr [g_007b8cf0]
        mov    dword ptr [esp + 0x20], ecx
        mov    ecx, dword ptr [g_007b8d88]
        mov    dword ptr [esp + 0x1c], edx
        mov    edx, dword ptr [g_007b8d8c]
        mov    dword ptr [esp + 0x28], ecx
        mov    dword ptr [esp + 0x24], eax
        mov    eax, dword ptr [g_007b8d90]
        mov    dword ptr [esp + 0x2c], edx
        mov    dword ptr [esp + 0x30], eax
        lea    ecx, [esp + 0x44]
        push    ecx
        lea    edx, [esp + 0x14]
        push    edx
        mov    edx, dword ptr [g_007dab44]
        lea    eax, [esp + 0x1c]
        push    eax
        mov    eax, dword ptr [edx]
        lea    ecx, [esp + 0x24]
        push    ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        mov    ecx, dword ptr [g_007b8d88]
        mov    edx, dword ptr [g_007b8d8c]
        mov    eax, dword ptr [g_007b8d90]
        push    1
        push    0
        push    0x15
        mov    dword ptr [esp + 0x40], ecx
        mov    dword ptr [esp + 0x44], edx
        mov    dword ptr [esp + 0x48], eax
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x50]
        mov    edx, dword ptr [esp + 0x1c]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x34]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    1
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    ecx, [esp + 0x38]
        push    ecx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    2
        push    0x15
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    3
        push    0x15
        call    FUN_0067f7b0
        mov    edx, dword ptr [g_00799ff0]
        add    esp, 0xc
        push    eax
        push    edx
        fld    dword ptr [g_00799ff0]
        push    ecx
        fchs    
        lea    eax, [esp + 0x28]
        fstp    dword ptr [esp]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    4
        push    0x15
        call    FUN_0067f7b0
        fld    dword ptr [g_00799ff0]
        mov    ecx, dword ptr [g_00799ff0]
        fchs    
        add    esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea    edx, [esp + 0x2c]
        fstp    dword ptr [esp]
        push    edx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    5
        push    0x15
        call    FUN_0067f7b0
        fld    dword ptr [g_00799ff0]
        add    esp, 0xc
        fchs    
        push    eax
        mov    eax, dword ptr [g_00799ff0]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x30]
        fstp    dword ptr [esp]
        push    ecx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    6
        push    0x15
        call    FUN_0067f7b0
        fld    dword ptr [ebx + 0x2bc]
        fmul    dword ptr [g_0077de9c]
        mov    edx, dword ptr [ebx + 0x2c4]
        add    esp, 0xc
        push    eax
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    7
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    ecx, [edi + 0x42c]
        push    ecx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    8
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    edx, [edi + 0x430]
        push    edx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    9
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    eax, [edi + 0x434]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    0xa
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    ecx, [edi + 0x438]
        push    ecx
        mov    ecx, esi
        call    FUN_0041edd0
        mov    edx, dword ptr [esp + 0x64]
        mov    eax, dword ptr [esp + 0x54]
        mov    ecx, dword ptr [esp + 0x3c]
        mov    ebx, dword ptr [edi]
        push    edx
        push    eax
        push    ecx
        sub    esp, 0xc
        lea    edx, [esp + 0x4c]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        sub    esp, 0xc
        lea    eax, [esp + 0x40]
        mov    ecx, esp
        push    eax
        call    FUN_00584520
        sub    esp, 0xc
        lea    edx, [esp + 0x58]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        mov    ecx, edi
        call    dword ptr [ebx + 0x160]
        mov    eax, dword ptr [esp + 0x3c]
        mov    dword ptr [edi + 0x440], eax
L_0ac6:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_0add
        lea    eax, [eax + esi - 8]
L_0add:
        mov    edx, dword ptr [g_007dab44]
        sub    eax, ebp
        mov    ebp, dword ptr [g_007dab40]
        mov    ecx, eax
        mov    eax, dword ptr [edx]
        xor    eax, ebp
        mov    edx, dword ptr [eax + 0x14]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x58]
        mov    esi, dword ptr [eax + edx*4 + 0x9ca4]
        add    eax, 0x9c9c
        add    esi, ecx
        mov    dword ptr [eax + edx*4 + 8], esi
        mov    edx, dword ptr [eax + 0xc00]
        pop    edi
        pop    esi
        add    edx, ecx
        pop    ebp
        mov    dword ptr [eax + 0xc00], edx
        pop    ebx
        add    esp, 0x30
        ret    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ebx
        shl    edi, 3
        cmp    eax, -0x14
        je    L_0b4f
        lea    edi, [edi + eax - 8]
L_0b4f:
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x14]
        xor    ebx, ebx
        cmp    al, bl
        je    L_0cbd
        push    1
        push    ebx
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    1
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    2
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    3
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    4
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    5
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    6
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    7
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    8
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    9
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    0xa
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
L_0cbd:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_0cd4
        lea    eax, [eax + esi - 8]
L_0cd4:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x24]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add    ecx, 0x9c9c
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        push    esi
        push    1
        push    0
        push    0x15
        call    FUN_0067f7b0
        push    1
        mov    esi, eax
        push    1
        push    0x15
        inc    esi
        call    FUN_0067f7b0
        push    1
        push    2
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    3
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    4
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    5
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        add    esp, 0x48
        push    1
        push    6
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    7
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    8
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    9
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    0xa
        push    0x15
        add    esi, eax
        call    FUN_0067f7b0
        add    esp, 0x3c
        add    eax, esi
        pop    esi
        ret    
        nop    
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
        je    L_0e32
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        jne    L_0e34
L_0e32:
        xor    al, al
L_0e34:
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
        sub    esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x38]
        mov    ebx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebx, dword ptr [esi + 0x10]
        shl    ebx, 3
        cmp    eax, -0x14
        je    L_0e60
        lea    ebx, [ebx + eax - 8]
L_0e60:
        mov    edi, dword ptr [esp + 0x38]
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [edi + 0xe0]
        mov    ebp, eax
        cmp    dword ptr [ecx + 0x14], 1
        je    L_10b7
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, esi
        mov    byte ptr [esp + 0x40], 1
        call    FUN_0041eae0
        mov    eax, dword ptr [edi]
        lea    ecx, [esp + 0x28]
        push    ecx
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, edi
        call    dword ptr [eax + 0x154]
        lea    eax, [esp + 0x38]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        lea    edx, [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 0x24]
        push    eax
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    0
        push    0x15
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x1c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    1
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    2
        push    0x15
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        mov    ecx, dword ptr [esp + 0x28]
        push    1
        push    3
        push    0x15
        mov    dword ptr [esp + 0x48], ecx
        call    FUN_0067f7b0
        fld    dword ptr [g_00799ff0]
        mov    edx, dword ptr [g_00799ff0]
        fchs    
        add    esp, 0xc
        push    eax
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        mov    ecx, dword ptr [esp + 0x2c]
        push    1
        push    4
        push    0x15
        mov    dword ptr [esp + 0x48], ecx
        call    FUN_0067f7b0
        fld    dword ptr [g_00799ff0]
        mov    edx, dword ptr [g_00799ff0]
        fchs    
        add    esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea    eax, [esp + 0x48]
        fstp    dword ptr [esp]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        mov    ecx, dword ptr [esp + 0x30]
        push    1
        push    5
        push    0x15
        mov    dword ptr [esp + 0x48], ecx
        call    FUN_0067f7b0
        fld    dword ptr [g_00799ff0]
        mov    edx, dword ptr [g_00799ff0]
        fchs    
        add    esp, 0xc
        push    eax
        push    edx
        push    ecx
        lea    eax, [esp + 0x48]
        fstp    dword ptr [esp]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    6
        push    0x15
        call    FUN_0067f7b0
        fld    dword ptr [ebp + 0x2bc]
        fmul    dword ptr [g_0077de9c]
        add    esp, 0xc
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x2c4]
        fstp    dword ptr [esp]
        push    ecx
        lea    edx, [edi + 0x440]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    7
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    eax, [edi + 0x42c]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    8
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    ecx, [edi + 0x430]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    9
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    edx, [edi + 0x434]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    0xa
        push    0x15
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        add    edi, 0x438
        push    edi
        mov    ecx, esi
        call    FUN_0041ee20
        jmp    L_10c8
L_10b7:
        lea    eax, [esp + 0x3c]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x40], 0
        call    FUN_0041eae0
L_10c8:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_10df
        lea    eax, [eax + esi - 8]
L_10df:
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        sub    eax, ebx
        mov    ecx, eax
        mov    eax, dword ptr [edx]
        xor    eax, ebp
        mov    edx, dword ptr [eax + 0x14]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x40]
        mov    esi, dword ptr [eax + edx*4 + 0x9ca4]
        add    eax, 0x9c9c
        add    esi, ecx
        mov    dword ptr [eax + edx*4 + 8], esi
        mov    edx, dword ptr [eax + 0xc00]
        pop    edi
        pop    esi
        add    edx, ecx
        pop    ebp
        mov    dword ptr [eax + 0xc00], edx
        pop    ebx
        add    esp, 0x24
        ret    
        nop    
        nop    
        sub    esp, 0x30
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x44]
        mov    ebp, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebp, dword ptr [esi + 0x10]
        shl    ebp, 3
        cmp    eax, -0x14
        je    L_1150
        lea    ebp, [eax + ebp - 8]
L_1150:
        mov    edi, dword ptr [esp + 0x44]
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        lea    ecx, [esp + 0x48]
        push    ecx
        mov    ecx, esi
        mov    ebx, eax
        call    FUN_0041ea60
        mov    edx, dword ptr [edi + 0xe0]
        mov    ecx, dword ptr [edx + 0x14]
        xor    eax, eax
        cmp    ecx, 1
        mov    cl, byte ptr [esp + 0x48]
        setne    al
        test    cl, cl
        mov    dword ptr [esp + 0x44], eax
        je    L_11a2
        test    eax, eax
        jne    L_119a
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [eax + 0xc4]
        mov    eax, dword ptr [esp + 0x44]
L_119a:
        mov    cl, byte ptr [esp + 0x48]
        test    cl, cl
        jne    L_11c0
L_11a2:
        test    eax, eax
        je    L_13b4
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0xc8]
        mov    al, byte ptr [esp + 0x48]
        test    al, al
        je    L_13b4
L_11c0:
        mov    eax, dword ptr [g_007b8cec]
        mov    ecx, dword ptr [g_007b8ce8]
        mov    edx, dword ptr [g_007b8cf0]
        mov    dword ptr [esp + 0x38], eax
        mov    eax, dword ptr [g_007b8d88]
        mov    dword ptr [esp + 0x34], ecx
        mov    ecx, dword ptr [g_007b8d8c]
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x3c], edx
        mov    edx, dword ptr [g_007b8d90]
        mov    dword ptr [esp + 0x20], ecx
        mov    dword ptr [esp + 0x24], edx
        lea    eax, [esp + 0x44]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        lea    edx, [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 0x24]
        push    eax
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        mov    eax, dword ptr [g_007b8d88]
        mov    ecx, dword ptr [g_007b8d8c]
        mov    edx, dword ptr [g_007b8d90]
        push    1
        push    0
        push    0x16
        mov    dword ptr [esp + 0x34], eax
        mov    dword ptr [esp + 0x38], ecx
        mov    dword ptr [esp + 0x3c], edx
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x1c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x48]
        push    eax
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    1
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    2
        push    0x16
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    3
        push    0x16
        call    FUN_0067f7b0
        mov    ecx, dword ptr [g_00799ff0]
        add    esp, 0xc
        push    eax
        push    ecx
        fld    dword ptr [g_00799ff0]
        push    ecx
        fchs    
        lea    edx, [esp + 0x40]
        fstp    dword ptr [esp]
        push    edx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    4
        push    0x16
        call    FUN_0067f7b0
        fld    dword ptr [ebx + 0x2bc]
        fmul    dword ptr [g_0077de9c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [ebx + 0x2c4]
        push    ecx
        fstp    dword ptr [esp]
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    5
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    edx, [edi + 0x42c]
        push    edx
        mov    ecx, esi
        call    FUN_0041edd0
        push    1
        push    6
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    eax, [edi + 0x430]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        mov    ecx, dword ptr [esp + 0x64]
        mov    edx, dword ptr [esp + 0x54]
        mov    eax, dword ptr [esp + 0x30]
        mov    ebx, dword ptr [edi]
        push    ecx
        push    edx
        push    eax
        sub    esp, 0xc
        lea    edx, [esp + 0x40]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        sub    esp, 0xc
        lea    eax, [esp + 0x58]
        mov    ecx, esp
        push    eax
        call    FUN_00584520
        sub    esp, 0xc
        lea    edx, [esp + 0x4c]
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        mov    ecx, edi
        call    dword ptr [ebx + 0x160]
        mov    eax, dword ptr [esp + 0x30]
        mov    dword ptr [edi + 0x440], eax
L_13b4:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_13cb
        lea    eax, [eax + esi - 8]
L_13cb:
        mov    edx, dword ptr [g_007dab44]
        sub    eax, ebp
        mov    ebp, dword ptr [g_007dab40]
        mov    ecx, eax
        mov    eax, dword ptr [edx]
        xor    eax, ebp
        mov    edx, dword ptr [eax + 0x14]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x58]
        mov    esi, dword ptr [eax + edx*4 + 0x9ca4]
        add    eax, 0x9c9c
        add    esi, ecx
        mov    dword ptr [eax + edx*4 + 8], esi
        mov    edx, dword ptr [eax + 0xc00]
        pop    edi
        pop    esi
        add    edx, ecx
        pop    ebp
        mov    dword ptr [eax + 0xc00], edx
        pop    ebx
        add    esp, 0x30
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ebx
        shl    edi, 3
        cmp    eax, -0x14
        je    L_143f
        lea    edi, [edi + eax - 8]
L_143f:
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x14]
        xor    ebx, ebx
        cmp    al, bl
        je    L_1531
        push    1
        push    ebx
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    1
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    2
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    3
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    4
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    5
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x10]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    6
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
L_1531:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_1548
        lea    eax, [eax + esi - 8]
L_1548:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x24]
        mov    esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add    ecx, 0x9c9c
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    1
        push    0
        push    0x16
        call    FUN_0067f7b0
        push    1
        mov    esi, eax
        push    1
        push    0x16
        inc    esi
        call    FUN_0067f7b0
        push    1
        push    2
        push    0x16
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    3
        push    0x16
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    4
        push    0x16
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    5
        push    0x16
        add    esi, eax
        call    FUN_0067f7b0
        add    esp, 0x48
        push    1
        push    6
        push    0x16
        add    esi, eax
        call    FUN_0067f7b0
        add    esp, 0xc
        add    eax, esi
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
        je    L_1682
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        jne    L_1684
L_1682:
        xor    al, al
L_1684:
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
        sub    esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x38]
        mov    ebx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebx, dword ptr [esi + 0x10]
        shl    ebx, 3
        cmp    eax, -0x14
        je    L_16b0
        lea    ebx, [ebx + eax - 8]
L_16b0:
        mov    edi, dword ptr [esp + 0x38]
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [edi + 0xe0]
        mov    ebp, eax
        cmp    dword ptr [ecx + 0x14], 1
        je    L_184d
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, esi
        mov    byte ptr [esp + 0x40], 1
        call    FUN_0041eae0
        mov    eax, dword ptr [edi]
        lea    ecx, [esp + 0x28]
        push    ecx
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, edi
        call    dword ptr [eax + 0x154]
        lea    eax, [esp + 0x38]
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, dword ptr [g_007dab44]
        lea    edx, [esp + 0x1c]
        push    edx
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 0x24]
        push    eax
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x1c]
        xor    ecx, 0x85739531
        call    FUN_004e27f0
        push    1
        push    0
        push    0x16
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x1c]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    1
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x447b4000
        push    0xc4faa000
        lea    eax, [esp + 0x2c]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    2
        push    0x16
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        push    ecx
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        mov    ecx, dword ptr [esp + 0x28]
        push    1
        push    3
        push    0x16
        mov    dword ptr [esp + 0x48], ecx
        call    FUN_0067f7b0
        fld    dword ptr [g_00799ff0]
        mov    edx, dword ptr [g_00799ff0]
        fchs    
        add    esp, 0xc
        push    eax
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    4
        push    0x16
        call    FUN_0067f7b0
        fld    dword ptr [ebp + 0x2bc]
        fmul    dword ptr [g_0077de9c]
        add    esp, 0xc
        push    eax
        push    ecx
        mov    ecx, dword ptr [ebp + 0x2c4]
        fstp    dword ptr [esp]
        push    ecx
        lea    edx, [edi + 0x440]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    5
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        lea    eax, [edi + 0x42c]
        push    eax
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    6
        push    0x16
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0xbf800000
        add    edi, 0x430
        push    edi
        mov    ecx, esi
        call    FUN_0041ee20
        jmp    L_185e
L_184d:
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x40], 0
        call    FUN_0041eae0
L_185e:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_1875
        lea    eax, [eax + esi - 8]
L_1875:
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        sub    eax, ebx
        mov    ecx, eax
        mov    eax, dword ptr [edx]
        xor    eax, ebp
        mov    edx, dword ptr [eax + 0x14]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x40]
        mov    esi, dword ptr [eax + edx*4 + 0x9ca4]
        add    eax, 0x9c9c
        add    esi, ecx
        mov    dword ptr [eax + edx*4 + 8], esi
        mov    edx, dword ptr [eax + 0xc00]
        pop    edi
        pop    esi
        add    edx, ecx
        pop    ebp
        mov    dword ptr [eax + 0xc00], edx
        pop    ebx
        add    esp, 0x24
        ret    
    }
}
