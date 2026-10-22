/*
 * FUN_00677adc (extent 0x677adc-0x677db4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b424;
extern float  g_0076c5b0;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_00692c80(void);

__declspec(naked) void FUN_00677adc(void)
{
    __asm {
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
        // jump-table data @ 0x00677DB4 (19 relocated pointers)
        __emit 0x24
        __emit 0x7B
        __emit 0x67
        __emit 0x00
        __emit 0x7B
        __emit 0x7B
        __emit 0x67
        __emit 0x00
        __emit 0xD8
        __emit 0x7B
        __emit 0x67
        __emit 0x00
        __emit 0x0E
        __emit 0x7C
        __emit 0x67
        __emit 0x00
        __emit 0x43
        __emit 0x7C
        __emit 0x67
        __emit 0x00
        __emit 0x79
        __emit 0x7C
        __emit 0x67
        __emit 0x00
        __emit 0xAE
        __emit 0x7C
        __emit 0x67
        __emit 0x00
        __emit 0xE4
        __emit 0x7C
        __emit 0x67
        __emit 0x00
        __emit 0x19
        __emit 0x7D
        __emit 0x67
        __emit 0x00
        __emit 0x4F
        __emit 0x7D
        __emit 0x67
        __emit 0x00
        __emit 0x80
        __emit 0x7D
        __emit 0x67
        __emit 0x00
        __emit 0x56
        __emit 0x8B
        __emit 0x74
        __emit 0x24
        __emit 0x08
        __emit 0x8B
        __emit 0x0E
        __emit 0x8B
        __emit 0x01
        __emit 0x68
        __emit 0xA0
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xFF
        __emit 0x50
        __emit 0x14
        __emit 0x56
        __emit 0xE8
        __emit 0x59
        __emit 0x20
        __emit 0x00
        __emit 0x00
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x5E
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        // jump-table data @ 0x00677FF4 (0 relocated pointers)
    }
}
