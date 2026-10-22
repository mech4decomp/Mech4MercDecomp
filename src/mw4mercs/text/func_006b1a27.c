/*
 * FUN_006b1a27 (extent 0x6b1a27-0x6b1e6b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00786dd0;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0041ea60(void);
extern void __cdecl FUN_0041eae0(void);
extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_0041edd0(void);
extern void __cdecl FUN_0067f7b0(void);

__declspec(naked) void FUN_006b1a27(void)
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
        mov    eax, 1
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
        je    L_1ab2
        mov    ecx, dword ptr [ecx + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        jne    L_1ab4
L_1ab2:
        xor    al, al
L_1ab4:
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
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi + 0x10]
        push    edi
        mov    edi, dword ptr [esi + 0x14]
        sub    edi, eax
        mov    eax, dword ptr [esi + 8]
        shl    edi, 3
        cmp    eax, -0x14
        je    L_1add
        lea    edi, [edi + eax - 8]
L_1add:
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 0xe0]
        mov    edx, dword ptr [ecx + 0x14]
        mov    eax, 1
        cmp    edx, eax
        je    L_1afe
        lea    edx, [esp + 0x10]
        mov    byte ptr [esp + 0x10], al
        push    edx
        jmp    L_1b08
L_1afe:
        lea    eax, [esp + 0x10]
        mov    byte ptr [esp + 0x10], 0
        push    eax
L_1b08:
        mov    ecx, esi
        call    FUN_0041eae0
        mov    eax, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [esi + 0x10]
        mov    esi, dword ptr [esi + 8]
        sub    eax, ecx
        shl    eax, 3
        cmp    esi, -0x14
        je    L_1b26
        lea    eax, [eax + esi - 8]
L_1b26:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x14]
        mov    edx, dword ptr [esp + 0x14]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x1814]
        mov    esi, dword ptr [ecx + edx*4 + 0x9ca4]
        add    ecx, 0x9c9c
        sub    eax, edi
        add    esi, eax
        mov    dword ptr [ecx + edx*4 + 8], esi
        mov    edx, dword ptr [ecx + 0xc00]
        add    edx, eax
        pop    edi
        mov    dword ptr [ecx + 0xc00], edx
        pop    esi
        ret    
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
        __emit 0xD9  // fstp dword ptr [esp] (no-disp form; ref uses D9 1C 24)
        __emit 0x1C
        __emit 0x24
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
    }
}
