/*
 * FUN_004f667e (extent 0x4f667e-0x4f6ac2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern char   g_007dc694;
extern int    g_007dc696;
extern int    g_007dc8a4;
extern int    g_007dc8a8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004d9400(void);
extern void __cdecl FUN_004f6ad0(void);
extern void __cdecl FUN_004fc600(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004f667e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007dc8a8]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1e8
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_66c2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007dc8a4]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004f6ad0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_66c2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x180
        push    esi
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0x84
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_004d9400
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    cx, word ptr [edi + 0x17c]
        mov    dx, word ptr [edi + 0x17e]
        mov    esi, eax
        mov    ax, word ptr [edi + 0x17a]
        mov    dword ptr [esi], 0x84
        mov    word ptr [esi + 0x68], ax
        mov    ax, word ptr [edi + 0x180]
        mov    word ptr [esi + 0x6a], cx
        push    0
        push    0
        lea    ecx, [ebp - 0x180]
        mov    word ptr [esi + 0x6c], dx
        mov    word ptr [esi + 0x6e], ax
        call    FUN_004d2000
        push    0
        lea    ecx, [ebp - 0xb4]
        call    FUN_0041ee70
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x1c]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0
        lea    edx, [ebp - 0xb4]
        push    edx
        call    dword ptr [eax + 0xc]
        mov    cl, byte ptr [eax + 0x18]
        add    eax, 0x18
        mov    byte ptr [ebp - 8], cl
        mov    dx, word ptr [eax + 2]
        push    0
        lea    eax, [ebp - 0xb4]
        push    eax
        lea    ecx, [ebp - 0x180]
        mov    word ptr [ebp - 6], dx
        call    FUN_004d2680
        push    0x7723bc
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_67ab
        int 3    
L_67ab:
        mov    cx, word ptr [ebp - 0x140]
        mov    word ptr [esi + 0x74], cx
        mov    dx, word ptr [ebp - 0x13e]
        mov    cl, byte ptr [esi + 0x18]
        mov    word ptr [esi + 0x76], dx
        mov    al, byte ptr [ebp - 8]
        add    cl, al
        mov    byte ptr [esi + 0x18], cl
        mov    cx, word ptr [ebp - 6]
        add    word ptr [esi + 0x1a], cx
        push    2
        lea    ecx, [ebp - 0x3c]
        call    FUN_0041ee70
        mov    eax, dword ptr [ebp - 0x3c]
        push    2
        lea    edx, [ebp + 8]
        push    edx
        lea    ecx, [ebp - 0x3c]
        mov    dword ptr [ebp + 8], 0
        call    dword ptr [eax + 0x24]
        mov    cl, byte ptr [g_007dc694]
        mov    dx, word ptr [g_007dc696]
        mov    eax, dword ptr [g_007dab44]
        mov    byte ptr [ebp - 8], cl
        mov    word ptr [ebp - 6], dx
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x1c]
        xor    eax, 0x85739531
        add    eax, 0xbc
        mov    dword ptr [ebp - 0x10], eax
        mov    edx, dword ptr [eax]
        lea    ecx, [ebp - 0x14]
        mov    dword ptr [ebp - 0xc], edx
        mov    dword ptr [ebp - 0x14], 0x772d80
        call    FUN_0040c0e0
        test    eax, eax
        je    L_6887
L_683d:
        mov    ecx, dword ptr [eax + 0x10]
        and    ecx, 0x18
        cmp    cl, 8
        jne    L_687b
        mov    edx, dword ptr [eax]
        push    0
        lea    ecx, [ebp - 0x3c]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        je    L_687b
        mov    dl, byte ptr [eax + 0x18]
        add    byte ptr [ebp - 8], dl
        mov    cx, word ptr [eax + 0x1a]
        add    word ptr [ebp - 6], cx
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0x24]
        add    ecx, edx
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x28], ecx
        jbe    L_687b
        mov    dword ptr [ebp - 0x24], ecx
L_687b:
        lea    ecx, [ebp - 0x14]
        call    FUN_0040c0e0
        test    eax, eax
        jne    L_683d
L_6887:
        mov    edx, dword ptr [ebp - 0x28]
        sub    edx, dword ptr [ebp - 0x2c]
        cmp    edx, 2
        jbe    L_6909
        push    0
        push    0
        lea    ecx, [ebp - 0xf8]
        call    FUN_004d2000
        mov    eax, dword ptr [ebp - 0x3c]
        push    0
        lea    ecx, [ebp - 0x3c]
        call    dword ptr [eax + 0xc]
        mov    edx, dword ptr [ebp - 0x3c]
        push    2
        lea    ecx, [ebp - 6]
        push    ecx
        lea    ecx, [ebp - 0x3c]
        mov    dword ptr [ebp - 0x34], 0xffffffec
        call    dword ptr [edx + 0x24]
        push    0
        lea    eax, [ebp - 0x3c]
        push    eax
        lea    ecx, [ebp - 0xf8]
        call    FUN_004d2680
        mov    cx, word ptr [ebp - 0xb8]
        mov    dx, word ptr [ebp - 0xb6]
        mov    word ptr [esi + 0x70], cx
        mov    cl, byte ptr [esi + 0x18]
        mov    word ptr [esi + 0x72], dx
        mov    al, byte ptr [ebp - 8]
        add    cl, al
        mov    byte ptr [esi + 0x18], cl
        mov    cx, word ptr [ebp - 6]
        add    word ptr [esi + 0x1a], cx
        lea    ecx, [ebp - 0xf8]
        call    FUN_004d21c0
        jmp    L_691e
L_6909:
        mov    dx, word ptr [g_007db0ac]
        mov    ax, word ptr [g_007db0ae]
        mov    word ptr [esi + 0x70], dx
        mov    word ptr [esi + 0x72], ax
L_691e:
        push    2
        lea    ecx, [ebp - 0x64]
        call    FUN_0041ee70
        mov    edx, dword ptr [ebp - 0x64]
        push    2
        lea    ecx, [ebp + 8]
        push    ecx
        lea    ecx, [ebp - 0x64]
        mov    dword ptr [ebp + 8], 0
        call    dword ptr [edx + 0x24]
        mov    cx, word ptr [g_007dc696]
        mov    edx, dword ptr [ebp - 0x50]
        mov    al, byte ptr [g_007dc694]
        mov    word ptr [ebp - 6], cx
        sub    edx, dword ptr [ebp - 0x54]
        cmp    edx, 2
        mov    byte ptr [ebp - 8], al
        jbe    L_69d3
        push    0
        push    0
        lea    ecx, [ebp - 0xf8]
        call    FUN_004d2000
        mov    eax, dword ptr [ebp - 0x64]
        push    0
        lea    ecx, [ebp - 0x64]
        call    dword ptr [eax + 0xc]
        mov    edx, dword ptr [ebp - 0x64]
        push    2
        lea    ecx, [ebp - 6]
        push    ecx
        lea    ecx, [ebp - 0x64]
        mov    dword ptr [ebp - 0x5c], 0xffffffec
        call    dword ptr [edx + 0x24]
        push    0
        lea    eax, [ebp - 0x64]
        push    eax
        lea    ecx, [ebp - 0xf8]
        call    FUN_004d2680
        mov    cx, word ptr [ebp - 0xb8]
        mov    dx, word ptr [ebp - 0xb6]
        mov    word ptr [esi + 0x60], cx
        mov    cl, byte ptr [esi + 0x18]
        mov    word ptr [esi + 0x62], dx
        mov    al, byte ptr [ebp - 8]
        add    cl, al
        mov    byte ptr [esi + 0x18], cl
        mov    cx, word ptr [ebp - 6]
        add    word ptr [esi + 0x1a], cx
        lea    ecx, [ebp - 0xf8]
        call    FUN_004d21c0
        jmp    L_69e8
L_69d3:
        mov    dx, word ptr [g_007db0ac]
        mov    ax, word ptr [g_007db0ae]
        mov    word ptr [esi + 0x60], dx
        mov    word ptr [esi + 0x62], ax
L_69e8:
        push    0
        push    0
        lea    ecx, [ebp - 0x13c]
        call    FUN_004d2000
        push    0
        lea    ecx, [ebp - 0x8c]
        call    FUN_0041ee70
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        lea    ecx, [ebp - 0x8c]
        push    ecx
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fc600
        mov    ecx, dword ptr [ebp - 0x78]
        sub    ecx, dword ptr [ebp - 0x7c]
        je    L_6a5b
        push    0
        lea    edx, [ebp - 0x8c]
        push    edx
        lea    ecx, [ebp - 0x13c]
        call    FUN_004d2680
        mov    ax, word ptr [ebp - 0xfc]
        mov    word ptr [esi + 0x64], ax
        mov    cx, word ptr [ebp - 0xfa]
        mov    word ptr [esi + 0x66], cx
        jmp    L_6a70
L_6a5b:
        mov    dx, word ptr [g_007db0ac]
        mov    ax, word ptr [g_007db0ae]
        mov    word ptr [esi + 0x64], dx
        mov    word ptr [esi + 0x66], ax
L_6a70:
        mov    cl, byte ptr [edi + 0x169]
        mov    byte ptr [esi + 0x80], cl
        lea    ecx, [ebp - 0x8c]
        call    FUN_0041ef60
        lea    ecx, [ebp - 0x13c]
        call    FUN_004d21c0
        lea    ecx, [ebp - 0x64]
        call    FUN_0041ef60
        lea    ecx, [ebp - 0x3c]
        call    FUN_0041ef60
        lea    ecx, [ebp - 0xb4]
        call    FUN_0041ef60
        lea    ecx, [ebp - 0x180]
        call    FUN_004d21c0
        pop    edi
        mov    eax, esi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
