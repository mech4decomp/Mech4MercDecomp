/*
 * FUN_0065c6e7 (extent 0x65c6e7-0x65ccb1) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d040;
extern float  g_00788104;
extern int    g_007b220c;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f202c;
extern int    g_007f2030;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_005c1720(void);
extern void __cdecl FUN_005c9900(void);
extern void __cdecl FUN_005d1180(void);
extern void __cdecl FUN_005dd7a0(void);
extern void __cdecl FUN_0065acb0(void);
extern void __cdecl FUN_0065acd0(void);
extern void __cdecl FUN_0065c0b0(void);
extern void __cdecl FUN_0065c180(void);
extern void __cdecl FUN_0065c320(void);
extern void __cdecl FUN_0065c4e0(void);
extern void __cdecl FUN_0069eb70(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_0065c6e7(void)
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
        sub    esp, 0x28
        push    ebx
        mov    ebx, dword ptr [g_007f2030]
        push    ebp
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x14]
        cmp    eax, -2
        push    edi
        je    L_c74c
        mov    ecx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [ecx]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x10]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    edi, eax
        test    edi, edi
        je    L_c74c
        mov    edx, dword ptr [edi + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        je    L_c74c
        mov    ecx, dword ptr [edi + 4]
        push    ebx
        call    FUN_00415230
        test    al, al
        je    L_c74c
        mov    ebx, edi
        jmp    L_c7e1
L_c74c:
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [eax + 0x170]
        mov    edx, dword ptr [ecx + 0xd8]
        add    edx, 0x80
        push    edx
        lea    ecx, [esp + 0x30]
        call    FUN_00419480
        mov    eax, dword ptr [g_007f202c]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        call    FUN_0065c0b0
        mov    ebx, dword ptr [g_007f2030]
        add    esp, 8
        cmp    eax, -2
        mov    dword ptr [esi + 0x14], eax
        je    L_c9e8
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [edx]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x10]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    edi, eax
        test    edi, edi
        je    L_c9e8
        mov    eax, dword ptr [edi + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_c9e8
        mov    ecx, dword ptr [edi + 4]
        push    ebx
        call    FUN_00415230
        test    al, al
        je    L_c9e8
        mov    ecx, esi
        mov    ebx, edi
        call    FUN_0065c4e0
L_c7e1:
        mov    edi, dword ptr [esi + 4]
        cmp    byte ptr [edi + 0x2f2], 1
        jne    L_c871
        mov    al, byte ptr [edi + 0x2f9]
        test    al, al
        jne    L_c871
        push    0x40800000
        mov    ecx, edi
        call    FUN_005c9900
        test    al, al
        jne    L_c871
        mov    ecx, dword ptr [esi + 0x3c]
        inc    ecx
        mov    ebx, ecx
        cmp    ebx, 3
        mov    dword ptr [esi + 0x3c], ecx
        jle    L_c841
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, edi
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    6
        call    FUN_0069eb70
        lea    ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x28
        ret    
L_c841:
        push    0
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x4dc]
        cmp    ebx, 2
        jle    L_c862
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x28
        ret    
L_c862:
        mov    ecx, esi
        call    FUN_0065c320
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x28
        ret    
L_c871:
        mov    eax, dword ptr [g_007b220c]
        push    eax
        lea    ecx, [esi + 0x24]
        push    ecx
        lea    ebp, [esi + 0x18]
        push    ebp
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        je    L_c9e8
        mov    edi, dword ptr [esi + 4]
        mov    edx, dword ptr [edi + 0x170]
        mov    eax, dword ptr [edx + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [esp + 0x30]
        call    FUN_00419480
        fld    dword ptr [ebp]
        mov    eax, dword ptr [edi + 0x368]
        test    eax, eax
        mov    ecx, dword ptr [ebp + 4]
        mov    edx, dword ptr [ebp + 8]
        mov    dword ptr [esp + 0x18], ecx
        mov    dword ptr [esp + 0x1c], edx
        je    L_c8ec
        mov    edi, eax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    eax, dword ptr [edi + 0x10]
        fld    dword ptr [edi + 0xc]
        mov    ecx, dword ptr [edi + 0x14]
        add    edi, 0xc
        mov    edx, eax
        mov    dword ptr [esp + 0x24], eax
        mov    eax, ecx
        mov    dword ptr [esp + 0x28], ecx
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], eax
L_c8ec:
        fld    dword ptr [esp + 0x2c]
        lea    ecx, [esp + 0x20]
        fsub st(0), st(1)
        fstp    dword ptr [esp + 0x20]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x30]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x28]
        call    FUN_0040cb00
        fcomp    dword ptr [g_00788104]
        fnstsw  ax
        test    ah, 1
        je    L_c9e8
        mov    edx, dword ptr [esi + 0x34]
        mov    ecx, dword ptr [esi + 0x30]
        mov    eax, dword ptr [esi + 0x38]
        mov    dword ptr [ebp + 4], edx
        mov    edi, dword ptr [esi + 4]
        mov    edx, dword ptr [edi]
        mov    dword ptr [ebp], ecx
        mov    ecx, edi
        mov    dword ptr [ebp + 8], eax
        call    dword ptr [edx + 0x1c4]
        push    1
        mov    ecx, edi
        call    FUN_005c1720
        push    ebx
        mov    ecx, edi
        call    FUN_005d1180
        mov    eax, dword ptr [edi + 0x35c]
        lea    ecx, [eax + 0x78]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 4]
        fld    dword ptr [eax + 0x2bc]
        fdivr    dword ptr [g_0076d040]
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x20], 0xbf800000
        mov    dword ptr [esp + 0x24], 0xbf800000
        mov    dword ptr [esp + 0x28], 0xbf800000
        mov    edx, dword ptr [edi]
        fstp    dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        push    eax
        push    ebp
        mov    ecx, edi
        call    dword ptr [edx + 0x1d0]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    byte ptr [esi + 0x40], 1
        call    dword ptr [edx + 0x2c]
        test    al, al
        je    L_c9e8
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [esp + 0x10]
        push    eax
        call    FUN_005dd7a0
        mov    ecx, dword ptr [esi + 0xc]
        push    eax
        push    0xb
        call    FUN_0069eb70
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_c9e8
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_c9e8
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_c9e8:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x28
        ret    
        sub    esp, 0xc
        push    ebx
        mov    ebx, dword ptr [g_007f2030]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x14]
        cmp    ecx, -2
        je    L_ca7d
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_ca7d
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        je    L_ca7d
        mov    ecx, dword ptr [esi + 4]
        push    ebx
        call    FUN_00415230
        test    al, al
        je    L_ca7d
        mov    eax, dword ptr [esi + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0xac]
        fld    dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [esp + 0x1c]
        fxch    st(1)
        pop    edi
        fstp    dword ptr [eax]
        mov    ecx, edx
        pop    esi
        fstp    dword ptr [eax + 4]
        mov    dword ptr [esp + 0xc], edx
        mov    dword ptr [eax + 8], ecx
        pop    ebx
        add    esp, 0xc
        ret    4
L_ca7d:
        lea    edx, [esp + 0xc]
        push    edx
        mov    ecx, edi
        call    FUN_0065acd0
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        pop    edi
        pop    esi
        mov    dword ptr [ecx + 8], eax
        mov    dword ptr [ecx + 4], edx
        mov    eax, ecx
        pop    ebx
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
        push    ebx
        mov    ebx, dword ptr [g_007f2030]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x14]
        cmp    ecx, -2
        mov    dword ptr [edi], 0x794ad0
        je    L_cb1b
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_cb1b
        mov    ecx, dword ptr [esi + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        je    L_cb1b
        mov    ecx, dword ptr [esi + 4]
        push    ebx
        call    FUN_00415230
        test    al, al
        je    L_cb1b
        mov    edx, dword ptr [esi + 0x514]
        cmp    edx, dword ptr [edi + 4]
        jne    L_cb1b
        mov    dword ptr [esi + 0x514], 0
L_cb1b:
        mov    ecx, edi
        call    FUN_0065acb0
        pop    edi
        pop    esi
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
        sub    esp, 0x24
        push    ebx
        push    esi
        mov    esi, dword ptr [g_007f2030]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [edi + 0x14]
        cmp    ecx, -2
        je    L_cb83
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    ebx, eax
        test    ebx, ebx
        je    L_cb83
        mov    ecx, dword ptr [ebx + 0x10]
        shr    ecx, 0x13
        and    cl, 1
        cmp    cl, 1
        je    L_cb83
        mov    ecx, dword ptr [ebx + 4]
        push    esi
        call    FUN_00415230
        test    al, al
        jne    L_cb91
L_cb83:
        mov    ecx, edi
        call    FUN_0065c320
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x24
        ret    
L_cb91:
        mov    edx, dword ptr [edi + 4]
        push    0x3ff33333
        push    1
        lea    eax, [esp + 0x2c]
        push    ebx
        push    eax
        mov    dword ptr [ebx + 0x514], edx
        call    FUN_0065c180
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        push    0x3ff33333
        push    0
        mov    dword ptr [esp + 0x30], ecx
        lea    ecx, [esp + 0x3c]
        push    ebx
        push    ecx
        mov    dword ptr [esp + 0x3c], edx
        mov    dword ptr [esp + 0x40], eax
        call    FUN_0065c180
        mov    edx, dword ptr [eax]
        mov    dword ptr [esp + 0x2c], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x30], ecx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [g_007b220c]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        lea    esi, [edi + 0x24]
        push    esi
        mov    dword ptr [esp + 0x40], edx
        call    FUN_0041c540
        add    esp, 0x2c
        test    al, al
        je    L_cc3d
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        mov    ecx, dword ptr [esp + 0x20]
        push    0x3f000000
        push    1
        mov    dword ptr [esi], edx
        lea    edx, [esp + 0x2c]
        push    ebx
        push    edx
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 8], ecx
        call    FUN_0065c180
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    eax, dword ptr [eax + 8]
        add    esp, 0x10
        mov    dword ptr [edi + 0x30], ecx
        mov    dword ptr [edi + 0x34], edx
        mov    dword ptr [edi + 0x38], eax
        jmp    L_cc77
L_cc3d:
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        push    0x3f000000
        push    0
        mov    dword ptr [esi], ecx
        lea    ecx, [esp + 0x2c]
        push    ebx
        push    ecx
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 8], eax
        call    FUN_0065c180
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [edi + 0x30], edx
        mov    edx, dword ptr [eax + 8]
        add    esp, 0x10
        mov    dword ptr [edi + 0x34], ecx
        mov    dword ptr [edi + 0x38], edx
L_cc77:
        mov    ecx, dword ptr [esi + 4]
        mov    eax, dword ptr [esi]
        mov    edx, dword ptr [esi + 8]
        lea    ebx, [edi + 0x18]
        mov    dword ptr [ebx + 4], ecx
        mov    edi, dword ptr [edi + 4]
        push    1
        mov    ecx, edi
        mov    dword ptr [ebx], eax
        mov    dword ptr [ebx + 8], edx
        call    FUN_005c1720
        mov    eax, dword ptr [edi]
        push    0
        push    1
        push    0x258
        push    ebx
        mov    ecx, edi
        call    dword ptr [eax + 0x1bc]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x24
        ret    
    }
}
