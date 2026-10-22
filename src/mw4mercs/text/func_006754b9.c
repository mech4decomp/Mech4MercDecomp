/*
 * FUN_006754b9 (extent 0x6754b9-0x67584c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007db0a0;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007db0b0;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040dd50(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411ec0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_00412390(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_00412b80(void);
extern void __cdecl FUN_00412e70(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_004cfbd0(void);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_00501b70(void);
extern void __cdecl FUN_00501d90(void);
extern void __cdecl FUN_00502370(void);
extern void __cdecl FUN_00507b10(void);
extern void __cdecl FUN_0062f6e0(void);

__declspec(naked) void FUN_006754b9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x64
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501b70
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    edi, dword ptr [edi + 4]
        mov    ecx, dword ptr [g_007db0a0]
        mov    esi, eax
        mov    eax, dword ptr [edi + 0x10]
        push    eax
        mov    dword ptr [esi], 0x64
        call    FUN_004cfbd0
        lea    eax, [esi + 0x60]
        push    0
        push    eax
        push    0x79771c
        mov    ecx, edi
        mov    byte ptr [eax], 1
        call    FUN_00411ec0
        mov    ecx, dword ptr [g_007db0a0]
        call    FUN_004cfc90
        pop    edi
        pop    esi
        ret    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_00501d90
        xor    eax, eax
        mov    al, byte ptr [esi + 0x168]
        mov    ecx, edi
        push    eax
        push    0x79771c
        call    FUN_00411f20
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    bl, byte ptr [eax]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_00502370
        mov    ecx, dword ptr [esi + 0x10]
        add    esp, 0x14
        sub    ecx, 6
        je    L_55ee
        dec    ecx
        je    L_55bf
        dec    ecx
        jne    L_5618
        test    bl, bl
        jne    L_5618
        mov    ax, word ptr [g_007db0ac]
        mov    cx, word ptr [g_007db0ae]
        mov    edx, dword ptr [esi]
        mov    word ptr [esp + 0x18], ax
        lea    eax, [esp + 0x18]
        push    eax
        mov    word ptr [esp + 0x1e], cx
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    
L_55bf:
        test    bl, bl
        jne    L_5618
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    eax, dword ptr [esi]
        mov    word ptr [esp + 0x18], cx
        lea    ecx, [esp + 0x18]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    word ptr [esp + 0x22], dx
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    
L_55ee:
        test    bl, bl
        jne    L_5618
        mov    ax, word ptr [g_007db0ae]
        mov    dx, word ptr [g_007db0ac]
        mov    word ptr [esp + 0x1a], ax
        lea    eax, [esp + 0x18]
        push    eax
        mov    word ptr [esp + 0x1c], dx
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    al, 1
L_5618:
        pop    edi
        pop    esi
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x90
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xa4]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x78
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00507b10
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    cx, word ptr [g_007db0ae]
        mov    esi, eax
        mov    ax, word ptr [g_007db0ac]
        mov    word ptr [esi + 0x52], cx
        mov    ecx, dword ptr [edi + 4]
        push    0x7723e8
        mov    word ptr [esi + 0x50], ax
        call    FUN_0040ed60
        xor    ebp, ebp
        push    ebp
        lea    ecx, [esp + 0x54]
        mov    ebx, eax
        call    FUN_0040dd50
        push    ebp
        lea    edx, [esp + 0x54]
        push    edx
        push    0x797740
        mov    ecx, ebx
        call    FUN_00412390
        test    al, al
        je    L_5725
        mov    eax, dword ptr [g_007b8c10]
        mov    edi, dword ptr [g_007db0b0]
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00415180
        push    ebp
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x24], ebp
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x1c], 0x76cd9c
        call    FUN_0041ee70
        lea    ecx, [esp + 0x5c]
        push    ecx
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], 0x76d1f0
        call    FUN_00412b80
        push    0x18
        lea    eax, [esp + 0x54]
        push    eax
        lea    ecx, [esp + 0x18]
        lea    edx, [esp + 0x20]
        push    ecx
        mov    dword ptr [g_007db0b0], edx
        call    FUN_0062f6e0
        mov    dx, word ptr [eax]
        mov    ax, word ptr [eax + 2]
        add    esp, 0xc
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        mov    word ptr [esi + 0x50], dx
        mov    word ptr [esi + 0x52], ax
        mov    dword ptr [g_007db0b0], edi
        call    FUN_00412e70
        lea    ecx, [esp + 0x18]
        call    FUN_00412b60
L_5725:
        mov    dx, word ptr [g_007db0ac]
        mov    ax, word ptr [g_007db0ae]
        push    ebp
        lea    ecx, [esp + 0x54]
        push    ecx
        push    0x797728
        mov    ecx, ebx
        mov    word ptr [esi + 0x54], dx
        mov    word ptr [esi + 0x56], ax
        call    FUN_00412390
        test    al, al
        je    L_57e2
        mov    edx, dword ptr [g_007b8c10]
        mov    edi, dword ptr [g_007db0b0]
        push    edx
        lea    ecx, [esp + 0x1c]
        call    FUN_00415180
        push    ebp
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x24], ebp
        mov    dword ptr [esp + 0x28], ebp
        mov    dword ptr [esp + 0x1c], 0x76cd9c
        call    FUN_0041ee70
        lea    eax, [esp + 0x5c]
        push    eax
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], 0x76d1f0
        call    FUN_00412b80
        push    0x18
        lea    edx, [esp + 0x54]
        push    edx
        lea    eax, [esp + 0x18]
        lea    ecx, [esp + 0x20]
        push    eax
        mov    dword ptr [g_007db0b0], ecx
        call    FUN_0062f6e0
        mov    cx, word ptr [eax]
        mov    dx, word ptr [eax + 2]
        add    esp, 0xc
        lea    eax, [esp + 0x18]
        mov    word ptr [esi + 0x54], cx
        push    eax
        mov    ecx, edi
        mov    word ptr [esi + 0x56], dx
        mov    dword ptr [g_007db0b0], edi
        call    FUN_00412e70
        lea    ecx, [esp + 0x18]
        call    FUN_00412b60
L_57e2:
        push    ebp
        lea    ecx, [esp + 0x18]
        push    ecx
        push    0x795558
        mov    ecx, ebx
        mov    dword ptr [esi + 0x70], 0xffffffff
        call    FUN_00411bf0
        test    al, al
        je    L_5838
        mov    edx, dword ptr [esp + 0x14]
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00412ab0
        mov    dword ptr [esi + 0x70], eax
        mov    eax, dword ptr [esp + 0x14]
        add    esp, 4
        cmp    eax, ebp
        je    L_5838
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_5838
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_5838:
        lea    ecx, [esp + 0x50]
        call    FUN_0040de20
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x90
        ret    
    }
}
