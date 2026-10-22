/*
 * FUN_006b1b6d (extent 0x6b1b6d-0x6b308a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_00786dd0;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0041ea60(void);
extern void __cdecl FUN_0041eae0(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041ec50(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0041ee20(void);
extern void __cdecl FUN_004211e0(void);
extern void __cdecl FUN_004e7760(void);
extern void __cdecl FUN_004e7790(void);
extern void __cdecl FUN_004e7a90(void);
extern void __cdecl FUN_004e7ac0(void);
extern void __cdecl FUN_004e7bf0(void);
extern void __cdecl FUN_004e7c30(void);
extern void __cdecl FUN_004e7ca0(void);
extern void __cdecl FUN_004e7ce0(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_006b1b6d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        mov    ebp, dword ptr [edi + 0x14]
        mov    esi, dword ptr [edi + 0x10]
        mov    eax, dword ptr [edi + 8]
        sub    ebp, esi
        shl    ebp, 3
        cmp    eax, -0x14
        mov    dword ptr [esp + 0xc], ebp
        je    L_1b9b
        lea    eax, [eax + ebp - 8]
        mov    dword ptr [esp + 0xc], eax
        mov    ebp, eax
L_1b9b:
        mov    esi, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    ebx
        call    dword ptr [edx + 4]
        mov    ebx, eax
        lea    eax, [esp + 0x28]
        push    eax
        mov    ecx, edi
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x28]
        test    al, al
        je    L_1cb8
        push    1
        push    0
        push    0x18
        call    FUN_0067f7b0
        fld    dword ptr [ebx + 0x640]
        mov    ecx, dword ptr [ebx + 0x640]
        fchs    
        add    esp, 0xc
        push    eax
        push    ecx
        push    ecx
        lea    edx, [esp + 0x24]
        fstp    dword ptr [esp]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        mov    eax, dword ptr [ebx + 0x63c]
        mov    dword ptr [esp + 0x24], eax
        fld    dword ptr [esp + 0x24]
        push    1
        push    1
        fchs    
        push    0x18
        fstp    dword ptr [esp + 0x20]
        call    FUN_0067f7b0
        mov    ecx, dword ptr [ebx + 0x63c]
        mov    ebp, dword ptr [esp + 0x20]
        add    esp, 0xc
        push    eax
        push    ecx
        push    ebp
        lea    edx, [esp + 0x28]
        push    edx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    2
        push    0x18
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x28]
        push    eax
        push    ebp
        lea    ecx, [esi + 0x1cc]
        push    ecx
        mov    ecx, edi
        call    FUN_0041edd0
        push    1
        push    3
        push    0x18
        call    FUN_0067f7b0
        mov    edx, dword ptr [ebx + 0x63c]
        add    esp, 0xc
        push    eax
        push    edx
        push    ebp
        lea    eax, [esi + 0x1c8]
        push    eax
        mov    ecx, edi
        call    FUN_0041edd0
        mov    ecx, dword ptr [esi + 0x198]
        mov    edx, dword ptr [esi + 0x19c]
        mov    eax, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x1a0], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [esi + 0x1a4], edx
        mov    edx, dword ptr [esp + 0x44]
        mov    dword ptr [esi + 0x1ac], eax
        mov    dword ptr [esi + 0x1a8], ecx
        mov    dword ptr [esi + 0x1b0], edx
        mov    dword ptr [esi + 0x1b4], 0
L_1cb8:
        mov    eax, dword ptr [edi + 0x14]
        mov    esi, dword ptr [edi + 0x10]
        mov    edi, dword ptr [edi + 8]
        sub    eax, esi
        shl    eax, 3
        cmp    edi, -0x14
        pop    ebx
        je    L_1cd0
        lea    eax, [eax + edi - 8]
L_1cd0:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        sub    eax, ebp
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x34]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add    ecx, 0x9c9c
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebp
        add    esp, 0x10
        ret    
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
        je    L_1d3f
        lea    edi, [edi + eax - 8]
L_1d3f:
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x14]
        xor    ebx, ebx
        cmp    al, bl
        je    L_1dcf
        push    1
        push    ebx
        push    0x18
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
        push    1
        push    ebx
        push    0x18
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
        push    0x18
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
        push    0x18
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], ebx
        call    FUN_0041eb40
L_1dcf:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_1de6
        lea    eax, [eax + esi - 8]
L_1de6:
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
        push    esi
        push    1
        push    0
        push    0x18
        call    FUN_0067f7b0
        push    1
        mov    esi, eax
        push    0
        push    0x18
        inc    esi
        call    FUN_0067f7b0
        push    1
        push    2
        push    0x18
        add    esi, eax
        call    FUN_0067f7b0
        push    1
        push    3
        push    0x18
        add    esi, eax
        call    FUN_0067f7b0
        add    esp, 0x30
        add    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        mov    ebx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebx, dword ptr [esi + 0x10]
        shl    ebx, 3
        cmp    eax, -0x14
        je    L_1e8d
        lea    ebx, [ebx + eax - 8]
L_1e8d:
        mov    ebp, dword ptr [esp + 0x14]
        mov    eax, dword ptr [ebp + 0x78]
        lea    ecx, [ebp + 0x78]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [ebp + 0xe0]
        mov    edi, eax
        cmp    dword ptr [ecx + 0x14], 1
        je    L_1f7c
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        mov    byte ptr [esp + 0x1c], 1
        call    FUN_0041eae0
        push    1
        push    0
        push    0x18
        call    FUN_0067f7b0
        fld    dword ptr [edi + 0x640]
        add    esp, 0xc
        fchs    
        push    eax
        mov    eax, dword ptr [edi + 0x640]
        push    eax
        push    ecx
        lea    ecx, [ebp + 0x19c]
        fstp    dword ptr [esp]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ee20
        mov    edx, dword ptr [edi + 0x63c]
        mov    dword ptr [esp + 0x14], edx
        fld    dword ptr [esp + 0x14]
        push    1
        push    1
        fchs    
        push    0x18
        fstp    dword ptr [esp + 0x24]
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [edi + 0x63c]
        push    eax
        push    ecx
        lea    edx, [ebp + 0x198]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    2
        push    0x18
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        push    ecx
        lea    edx, [ebp + 0x1cc]
        push    edx
        mov    ecx, esi
        call    FUN_0041ee20
        push    1
        push    3
        push    0x18
        call    FUN_0067f7b0
        mov    ecx, dword ptr [esp + 0x24]
        add    esp, 0xc
        push    eax
        mov    eax, dword ptr [edi + 0x63c]
        push    eax
        push    ecx
        add    ebp, 0x1c8
        push    ebp
        mov    ecx, esi
        call    FUN_0041ee20
        jmp    L_1f8d
L_1f7c:
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        mov    byte ptr [esp + 0x1c], 0
        call    FUN_0041eae0
L_1f8d:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        je    L_1fa4
        lea    eax, [eax + esi - 8]
L_1fa4:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x1c]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add    ecx, 0x9c9c
        sub    eax, ebx
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        pop    esi
        add    edx, eax
        pop    ebp
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0xc
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ecx + 0xc4]
        mov    eax, dword ptr [eax + 0xd8]
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
        je    L_2068
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        jne    L_206a
L_2068:
        xor    al, al
L_206a:
        add    esp, 0xc
        ret    
        nop    
        nop    
        sub    esp, 0x30
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x44]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ebx
        shl    edi, 3
        cmp    eax, -0x14
        mov    dword ptr [esp + 0x10], edi
        je    L_209c
        lea    eax, [edi + eax - 8]
        mov    dword ptr [esp + 0x10], eax
        mov    edi, eax
L_209c:
        mov    ebp, dword ptr [esp + 0x44]
        lea    ecx, [ebp + 0x370]
        push    ecx
        lea    ecx, [esp + 0x1c]
        call    FUN_00416bc0
        push    2
        lea    edx, [esp + 0x48]
        xor    ebx, ebx
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0x783ec4
        mov    dword ptr [esp + 0x4c], ebx
        call    FUN_0041eb40
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_0041ea60
        mov    ecx, dword ptr [ebp + 0x4c8]
        and    ecx, 0x80000003
        jns    L_20eb
        dec    ecx
        or    ecx, 0xfffffffc
        inc    ecx
L_20eb:
        cmp    dword ptr [esp + 0x44], ecx
        jne    L_21b3
        cmp    byte ptr [esp + 0x48], bl
        je    L_2114
        mov    edx, dword ptr [ebp + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_2114
        mov    eax, dword ptr [ebp]
        push    ebx
        push    3
        mov    ecx, ebp
        call    dword ptr [eax + 0x88]
L_2114:
        lea    ecx, [esp + 0x18]
        call    FUN_00416cc0
        mov    edi, eax
        cmp    edi, ebx
        je    L_2150
L_2123:
        push    2
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_0041eb40
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        mov    ecx, edi
        call    FUN_004e7ac0
        lea    ecx, [esp + 0x18]
        call    FUN_00416cc0
        mov    edi, eax
        cmp    edi, ebx
        jne    L_2123
L_2150:
        add    ebp, 0x384
        push    ebp
        lea    ecx, [esp + 0x30]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x2c], 0x783f04
        call    FUN_00416cc0
        mov    edi, eax
        cmp    edi, ebx
        je    L_21a4
L_2177:
        push    2
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_0041eb40
        mov    ecx, dword ptr [esp + 0x14]
        push    ecx
        mov    ecx, edi
        call    FUN_004e7790
        lea    ecx, [esp + 0x2c]
        call    FUN_00416cc0
        mov    edi, eax
        cmp    edi, ebx
        jne    L_2177
L_21a4:
        lea    ecx, [esp + 0x2c]
        call    FUN_00416c60
        mov    edi, dword ptr [esp + 0x10]
        jmp    L_222c
L_21b3:
        lea    ecx, [esp + 0x18]
        call    FUN_00416cc0
        test    eax, eax
        je    L_21df
L_21c0:
        push    2
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_0041eb40
        lea    ecx, [esp + 0x18]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_21c0
L_21df:
        add    ebp, 0x384
        push    ebp
        lea    ecx, [esp + 0x30]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x2c], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        je    L_2223
L_2204:
        push    2
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_0041eb40
        lea    ecx, [esp + 0x2c]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2204
L_2223:
        lea    ecx, [esp + 0x2c]
        call    FUN_00416c60
L_222c:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_2243
        lea    eax, [eax + esi - 8]
L_2243:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x58]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        add    dword ptr [ecx + 0xc00], eax
        lea    ecx, [esp + 0x18]
        call    FUN_00416c60
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x30
        ret    
        sub    esp, 0x28
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x34]
        lea    eax, [edi + 0x370]
        push    eax
        lea    ecx, [esp + 0x20]
        xor    esi, esi
        call    FUN_00416bc0
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_22ce
L_22c0:
        lea    ecx, [esp + 0x1c]
        inc    esi
        call    FUN_00416cc0
        test    eax, eax
        jne    L_22c0
L_22ce:
        add    edi, 0x384
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        je    L_2301
L_22f3:
        lea    ecx, [esp + 8]
        inc    esi
        call    FUN_00416cc0
        test    eax, eax
        jne    L_22f3
L_2301:
        lea    ecx, [esp + 8]
        call    FUN_00416c60
        lea    ecx, [esp + 0x1c]
        call    FUN_00416c60
        pop    edi
        mov    eax, esi
        pop    esi
        add    esp, 0x28
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x28
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x34]
        lea    eax, [edi + 0x370]
        push    eax
        lea    ecx, [esp + 0x20]
        xor    esi, esi
        call    FUN_00416bc0
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_235e
L_2350:
        lea    ecx, [esp + 0x1c]
        inc    esi
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2350
L_235e:
        add    edi, 0x384
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        je    L_2391
L_2383:
        lea    ecx, [esp + 8]
        inc    esi
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2383
L_2391:
        lea    ecx, [esp + 8]
        call    FUN_00416c60
        lea    ecx, [esp + 0x1c]
        call    FUN_00416c60
        pop    edi
        lea    eax, [esi + esi + 3]
        pop    esi
        add    esp, 0x28
        ret    
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
        je    L_2420
        mov    al, byte ptr [ecx + 0x93a]
        test    al, al
        je    L_2420
        mov    al, 1
        add    esp, 0xc
        ret    
L_2420:
        xor    al, al
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
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ebx
        shl    edi, 3
        cmp    eax, -0x14
        je    L_244e
        lea    edi, [edi + eax - 8]
L_244e:
        push    3
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        mov    ebx, dword ptr [esp + 0x14]
        test    ebx, ebx
        jle    L_2485
L_246c:
        push    2
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        dec    ebx
        jne    L_246c
L_2485:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_249c
        lea    eax, [eax + esi - 8]
L_249c:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x20]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
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
        sub    esp, 0x28
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x38]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ebx
        shl    edi, 3
        cmp    eax, -0x14
        je    L_2511
        lea    edi, [edi + eax - 8]
L_2511:
        mov    ebx, dword ptr [esp + 0x38]
        mov    eax, dword ptr [ebx + 0x4c8]
        and    eax, 0x80000003
        jns    L_2527
        dec    eax
        or    eax, 0xfffffffc
        inc    eax
L_2527:
        push    2
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x40], eax
        call    FUN_0041ec50
        mov    edx, dword ptr [ebx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_2550
        lea    eax, [esp + 0x3c]
        mov    byte ptr [esp + 0x3c], 1
        push    eax
        jmp    L_255a
L_2550:
        lea    ecx, [esp + 0x3c]
        mov    byte ptr [esp + 0x3c], 0
        push    ecx
L_255a:
        mov    ecx, esi
        call    FUN_0041eae0
        lea    edx, [ebx + 0x370]
        push    edx
        lea    ecx, [esp + 0x24]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x20], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_25ac
L_2586:
        mov    ecx, eax
        call    FUN_004e7a90
        mov    dword ptr [esp + 0x3c], eax
        push    2
        lea    eax, [esp + 0x40]
        push    eax
        mov    ecx, esi
        call    FUN_0041ec50
        lea    ecx, [esp + 0x20]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2586
L_25ac:
        add    ebx, 0x384
        push    ebx
        lea    ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        je    L_25f7
L_25d1:
        mov    ecx, eax
        call    FUN_004e7760
        push    2
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x44], eax
        call    FUN_0041ec50
        lea    ecx, [esp + 0xc]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_25d1
L_25f7:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_260e
        lea    eax, [eax + esi - 8]
L_260e:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x40]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        add    dword ptr [ecx + 0xc00], eax
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        lea    ecx, [esp + 0x20]
        call    FUN_00416c60
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x28
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x38]
        mov    ebp, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebp, dword ptr [esi + 0x10]
        shl    ebp, 3
        cmp    eax, -0x14
        je    L_268f
        lea    ebp, [eax + ebp - 8]
L_268f:
        push    ebx
        push    2
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x48], 0
        call    FUN_0041eb40
        mov    ebx, dword ptr [esp + 0x3c]
        mov    ecx, dword ptr [ebx + 0x4c8]
        and    ecx, 0x80000003
        jns    L_26bd
        dec    ecx
        or    ecx, 0xfffffffc
        inc    ecx
L_26bd:
        cmp    dword ptr [esp + 0x40], ecx
        jne    L_27b1
        lea    edx, [ebx + 0x370]
        push    edx
        lea    ecx, [esp + 0x28]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x24], 0x783ec4
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_2733
L_26ee:
        push    1
        push    0
        push    8
        mov    dword ptr [esp + 0x48], 0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        mov    ecx, dword ptr [esp + 0x3c]
        push    ecx
        mov    ecx, edi
        call    FUN_004e7c30
        lea    ecx, [esp + 0x24]
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_26ee
L_2733:
        add    ebx, 0x384
        push    ebx
        lea    ecx, [esp + 0x14]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x783f04
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_279f
L_275a:
        push    1
        push    0
        push    8
        mov    dword ptr [esp + 0x48], 0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    edx, [esp + 0x48]
        push    edx
        mov    ecx, esi
        call    FUN_0041edd0
        mov    eax, dword ptr [esp + 0x3c]
        push    eax
        mov    ecx, edi
        call    FUN_004e7ce0
        lea    ecx, [esp + 0x10]
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_275a
L_279f:
        lea    ecx, [esp + 0x10]
        call    FUN_00416c60
        lea    ecx, [esp + 0x24]
        jmp    L_2876
L_27b1:
        lea    ecx, [ebx + 0x370]
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x10]
        mov    dword ptr [esp + 0x10], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_280d
L_27d6:
        push    1
        push    0
        push    8
        mov    dword ptr [esp + 0x48], 0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    edx, [esp + 0x48]
        push    edx
        mov    ecx, esi
        call    FUN_0041edd0
        lea    ecx, [esp + 0x10]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_27d6
L_280d:
        add    ebx, 0x384
        push    ebx
        lea    ecx, [esp + 0x28]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x24], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        je    L_2869
L_2832:
        push    1
        push    0
        push    8
        mov    dword ptr [esp + 0x48], 0
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        push    0x3f800000
        push    0
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_0041edd0
        lea    ecx, [esp + 0x24]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2832
L_2869:
        lea    ecx, [esp + 0x24]
        call    FUN_00416c60
        lea    ecx, [esp + 0x10]
L_2876:
        call    FUN_00416c60
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        pop    ebx
        je    L_2893
        lea    eax, [eax + esi - 8]
L_2893:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        sub    eax, ebp
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x4c]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebp
        add    esp, 0x28
        ret    
        nop    
        nop    
        sub    esp, 0x28
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x34]
        lea    eax, [edi + 0x370]
        push    eax
        lea    ecx, [esp + 0x20]
        xor    esi, esi
        call    FUN_00416bc0
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_291e
L_2910:
        lea    ecx, [esp + 0x1c]
        inc    esi
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2910
L_291e:
        add    edi, 0x384
        push    edi
        lea    ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        je    L_2951
L_2943:
        lea    ecx, [esp + 8]
        inc    esi
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2943
L_2951:
        lea    ecx, [esp + 8]
        call    FUN_00416c60
        lea    ecx, [esp + 0x1c]
        call    FUN_00416c60
        pop    edi
        mov    eax, esi
        pop    esi
        add    esp, 0x28
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x28
        push    esi
        mov    esi, dword ptr [esp + 0x30]
        push    edi
        lea    eax, [esi + 0x370]
        push    eax
        lea    ecx, [esp + 0x20]
        xor    edi, edi
        call    FUN_00416bc0
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        je    L_29ae
L_29a0:
        lea    ecx, [esp + 0x1c]
        inc    edi
        call    FUN_00416cc0
        test    eax, eax
        jne    L_29a0
L_29ae:
        add    esi, 0x384
        push    esi
        lea    ecx, [esp + 0xc]
        call    FUN_00416bc0
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 8], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        je    L_29e1
L_29d3:
        lea    ecx, [esp + 8]
        inc    edi
        call    FUN_00416cc0
        test    eax, eax
        jne    L_29d3
L_29e1:
        push    1
        push    0
        push    8
        call    FUN_0067f7b0
        mov    esi, eax
        imul    esi, edi
        add    esp, 0xc
        lea    ecx, [esp + 8]
        add    esi, 2
        call    FUN_00416c60
        lea    ecx, [esp + 0x1c]
        call    FUN_00416c60
        pop    edi
        mov    eax, esi
        pop    esi
        add    esp, 0x28
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
        je    L_2a90
        mov    al, byte ptr [ecx + 0x93a]
        test    al, al
        je    L_2a90
        mov    al, 1
        add    esp, 0xc
        ret    
L_2a90:
        xor    al, al
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
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    ebx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 8]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, ebx
        shl    edi, 3
        cmp    eax, -0x14
        je    L_2abe
        lea    edi, [edi + eax - 8]
L_2abe:
        push    2
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        mov    ebx, dword ptr [esp + 0x14]
        test    ebx, ebx
        jle    L_2b02
L_2adc:
        push    1
        push    0
        push    8
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0
        call    FUN_0041eb40
        dec    ebx
        jne    L_2adc
L_2b02:
        mov    eax, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ebx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_2b19
        lea    eax, [eax + esi - 8]
L_2b19:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x1814]
        mov    edx, dword ptr [esp + 0x20]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        pop    edi
        add    edx, eax
        pop    esi
        mov    dword ptr [ecx + 0xc00], edx
        pop    ebx
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
        sub    esp, 0x2c
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x3c]
        mov    ebp, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 8]
        push    edi
        sub    ebp, dword ptr [esi + 0x10]
        shl    ebp, 3
        cmp    eax, -0x14
        je    L_2b8f
        lea    ebp, [eax + ebp - 8]
L_2b8f:
        mov    edi, dword ptr [esp + 0x3c]
        mov    eax, dword ptr [edi + 0x4c8]
        and    eax, 0x80000003
        push    ebx
        jns    L_2ba6
        dec    eax
        or    eax, 0xfffffffc
        inc    eax
L_2ba6:
        push    2
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], eax
        call    FUN_0041ec50
        lea    edx, [edi + 0x370]
        push    edx
        lea    ecx, [esp + 0x2c]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x28], 0x783ec4
        call    FUN_00416cc0
        test    eax, eax
        mov    ebx, 1
        je    L_2c50
L_2be2:
        mov    ecx, eax
        call    FUN_004e7bf0
        fstp    dword ptr [esp + 0x44]
        push    ebx
        push    0
        push    8
        call    FUN_0067f7b0
        push    eax
        mov    eax, dword ptr [esp + 0x54]
        push    0x3f800000
        push    0
        push    eax
        call    FUN_004211e0
        add    esp, 0x1c
        test    eax, eax
        mov    dword ptr [esp + 0x40], eax
        jne    L_2c29
        fld    dword ptr [esp + 0x44]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_2c29
        mov    dword ptr [esp + 0x40], ebx
L_2c29:
        push    ebx
        push    0
        push    8
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    ecx, [esp + 0x44]
        push    ecx
        mov    ecx, esi
        call    FUN_0041ec50
        lea    ecx, [esp + 0x28]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2be2
L_2c50:
        add    edi, 0x384
        push    edi
        lea    ecx, [esp + 0x18]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], 0x783f04
        call    FUN_00416cc0
        test    eax, eax
        je    L_2ce3
L_2c75:
        mov    ecx, eax
        call    FUN_004e7ca0
        fstp    dword ptr [esp + 0x44]
        push    ebx
        push    0
        push    8
        call    FUN_0067f7b0
        mov    edx, dword ptr [esp + 0x50]
        push    eax
        push    0x3f800000
        push    0
        push    edx
        call    FUN_004211e0
        add    esp, 0x1c
        test    eax, eax
        mov    dword ptr [esp + 0x40], eax
        jne    L_2cbc
        fld    dword ptr [esp + 0x44]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_2cbc
        mov    dword ptr [esp + 0x40], ebx
L_2cbc:
        push    ebx
        push    0
        push    8
        call    FUN_0067f7b0
        add    esp, 0xc
        push    eax
        lea    eax, [esp + 0x44]
        push    eax
        mov    ecx, esi
        call    FUN_0041ec50
        lea    ecx, [esp + 0x14]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_2c75
L_2ce3:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    esi, -0x14
        pop    ebx
        je    L_2cfb
        lea    eax, [eax + esi - 8]
L_2cfb:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        sub    eax, ebp
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x44]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x848c]
        add    ecx, 0x8484
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        add    dword ptr [ecx + 0xc00], eax
        lea    ecx, [esp + 0x10]
        call    FUN_00416c60
        lea    ecx, [esp + 0x24]
        call    FUN_00416c60
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x2c
        ret    
        sub    esp, 0x34
        push    ebp
        mov    ebp, dword ptr [esp + 0x40]
        mov    ecx, dword ptr [ebp + 0x14]
        mov    eax, dword ptr [ebp + 8]
        push    esi
        push    edi
        sub    ecx, dword ptr [ebp + 0x10]
        shl    ecx, 3
        cmp    eax, -0x14
        mov    dword ptr [esp + 0xc], ecx
        je    L_2d77
        lea    eax, [ecx + eax - 8]
        mov    dword ptr [esp + 0xc], eax
L_2d77:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        push    ebx
        xor    edx, esi
        mov    ebx, dword ptr [edx]
        xor    ebx, 0x85739531
        lea    eax, [ebx + 0x4c4]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x14]
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 0x14], 0x79a004
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        je    L_2df3
L_2db7:
        lea    ecx, [esp + 0x4c]
        push    ecx
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x4c]
        test    al, al
        je    L_2de4
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_2de4
        mov    eax, dword ptr [esi]
        push    0
        push    3
        mov    ecx, esi
        call    dword ptr [eax + 0x88]
L_2de4:
        lea    ecx, [esp + 0x14]
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        jne    L_2db7
L_2df3:
        lea    eax, [ebx + 0x4cc]
        mov    dword ptr [esp + 0x24], eax
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x28], ecx
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x20], 0x79a000
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        je    L_2e55
L_2e1a:
        lea    edx, [esp + 0x4c]
        push    edx
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x4c]
        test    al, al
        je    L_2e46
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_2e46
        mov    edx, dword ptr [esi]
        push    0
        push    3
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
L_2e46:
        lea    ecx, [esp + 0x20]
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        jne    L_2e1a
L_2e55:
        lea    eax, [ebx + 0x4d4]
        mov    dword ptr [esp + 0x30], eax
        mov    eax, dword ptr [eax]
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x34], eax
        mov    dword ptr [esp + 0x2c], 0x799ffc
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        je    L_2eb8
L_2e7c:
        lea    ecx, [esp + 0x4c]
        push    ecx
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x4c]
        test    al, al
        je    L_2ea9
        mov    edx, dword ptr [esi + 0x10]
        shr    edx, 0x13
        test    dl, 1
        jne    L_2ea9
        mov    eax, dword ptr [esi]
        push    0
        push    3
        mov    ecx, esi
        call    dword ptr [eax + 0x88]
L_2ea9:
        lea    ecx, [esp + 0x2c]
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        jne    L_2e7c
L_2eb8:
        lea    eax, [ebx + 0x4dc]
        mov    dword ptr [esp + 0x3c], eax
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x40], ecx
        lea    ecx, [esp + 0x38]
        mov    dword ptr [esp + 0x38], 0x799ff8
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        je    L_2f1a
L_2edf:
        lea    edx, [esp + 0x4c]
        push    edx
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x4c]
        test    al, al
        je    L_2f0b
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        test    al, 1
        jne    L_2f0b
        mov    edx, dword ptr [esi]
        push    0
        push    3
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
L_2f0b:
        lea    ecx, [esp + 0x38]
        call    FUN_0040c0e0
        mov    esi, eax
        test    esi, esi
        jne    L_2edf
L_2f1a:
        mov    edi, dword ptr [ebx + 0x4e4]
L_2f20:
        test    edi, edi
        je    L_2f5c
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_2f5c
        lea    eax, [esp + 0x4c]
        push    eax
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x4c]
        test    al, al
        je    L_2f20
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_2f20
        mov    edx, dword ptr [esi]
        push    0
        push    3
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
        jmp    L_2f20
L_2f5c:
        mov    edi, dword ptr [ebx + 0x4ec]
L_2f62:
        test    edi, edi
        je    L_2f9e
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_2f9e
        lea    eax, [esp + 0x4c]
        push    eax
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x4c]
        test    al, al
        je    L_2f62
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_2f62
        mov    edx, dword ptr [esi]
        push    0
        push    3
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
        jmp    L_2f62
L_2f9e:
        mov    edi, dword ptr [ebx + 0x4f4]
L_2fa4:
        test    edi, edi
        je    L_2fe0
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_2fe0
        lea    eax, [esp + 0x4c]
        push    eax
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x4c]
        test    al, al
        je    L_2fa4
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_2fa4
        mov    edx, dword ptr [esi]
        push    0
        push    3
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
        jmp    L_2fa4
L_2fe0:
        mov    edi, dword ptr [ebx + 0x4fc]
        pop    ebx
L_2fe7:
        test    edi, edi
        je    L_3023
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_3023
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, ebp
        call    FUN_0041ea60
        mov    al, byte ptr [esp + 0x48]
        test    al, al
        je    L_2fe7
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        jne    L_2fe7
        mov    edx, dword ptr [esi]
        push    0
        push    3
        mov    ecx, esi
        call    dword ptr [edx + 0x88]
        jmp    L_2fe7
L_3023:
        mov    eax, dword ptr [ebp + 0x14]
        mov    edi, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [ebp + 8]
        sub    eax, edi
        shl    eax, 3
        cmp    ecx, -0x14
        je    L_303a
        lea    eax, [eax + ecx - 8]
L_303a:
        mov    ecx, dword ptr [esp + 0xc]
        mov    ebp, dword ptr [g_007dab40]
        sub    eax, ecx
        mov    ecx, eax
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        xor    edx, ebp
        mov    eax, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x58]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x1814]
        mov    esi, dword ptr [eax + edx*4 + 0x9ca4]
        add    eax, 0x9c9c
        add    esi, ecx
        mov    dword ptr [eax + edx*4 + 8], esi
        mov    edx, dword ptr [eax + 0xc00]
        pop    edi
        add    edx, ecx
        pop    esi
        mov    dword ptr [eax + 0xc00], edx
        pop    ebp
        add    esp, 0x34
        ret    
    }
}
