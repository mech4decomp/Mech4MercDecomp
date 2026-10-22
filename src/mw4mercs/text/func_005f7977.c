/*
 * FUN_005f7977 (extent 0x5f7977-0x5f7da9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007db0ac;
extern int    g_007db0ae;
extern char   g_007dc694;
extern int    g_007dc696;
extern int    g_007dd234;
extern int    g_007f268c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415cc0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_005f8320(void);
extern void __cdecl FUN_005fc4e0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005f7977(void)
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
        mov    eax, dword ptr [g_007dd234]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x41c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_79c2
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007f268c]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_005f8320
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_79c2:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        sub    esp, 0xf4
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x100]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0x134
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ebx, dword ptr [esp + 0x108]
        push    ebx
        push    esi
        mov    ecx, edi
        call    FUN_005fc4e0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    esi, eax
        push    2
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esi], 0x134
        call    FUN_0041ee70
        mov    edx, dword ptr [esp + 0x1c]
        push    2
        lea    eax, [esp + 0x10]
        push    eax
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x14], 0
        call    dword ptr [edx + 0x24]
        mov    al, byte ptr [g_007dc694]
        mov    cx, word ptr [g_007dc696]
        mov    edx, dword ptr [edi + 0x34c]
        mov    byte ptr [esp + 0x10], al
        lea    eax, [edi + 0x34c]
        mov    word ptr [esp + 0x12], cx
        lea    ecx, [esp + 0x44]
        mov    dword ptr [esp + 0x48], eax
        mov    dword ptr [esp + 0x4c], edx
        mov    dword ptr [esp + 0x44], 0x782234
        call    FUN_0040c0e0
        test    eax, eax
        je    L_7ab6
L_7a70:
        mov    edx, dword ptr [eax]
        push    ebx
        lea    ecx, [esp + 0x20]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xc]
        test    eax, eax
        je    L_7aa9
        mov    dl, byte ptr [eax + 0x18]
        add    byte ptr [esp + 0x10], dl
        mov    cx, word ptr [eax + 0x1a]
        add    word ptr [esp + 0x12], cx
        mov    edx, dword ptr [eax]
        mov    ecx, dword ptr [esp + 0x30]
        mov    eax, dword ptr [esp + 0x34]
        add    ecx, edx
        cmp    ecx, eax
        mov    dword ptr [esp + 0x30], ecx
        jbe    L_7aa9
        mov    dword ptr [esp + 0x34], ecx
L_7aa9:
        lea    ecx, [esp + 0x44]
        call    FUN_0040c0e0
        test    eax, eax
        jne    L_7a70
L_7ab6:
        mov    edx, dword ptr [esp + 0x30]
        sub    edx, dword ptr [esp + 0x2c]
        cmp    edx, 2
        jbe    L_7ba2
        mov    eax, dword ptr [esp + 0x1c]
        push    0
        lea    ecx, [esp + 0x20]
        call    dword ptr [eax + 0xc]
        mov    edx, dword ptr [esp + 0x1c]
        push    2
        lea    ecx, [esp + 0x16]
        push    ecx
        lea    ecx, [esp + 0x24]
        mov    dword ptr [esp + 0x2c], 0xffffffec
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [edi + 0x2c]
        test    eax, eax
        mov    dword ptr [esp + 0xc], eax
        je    L_7b00
        inc    byte ptr [eax - 1]
        mov    eax, dword ptr [esp + 0xc]
L_7b00:
        push    0x78aa64
        push    eax
        lea    ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412740
        lea    ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov    eax, dword ptr [esp + 0xc]
        push    0
        push    ebx
        push    eax
        lea    ecx, [esp + 0x84]
        call    FUN_004d2110
        push    0
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x80]
        call    FUN_004d2680
        mov    dx, word ptr [esp + 0xb8]
        mov    ax, word ptr [esp + 0xba]
        mov    word ptr [esi + 0x11c], dx
        mov    dl, byte ptr [esi + 0x18]
        mov    word ptr [esi + 0x11e], ax
        mov    cl, byte ptr [esp + 0x10]
        add    dl, cl
        mov    byte ptr [esi + 0x18], dl
        mov    dx, word ptr [esp + 0x12]
        add    word ptr [esi + 0x1a], dx
        lea    ecx, [esp + 0x78]
        call    FUN_004d21c0
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_7bbd
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7bbd
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_7bbd
L_7ba2:
        mov    ax, word ptr [g_007db0ac]
        mov    cx, word ptr [g_007db0ae]
        mov    word ptr [esi + 0x11c], ax
        mov    word ptr [esi + 0x11e], cx
L_7bbd:
        mov    ax, word ptr [edi + 0x3aa]
        mov    dx, word ptr [edi + 0x3a8]
        mov    word ptr [esi + 0x11a], ax
        mov    al, byte ptr [edi + 0x33c]
        test    al, al
        mov    word ptr [esi + 0x118], dx
        je    L_7d56
        mov    al, byte ptr [edi + 0x3b4]
        test    al, al
        jne    L_7d56
        push    0
        lea    ecx, [esp + 0x7c]
        call    FUN_0041ee70
        lea    ecx, [edi + 0x370]
        push    ecx
        lea    ecx, [esp + 0x68]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x64]
        mov    dword ptr [esp + 0x64], 0x783ec4
        call    FUN_00415cc0
        push    4
        lea    edx, [esp + 0x1c]
        mov    dword ptr [esp + 0x1c], eax
        mov    eax, dword ptr [esp + 0x7c]
        push    edx
        lea    ecx, [esp + 0x80]
        call    dword ptr [eax + 0x24]
        lea    ecx, [esp + 0x64]
        call    FUN_00416cc0
        test    eax, eax
        je    L_7c60
L_7c47:
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0xc]
        lea    ecx, [esp + 0x64]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_7c47
L_7c60:
        lea    edx, [edi + 0x384]
        push    edx
        lea    ecx, [esp + 0x54]
        call    FUN_00416bc0
        lea    ecx, [esp + 0x50]
        mov    dword ptr [esp + 0x50], 0x783f04
        call    FUN_00415cc0
        mov    edx, dword ptr [esp + 0x78]
        mov    dword ptr [esp + 0x18], eax
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        lea    ecx, [esp + 0x80]
        call    dword ptr [edx + 0x24]
        lea    ecx, [esp + 0x50]
        call    FUN_00416cc0
        test    eax, eax
        je    L_7cc0
L_7ca7:
        mov    edx, dword ptr [eax]
        lea    ecx, [esp + 0x78]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x18]
        lea    ecx, [esp + 0x50]
        call    FUN_00416cc0
        test    eax, eax
        jne    L_7ca7
L_7cc0:
        mov    edx, dword ptr [esp + 0x8c]
        sub    edx, dword ptr [esp + 0x88]
        je    L_7d20
        push    0
        push    ebx
        push    0
        lea    ecx, [esp + 0xc8]
        call    FUN_004d2110
        push    0
        lea    eax, [esp + 0x7c]
        push    eax
        lea    ecx, [esp + 0xc4]
        call    FUN_004d2680
        mov    cx, word ptr [esp + 0xfc]
        mov    dx, word ptr [esp + 0xfe]
        mov    word ptr [esi + 0x118], cx
        lea    ecx, [esp + 0xbc]
        mov    word ptr [esi + 0x11a], dx
        call    FUN_004d21c0
        jmp    L_7d3b
L_7d20:
        mov    ax, word ptr [g_007db0ac]
        mov    cx, word ptr [g_007db0ae]
        mov    word ptr [esi + 0x118], ax
        mov    word ptr [esi + 0x11a], cx
L_7d3b:
        lea    ecx, [esp + 0x50]
        call    FUN_00416c60
        lea    ecx, [esp + 0x64]
        call    FUN_00416c60
        lea    ecx, [esp + 0x78]
        call    FUN_0041ef60
L_7d56:
        mov    eax, dword ptr [edi + 0x27c]
        mov    dl, byte ptr [edi + 0x274]
        mov    ecx, dword ptr [edi + 0x278]
        mov    byte ptr [esi + 0x120], dl
        mov    edx, dword ptr [edi + 0x3f4]
        mov    dword ptr [esi + 0x124], eax
        mov    al, byte ptr [edi + 0x3f1]
        mov    dword ptr [esi + 0x128], ecx
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esi + 0x12c], edx
        mov    byte ptr [esi + 0x130], al
        call    FUN_0041ef60
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        add    esp, 0xf4
        ret    8
    }
}
