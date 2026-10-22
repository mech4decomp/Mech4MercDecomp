/*
 * FUN_006129b1 (extent 0x6129b1-0x613472) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c0c;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern int    g_007f25a8;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00415ca0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004e7820(void);
extern void __cdecl FUN_004e7960(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_0059fb90(void);
extern void __cdecl FUN_0059fcd0(void);
extern void __cdecl FUN_005b6f10(void);
extern void __cdecl FUN_00609de0(void);
extern void __cdecl FUN_00609fb0(void);
extern void __cdecl FUN_0060d4b0(void);
extern void __cdecl FUN_0060d510(void);
extern void __cdecl FUN_0060d7e0(void);
extern void __cdecl FUN_0060d820(void);
extern void __cdecl FUN_0060d8d0(void);
extern void __cdecl FUN_0060dea0(void);
extern void __cdecl FUN_0060fcf0(void);
extern void __cdecl FUN_00614210(void);
extern void __cdecl FUN_00618a40(void);
extern void __cdecl FUN_006b46b0(void);
extern void __cdecl FUN_006b4950(void);

__declspec(naked) void FUN_006129b1(void)
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
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x80
        mov    eax, dword ptr [esp + 0x84]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [eax + 8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax + 4]
        mov    eax, dword ptr [edi + 4]
        test    eax, eax
        mov    dword ptr [esp + 0x20], ecx
        mov    dword ptr [esp + 0x10], ebp
        mov    dword ptr [ebp], 1
        je    L_2c2e
        push    ecx
        lea    ecx, [edi + 0x18]
        call    FUN_00416b60
        mov    esi, eax
        test    esi, esi
        je    L_2c96
        mov    ax, word ptr [esi + 0x10]
        mov    cx, word ptr [esi + 0x12]
        lea    edx, [esp + 0x14]
        push    edx
        mov    word ptr [esp + 0x18], ax
        mov    word ptr [esp + 0x1a], cx
        call    FUN_004da920
        mov    ecx, dword ptr [g_007b8c0c]
        mov    ebx, dword ptr [ecx + eax*4]
        add    esp, 4
        push    0
        lea    ecx, [esp + 0x28]
        call    FUN_0041ee70
        lea    edx, [esp + 0x24]
        push    edx
        lea    eax, [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    FUN_0060d7e0
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_00523e60
        call    dword ptr [ebx + 0xa4]
        mov    ecx, dword ptr [g_007db090]
        add    esp, 8
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    ebx, dword ptr [esp + 0x38]
        mov    byte ptr [esp + 0x18], cl
        mov    dx, word ptr [eax + 2]
        mov    cx, word ptr [esi + 0x16]
        mov    ax, word ptr [esi + 0x14]
        mov    word ptr [esp + 0x1a], dx
        push    1
        lea    edx, [esp + 0x18]
        mov    word ptr [esp + 0x1a], cx
        push    edx
        lea    ecx, [esp + 0x54]
        mov    word ptr [esp + 0x1c], ax
        call    FUN_004d1f80
        mov    eax, dword ptr [esp + 0x60]
        mov    esi, dword ptr [eax + 0x28]
        mov    eax, dword ptr [eax + 0x2c]
        push    esi
        push    eax
        mov    ecx, edi
        call    FUN_0060dea0
        cmp    eax, -1
        mov    dword ptr [esp + 0x1c], eax
        jne    L_2acf
        push    esi
        push    3
        mov    ecx, edi
        call    FUN_0060dea0
        cmp    eax, -1
        mov    dword ptr [esp + 0x1c], eax
        je    L_2c6e
L_2acf:
        push    1
        lea    ecx, [esp + 0x1c]
        push    ecx
        lea    edx, [esp + 0x2c]
        push    edx
        mov    byte ptr [ebx + 0x64], al
        call    FUN_004d9910
        mov    esi, eax
        mov    eax, dword ptr [g_007f25a8]
        mov    ecx, dword ptr [esi + 4]
        add    esp, 0xc
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_2bbc
        mov    ecx, dword ptr [edi + 4]
        lea    eax, [esp + 0x1c]
        push    eax
        add    ecx, 0x384
        call    FUN_00416b60
        mov    ebx, eax
        mov    ecx, ebx
        call    FUN_004e7820
        mov    ebp, eax
        test    ebp, ebp
        jne    L_2b3b
        test    esi, esi
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx], eax
        je    L_2c75
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
        jmp    L_2c75
L_2b3b:
        mov    ecx, ebx
        call    FUN_004e7960
        test    eax, eax
        je    L_2b7f
        mov    eax, dword ptr [eax + 0x44]
        test    eax, eax
        mov    dword ptr [esp + 0x14], eax
        je    L_2b54
        inc    byte ptr [eax - 1]
L_2b54:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esi + 0x18c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_2b7f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2b7f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2b7f:
        mov    eax, dword ptr [ebp + 0x44]
        test    eax, eax
        mov    dword ptr [esp + 0x14], eax
        je    L_2b8d
        inc    byte ptr [eax - 1]
L_2b8d:
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esi + 0x188]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_2bb8
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2bb8
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2bb8:
        mov    ebp, dword ptr [esp + 0x10]
L_2bbc:
        mov    ebx, dword ptr [edi + 4]
        mov    edx, dword ptr [ebx]
        push    esi
        mov    ecx, ebx
        call    dword ptr [edx + 0x28]
        mov    eax, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        call    dword ptr [eax + 0x48]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xa0]
        test    al, al
        je    L_2c62
        mov    eax, dword ptr [ebx]
        push    esi
        mov    ecx, ebx
        call    dword ptr [eax + 0x100]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        push    edx
        mov    ecx, edi
        call    FUN_0060d510
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x24]
        push    esi
        call    FUN_0059fcd0
        lea    ecx, [esp + 0x4c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x24]
        call    FUN_0041ef60
L_2c2e:
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        add    ecx, 0xf4
        call    FUN_0060fcf0
        mov    eax, 1
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x80
        ret    8
L_2c62:
        test    esi, esi
        je    L_2c6e
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
L_2c6e:
        mov    dword ptr [ebp], 0
L_2c75:
        lea    ecx, [esp + 0x4c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x24]
        call    FUN_0041ef60
        xor    eax, eax
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x80
        ret    8
L_2c96:
        pop    edi
        pop    esi
        mov    dword ptr [ebp], 0
        pop    ebp
        xor    eax, eax
        pop    ebx
        add    esp, 0x80
        ret    8
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    dword ptr [esp + 0x14], ecx
        je    L_2db2
        mov    ecx, dword ptr [esp + 0x20]
        push    ecx
        lea    ecx, [eax + 0x384]
        xor    ebp, ebp
        call    FUN_00416b60
        mov    ebx, dword ptr [eax + 0x94]
        add    eax, 0x94
L_2ce3:
        test    ebx, ebx
        je    L_2dae
        mov    edi, dword ptr [ebx]
        test    edi, edi
        mov    ebx, dword ptr [ebx + 4]
        je    L_2dae
        mov    eax, dword ptr [g_007f25a8]
        mov    ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_2ce3
        mov    edx, dword ptr [esp + 0x1c]
        cmp    dword ptr [edx], ebp
        jne    L_2da8
        mov    eax, dword ptr [edi + 0x5c]
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, esp
        mov    dword ptr [eax], ecx
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_2d37
        inc    byte ptr [eax - 1]
L_2d37:
        call    FUN_005178d0
        mov    ecx, dword ptr [eax + 0x8c]
        call    FUN_00614210
        mov    esi, dword ptr [eax + 0x18]
        test    esi, esi
        je    L_2d51
        inc    byte ptr [esi - 1]
L_2d51:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        push    0
        push    esi
        push    edi
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x24]
        call    FUN_0059fb90
        test    esi, esi
        je    L_2d8d
        mov    cl, byte ptr [esi - 1]
        lea    eax, [esi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2d8d
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2d8d:
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_2da8
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2da8
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2da8:
        inc    ebp
        jmp    L_2ce3
L_2dae:
        mov    ecx, dword ptr [esp + 0x14]
L_2db2:
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_0060d820
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        mov    eax, dword ptr [ecx + 4]
        test    eax, eax
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov    dword ptr [esp + 0x10], ecx
        je    L_2eab
        push    ebx
        lea    ecx, [eax + 0x384]
        call    FUN_00416b60
        mov    edi, dword ptr [ebp]
        push    edi
        mov    ecx, eax
        call    FUN_005b6f10
        mov    esi, eax
        test    esi, esi
        je    L_2eab
        cmp    edi, 0x87
        je    L_2eab
        mov    eax, dword ptr [esi + 0x5c]
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_00412570
        push    ecx
        mov    ecx, dword ptr [esp + 0x20]
        mov    eax, esp
        mov    dword ptr [eax], ecx
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_2e3a
        inc    byte ptr [eax - 1]
L_2e3a:
        call    FUN_005178d0
        mov    ecx, dword ptr [eax + 0x88]
        call    FUN_00614210
        mov    edi, dword ptr [eax + 0x18]
        test    edi, edi
        je    L_2e54
        inc    byte ptr [edi - 1]
L_2e54:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        push    0
        push    edi
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    ecx, dword ptr [ecx + 0x24]
        call    FUN_0059fb90
        test    edi, edi
        je    L_2e90
        mov    cl, byte ptr [edi - 1]
        lea    eax, [edi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2e90
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2e90:
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_2eab
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2eab
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2eab:
        mov    ecx, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        call    FUN_0060d8d0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
        nop    
        nop    
        push    ecx
        push    ebx
        push    ebp
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 4]
        test    eax, eax
        push    esi
        push    edi
        je    L_2ff9
        mov    ebp, dword ptr [eax + 0x34c]
L_2ed8:
        test    ebp, ebp
        je    L_2fee
        mov    esi, dword ptr [ebp]
        test    esi, esi
        mov    ebp, dword ptr [ebp + 4]
        je    L_2fee
        mov    eax, dword ptr [g_007f25a8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_2ed8
        mov    eax, dword ptr [esi + 0x5c]
        push    eax
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        push    ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, esp
        mov    dword ptr [eax], ecx
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_2f21
        inc    byte ptr [eax - 1]
L_2f21:
        call    FUN_005178d0
        mov    ecx, dword ptr [eax + 0x8c]
        call    FUN_00614210
        test    eax, eax
        jne    L_2f59
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        mov    eax, esp
        mov    dword ptr [eax], edx
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_2f49
        inc    byte ptr [eax - 1]
L_2f49:
        call    FUN_005178d0
        mov    ecx, dword ptr [eax + 0x88]
        call    FUN_00614210
L_2f59:
        mov    edi, dword ptr [eax + 0x18]
        test    edi, edi
        je    L_2f63
        inc    byte ptr [edi - 1]
L_2f63:
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    edx, dword ptr [ecx + 0x44]
        push    0
        push    edi
        xor    edx, 0x85739531
        mov    ecx, dword ptr [edx + 0x24]
        push    esi
        call    FUN_0059fb90
        test    edi, edi
        je    L_2fa0
        mov    cl, byte ptr [edi - 1]
        lea    eax, [edi - 1]
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2fa0
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_2fa0:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xa4]
        mov    ecx, dword ptr [ebx + 4]
        mov    edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x104]
        push    esi
        mov    ecx, ebx
        call    FUN_0060d4b0
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_2ed8
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_2ed8
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_2ed8
L_2fee:
        mov    eax, 1
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
        ret    
L_2ff9:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
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
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [eax + 4]
        mov    edx, dword ptr [eax + 8]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [edx]
        push    esi
        push    edi
        mov    edi, dword ptr [ecx]
        push    edi
        lea    ecx, [esp + 0x1c]
        call    FUN_00412570
        mov    eax, dword ptr [eax]
        push    0x76cb8c
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_004125e0
        mov    ecx, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        lea    ecx, [esp + 0x2c]
        call    FUN_004125e0
        lea    ecx, [esp + 0x14]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    ebx, dword ptr [ecx + 0x80]
        mov    dword ptr [esp + 0x18], ebx
        add    ebx, 0x10
        push    ebx
        lea    ecx, [esp + 0x14]
        call    FUN_0040f060
        mov    esi, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x24]
L_3097:
        mov    dl, byte ptr [eax]
        mov    cl, dl
        cmp    dl, byte ptr [esi]
        jne    L_30bb
        test    cl, cl
        je    L_30b7
        mov    dl, byte ptr [eax + 1]
        mov    cl, dl
        cmp    dl, byte ptr [esi + 1]
        jne    L_30bb
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_3097
L_30b7:
        xor    eax, eax
        jmp    L_30c0
L_30bb:
        sbb    eax, eax
        sbb    eax, -1
L_30c0:
        test    eax, eax
        jne    L_30e5
        lea    ecx, [esp + 0x10]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x24]
        call    FUN_0040d9b0
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x10
        ret    0xc
L_30e5:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x44]
        xor    ecx, 0x85739531
        lea    edx, [esp + 0x24]
        add    ecx, 0x54
        push    edx
        call    FUN_00416b60
        test    eax, eax
        je    L_312d
        lea    ecx, [esp + 0x10]
        call    FUN_0040d9b0
        lea    ecx, [esp + 0x24]
        call    FUN_0040d9b0
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 0xd4a
        pop    ebx
        add    esp, 0x10
        ret    0xc
L_312d:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        mov    esi, dword ptr [esp + 0x18]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0x44]
        xor    ecx, 0x85739531
        push    esi
        add    ecx, 0x54
        call    FUN_00415ca0
        push    edi
        lea    ecx, [esp + 0x20]
        call    FUN_00412570
        mov    edx, dword ptr [eax]
        push    0x76cb8c
        push    edx
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        mov    eax, dword ptr [esp + 0x18]
        push    ebp
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_004125e0
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, ebx
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_31a3
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_31a3
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_31a3:
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        je    L_31be
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_31be
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_31be:
        mov    eax, dword ptr [esp + 0x1c]
        test    eax, eax
        je    L_31d9
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_31d9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_31d9:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x44]
        lea    edx, [esp + 0x24]
        push    edx
        xor    ecx, 0x85739531
        push    esi
        add    ecx, 0x54
        call    FUN_00416a90
        mov    eax, dword ptr [esp + 0x10]
        test    eax, eax
        je    L_3218
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3218
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3218:
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        je    L_3233
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3233
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3233:
        pop    edi
        pop    esi
        pop    ebp
        mov    eax, 1
        pop    ebx
        add    esp, 0x10
        ret    0xc
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
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        sub    esp, 0x4c
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0x44]
        push    edi
        xor    ecx, 0x85739531
        call    FUN_00618a40
        mov    edx, dword ptr [esi + 0x18]
        lea    ecx, [esi + 0x18]
        call    dword ptr [edx + 8]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        mov    edi, dword ptr [g_007dab40]
        mov    ecx, dword ptr [esi + 4]
        xor    edx, edi
        mov    eax, dword ptr [edx + 0x44]
        xor    eax, 0x85739531
        test    ecx, ecx
        mov    edi, dword ptr [eax + 0x80]
        je    L_32af
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_32af:
        mov    cx, word ptr [edi + 0x1a]
        mov    ax, word ptr [edi + 0x18]
        push    1
        lea    edx, [esp + 0xc]
        mov    word ptr [esp + 0xe], cx
        push    edx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esi + 4], 0
        mov    word ptr [esp + 0x10], ax
        call    FUN_004d1f80
        mov    ecx, dword ptr [g_007db090]
        call    FUN_004cec10
        mov    cl, byte ptr [eax]
        mov    byte ptr [esp + 0xc], cl
        mov    dx, word ptr [eax + 2]
        push    1
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    word ptr [esp + 0x1a], dx
        call    FUN_004d9910
        mov    edx, dword ptr [esi]
        add    esp, 0xc
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edi, dword ptr [edi + 0x14]
        test    edi, edi
        mov    dword ptr [esp + 8], edi
        je    L_331c
        inc    byte ptr [edi - 1]
L_331c:
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [esp + 8]
        push    eax
        add    ecx, 0x2c
        call    FUN_00412740
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        pop    edi
        pop    esi
        je    L_3349
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_3349
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_3349:
        lea    ecx, [esp + 8]
        call    FUN_004d21c0
        mov    eax, 1
        add    esp, 0x4c
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [eax + 4]
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        push    esi
        xor    eax, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    eax, dword ptr [eax + 0x80]
        test    eax, eax
        je    L_339d
        mov    esi, dword ptr [eax + 0x20]
        mov    dword ptr [ecx], esi
        mov    ecx, dword ptr [eax + 0x2c]
        mov    dword ptr [edx], ecx
        mov    eax, 1
        pop    esi
        ret    8
L_339d:
        mov    dword ptr [ecx], 0
        mov    dword ptr [edx], 0
        mov    eax, 1
        pop    esi
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
        nop    
        call    FUN_00609de0
        push    0
        push    0
        push    1
        push    0x6134c0
        push    0x78c274
        call    FUN_006b46b0
        push    0
        push    0
        push    1
        push    0x6135b0
        push    0x78c264
        call    FUN_006b46b0
        push    0
        push    0
        push    1
        push    0x613670
        push    0x78c254
        call    FUN_006b46b0
        push    0
        push    0
        push    1
        push    0x613740
        push    0x78c240
        call    FUN_006b46b0
        push    0
        push    0
        push    1
        push    0x613790
        push    0x78c22c
        call    FUN_006b46b0
        ret    
        nop    
        call    FUN_00609fb0
        push    0
        push    0x78c274
        call    FUN_006b4950
        push    0
        push    0x78c264
        call    FUN_006b4950
        push    0
        push    0x78c254
        call    FUN_006b4950
        push    0
        push    0x78c240
        call    FUN_006b4950
        push    0
        push    0x78c22c
        call    FUN_006b4950
        ret    
    }
}
