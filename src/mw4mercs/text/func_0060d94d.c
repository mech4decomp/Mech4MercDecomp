/*
 * FUN_0060d94d (extent 0x60d94d-0x60df1e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c0c;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern int    g_007f25a8;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00412ca0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004e7820(void);
extern void __cdecl FUN_004e7960(void);
extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_005b6f90(void);
extern void __cdecl FUN_0060d4b0(void);
extern void __cdecl FUN_0060d510(void);
extern void __cdecl FUN_0060d7e0(void);
extern void __cdecl FUN_0060dea0(void);
extern void __cdecl FUN_0060fcf0(void);
extern void __cdecl FUN_0070e390(void);
extern void __cdecl FUN_0070e3c0(void);
extern void __cdecl FUN_0070e460(void);

__declspec(naked) void FUN_0060d94d(void)
{
    __asm {
        nop    
        nop    
        nop    
        sub    esp, 0x1c8
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 4]
        test    eax, eax
        je    L_db55
        lea    esi, [edi + 0x30]
        mov    ecx, esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_db55
        push    ebx
        push    0
        lea    ecx, [esp + 0x1c]
        call    FUN_0041ee70
        mov    eax, dword ptr [edi + 4]
        mov    ebx, dword ptr [eax]
        mov    ecx, esi
        call    FUN_0041fd80
        push    eax
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, dword ptr [edi + 4]
        call    dword ptr [ebx + 0xc]
        mov    edx, dword ptr [esp + 0x18]
        push    0
        lea    ecx, [esp + 0x1c]
        call    dword ptr [edx + 0xc]
        mov    edi, 0xffffffec
        lea    ecx, [esp + 0x78]
        mov    dword ptr [esp + 0x20], edi
        call    FUN_00412b30
        push    0x76b768
        lea    ecx, [esp + 0x7c]
        call    FUN_00412ca0
        push    1
        lea    eax, [esp + 0x14]
        mov    ebx, 6
        push    eax
        lea    ecx, [esp + 0x154]
        mov    word ptr [esp + 0x18], bx
        mov    word ptr [esp + 0x1a], 1
        call    FUN_004d1f80
        lea    ecx, [esp + 0x78]
        push    ecx
        lea    edx, [esp + 0x1c]
        push    edx
        lea    ecx, [esp + 0x154]
        call    FUN_004d2680
        push    0
        mov    ecx, esi
        call    FUN_0041fd80
        push    eax
        push    0x78c098
        lea    ecx, [esp + 0x114]
        call    FUN_004d2110
        push    0
        push    0
        lea    ecx, [esp + 0x110]
        call    FUN_004d2680
        lea    ecx, [esp + 0x108]
        call    FUN_004d21c0
        push    1
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x198]
        mov    word ptr [esp + 0x14], bx
        mov    word ptr [esp + 0x16], 3
        call    FUN_004d1f80
        lea    ecx, [esp + 0xb0]
        push    ecx
        call    FUN_0070e390
        mov    edx, dword ptr [esp + 0x18]
        push    0
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x18], 0xa1252388
        call    dword ptr [edx + 0xc]
        push    4
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esp + 0xb8]
        push    ecx
        mov    dword ptr [esp + 0x2c], edi
        call    FUN_0070e3c0
        mov    eax, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x34]
        sub    edx, eax
        add    edx, ecx
        push    edx
        push    eax
        lea    eax, [esp + 0xb8]
        push    eax
        call    FUN_0070e3c0
        lea    ecx, [esp + 0xb0]
        push    ecx
        lea    edx, [esp + 0x6c]
        push    edx
        call    FUN_0070e460
        push    0
        lea    ecx, [esp + 0x44]
        call    FUN_0041ee70
        push    0x10
        lea    eax, [esp + 0x6c]
        push    eax
        lea    ecx, [esp + 0x48]
        call    FUN_0041f030
        mov    edx, dword ptr [esp + 0x40]
        push    0
        lea    ecx, [esp + 0x44]
        call    dword ptr [edx + 0xc]
        lea    eax, [esp + 0x78]
        push    eax
        lea    ecx, [esp + 0x44]
        push    ecx
        lea    ecx, [esp + 0x198]
        mov    dword ptr [esp + 0x50], edi
        call    FUN_004d2680
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_004d2a90
        lea    ecx, [esp + 0x40]
        call    FUN_0041ef60
        lea    ecx, [esp + 0x190]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x14c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x78]
        call    FUN_00412b60
        lea    ecx, [esp + 0x18]
        call    FUN_0041ef60
        pop    ebx
        pop    edi
        mov    eax, 1
        pop    esi
        add    esp, 0x1c8
        ret    
L_db55:
        pop    edi
        xor    eax, eax
        pop    esi
        add    esp, 0x1c8
        ret    
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
        je    L_dda9
        push    ecx
        lea    ecx, [edi + 0x18]
        call    FUN_00416b60
        mov    esi, eax
        test    esi, esi
        je    L_de11
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
        jne    L_dc6f
        push    esi
        push    3
        mov    ecx, edi
        call    FUN_0060dea0
        cmp    eax, -1
        mov    dword ptr [esp + 0x1c], eax
        je    L_dde9
L_dc6f:
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
        je    L_dd5c
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
        jne    L_dcdb
        test    esi, esi
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [ecx], eax
        je    L_ddf0
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
        jmp    L_ddf0
L_dcdb:
        mov    ecx, ebx
        call    FUN_004e7960
        test    eax, eax
        je    L_dd1f
        mov    eax, dword ptr [eax + 0x44]
        test    eax, eax
        mov    dword ptr [esp + 0x14], eax
        je    L_dcf4
        inc    byte ptr [eax - 1]
L_dcf4:
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esi + 0x18c]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_dd1f
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_dd1f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_dd1f:
        mov    eax, dword ptr [ebp + 0x44]
        test    eax, eax
        mov    dword ptr [esp + 0x14], eax
        je    L_dd2d
        inc    byte ptr [eax - 1]
L_dd2d:
        lea    ecx, [esp + 0x14]
        push    ecx
        lea    ecx, [esi + 0x188]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        je    L_dd58
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_dd58
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_dd58:
        mov    ebp, dword ptr [esp + 0x10]
L_dd5c:
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
        je    L_dddd
        mov    eax, dword ptr [ebx]
        push    esi
        mov    ecx, ebx
        call    dword ptr [eax + 0x100]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        push    edx
        mov    ecx, edi
        call    FUN_0060d510
        lea    ecx, [esp + 0x4c]
        call    FUN_004d21c0
        lea    ecx, [esp + 0x24]
        call    FUN_0041ef60
L_dda9:
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
L_dddd:
        test    esi, esi
        je    L_dde9
        mov    eax, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [eax]
L_dde9:
        mov    dword ptr [ebp], 0
L_ddf0:
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
L_de11:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 4]
        test    eax, eax
        je    L_de92
        push    esi
        push    edi
        mov    edi, dword ptr [eax + 0x34c]
L_de42:
        test    edi, edi
        je    L_de89
        mov    esi, dword ptr [edi]
        test    esi, esi
        mov    edi, dword ptr [edi + 4]
        je    L_de89
        mov    eax, dword ptr [g_007f25a8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_de42
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
        jmp    L_de42
L_de89:
        pop    edi
        pop    esi
        mov    eax, 1
        pop    ebx
        ret    
L_de92:
        xor    eax, eax
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
        sub    esp, 0x14
        mov    eax, dword ptr [ecx + 4]
        push    ebx
        push    esi
        push    edi
        add    eax, 0x384
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea    ecx, [esp + 0xc]
        mov    dword ptr [esp + 0xc], 0x783f04
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        je    L_def8
        mov    edi, dword ptr [esp + 0x28]
        mov    ebx, dword ptr [esp + 0x24]
L_ded7:
        push    0
        push    0
        push    edi
        push    ebx
        mov    ecx, esi
        call    FUN_005b6f90
        cmp    eax, -2
        lea    ecx, [esp + 0xc]
        jg    L_df0d
        call    FUN_00416cc0
        mov    esi, eax
        test    esi, esi
        jne    L_ded7
L_def8:
        lea    ecx, [esp + 0xc]
        call    FUN_00416c60
        pop    edi
        pop    esi
        or    eax, 0xffffffff
        pop    ebx
        add    esp, 0x14
        ret    8
L_df0d:
        call    FUN_00416c60
        mov    eax, dword ptr [esi + 0x3c]
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x14
        ret    8
    }
}
