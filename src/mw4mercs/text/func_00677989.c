/*
 * FUN_00677989 (extent 0x677989-0x677db4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ed60(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412ab0(void);
extern void __cdecl FUN_00501eb0(void);
extern void __cdecl FUN_00674890(void);
extern void __cdecl FUN_00692c60(void);
extern void __cdecl FUN_00692c80(void);

__declspec(naked) void FUN_00677989(void)
{
    __asm {
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
        call    FUN_00674890
        mov    ecx, dword ptr [esi + 0x10]
        add    esp, 0x14
        sub    ecx, 0xb
        je    L_79f4
        dec    ecx
        jne    L_7a1f
        test    bl, bl
        jne    L_7a1f
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
L_79f4:
        test    bl, bl
        jne    L_7a1f
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
        mov    al, 1
L_7a1f:
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
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x20
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_00501eb0
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 4]
        push    0x7723e8
        mov    esi, eax
        call    FUN_0040ed60
        push    0
        lea    ecx, [esp + 0xc]
        push    ecx
        push    0x795558
        mov    ecx, eax
        mov    dword ptr [esi + 0x1c], 0xffffffff
        call    FUN_00411bf0
        test    al, al
        je    L_7ab8
        mov    edx, dword ptr [esp + 8]
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        mov    eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_00412ab0
        mov    dword ptr [esi + 0x1c], eax
        mov    eax, dword ptr [esp + 0x14]
        add    esp, 4
        test    eax, eax
        je    L_7ab8
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_7ab8
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7ab8:
        pop    edi
        pop    esi
        pop    ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    0xa8
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_00692c60
        add    esp, 4
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0xc]
        push    ebx
        mov    bl, byte ptr [eax]
        push    ebp
        mov    ebp, dword ptr [esp + 0x1c]
        push    esi
        mov    esi, dword ptr [esp + 0x14]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        push    ebp
        push    ecx
        push    eax
        push    esi
        test    bl, bl
        push    edi
        setne    bl
        call    FUN_00692c80
        mov    cl, al
        mov    eax, dword ptr [esi + 0x10]
        add    eax, -0x1d
        add    esp, 0x14
        cmp    eax, 0xa
        ja    L_7dab
        jmp    dword ptr [eax*4 + 0x677db4]
        test    bl, bl
        jne    L_7b3f
        mov    edx, dword ptr [esi]
        lea    eax, [esp + 0x1c]
        push    eax
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x3f800000
        call    dword ptr [edx + 4]
        mov    cl, 1
L_7b3f:
        fld    dword ptr [edi + 0x7c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_7dab
        fld    dword ptr [edi + 0x7c]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ecx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797c40
        push    ebp
        push    edx
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        xor    cl, cl
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7b96
        mov    eax, dword ptr [esi]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    dword ptr [esp + 0x24], 0x3f800000
        call    dword ptr [eax + 4]
        mov    cl, 1
L_7b96:
        fld    dword ptr [edi + 0x80]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_7dab
        fld    dword ptr [edi + 0x80]
        mov    edx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [edx]
        sub    esp, 8
        fstp    qword ptr [esp]
        push    0x797c08
        push    ebp
        push    eax
        call    dword ptr [g_0076b424]
        add    esp, 0x14
        pop    edi
        pop    esi
        xor    cl, cl
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    eax, dword ptr [esi]
        mov    word ptr [esp + 0x20], cx
        lea    ecx, [esp + 0x20]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    word ptr [esp + 0x2a], dx
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        mov    cl, 1
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    ax, word ptr [g_007db0ae]
        mov    dx, word ptr [g_007db0ac]
        mov    word ptr [esp + 0x22], ax
        lea    eax, [esp + 0x20]
        push    eax
        mov    word ptr [esp + 0x24], dx
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        mov    cl, 1
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    eax, dword ptr [esi]
        mov    word ptr [esp + 0x20], cx
        lea    ecx, [esp + 0x20]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    word ptr [esp + 0x2a], dx
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        mov    cl, 1
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    ax, word ptr [g_007db0ae]
        mov    dx, word ptr [g_007db0ac]
        mov    word ptr [esp + 0x22], ax
        lea    eax, [esp + 0x20]
        push    eax
        mov    word ptr [esp + 0x24], dx
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        mov    cl, 1
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    eax, dword ptr [esi]
        mov    word ptr [esp + 0x20], cx
        lea    ecx, [esp + 0x20]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    word ptr [esp + 0x2a], dx
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        mov    cl, 1
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    ax, word ptr [g_007db0ae]
        mov    dx, word ptr [g_007db0ac]
        mov    word ptr [esp + 0x22], ax
        lea    eax, [esp + 0x20]
        push    eax
        mov    word ptr [esp + 0x24], dx
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        mov    cl, 1
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    eax, dword ptr [esi]
        mov    word ptr [esp + 0x20], cx
        lea    ecx, [esp + 0x20]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    word ptr [esp + 0x2a], dx
        call    dword ptr [eax + 4]
        pop    edi
        pop    esi
        mov    cl, 1
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    ax, word ptr [g_007db0ae]
        mov    dx, word ptr [g_007db0ac]
        mov    word ptr [esp + 0x22], ax
        lea    eax, [esp + 0x20]
        push    eax
        mov    word ptr [esp + 0x24], dx
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 4]
        pop    edi
        pop    esi
        mov    cl, 1
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        test    bl, bl
        jne    L_7dab
        mov    cx, word ptr [g_007db0ac]
        mov    dx, word ptr [g_007db0ae]
        mov    eax, dword ptr [esi]
        mov    word ptr [esp + 0x20], cx
        lea    ecx, [esp + 0x20]
        push    ecx
        push    edi
        mov    ecx, esi
        mov    word ptr [esp + 0x2a], dx
        call    dword ptr [eax + 4]
        mov    cl, 1
L_7dab:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, cl
        pop    ebx
        ret    
        mov    edi, edi
        // jump-table data @ 0x00677DB4 (0 relocated pointers)
    }
}
