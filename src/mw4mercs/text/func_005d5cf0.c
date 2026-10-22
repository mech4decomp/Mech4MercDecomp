/*
 * FUN_005d5cf0 (extent 0x5d5cf0-0x5d6040) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_007704c4;
extern float  g_0078815c;
extern float  g_007b220c;
extern char   g_c6005d5c;
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_005d5b50(void);
extern void __cdecl FUN_005d5bf0(void);
extern void __cdecl FUN_1a5dba51(void);

__declspec(naked) void FUN_005d5cf0(void)
{
    __asm {
        jmp    FUN_1a5dba51
        pop    esp
        pop    ebp
        add    byte ptr [edi + 0x5c], dl
        pop    ebp
        add    byte ptr [g_c6005d5c], dh
        pop    esp
        pop    ebp
        add    byte ptr [eax - 0x6f6f6f70], dl
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x64
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x454]
        mov    ecx, dword ptr [eax + 0xd8]
        push    esi
        add    ecx, 0x80
        push    edi
        push    ecx
        lea    ecx, [esp + 0x28]
        call    FUN_00419480
        mov    esi, dword ptr [esp + 0x74]
        lea    edx, [esp + 0x24]
        push    edx
        mov    ecx, esi
        call    FUN_0040c410
        mov    ecx, dword ptr [esp + 0x78]
        mov    eax, dword ptr [ecx + 0x128]
        test    eax, eax
        jne    L_5d58
        mov    eax, dword ptr [ecx + 0x124]
L_5d58:
        mov    ecx, dword ptr [ecx + 0xd8]
        lea    edi, [ecx + 0x80]
        push    edi
        add    eax, 0x10
        push    eax
        lea    ecx, [esp + 0x38]
        call    FUN_00417d80
        mov    eax, dword ptr [esp + 0x6c]
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, edi
        mov    dword ptr [esp + 0x78], eax
        call    FUN_00428730
        mov    edx, dword ptr [ebx + 0x35c]
        mov    eax, dword ptr [edx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        mov    ecx, dword ptr [eax + 0x9c]
        fsub    dword ptr [esi]
        mov    edx, dword ptr [eax + 0xac]
        add    eax, 0x80
        mov    dword ptr [esp + 0x28], ecx
        fstp    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x2c], edx
        fld    dword ptr [esp + 0x28]
        fsub    dword ptr [esi + 4]
        fstp    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0x2c]
        fsub    dword ptr [esi + 8]
        fst    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x10]
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [esp + 0xc]
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fabs    
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_5e02
        fld    dword ptr [g_0076c5b0]
        jmp    L_5e2f
L_5e02:
        lea    ecx, [esp + 0xc]
        call    FUN_0040cb00
        fsqrt    
        fdivr    dword ptr [g_0076d064]
        fld    st(0)
        fmul    dword ptr [esp + 0xc]
        fstp    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x20]
        fld    dword ptr [esp + 0x24]
        fmul    dword ptr [esp + 0x18]
        faddp st(1), st(0)
L_5e2f:
        fld    dword ptr [esp + 0x74]
        fmul    dword ptr [g_007704c4]
        fld    st(0)
        fmul    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0xc]
        fld    dword ptr [esp + 0x1c]
        fmul st(0), st(1)
        fstp    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5e92
        fld    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0076d598]
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [g_0076d598]
        fstp    dword ptr [esp + 0x14]
        fadd    dword ptr [esi]
        fstp    dword ptr [esi]
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 4]
        fstp    dword ptr [esi + 4]
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [esi + 8]
        fstp    dword ptr [esi + 8]
L_5e92:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x64
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1c
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x35c]
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [esi + 0x454]
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [ecx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        mov    dword ptr [esp + 0x1c], eax
        mov    dword ptr [esp + 8], 0
        mov    dword ptr [esp + 0xc], 0
        mov    dword ptr [esp + 0x10], 0
        je    L_5f0b
        cmp    dword ptr [esi + 0x450], 4
        je    L_5f0b
        mov    ecx, esi
        call    FUN_005d5b50
L_5f0b:
        mov    eax, dword ptr [esi + 0x450]
        cmp    eax, 4
        ja    L_5f7e
        jmp    dword ptr [eax*4 + 0x5d6040]
        mov    eax, dword ptr [esi + 0x438]
        mov    ecx, dword ptr [esi + 0x43c]
        mov    edx, dword ptr [esi + 0x440]
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], ecx
        jmp    L_5f7a
        mov    ecx, dword ptr [esi + 0x448]
        mov    eax, dword ptr [esi + 0x444]
        mov    edx, dword ptr [esi + 0x44c]
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, esi
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0x10], edx
        call    FUN_005d5b50
        jmp    L_5f7e
        mov    eax, dword ptr [esi + 0x444]
        mov    ecx, dword ptr [esi + 0x448]
        mov    edx, dword ptr [esi + 0x44c]
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 0xc], ecx
L_5f7a:
        mov    dword ptr [esp + 0x10], edx
L_5f7e:
        fld    dword ptr [esp + 8]
        mov    eax, dword ptr [esi + 0x35c]
        fsub    dword ptr [esp + 0x14]
        mov    ecx, dword ptr [eax + 0x440]
        fld    dword ptr [esp + 0xc]
        mov    al, byte ptr [esi + 0x4d8]
        test    al, al
        fsub    dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 4], ecx
        fsub    dword ptr [esp + 0x1c]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_5fe2
        mov    edx, dword ptr [esi]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    ecx, esi
        call    dword ptr [edx + 0x1c4]
        push    1
        mov    ecx, esi
        call    FUN_005d5bf0
        pop    esi
        add    esp, 0x1c
        ret    8
L_5fe2:
        fcom    dword ptr [g_0078815c]
        fnstsw  ax
        test    ah, 1
        jne    L_6004
        fld    dword ptr [esp + 4]
        fmul    dword ptr [esp + 4]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_6037
        jmp    L_6006
L_6004:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6006:
        mov    eax, dword ptr [esi + 0x450]
        cmp    eax, 3
        je    L_6030
        cmp    eax, 4
        je    L_6030
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x1c4]
        push    1
        mov    ecx, esi
        call    FUN_005d5bf0
        pop    esi
        add    esp, 0x1c
        ret    8
L_6030:
        mov    byte ptr [esi + 0x4d8], 1
L_6037:
        pop    esi
        add    esp, 0x1c
        ret    8
        mov    edi, edi
        // jump-table data @ 0x005D6040 (0 relocated pointers)
    }
}
