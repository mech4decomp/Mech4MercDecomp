/*
 * FUN_005405b5 (extent 0x5405b5-0x5429d8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2b0;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern int    g_007db094;
extern int    g_007f27dc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceb20(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_00533c30(void);
extern void __cdecl FUN_00533f10(void);
extern void __cdecl FUN_00544180(void);
extern void __cdecl FUN_005441d0(void);
extern void __cdecl FUN_00544220(void);
extern void __cdecl FUN_00544270(void);
extern void __cdecl FUN_005442c0(void);

__declspec(naked) void FUN_005405b5(void)
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
        sub    esp, 0x130
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x13c]
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x16]
        test    al, al
        push    edi
        je    L_0601
        mov    ecx, dword ptr [g_007db094]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x28]
        cmp    ebp, eax
        jne    L_0601
        mov    eax, dword ptr [g_007f27dc]
        test    eax, eax
        je    L_0601
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x130
        ret    8
L_0601:
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [g_007dab40]
        xor    edx, ecx
        mov    edx, dword ptr [edx]
        xor    edx, 0x85739531
        mov    dl, byte ptr [edx + 0xb0]
        mov    byte ptr [esp + 0x27], dl
        mov    dl, byte ptr [esi + 0x17]
        test    dl, dl
        jne    L_0bf5
        mov    dl, byte ptr [esi + 0xc1]
        test    dl, dl
        jne    L_0be6
        mov    edx, dword ptr [g_007db090]
        xor    edi, edi
        cmp    edx, edi
        je    L_0be6
        cmp    dword ptr [esi + 0x3024], edi
        je    L_0be6
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x4c]
        xor    ecx, 0x85739531
        mov    byte ptr [esp + 0x13], 0
        mov    byte ptr [esp + 0x12], 0
        je    L_0675
        mov    byte ptr [esp + 0x13], 1
L_0675:
        mov    edx, dword ptr [eax + 0x58]
        xor    edx, 0x85739531
        je    L_0685
        mov    byte ptr [esp + 0x12], 1
L_0685:
        mov    eax, dword ptr [esp + 0x148]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        push    ebp
        mov    ecx, esi
        mov    word ptr [esp + 0x28], 0xffff
        mov    word ptr [esp + 0x2a], di
        call    FUN_00533c30
        push    1
        lea    edx, [esp + 0x20]
        push    edx
        lea    ecx, [esp + 0x104]
        call    FUN_004d1f80
        mov    ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    byte ptr [esp + 0x28], cl
        mov    dx, word ptr [eax + 2]
        push    1
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x104]
        push    ecx
        mov    word ptr [esp + 0x36], dx
        call    FUN_004d9910
        mov    edx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [g_007dab40]
        mov    dword ptr [esi + 0x205524], edi
        mov    dword ptr [esi + 0x204d2c], edi
        mov    edi, dword ptr [edx]
        mov    ebx, eax
        push    0x14
        mov    dword ptr [esp + 0x24], ebx
        mov    byte ptr [esp + 0x21], 1
        xor    edi, ebp
        call    FUN_004084d0
        mov    ebp, eax
        add    esp, 0x10
        test    ebp, ebp
        je    L_0740
        mov    eax, dword ptr [edi + 0xc]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x8c]
        add    ecx, 0x10
        push    ecx
        mov    ecx, ebp
        call    FUN_00416bc0
        mov    dword ptr [ebp], 0x779e88
        jmp    L_0742
L_0740:
        xor    ebp, ebp
L_0742:
        mov    edx, dword ptr [ebx + 0x34c]
        mov    dword ptr [esp + 0x38], edx
L_074c:
        mov    ecx, dword ptr [esp + 0x38]
        test    ecx, ecx
        je    L_087f
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x38], ecx
        je    L_087f
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 8]
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_07e4
L_0789:
        lea    ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov    cx, word ptr [edi + 0x10]
        mov    dx, word ptr [edi + 0x12]
        lea    eax, [esp + 0x18]
        mov    word ptr [esp + 0x18], cx
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    word ptr [esp + 0x22], dx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x90]
        mov    ecx, dword ptr [edx + 0x30]
        mov    eax, dword ptr [ebx + 0x30]
        add    esp, 8
        cmp    ecx, eax
        lea    ecx, [esp + 0x74]
        je    L_07df
        call    FUN_004d21c0
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_0789
        jmp    L_07e4
L_07df:
        call    FUN_004d21c0
L_07e4:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_0829
        test    edi, edi
        je    L_0829
        cmp    dword ptr [edi + 0x20], 1
        jne    L_0829
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xd
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
L_0829:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_074c
        test    edi, edi
        je    L_074c
        cmp    dword ptr [edi + 0x20], 2
        jne    L_074c
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xe
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
        jmp    L_074c
L_087f:
        test    ebp, ebp
        je    L_088c
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_088c:
        mov    ecx, dword ptr [g_007dab44]
        mov    edi, dword ptr [ecx]
        mov    ebx, dword ptr [g_007dab40]
        push    0x14
        xor    edi, ebx
        call    FUN_004084d0
        mov    ebp, eax
        add    esp, 4
        test    ebp, ebp
        je    L_08cf
        mov    edx, dword ptr [edi + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x88]
        add    eax, 0x10
        push    eax
        mov    ecx, ebp
        call    FUN_00416bc0
        mov    dword ptr [ebp], 0x779e88
        jmp    L_08d1
L_08cf:
        xor    ebp, ebp
L_08d1:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx + 0x34c]
        mov    dword ptr [esp + 0x38], edx
L_08df:
        mov    ecx, dword ptr [esp + 0x38]
        test    ecx, ecx
        je    L_0a12
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x38], ecx
        je    L_0a12
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 8]
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_0977
L_091c:
        lea    ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov    cx, word ptr [edi + 0x10]
        mov    dx, word ptr [edi + 0x12]
        lea    eax, [esp + 0x18]
        mov    word ptr [esp + 0x18], cx
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    word ptr [esp + 0x22], dx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x90]
        mov    ecx, dword ptr [edx + 0x30]
        mov    eax, dword ptr [ebx + 0x30]
        add    esp, 8
        cmp    ecx, eax
        lea    ecx, [esp + 0x74]
        je    L_0972
        call    FUN_004d21c0
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_091c
        jmp    L_0977
L_0972:
        call    FUN_004d21c0
L_0977:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_09bc
        test    edi, edi
        je    L_09bc
        cmp    dword ptr [edi + 0x20], 1
        jne    L_09bc
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xd
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
L_09bc:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_08df
        test    edi, edi
        je    L_08df
        cmp    dword ptr [edi + 0x20], 2
        jne    L_08df
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xe
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
        jmp    L_08df
L_0a12:
        test    ebp, ebp
        je    L_0a1f
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_0a1f:
        mov    ebx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ebx + 0x78]
        lea    ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        mov    edi, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x20], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ebp, dword ptr [eax]
        push    0x14
        xor    ebp, edi
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_0a71
        mov    ecx, dword ptr [ebp + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x84]
        add    edx, 0x10
        push    edx
        mov    ecx, edi
        call    FUN_00416bc0
        mov    dword ptr [edi], 0x779e88
        jmp    L_0a73
L_0a71:
        xor    edi, edi
L_0a73:
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00416cc0
        test    eax, eax
        mov    dword ptr [esp + 0x14], eax
        je    L_0b18
        mov    eax, dword ptr [ebx + 0x2c]
        mov    dword ptr [esp + 0x2c], eax
L_0a91:
        mov    ecx, dword ptr [esp + 0x14]
        mov    ebp, dword ptr [ecx + 0x18]
        test    ebp, ebp
        je    L_0bdf
        inc    byte ptr [ebp - 1]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebp
        repne scasb
        not    ecx
        dec    ecx
L_0aaf:
        test    ebp, ebp
        je    L_0ab6
        inc    byte ptr [ebp - 1]
L_0ab6:
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        push    ebp
        push    edx
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    ebp, ebp
        je    L_0aff
        mov    cl, byte ptr [ebp - 1]
        lea    eax, [ebp - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_0ae7
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0ae7:
        test    ebp, ebp
        je    L_0aff
        mov    al, byte ptr [ebp - 1]
        dec    ebp
        dec    al
        mov    byte ptr [ebp], al
        jne    L_0aff
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_0aff:
        test    bl, bl
        jne    L_0b18
        mov    ecx, dword ptr [esp + 0x18]
        call    FUN_00416cc0
        test    eax, eax
        mov    dword ptr [esp + 0x14], eax
        jne    L_0a91
L_0b18:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        mov    eax, dword ptr [esp + 0x14]
        jne    L_0b68
        test    eax, eax
        je    L_0b68
        cmp    dword ptr [eax + 0x20], 1
        jne    L_0b68
        mov    ecx, dword ptr [esi + 0x205524]
        mov    edx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [edx + 0x634]
        mov    dword ptr [esi + ecx*4 + 0x205128], edx
        mov    ecx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + ecx*4 + 0x204d2c], 0xd
        mov    ecx, dword ptr [esi + 0x205524]
        inc    ecx
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], ecx
L_0b68:
        mov    cl, byte ptr [esp + 0x12]
        test    cl, cl
        jne    L_0bb4
        test    eax, eax
        je    L_0bb4
        cmp    dword ptr [eax + 0x20], 2
        jne    L_0bb4
        mov    edx, dword ptr [esi + 0x205524]
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [eax + 0x634]
        mov    dword ptr [esi + edx*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xe
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
L_0bb4:
        mov    ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        je    L_0bc2
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_0bc2:
        lea    ecx, [esp + 0xfc]
        call    FUN_004d21c0
        mov    al, byte ptr [esp + 0x11]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x130
        ret    8
L_0bdf:
        xor    ecx, ecx
        jmp    L_0aaf
L_0be6:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x130
        ret    8
L_0bf5:
        mov    ecx, dword ptr [esp + 0x148]
        push    ecx
        lea    edx, [esp + 0x40]
        push    edx
        xor    edi, edi
        push    ebp
        mov    ecx, esi
        mov    word ptr [esp + 0x48], 0xffff
        mov    word ptr [esp + 0x4a], di
        call    FUN_00533c30
        mov    bl, al
        push    1
        lea    eax, [esp + 0x40]
        push    eax
        lea    ecx, [esp + 0xc0]
        mov    byte ptr [esp + 0x1a], bl
        call    FUN_004d1f80
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    ebp
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        mov    ecx, eax
        mov    dword ptr [esp + 0x64], eax
        call    FUN_004cec10
        mov    dl, byte ptr [eax]
        mov    ecx, dword ptr [g_007db090]
        mov    byte ptr [esp + 0x60], dl
        mov    ax, word ptr [eax + 2]
        mov    word ptr [esp + 0x62], ax
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x28]
        cmp    ebp, eax
        jne    L_0c83
        mov    dword ptr [esi + 0x205524], edi
        mov    dword ptr [esi + 0x204d2c], edi
L_0c83:
        test    bl, bl
        je    L_0cd4
        mov    edx, ebp
        shl    edx, 7
        add    edx, ebp
        shl    edx, 3
        sub    edx, ebp
        mov    cl, byte ptr [esi + edx*8 + 0x357c]
        test    cl, cl
        je    L_0cd4
        cmp    ebp, eax
        jne    L_0cb9
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x204d2c], 1
        inc    dword ptr [esi + 0x205524]
L_0cb9:
        lea    ecx, [esp + 0xb8]
        call    FUN_004d21c0
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x130
        ret    8
L_0cd4:
        push    1
        lea    ecx, [esp + 0x64]
        push    ecx
        lea    edx, [esp + 0xc0]
        push    edx
        call    FUN_004d9910
        mov    cl, byte ptr [esi + 0x16]
        add    esp, 0xc
        test    cl, cl
        mov    dword ptr [esp + 0x14], eax
        je    L_0cfb
        mov    ecx, dword ptr [esi + 0x50]
        jmp    L_0cfe
L_0cfb:
        mov    ecx, dword ptr [esi + 0x54]
L_0cfe:
        mov    eax, dword ptr [eax + 4]
        cmp    dword ptr [eax], 0x429
        mov    byte ptr [esp + 0x11], 1
        jne    L_177c
        mov    eax, dword ptr [ecx + 0xe4]
        test    eax, eax
        mov    ebx, dword ptr [g_007db090]
        je    L_0e14
        mov    eax, ebp
        shl    eax, 7
        add    eax, ebp
        shl    eax, 3
        sub    eax, ebp
        mov    eax, dword ptr [esi + eax*8 + 0x3548]
        cmp    eax, 8
        je    L_0d6b
        lea    edx, [eax + eax*4 + 0xf]
        shl    edx, 4
        mov    edx, dword ptr [edx + ecx]
        lea    eax, [eax + eax*4]
        shl    eax, 4
        mov    edi, dword ptr [eax + ecx + 0x100]
        mov    dword ptr [esp + 0x18], edx
        lea    edx, [eax + ecx]
        mov    eax, dword ptr [edx + 0xf4]
        mov    dword ptr [esp + 0x1c], eax
        jmp    L_0e2e
L_0d6b:
        mov    edx, dword ptr [ecx + 0xbc]
        mov    dword ptr [esp + 0x50], edx
        mov    edx, dword ptr [ecx + 0xc4]
        mov    dword ptr [esp + 0x40], edx
        mov    edx, dword ptr [ecx + 0xcc]
        mov    dword ptr [esp + 0x48], edx
        mov    edx, dword ptr [ecx + 0xd4]
        mov    eax, dword ptr [ecx + 0x88]
        mov    dword ptr [esp + 0x58], edx
        mov    edx, dword ptr [ecx + 0xdc]
        mov    dword ptr [esp + 0x30], edx
        mov    edx, dword ptr [ecx + 0xc0]
        mov    edi, dword ptr [ecx + 0x90]
        mov    dword ptr [esp + 0x54], edx
        mov    edx, dword ptr [ecx + 0xc8]
        mov    dword ptr [esp + 0x44], edx
        mov    edx, dword ptr [ecx + 0xd0]
        mov    dword ptr [esp + 0x4c], edx
        mov    edx, dword ptr [ecx + 0xd8]
        mov    dword ptr [esp + 0x5c], edx
        mov    edx, dword ptr [ecx + 0xe0]
        mov    dword ptr [esp + 0x34], edx
        xor    edx, edx
        mov    dl, byte ptr [ebx + 0x28]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [ecx + 0x8c]
        mov    dword ptr [esp + 0x1c], eax
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, edx
        jne    L_0e92
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 4
        inc    dword ptr [esi + 0x205524]
        jmp    L_0e92
L_0e14:
        mov    eax, dword ptr [ecx + 0x88]
        mov    edi, dword ptr [ecx + 0x90]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [ecx + 0x8c]
        mov    dword ptr [esp + 0x1c], eax
L_0e2e:
        mov    edx, dword ptr [ecx + 0xbc]
        mov    dword ptr [esp + 0x50], edx
        mov    edx, dword ptr [ecx + 0xc4]
        mov    dword ptr [esp + 0x40], edx
        mov    edx, dword ptr [ecx + 0xcc]
        mov    dword ptr [esp + 0x48], edx
        mov    edx, dword ptr [ecx + 0xd4]
        mov    dword ptr [esp + 0x58], edx
        mov    edx, dword ptr [ecx + 0xdc]
        mov    dword ptr [esp + 0x30], edx
        mov    edx, dword ptr [ecx + 0xc0]
        mov    dword ptr [esp + 0x54], edx
        mov    edx, dword ptr [ecx + 0xc8]
        mov    dword ptr [esp + 0x44], edx
        mov    edx, dword ptr [ecx + 0xd0]
        mov    dword ptr [esp + 0x4c], edx
        mov    edx, dword ptr [ecx + 0xd8]
        mov    dword ptr [esp + 0x5c], edx
        mov    edx, dword ptr [ecx + 0xe0]
        mov    dword ptr [esp + 0x34], edx
L_0e92:
        cmp    eax, 0x64
        jle    L_0e9f
        mov    dword ptr [esp + 0x1c], 0x64
L_0e9f:
        cmp    edi, 0x2160ec0
        jle    L_0eac
        mov    edi, 0x2160ec0
L_0eac:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        je    L_0ee3
        mov    eax, dword ptr [ecx + 0x84]
        test    eax, eax
        je    L_0ee3
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x28]
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, eax
        jne    L_0ee3
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 3
        inc    dword ptr [esi + 0x205524]
L_0ee3:
        mov    eax, ebp
        shl    eax, 7
        add    eax, ebp
        shl    eax, 3
        sub    eax, ebp
        lea    edx, [esi + eax*8]
        mov    eax, dword ptr [esp + 0x14]
        fld    dword ptr [eax + 0x3b8]
        mov    dword ptr [esp + 0x20], edx
        fstp    dword ptr [edx + 0x5568]
        fld    dword ptr [eax + 0x3b8]
        fild    dword ptr [esp + 0x18]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_0f3e
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x28]
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, eax
        jne    L_0f3e
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x204d2c], 5
        inc    dword ptr [esi + 0x205524]
L_0f3e:
        mov    eax, dword ptr [esp + 0x14]
        fld    dword ptr [eax + 0x3b8]
        fild    dword ptr [esp + 0x1c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_0f7a
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x28]
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, eax
        jne    L_0f7a
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x204d2c], 6
        inc    dword ptr [esi + 0x205524]
L_0f7a:
        mov    eax, dword ptr [esp + 0x14]
        mov    eax, dword ptr [eax + 0x3c0]
        cmp    eax, edi
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [edx + 0x556c], eax
        jle    L_0fb7
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x28]
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, eax
        jne    L_0fb7
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x204d2c], 0xf
        inc    dword ptr [esi + 0x205524]
L_0fb7:
        mov    eax, dword ptr [ecx + 0xe4]
        test    eax, eax
        je    L_106e
        mov    eax, dword ptr [edx + 0x3548]
        cmp    eax, 8
        je    L_106e
        mov    edi, dword ptr [esp + 0x14]
        lea    eax, [eax + eax*4]
        shl    eax, 4
        fld    dword ptr [eax + ecx + 0xfc]
        add    eax, ecx
        fadd    dword ptr [edi + 0x3b8]
        fild    dword ptr [eax + 0xf8]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_1021
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x28]
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, eax
        jne    L_1021
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x204d2c], 0xc
        inc    dword ptr [esi + 0x205524]
L_1021:
        mov    eax, dword ptr [edx + 0x3548]
        lea    edx, [eax + eax*4]
        shl    edx, 4
        fld    dword ptr [ecx + edx + 0x108]
        add    ecx, edx
        fiadd    dword ptr [esp + 0x2c]
        fild    dword ptr [ecx + 0x104]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_106e
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x28]
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, eax
        jne    L_106e
        mov    ecx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + ecx*4 + 0x204d2c], 0x10
        inc    dword ptr [esi + 0x205524]
L_106e:
        mov    ebx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ebx + 0x78]
        lea    ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        fld    dword ptr [ebx + 0x3b8]
        mov    edi, dword ptr [eax + 0x634]
        mov    ecx, dword ptr [esp + 0x20]
        fcomp    dword ptr [eax + 0x70]
        mov    dword ptr [esp + 0x28], edi
        mov    dword ptr [ecx + 0x3554], edi
        fnstsw  ax
        test    ah, 0x41
        jne    L_10c9
        mov    eax, dword ptr [g_007db090]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x28]
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, edx
        jne    L_10c9
        mov    ecx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + ecx*4 + 0x204d2c], 6
        inc    dword ptr [esi + 0x205524]
L_10c9:
        lea    edx, [esp + 0x50]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00544180
        test    eax, eax
        jne    L_1118
        mov    ecx, dword ptr [g_007db090]
        mov    byte ptr [esp + 0x11], al
        mov    al, byte ptr [ecx + 0x28]
        cmp    ebp, eax
        jne    L_17fe
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x205128], edi
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x204d2c], 7
        inc    dword ptr [esi + 0x205524]
        jmp    L_17fe
L_1118:
        mov    al, byte ptr [esp + 0x11]
        test    al, al
        je    L_17fe
        mov    ecx, dword ptr [esp + 0x14]
        mov    ebx, dword ptr [ecx + 0x34c]
L_112e:
        test    ebx, ebx
        je    L_12a2
        mov    eax, dword ptr [ebx]
        test    eax, eax
        mov    ebx, dword ptr [ebx + 4]
        je    L_12a2
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    edi, dword ptr [eax + 0x30]
        test    edi, edi
        jl    L_11a3
        cmp    edi, 0x12
        jg    L_11a3
        lea    eax, [esp + 0x40]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_005441d0
        test    eax, eax
        jne    L_112e
        mov    edx, dword ptr [g_007db090]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + 0x28]
        cmp    ebp, ecx
        jne    L_119c
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x205128], edi
        mov    ecx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + ecx*4 + 0x204d2c], 8
L_1196:
        inc    dword ptr [esi + 0x205524]
L_119c:
        mov    byte ptr [esp + 0x11], 0
        jmp    L_112e
L_11a3:
        cmp    edi, 0x33
        jl    L_11ef
        cmp    edi, 0x4e
        jg    L_11ef
        lea    edx, [esp + 0x48]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00544220
        test    eax, eax
        jne    L_112e
        mov    ecx, dword ptr [g_007db090]
        mov    al, byte ptr [ecx + 0x28]
        cmp    ebp, eax
        jne    L_119c
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x205128], edi
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x204d2c], 0xa
        jmp    L_1196
L_11ef:
        cmp    edi, 0x64
        jl    L_123f
        cmp    edi, 0x7b
        jg    L_123f
        lea    ecx, [esp + 0x58]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00544270
        test    eax, eax
        jne    L_112e
        mov    eax, dword ptr [g_007db090]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x28]
        cmp    ebp, edx
        jne    L_119c
        mov    ecx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + ecx*4 + 0x205128], edi
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 9
        jmp    L_1196
L_123f:
        cmp    edi, 0x83
        jl    L_112e
        cmp    edi, 0x8c
        jg    L_112e
        lea    eax, [esp + 0x30]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_005442c0
        test    eax, eax
        jne    L_112e
        mov    edx, dword ptr [g_007db090]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + 0x28]
        cmp    ebp, ecx
        jne    L_119c
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x205128], edi
        mov    ecx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + ecx*4 + 0x204d2c], 0xb
        jmp    L_1196
L_12a2:
        mov    eax, dword ptr [esp + 0x20]
        mov    dl, byte ptr [eax + 0x355d]
        mov    ecx, dword ptr [g_007dab44]
        mov    al, byte ptr [eax + 0x355e]
        mov    ebp, dword ptr [ecx]
        mov    edi, dword ptr [g_007dab40]
        push    0x14
        mov    byte ptr [esp + 0x16], dl
        mov    byte ptr [esp + 0x17], al
        xor    ebp, edi
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_12fe
        mov    edx, dword ptr [ebp + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x8c]
        add    eax, 0x10
        push    eax
        mov    ecx, edi
        call    FUN_00416bc0
        mov    dword ptr [edi], 0x779e88
        mov    ebp, edi
        jmp    L_1300
L_12fe:
        xor    ebp, ebp
L_1300:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx + 0x34c]
        mov    dword ptr [esp + 0x70], edx
L_130e:
        mov    ecx, dword ptr [esp + 0x70]
        test    ecx, ecx
        je    L_1441
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x70], ecx
        je    L_1441
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 8]
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_13a6
L_134b:
        lea    ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov    cx, word ptr [edi + 0x10]
        mov    dx, word ptr [edi + 0x12]
        lea    eax, [esp + 0x20]
        mov    word ptr [esp + 0x20], cx
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    word ptr [esp + 0x2a], dx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x90]
        mov    ecx, dword ptr [edx + 0x30]
        mov    eax, dword ptr [ebx + 0x30]
        add    esp, 8
        cmp    ecx, eax
        lea    ecx, [esp + 0x74]
        je    L_13a1
        call    FUN_004d21c0
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_134b
        jmp    L_13a6
L_13a1:
        call    FUN_004d21c0
L_13a6:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_13eb
        test    edi, edi
        je    L_13eb
        cmp    dword ptr [edi + 0x20], 1
        jne    L_13eb
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xd
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
L_13eb:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_130e
        test    edi, edi
        je    L_130e
        cmp    dword ptr [edi + 0x20], 2
        jne    L_130e
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xe
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
        jmp    L_130e
L_1441:
        test    ebp, ebp
        je    L_144e
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_144e:
        mov    ecx, dword ptr [g_007dab44]
        mov    edi, dword ptr [ecx]
        mov    ebx, dword ptr [g_007dab40]
        push    0x14
        xor    edi, ebx
        call    FUN_004084d0
        mov    ebp, eax
        add    esp, 4
        test    ebp, ebp
        je    L_1491
        mov    edx, dword ptr [edi + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x88]
        add    eax, 0x10
        push    eax
        mov    ecx, ebp
        call    FUN_00416bc0
        mov    dword ptr [ebp], 0x779e88
        jmp    L_1493
L_1491:
        xor    ebp, ebp
L_1493:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx + 0x34c]
        mov    dword ptr [esp + 0x70], edx
L_14a1:
        mov    ecx, dword ptr [esp + 0x70]
        test    ecx, ecx
        je    L_15d4
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x70], ecx
        je    L_15d4
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 8]
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_1539
L_14de:
        lea    ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov    cx, word ptr [edi + 0x10]
        mov    dx, word ptr [edi + 0x12]
        lea    eax, [esp + 0x20]
        mov    word ptr [esp + 0x20], cx
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    word ptr [esp + 0x2a], dx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x90]
        mov    ecx, dword ptr [edx + 0x30]
        mov    eax, dword ptr [ebx + 0x30]
        add    esp, 8
        cmp    ecx, eax
        lea    ecx, [esp + 0x74]
        je    L_1534
        call    FUN_004d21c0
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_14de
        jmp    L_1539
L_1534:
        call    FUN_004d21c0
L_1539:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_157e
        test    edi, edi
        je    L_157e
        cmp    dword ptr [edi + 0x20], 1
        jne    L_157e
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xd
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
L_157e:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_14a1
        test    edi, edi
        je    L_14a1
        cmp    dword ptr [edi + 0x20], 2
        jne    L_14a1
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xe
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
        jmp    L_14a1
L_15d4:
        test    ebp, ebp
        je    L_15e1
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_15e1:
        mov    ecx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [ecx]
        mov    edi, dword ptr [g_007dab40]
        push    0x14
        xor    ebp, edi
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_1623
        mov    edx, dword ptr [ebp + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x84]
        add    eax, 0x10
        push    eax
        mov    ecx, edi
        call    FUN_00416bc0
        mov    dword ptr [edi], 0x779e88
        jmp    L_1625
L_1623:
        xor    edi, edi
L_1625:
        mov    ecx, edi
        mov    dword ptr [esp + 0x18], edi
        call    FUN_00416cc0
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        je    L_16ce
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ecx + 0x2c]
        mov    dword ptr [esp + 0x2c], edx
L_1647:
        mov    eax, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [eax + 0x18]
        test    ebp, ebp
        je    L_1775
        inc    byte ptr [ebp - 1]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebp
        repne scasb
        not    ecx
        dec    ecx
L_1665:
        test    ebp, ebp
        je    L_166c
        inc    byte ptr [ebp - 1]
L_166c:
        push    ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    ebp
        push    ecx
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    ebp, ebp
        je    L_16b5
        mov    cl, byte ptr [ebp - 1]
        lea    eax, [ebp - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_169d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_169d:
        test    ebp, ebp
        je    L_16b5
        mov    al, byte ptr [ebp - 1]
        dec    ebp
        dec    al
        mov    byte ptr [ebp], al
        jne    L_16b5
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_16b5:
        test    bl, bl
        jne    L_16ce
        mov    ecx, dword ptr [esp + 0x18]
        call    FUN_00416cc0
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        jne    L_1647
L_16ce:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        mov    eax, dword ptr [esp + 0x1c]
        jne    L_1718
        test    eax, eax
        je    L_1718
        cmp    dword ptr [eax + 0x20], 1
        jne    L_1718
        mov    edx, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esi + edx*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xd
        mov    ecx, dword ptr [esi + 0x205524]
        inc    ecx
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], ecx
L_1718:
        mov    cl, byte ptr [esp + 0x13]
        test    cl, cl
        jne    L_175e
        test    eax, eax
        je    L_175e
        cmp    dword ptr [eax + 0x20], 2
        jne    L_175e
        mov    eax, dword ptr [esi + 0x205524]
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esi + eax*4 + 0x205128], ecx
        mov    edx, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + edx*4 + 0x204d2c], 0xe
        mov    eax, dword ptr [esi + 0x205524]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205524], eax
L_175e:
        mov    ecx, dword ptr [esp + 0x18]
        test    ecx, ecx
        je    L_17f6
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp    L_17f6
L_1775:
        xor    ecx, ecx
        jmp    L_1665
L_177c:
        cmp    dword ptr [eax], 0x4bf
        jne    L_17ef
        cmp    dword ptr [ecx + 0xa8], edi
        je    L_17b9
        mov    edx, dword ptr [g_007db090]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + 0x28]
        mov    byte ptr [esp + 0x11], 0
        cmp    ebp, ecx
        jne    L_17fe
        mov    eax, dword ptr [esi + 0x205524]
        mov    dword ptr [esi + eax*4 + 0x204d2c], 2
        inc    dword ptr [esi + 0x205524]
        jmp    L_17fe
L_17b9:
        mov    ecx, ebp
        shl    ecx, 7
        add    ecx, ebp
        mov    dword ptr [esi + 0x205524], edi
        shl    ecx, 3
        mov    dword ptr [esi + 0x204d2c], edi
        sub    ecx, ebp
        lea    esi, [esi + ecx*8]
        mov    dword ptr [esi + 0x3548], 8
        mov    dword ptr [esi + 0x3554], 0x2c
        mov    byte ptr [esp + 0x11], 1
        jmp    L_181c
L_17ef:
        mov    byte ptr [esp + 0x11], 0
        jmp    L_17fe
L_17f6:
        mov    al, byte ptr [esp + 0x11]
        test    al, al
        jne    L_181c
L_17fe:
        mov    eax, dword ptr [esp + 0x144]
        mov    edx, eax
        shl    edx, 7
        add    edx, eax
        shl    edx, 3
        sub    edx, eax
        mov    dword ptr [esi + edx*8 + 0x3554], 0x2d
L_181c:
        mov    ecx, dword ptr [esp + 0x64]
        call    FUN_004ceb20
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        mov    al, byte ptr [esp + 0x27]
        xor    ecx, edx
        mov    edx, dword ptr [ecx]
        xor    edx, 0x85739531
        lea    ecx, [esp + 0xb8]
        mov    byte ptr [edx + 0xb0], al
        call    FUN_004d21c0
        mov    al, byte ptr [esp + 0x11]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x130
        ret    8
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
        sub    esp, 0x130
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        mov    al, byte ptr [esi + 0x17]
        test    al, al
        push    edi
        jne    L_1e5e
        mov    al, byte ptr [esi + 0xc1]
        test    al, al
        jne    L_1e4f
        mov    eax, dword ptr [g_007db090]
        xor    ebx, ebx
        cmp    eax, ebx
        je    L_1e4f
        cmp    dword ptr [esi + 0x3024], ebx
        je    L_1e4f
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x4c]
        xor    ecx, 0x85739531
        mov    byte ptr [esp + 0x13], bl
        mov    byte ptr [esp + 0x12], bl
        je    L_18d5
        mov    byte ptr [esp + 0x13], 1
L_18d5:
        mov    edx, dword ptr [eax + 0x58]
        xor    edx, 0x85739531
        je    L_18e5
        mov    byte ptr [esp + 0x12], 1
L_18e5:
        mov    eax, dword ptr [esp + 0x148]
        mov    edx, dword ptr [esp + 0x144]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        push    edx
        mov    ecx, esi
        mov    word ptr [esp + 0x28], 0xffff
        mov    word ptr [esp + 0x2a], bx
        call    FUN_00533f10
        push    1
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x104]
        call    FUN_004d1f80
        mov    ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    byte ptr [esp + 0x28], cl
        mov    dx, word ptr [eax + 2]
        push    1
        lea    eax, [esp + 0x2c]
        push    eax
        lea    ecx, [esp + 0x104]
        push    ecx
        mov    word ptr [esp + 0x36], dx
        call    FUN_004d9910
        mov    edx, dword ptr [g_007dab44]
        mov    edi, dword ptr [edx]
        mov    ebp, dword ptr [g_007dab40]
        mov    dword ptr [esi + 0x205d20], ebx
        push    0x14
        mov    dword ptr [esp + 0x28], eax
        mov    byte ptr [esp + 0x21], 1
        mov    dword ptr [esi + 0x205528], ebx
        xor    edi, ebp
        call    FUN_004084d0
        mov    ebp, eax
        add    esp, 0x10
        cmp    ebp, ebx
        je    L_19a5
        mov    eax, dword ptr [edi + 0xc]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x8c]
        add    ecx, 0x10
        push    ecx
        mov    ecx, ebp
        call    FUN_00416bc0
        mov    dword ptr [ebp], 0x779e88
        jmp    L_19a7
L_19a5:
        xor    ebp, ebp
L_19a7:
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [edx + 0x34c]
        mov    dword ptr [esp + 0x38], eax
L_19b5:
        mov    ecx, dword ptr [esp + 0x38]
        test    ecx, ecx
        je    L_1ae8
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x38], ecx
        je    L_1ae8
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 8]
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_1a4d
L_19f2:
        lea    ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov    cx, word ptr [edi + 0x10]
        mov    dx, word ptr [edi + 0x12]
        lea    eax, [esp + 0x14]
        mov    word ptr [esp + 0x14], cx
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    word ptr [esp + 0x1e], dx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x90]
        mov    ecx, dword ptr [edx + 0x30]
        mov    eax, dword ptr [ebx + 0x30]
        add    esp, 8
        cmp    ecx, eax
        lea    ecx, [esp + 0x74]
        je    L_1a48
        call    FUN_004d21c0
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_19f2
        jmp    L_1a4d
L_1a48:
        call    FUN_004d21c0
L_1a4d:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_1a92
        test    edi, edi
        je    L_1a92
        cmp    dword ptr [edi + 0x20], 1
        jne    L_1a92
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xd
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_1a92:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_19b5
        test    edi, edi
        je    L_19b5
        cmp    dword ptr [edi + 0x20], 2
        jne    L_19b5
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xe
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
        jmp    L_19b5
L_1ae8:
        test    ebp, ebp
        je    L_1af5
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_1af5:
        mov    ecx, dword ptr [g_007dab44]
        mov    edi, dword ptr [ecx]
        mov    ebx, dword ptr [g_007dab40]
        push    0x14
        xor    edi, ebx
        call    FUN_004084d0
        mov    ebp, eax
        add    esp, 4
        test    ebp, ebp
        je    L_1b38
        mov    edx, dword ptr [edi + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x88]
        add    eax, 0x10
        push    eax
        mov    ecx, ebp
        call    FUN_00416bc0
        mov    dword ptr [ebp], 0x779e88
        jmp    L_1b3a
L_1b38:
        xor    ebp, ebp
L_1b3a:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx + 0x34c]
        mov    dword ptr [esp + 0x38], edx
L_1b48:
        mov    ecx, dword ptr [esp + 0x38]
        test    ecx, ecx
        je    L_1c7b
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x38], ecx
        je    L_1c7b
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 8]
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_1be0
L_1b85:
        lea    ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov    cx, word ptr [edi + 0x10]
        mov    dx, word ptr [edi + 0x12]
        lea    eax, [esp + 0x14]
        mov    word ptr [esp + 0x14], cx
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    word ptr [esp + 0x1e], dx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x90]
        mov    ecx, dword ptr [edx + 0x30]
        mov    eax, dword ptr [ebx + 0x30]
        add    esp, 8
        cmp    ecx, eax
        lea    ecx, [esp + 0x74]
        je    L_1bdb
        call    FUN_004d21c0
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_1b85
        jmp    L_1be0
L_1bdb:
        call    FUN_004d21c0
L_1be0:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_1c25
        test    edi, edi
        je    L_1c25
        cmp    dword ptr [edi + 0x20], 1
        jne    L_1c25
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xd
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_1c25:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_1b48
        test    edi, edi
        je    L_1b48
        cmp    dword ptr [edi + 0x20], 2
        jne    L_1b48
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xe
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
        jmp    L_1b48
L_1c7b:
        test    ebp, ebp
        je    L_1c88
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_1c88:
        mov    ebx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ebx + 0x78]
        lea    ecx, [ebx + 0x78]
        call    dword ptr [edx + 4]
        mov    edi, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0x20], eax
        mov    eax, dword ptr [g_007dab44]
        mov    ebp, dword ptr [eax]
        push    0x14
        xor    ebp, edi
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_1cda
        mov    ecx, dword ptr [ebp + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x84]
        add    edx, 0x10
        push    edx
        mov    ecx, edi
        call    FUN_00416bc0
        mov    dword ptr [edi], 0x779e88
        jmp    L_1cdc
L_1cda:
        xor    edi, edi
L_1cdc:
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_00416cc0
        test    eax, eax
        mov    dword ptr [esp + 0x18], eax
        je    L_1d81
        mov    eax, dword ptr [ebx + 0x2c]
        mov    dword ptr [esp + 0x2c], eax
L_1cfa:
        mov    ecx, dword ptr [esp + 0x18]
        mov    ebp, dword ptr [ecx + 0x18]
        test    ebp, ebp
        je    L_1e48
        inc    byte ptr [ebp - 1]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebp
        repne scasb
        not    ecx
        dec    ecx
L_1d18:
        test    ebp, ebp
        je    L_1d1f
        inc    byte ptr [ebp - 1]
L_1d1f:
        mov    edx, dword ptr [esp + 0x2c]
        push    ecx
        push    ebp
        push    edx
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    ebp, ebp
        je    L_1d68
        mov    cl, byte ptr [ebp - 1]
        lea    eax, [ebp - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_1d50
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_1d50:
        test    ebp, ebp
        je    L_1d68
        mov    al, byte ptr [ebp - 1]
        dec    ebp
        dec    al
        mov    byte ptr [ebp], al
        jne    L_1d68
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_1d68:
        test    bl, bl
        jne    L_1d81
        mov    ecx, dword ptr [esp + 0x14]
        call    FUN_00416cc0
        test    eax, eax
        mov    dword ptr [esp + 0x18], eax
        jne    L_1cfa
L_1d81:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        mov    eax, dword ptr [esp + 0x18]
        jne    L_1dd1
        test    eax, eax
        je    L_1dd1
        cmp    dword ptr [eax + 0x20], 1
        jne    L_1dd1
        mov    ecx, dword ptr [esi + 0x205d20]
        mov    edx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [edx + 0x634]
        mov    dword ptr [esi + ecx*4 + 0x205924], edx
        mov    ecx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + ecx*4 + 0x205528], 0xd
        mov    ecx, dword ptr [esi + 0x205d20]
        inc    ecx
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], ecx
L_1dd1:
        mov    cl, byte ptr [esp + 0x12]
        test    cl, cl
        jne    L_1e1d
        test    eax, eax
        je    L_1e1d
        cmp    dword ptr [eax + 0x20], 2
        jne    L_1e1d
        mov    edx, dword ptr [esi + 0x205d20]
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [eax + 0x634]
        mov    dword ptr [esi + edx*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xe
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_1e1d:
        mov    ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        je    L_1e2b
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_1e2b:
        lea    ecx, [esp + 0xfc]
        call    FUN_004d21c0
        mov    al, byte ptr [esp + 0x11]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x130
        ret    8
L_1e48:
        xor    ecx, ecx
        jmp    L_1d18
L_1e4f:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x130
        ret    8
L_1e5e:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [g_007dab40]
        mov    edi, dword ptr [esp + 0x144]
        xor    edx, eax
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [esp + 0x148]
        xor    eax, 0x85739531
        mov    cl, byte ptr [eax + 0xb0]
        push    edx
        lea    eax, [esp + 0x40]
        push    eax
        mov    byte ptr [esp + 0x2f], cl
        xor    ebp, ebp
        push    edi
        mov    ecx, esi
        mov    word ptr [esp + 0x48], 0xffff
        mov    word ptr [esp + 0x4a], bp
        call    FUN_00533f10
        push    1
        lea    ecx, [esp + 0x40]
        push    ecx
        lea    ecx, [esp + 0xc0]
        mov    bl, al
        call    FUN_004d1f80
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x14]
        push    1
        xor    ecx, 0x85739531
        call    FUN_004cdfa0
        mov    ecx, eax
        mov    dword ptr [esp + 0x64], eax
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    byte ptr [esp + 0x60], cl
        mov    dx, word ptr [eax + 2]
        push    1
        lea    eax, [esp + 0x64]
        push    eax
        lea    ecx, [esp + 0xc0]
        push    ecx
        mov    word ptr [esp + 0x6e], dx
        call    FUN_004d9910
        add    esp, 0xc
        test    bl, bl
        mov    dword ptr [esi + 0x205d20], ebp
        mov    dword ptr [esp + 0x18], eax
        mov    byte ptr [esp + 0x11], 1
        mov    dword ptr [esi + 0x205528], ebp
        je    L_1f71
        mov    edx, edi
        imul    edx, edx, 0x22ac
        mov    cl, byte ptr [edx + esi + 0x205d2c]
        test    cl, cl
        je    L_1f71
        mov    eax, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + eax*4 + 0x205528], 1
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        lea    ecx, [esp + 0xb8]
        mov    dword ptr [esi + 0x205d20], eax
        call    FUN_004d21c0
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x130
        ret    8
L_1f71:
        mov    eax, dword ptr [eax + 4]
        cmp    dword ptr [eax], 0x429
        jne    L_294a
        mov    al, byte ptr [esi + 0x16]
        test    al, al
        je    L_1f8c
        mov    ecx, dword ptr [esi + 0x50]
        jmp    L_1f8f
L_1f8c:
        mov    ecx, dword ptr [esi + 0x54]
L_1f8f:
        cmp    dword ptr [ecx + 0xe4], ebp
        je    L_207d
        mov    edx, edi
        imul    edx, edx, 0x22ac
        mov    eax, dword ptr [edx + esi + 0x205f38]
        cmp    eax, 8
        je    L_1fda
        lea    edx, [eax + eax*4 + 0xf]
        lea    eax, [eax + eax*4]
        shl    edx, 4
        mov    edx, dword ptr [edx + ecx]
        shl    eax, 4
        add    eax, ecx
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [eax + 0xf4]
        mov    eax, dword ptr [eax + 0x100]
        mov    dword ptr [esp + 0x1c], edx
        jmp    L_2097
L_1fda:
        mov    edx, dword ptr [ecx + 0x88]
        mov    ebp, dword ptr [ecx + 0xbc]
        mov    eax, dword ptr [ecx + 0x90]
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [ecx + 0x8c]
        mov    dword ptr [esp + 0x50], ebp
        mov    ebp, dword ptr [ecx + 0xc4]
        mov    dword ptr [esp + 0x40], ebp
        mov    ebp, dword ptr [ecx + 0xcc]
        mov    dword ptr [esp + 0x48], ebp
        mov    ebp, dword ptr [ecx + 0xd4]
        mov    dword ptr [esp + 0x58], ebp
        mov    ebp, dword ptr [ecx + 0xdc]
        mov    dword ptr [esp + 0x30], ebp
        mov    ebp, dword ptr [ecx + 0xc0]
        mov    dword ptr [esp + 0x54], ebp
        mov    ebp, dword ptr [ecx + 0xc8]
        mov    dword ptr [esp + 0x44], ebp
        mov    ebp, dword ptr [ecx + 0xd0]
        mov    dword ptr [esp + 0x4c], ebp
        mov    ebp, dword ptr [ecx + 0xd8]
        mov    dword ptr [esp + 0x5c], ebp
        mov    ebp, dword ptr [ecx + 0xe0]
        mov    dword ptr [esp + 0x34], ebp
        mov    ebp, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + ebp*4 + 0x205528], 4
        mov    ebp, dword ptr [esi + 0x205d20]
        inc    ebp
        mov    dword ptr [esp + 0x1c], edx
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], ebp
        jmp    L_20fb
L_207d:
        mov    eax, dword ptr [ecx + 0x88]
        mov    edx, dword ptr [ecx + 0x8c]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [ecx + 0x90]
        mov    dword ptr [esp + 0x1c], edx
L_2097:
        mov    ebp, dword ptr [ecx + 0xbc]
        mov    dword ptr [esp + 0x50], ebp
        mov    ebp, dword ptr [ecx + 0xc4]
        mov    dword ptr [esp + 0x40], ebp
        mov    ebp, dword ptr [ecx + 0xcc]
        mov    dword ptr [esp + 0x48], ebp
        mov    ebp, dword ptr [ecx + 0xd4]
        mov    dword ptr [esp + 0x58], ebp
        mov    ebp, dword ptr [ecx + 0xdc]
        mov    dword ptr [esp + 0x30], ebp
        mov    ebp, dword ptr [ecx + 0xc0]
        mov    dword ptr [esp + 0x54], ebp
        mov    ebp, dword ptr [ecx + 0xc8]
        mov    dword ptr [esp + 0x44], ebp
        mov    ebp, dword ptr [ecx + 0xd0]
        mov    dword ptr [esp + 0x4c], ebp
        mov    ebp, dword ptr [ecx + 0xd8]
        mov    dword ptr [esp + 0x5c], ebp
        mov    ebp, dword ptr [ecx + 0xe0]
        mov    dword ptr [esp + 0x34], ebp
L_20fb:
        cmp    edx, 0x64
        jle    L_2108
        mov    dword ptr [esp + 0x1c], 0x64
L_2108:
        cmp    eax, 0x2160ec0
        jle    L_2114
        mov    eax, 0x2160ec0
L_2114:
        test    bl, bl
        je    L_2145
        mov    edx, dword ptr [ecx + 0x84]
        test    edx, edx
        je    L_2145
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 3
        mov    edx, dword ptr [esi + 0x205d20]
        inc    edx
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], edx
L_2145:
        mov    ebp, dword ptr [esp + 0x18]
        imul    edi, edi, 0x22ac
        fld    dword ptr [ebp + 0x3b8]
        mov    edx, dword ptr [ebp + 0x3c0]
        add    edi, esi
        cmp    edx, eax
        mov    dword ptr [esp + 0x2c], edx
        fstp    dword ptr [edi + 0x207fc4]
        mov    dword ptr [edi + 0x207fc8], edx
        jle    L_2194
        mov    eax, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + eax*4 + 0x205528], 0xf
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_2194:
        fld    dword ptr [ebp + 0x3b8]
        fild    dword ptr [esp + 0x14]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_21ca
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 5
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_21ca:
        fld    dword ptr [ebp + 0x3b8]
        mov    ebx, 6
        fild    dword ptr [esp + 0x1c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_2201
        mov    eax, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + eax*4 + 0x205528], ebx
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_2201:
        mov    eax, dword ptr [ecx + 0xe4]
        test    eax, eax
        je    L_22b1
        mov    eax, dword ptr [edi + 0x205f38]
        cmp    eax, 8
        je    L_22b1
        lea    edx, [eax + eax*4]
        shl    edx, 4
        fld    dword ptr [edx + ecx + 0xfc]
        lea    eax, [edx + ecx]
        fadd    dword ptr [ebp + 0x3b8]
        fild    dword ptr [eax + 0xf8]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_2266
        mov    eax, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + eax*4 + 0x205528], 0xc
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_2266:
        mov    eax, dword ptr [edi + 0x205f38]
        lea    edx, [eax + eax*4]
        shl    edx, 4
        fld    dword ptr [ecx + edx + 0x108]
        add    ecx, edx
        fiadd    dword ptr [esp + 0x2c]
        fild    dword ptr [ecx + 0x104]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_22b1
        mov    eax, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + eax*4 + 0x205528], 0x10
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_22b1:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx + 0x78]
        add    ecx, 0x78
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esp + 0x18]
        fld    dword ptr [ecx + 0x3b8]
        mov    ebp, dword ptr [eax + 0x634]
        fcomp    dword ptr [eax + 0x70]
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [edi + 0x205f3c], ebp
        fnstsw  ax
        test    ah, 0x41
        jne    L_2301
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], ebx
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_2301:
        lea    eax, [esp + 0x50]
        push    eax
        push    ebp
        mov    ecx, esi
        call    FUN_00544180
        test    eax, eax
        jne    L_233a
        mov    ecx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + ecx*4 + 0x205924], ebp
        mov    edx, dword ptr [esi + 0x205d20]
        mov    byte ptr [esp + 0x11], al
        mov    dword ptr [esi + edx*4 + 0x205528], 7
        inc    dword ptr [esi + 0x205d20]
L_233a:
        mov    eax, dword ptr [esp + 0x18]
        mov    ebx, dword ptr [eax + 0x34c]
        mov    ebp, 0xb
L_2349:
        test    ebx, ebx
        je    L_2468
        mov    eax, dword ptr [ebx]
        test    eax, eax
        mov    ebx, dword ptr [ebx + 4]
        je    L_2468
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    edi, dword ptr [eax + 0x30]
        test    edi, edi
        jl    L_23aa
        cmp    edi, 0x12
        jg    L_23aa
        lea    eax, [esp + 0x40]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_005441d0
L_2380:
        test    eax, eax
        jne    L_2349
        mov    ecx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + ecx*4 + 0x205924], edi
        mov    edx, dword ptr [esi + 0x205d20]
        mov    byte ptr [esp + 0x11], al
        mov    dword ptr [esi + edx*4 + 0x205528], ebp
        inc    dword ptr [esi + 0x205d20]
        jmp    L_2349
L_23aa:
        cmp    edi, 0x33
        jl    L_23f2
        cmp    edi, 0x4e
        jg    L_23f2
        lea    eax, [esp + 0x48]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00544220
        test    eax, eax
        jne    L_2349
        mov    ecx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + ecx*4 + 0x205924], edi
        mov    edx, dword ptr [esi + 0x205d20]
        mov    byte ptr [esp + 0x11], al
        mov    dword ptr [esi + edx*4 + 0x205528], 0xa
        inc    dword ptr [esi + 0x205d20]
        jmp    L_2349
L_23f2:
        cmp    edi, 0x64
        jl    L_243e
        cmp    edi, 0x7b
        jg    L_243e
        lea    eax, [esp + 0x58]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00544270
        test    eax, eax
        jne    L_2349
        mov    ecx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + ecx*4 + 0x205924], edi
        mov    edx, dword ptr [esi + 0x205d20]
        mov    byte ptr [esp + 0x11], al
        mov    dword ptr [esi + edx*4 + 0x205528], 9
        inc    dword ptr [esi + 0x205d20]
        jmp    L_2349
L_243e:
        cmp    edi, 0x83
        jl    L_2349
        cmp    edi, 0x8c
        jg    L_2349
        lea    eax, [esp + 0x30]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_005442c0
        jmp    L_2380
L_2468:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    edi, dword ptr [eax]
        xor    edi, ecx
        mov    ecx, dword ptr [edi + 0x4c]
        xor    ecx, 0x85739531
        mov    byte ptr [esp + 0x12], 0
        mov    byte ptr [esp + 0x13], 0
        je    L_2491
        mov    byte ptr [esp + 0x12], 1
L_2491:
        mov    edx, dword ptr [edi + 0x58]
        xor    edx, 0x85739531
        je    L_24a1
        mov    byte ptr [esp + 0x13], 1
L_24a1:
        push    0x14
        call    FUN_004084d0
        mov    ebp, eax
        add    esp, 4
        test    ebp, ebp
        je    L_24d3
        mov    eax, dword ptr [edi + 0xc]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x8c]
        add    ecx, 0x10
        push    ecx
        mov    ecx, ebp
        call    FUN_00416bc0
        mov    dword ptr [ebp], 0x779e88
        jmp    L_24d5
L_24d3:
        xor    ebp, ebp
L_24d5:
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [edx + 0x34c]
        mov    dword ptr [esp + 0x70], eax
L_24e3:
        mov    ecx, dword ptr [esp + 0x70]
        test    ecx, ecx
        je    L_2616
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x70], ecx
        je    L_2616
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 8]
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_257b
L_2520:
        lea    ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov    cx, word ptr [edi + 0x10]
        mov    dx, word ptr [edi + 0x12]
        lea    eax, [esp + 0x20]
        mov    word ptr [esp + 0x20], cx
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    word ptr [esp + 0x2a], dx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x90]
        mov    ecx, dword ptr [edx + 0x30]
        mov    eax, dword ptr [ebx + 0x30]
        add    esp, 8
        cmp    ecx, eax
        lea    ecx, [esp + 0x74]
        je    L_2576
        call    FUN_004d21c0
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_2520
        jmp    L_257b
L_2576:
        call    FUN_004d21c0
L_257b:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_25c0
        test    edi, edi
        je    L_25c0
        cmp    dword ptr [edi + 0x20], 1
        jne    L_25c0
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xd
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_25c0:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_24e3
        test    edi, edi
        je    L_24e3
        cmp    dword ptr [edi + 0x20], 2
        jne    L_24e3
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xe
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
        jmp    L_24e3
L_2616:
        test    ebp, ebp
        je    L_2623
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_2623:
        mov    ecx, dword ptr [g_007dab44]
        mov    edi, dword ptr [ecx]
        mov    ebx, dword ptr [g_007dab40]
        push    0x14
        xor    edi, ebx
        call    FUN_004084d0
        mov    ebp, eax
        add    esp, 4
        test    ebp, ebp
        je    L_2666
        mov    edx, dword ptr [edi + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x88]
        add    eax, 0x10
        push    eax
        mov    ecx, ebp
        call    FUN_00416bc0
        mov    dword ptr [ebp], 0x779e88
        jmp    L_2668
L_2666:
        xor    ebp, ebp
L_2668:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx + 0x34c]
        mov    dword ptr [esp + 0x70], edx
L_2676:
        mov    ecx, dword ptr [esp + 0x70]
        test    ecx, ecx
        je    L_27a9
        mov    eax, dword ptr [ecx]
        test    eax, eax
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [esp + 0x70], ecx
        je    L_27a9
        mov    edx, dword ptr [eax + 0x78]
        lea    ecx, [eax + 0x78]
        call    dword ptr [edx + 4]
        mov    ebx, eax
        mov    eax, dword ptr [ebp]
        mov    ecx, ebp
        call    dword ptr [eax + 8]
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        je    L_270e
L_26b3:
        lea    ecx, [esp + 0x74]
        call    FUN_004d1f10
        mov    cx, word ptr [edi + 0x10]
        mov    dx, word ptr [edi + 0x12]
        lea    eax, [esp + 0x20]
        mov    word ptr [esp + 0x20], cx
        push    eax
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    word ptr [esp + 0x2a], dx
        call    FUN_004da8d0
        mov    edx, dword ptr [esp + 0x90]
        mov    ecx, dword ptr [edx + 0x30]
        mov    eax, dword ptr [ebx + 0x30]
        add    esp, 8
        cmp    ecx, eax
        lea    ecx, [esp + 0x74]
        je    L_2709
        call    FUN_004d21c0
        mov    ecx, ebp
        call    FUN_00416cc0
        mov    edi, eax
        test    edi, edi
        jne    L_26b3
        jmp    L_270e
L_2709:
        call    FUN_004d21c0
L_270e:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        jne    L_2753
        test    edi, edi
        je    L_2753
        cmp    dword ptr [edi + 0x20], 1
        jne    L_2753
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xd
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_2753:
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        jne    L_2676
        test    edi, edi
        je    L_2676
        cmp    dword ptr [edi + 0x20], 2
        jne    L_2676
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [ebx + 0x30]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xe
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
        jmp    L_2676
L_27a9:
        test    ebp, ebp
        je    L_27b6
        mov    eax, dword ptr [ebp]
        push    1
        mov    ecx, ebp
        call    dword ptr [eax]
L_27b6:
        mov    ecx, dword ptr [g_007dab44]
        mov    ebp, dword ptr [ecx]
        mov    edi, dword ptr [g_007dab40]
        push    0x14
        xor    ebp, edi
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_27f8
        mov    edx, dword ptr [ebp + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x84]
        add    eax, 0x10
        push    eax
        mov    ecx, edi
        call    FUN_00416bc0
        mov    dword ptr [edi], 0x779e88
        jmp    L_27fa
L_27f8:
        xor    edi, edi
L_27fa:
        mov    ecx, edi
        mov    dword ptr [esp + 0x14], edi
        call    FUN_00416cc0
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        je    L_28a3
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx + 0x2c]
        mov    dword ptr [esp + 0x2c], edx
L_281c:
        mov    eax, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [eax + 0x18]
        test    ebp, ebp
        je    L_2943
        inc    byte ptr [ebp - 1]
        or    ecx, 0xffffffff
        xor    eax, eax
        mov    edi, ebp
        repne scasb
        not    ecx
        dec    ecx
L_283a:
        test    ebp, ebp
        je    L_2841
        inc    byte ptr [ebp - 1]
L_2841:
        push    ecx
        mov    ecx, dword ptr [esp + 0x30]
        push    ebp
        push    ecx
        call    dword ptr [g_0076b2b0]
        add    esp, 0xc
        mov    ebx, eax
        neg    ebx
        sbb    bl, bl
        inc    bl
        test    ebp, ebp
        je    L_288a
        mov    cl, byte ptr [ebp - 1]
        lea    eax, [ebp - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2872
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2872:
        test    ebp, ebp
        je    L_288a
        mov    al, byte ptr [ebp - 1]
        dec    ebp
        dec    al
        mov    byte ptr [ebp], al
        jne    L_288a
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_288a:
        test    bl, bl
        jne    L_28a3
        mov    ecx, dword ptr [esp + 0x14]
        call    FUN_00416cc0
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        jne    L_281c
L_28a3:
        mov    al, byte ptr [esp + 0x12]
        test    al, al
        mov    eax, dword ptr [esp + 0x1c]
        jne    L_28ed
        test    eax, eax
        je    L_28ed
        cmp    dword ptr [eax + 0x20], 1
        jne    L_28ed
        mov    edx, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esi + edx*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xd
        mov    ecx, dword ptr [esi + 0x205d20]
        inc    ecx
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], ecx
L_28ed:
        mov    cl, byte ptr [esp + 0x13]
        test    cl, cl
        jne    L_2933
        test    eax, eax
        je    L_2933
        cmp    dword ptr [eax + 0x20], 2
        jne    L_2933
        mov    eax, dword ptr [esi + 0x205d20]
        mov    ecx, dword ptr [esp + 0x28]
        mov    dword ptr [esi + eax*4 + 0x205924], ecx
        mov    edx, dword ptr [esi + 0x205d20]
        mov    dword ptr [esi + edx*4 + 0x205528], 0xe
        mov    eax, dword ptr [esi + 0x205d20]
        inc    eax
        mov    byte ptr [esp + 0x11], 0
        mov    dword ptr [esi + 0x205d20], eax
L_2933:
        mov    ecx, dword ptr [esp + 0x14]
        test    ecx, ecx
        je    L_2971
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp    L_2971
L_2943:
        xor    ecx, ecx
        jmp    L_283a
L_294a:
        cmp    dword ptr [eax], 0x4bf
        jne    L_296a
        imul    edi, edi, 0x22ac
        mov    dword ptr [edi + esi + 0x205f3c], 0x2c
        mov    byte ptr [esp + 0x11], 1
        jmp    L_2991
L_296a:
        mov    byte ptr [esp + 0x11], 0
        jmp    L_2979
L_2971:
        mov    al, byte ptr [esp + 0x11]
        test    al, al
        jne    L_2991
L_2979:
        mov    eax, dword ptr [esp + 0x144]
        imul    eax, eax, 0x22ac
        mov    dword ptr [eax + esi + 0x205f3c], 0x2d
L_2991:
        mov    ecx, dword ptr [esp + 0x64]
        call    FUN_004ceb20
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [g_007dab40]
        mov    cl, byte ptr [esp + 0x27]
        xor    edx, esi
        mov    eax, dword ptr [edx]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0xb0], cl
        lea    ecx, [esp + 0xb8]
        call    FUN_004d21c0
        mov    al, byte ptr [esp + 0x11]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x130
        ret    8
    }
}
