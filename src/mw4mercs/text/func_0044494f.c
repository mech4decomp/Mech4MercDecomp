/*
 * FUN_0044494f (extent 0x44494f-0x44500a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b2ec;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076e3e8;
extern int    g_007b220c;
extern int    g_007b986c;
extern int    g_007b9880;
extern int    g_007b9884;
extern int    g_007b9888;
extern int    g_007b988c;
extern int    g_007da5f0;
extern int    g_007da710;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00442180(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_00487ce0(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075db86(void);

__declspec(naked) void FUN_0044494f(void)
{
    __asm {
        fld    qword ptr [g_0076e3e8]
        mov    esi, dword ptr [esp + 0x84]
        mov    eax, dword ptr [esi + 4]
        mov    dword ptr [esp + 0x28], eax
        fild    dword ptr [esp + 0x28]
        call    FUN_0075db86
        fmul    dword ptr [esi + 0x10]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add    esp, 8
        call    FUN_0075db4a
        lea    ecx, [eax + eax*2]
        cmp    ecx, 0x100
        mov    dword ptr [esp + 0x18], eax
        jl    L_499b
        mov    eax, 0x55
        mov    dword ptr [esp + 0x18], eax
L_499b:
        lea    edx, [eax + eax*2]
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x2c], 0x7b2314
L_49aa:
        xor    ebx, ebx
        push    0x88
        mov    dword ptr [g_007da5f0], ebx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_49d3
        mov    ecx, dword ptr [g_007b986c]
        push    ecx
        mov    ecx, eax
        call    FUN_00442180
        mov    ebx, eax
L_49d3:
        mov    ebp, dword ptr [ebx + 0xc]
        mov    edi, dword ptr [ebp + 0x14]
        mov    esi, dword ptr [esp + 0x14]
        cmp    esi, edi
        mov    dword ptr [esp + 0x30], ebx
        mov    dword ptr [esp + 0x10], ebp
        je    L_4a91
        test    esi, esi
        jbe    L_4a7b
        lea    edx, [esi + esi*2]
        shl    edx, 2
        push    edx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4a15
        lea    ecx, [esi - 1]
        mov    dword ptr [esp + 0x38], ecx
        mov    dword ptr [esp + 0x1c], eax
        jmp    L_4a1d
L_4a15:
        mov    dword ptr [esp + 0x1c], 0
L_4a1d:
        mov    ecx, dword ptr [ebp + 0x10]
        test    ecx, ecx
        mov    dword ptr [esp + 0x24], ecx
        je    L_4a72
        cmp    esi, edi
        mov    eax, esi
        jb    L_4a30
        mov    eax, edi
L_4a30:
        mov    edx, eax
        dec    eax
        test    edx, edx
        je    L_4a65
        mov    ecx, dword ptr [esp + 0x1c]
        mov    ebp, dword ptr [esp + 0x24]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    edi, [eax + 1]
L_4a4a:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    edi
        sub    esi, 0xc
        test    edi, edi
        ja    L_4a4a
        mov    ecx, dword ptr [esp + 0x24]
        mov    esi, dword ptr [esp + 0x14]
L_4a65:
        push    ecx
        call    FUN_004084e0
        mov    ebp, dword ptr [esp + 0x14]
        add    esp, 4
L_4a72:
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [ebp + 0x10], ecx
        jmp    L_4a8e
L_4a7b:
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebp + 0x10], 0
L_4a8e:
        mov    dword ptr [ebp + 0x14], esi
L_4a91:
        cmp    esi, dword ptr [ebp + 4]
        je    L_4afb
        test    esi, esi
        jbe    L_4adf
        push    esi
        call    FUN_004084d0
        mov    ebp, eax
        mov    eax, dword ptr [esp + 0x14]
        mov    edi, dword ptr [eax]
        add    esp, 4
        test    edi, edi
        je    L_4ad7
        mov    ecx, eax
        mov    eax, dword ptr [ecx + 4]
        cmp    esi, eax
        jae    L_4aba
        mov    eax, esi
L_4aba:
        mov    edx, eax
        dec    eax
        test    edx, edx
        je    L_4ace
L_4ac1:
        mov    cl, byte ptr [edi + eax]
        mov    edx, eax
        mov    byte ptr [eax + ebp], cl
        dec    eax
        test    edx, edx
        jne    L_4ac1
L_4ace:
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_4ad7:
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [eax], ebp
        jmp    L_4af2
L_4adf:
        mov    ecx, dword ptr [ebp]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebp], 0
L_4af2:
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edx + 4], esi
        mov    ebp, edx
L_4afb:
        mov    esi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [ebp + 0x1c]
        lea    esi, [esi + esi*2]
        shl    esi, 1
        cmp    esi, eax
        je    L_4b94
        test    esi, esi
        jbe    L_4b7e
        lea    eax, [esi*8]
        push    eax
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4b32
        lea    ecx, [esi - 1]
        mov    dword ptr [esp + 0x38], ecx
        mov    edi, eax
        jmp    L_4b34
L_4b32:
        xor    edi, edi
L_4b34:
        mov    ecx, dword ptr [ebp + 0x18]
        test    ecx, ecx
        mov    dword ptr [esp + 0x24], edi
        je    L_4b79
        mov    edx, dword ptr [ebp + 0x1c]
        cmp    esi, edx
        jae    L_4b48
        mov    edx, esi
L_4b48:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_4b6d
        lea    eax, [edi + edx*8]
        sub    ecx, edi
        inc    edx
L_4b55:
        mov    edi, dword ptr [ecx + eax]
        mov    dword ptr [eax], edi
        mov    edi, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], edi
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_4b55
        mov    edi, dword ptr [esp + 0x24]
L_4b6d:
        mov    eax, dword ptr [ebp + 0x18]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_4b79:
        mov    dword ptr [ebp + 0x18], edi
        jmp    L_4b91
L_4b7e:
        mov    ecx, dword ptr [ebp + 0x18]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [ebp + 0x18], 0
L_4b91:
        mov    dword ptr [ebp + 0x1c], esi
L_4b94:
        mov    edx, dword ptr [esp + 0x2c]
        lea    ecx, [esp + 0x60]
        mov    esi, 3
L_4ba1:
        mov    eax, dword ptr [edx]
        lea    eax, [eax + eax*2]
        shl    eax, 2
        mov    edi, dword ptr [eax + 0x7b2284]
        mov    dword ptr [ecx - 4], edi
        mov    edi, dword ptr [eax + 0x7b2288]
        mov    eax, dword ptr [eax + 0x7b228c]
        mov    dword ptr [ecx], edi
        mov    dword ptr [ecx + 4], eax
        add    edx, 4
        add    ecx, 0xc
        dec    esi
        jne    L_4ba1
        mov    edi, dword ptr [esp + 0x84]
        mov    ecx, dword ptr [edi + 0xc]
        mov    eax, dword ptr [esp + 0x28]
        push    ecx
        mov    dword ptr [esp + 0x3c], edx
        mov    edx, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x80]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x10]
        lea    edx, [esp + 0x78]
        push    edx
        lea    eax, [esp + 0x70]
        lea    esi, [ebp + 0x10]
        push    eax
        push    ecx
        call    FUN_0047f1b0
        mov    eax, dword ptr [esp + 0x34]
        mov    edx, dword ptr [ebx]
        add    esp, 0x1c
        push    1
        push    eax
        push    0
        mov    ecx, ebx
        call    dword ptr [edx + 0xc]
        cmp    byte ptr [edi + 8], 1
        jne    L_4d34
        mov    edi, dword ptr [esp + 0x14]
        lea    ecx, [edi + edi*2]
        shl    ecx, 2
        push    ecx
        mov    ebp, 1
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4c47
        lea    edx, [edi - 1]
        mov    dword ptr [esp + 0x34], edx
        mov    ebx, eax
        jmp    L_4c49
L_4c47:
        xor    ebx, ebx
L_4c49:
        mov    esi, dword ptr [esi]
        push    esi
        mov    ecx, ebx
        mov    dword ptr [esp + 0x20], ebx
        call    FUN_0040c410
        cmp    edi, 1
        mov    eax, dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax]
        mov    dword ptr [esp + 0x34], eax
        mov    byte ptr [eax], 0
        mov    dword ptr [esp + 0x2c], 1
        jle    L_4cdf
        add    ebx, 0xc
        mov    dword ptr [esp + 0x24], ebx
        add    esi, 0xc
L_4c7b:
        xor    ebx, ebx
        test    ebp, ebp
        jle    L_4ca2
        mov    edi, dword ptr [esp + 0x1c]
L_4c85:
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        push    edi
        push    esi
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_4ca2
        inc    ebx
        add    edi, 0xc
        cmp    ebx, ebp
        jl    L_4c85
L_4ca2:
        cmp    ebx, ebp
        jne    L_4cc4
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esi]
        mov    eax, ecx
        inc    ebp
        add    ecx, 0xc
        mov    dword ptr [esp + 0x24], ecx
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
L_4cc4:
        mov    eax, dword ptr [esp + 0x2c]
        mov    ecx, dword ptr [esp + 0x34]
        mov    byte ptr [ecx + eax], bl
        mov    ecx, dword ptr [esp + 0x14]
        inc    eax
        add    esi, 0xc
        cmp    eax, ecx
        mov    dword ptr [esp + 0x2c], eax
        jl    L_4c7b
L_4cdf:
        mov    edx, dword ptr [esp + 0x10]
        lea    esi, [edx + 0x10]
        push    ebp
        mov    ecx, esi
        call    FUN_0040c2e0
        mov    ebx, dword ptr [esi + 4]
        test    ebx, ebx
        jbe    L_4d0e
        mov    esi, dword ptr [esi]
        mov    edi, dword ptr [esp + 0x1c]
        sub    edi, esi
L_4cfd:
        lea    eax, [edi + esi]
        push    eax
        mov    ecx, esi
        call    FUN_0040c410
        add    esi, 0xc
        dec    ebx
        jne    L_4cfd
L_4d0e:
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [eax + 0x10]
        mov    ebx, dword ptr [esp + 0x30]
        mov    edx, dword ptr [ebx]
        lea    edi, [eax + 0x10]
        push    ebp
        push    ecx
        mov    ecx, ebx
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esp + 0x1c]
        push    edx
        call    FUN_004084e0
        add    esp, 4
        jmp    L_4d5f
L_4d34:
        mov    ebp, dword ptr [esp + 0x14]
        xor    eax, eax
        test    ebp, ebp
        jle    L_4d4c
        mov    ecx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [ecx]
L_4d44:
        mov    byte ptr [ecx + eax], al
        inc    eax
        cmp    eax, ebp
        jl    L_4d44
L_4d4c:
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [eax + 0x10]
        mov    edx, dword ptr [ebx]
        lea    edi, [eax + 0x10]
        push    ebp
        push    ecx
        mov    ecx, ebx
        call    dword ptr [edx + 0x24]
L_4d5f:
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ebx]
        mov    esi, dword ptr [esp + 0x88]
        push    eax
        mov    eax, dword ptr [ecx]
        push    eax
        mov    ecx, ebx
        call    dword ptr [edx + 0x88]
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0x94]
        test    esi, esi
        jne    L_4db7
        lea    ecx, [ebp + ebp]
        test    ecx, ecx
        jle    L_4ec1
        mov    eax, dword ptr [esp + 0x10]
        mov    eax, dword ptr [eax + 0x18]
        mov    dword ptr [esp + 0x3c], esi
        mov    dword ptr [esp + 0x40], esi
        mov    edx, esi
L_4da7:
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 4], esi
        add    eax, 8
        dec    ecx
        jne    L_4da7
        jmp    L_4ec1
L_4db7:
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 0x10]
        and    ecx, 0xffffc7ff
        or    ecx, 0x400
        or    edx, 0x3c00
        push    0
        mov    dword ptr [esi + 4], ecx
        mov    dword ptr [esi + 0x10], edx
        mov    edx, dword ptr [ebx]
        push    esi
        mov    ecx, ebx
        call    dword ptr [edx + 0x14]
        mov    edx, dword ptr [esi + 4]
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi]
        and    edx, 0xffffc3ff
        or    ecx, 0x3c00
        test    eax, 0x3fff
        mov    dword ptr [esi + 4], edx
        mov    dword ptr [esi + 0x10], ecx
        jbe    L_4e8f
        test    ebp, ebp
        jle    L_4ec1
        mov    eax, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [eax + 0x18]
        mov    eax, dword ptr [edi]
        lea    edx, [ecx + ebp*8]
        mov    esi, ebp
L_4e1a:
        fld    dword ptr [eax]
        add    ecx, 8
        fadd    dword ptr [g_0076d064]
        add    edx, 8
        add    eax, 0xc
        dec    esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x44]
        fld    dword ptr [eax - 8]
        mov    edi, dword ptr [esp + 0x44]
        fadd    dword ptr [g_0076d064]
        mov    dword ptr [ecx - 8], edi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x48]
        fld    dword ptr [eax - 0xc]
        mov    edi, dword ptr [esp + 0x48]
        fadd    dword ptr [g_0076d064]
        mov    dword ptr [ecx - 4], edi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x4c]
        fld    dword ptr [eax - 4]
        mov    edi, dword ptr [esp + 0x4c]
        fadd    dword ptr [g_0076d064]
        mov    dword ptr [edx - 8], edi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x50]
        mov    edi, dword ptr [esp + 0x50]
        mov    dword ptr [edx - 4], edi
        jne    L_4e1a
        jmp    L_4ec1
L_4e8f:
        lea    ecx, [ebp + ebp]
        test    ecx, ecx
        jle    L_4ec1
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [edx + 0x18]
        mov    dword ptr [esp + 0x54], 0
        mov    edx, dword ptr [esp + 0x54]
        mov    dword ptr [esp + 0x58], 0
        mov    esi, dword ptr [esp + 0x58]
L_4eb6:
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 4], esi
        add    eax, 8
        dec    ecx
        jne    L_4eb6
L_4ec1:
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ebx]
        lea    ecx, [ebp + ebp]
        push    ecx
        mov    ecx, dword ptr [edx + 0x18]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 0x2c]
        mov    eax, dword ptr [esp + 0x8c]
        mov    edx, dword ptr [ebx]
        push    1
        push    eax
        mov    ecx, ebx
        call    dword ptr [edx + 0x14]
        mov    ecx, dword ptr [esp + 0x20]
        push    ebx
        call    FUN_00487ce0
        dec    word ptr [ebx + 8]
        cmp    word ptr [ebx + 8], 0
        jne    L_4f07
        test    ebx, ebx
        je    L_4f07
        mov    edx, dword ptr [ebx]
        push    1
        mov    ecx, ebx
        call    dword ptr [edx]
L_4f07:
        mov    eax, dword ptr [esp + 0x38]
        cmp    eax, 0x7b2404
        mov    dword ptr [esp + 0x2c], eax
        jl    L_49aa
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 0x20]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x70
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x14
        call    FUN_004084d0
        xor    edi, edi
        add    esp, 4
        cmp    eax, edi
        je    L_4f5e
        mov    ecx, dword ptr [g_007da710]
        push    ecx
        push    0x76e798
        push    0x6a
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007b988c], eax
        jmp    L_4f64
L_4f5e:
        mov    dword ptr [g_007b988c], edi
L_4f64:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_4f94
        push    0x800
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], 0x400
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007b9888], esi
        jmp    L_4f9a
L_4f94:
        mov    dword ptr [g_007b9888], edi
L_4f9a:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_4fca
        push    0x2000
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], 0x400
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007b9884], esi
        jmp    L_4fd0
L_4fca:
        mov    dword ptr [g_007b9884], edi
L_4fd0:
        push    8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        cmp    esi, edi
        je    L_5001
        push    0x400
        mov    dword ptr [esi], edi
        mov    dword ptr [esi + 4], 0x400
        call    FUN_004084d0
        add    esp, 4
        pop    edi
        mov    dword ptr [esi], eax
        mov    dword ptr [g_007b9880], esi
        pop    esi
        ret    
L_5001:
        mov    dword ptr [g_007b9880], edi
        pop    edi
        pop    esi
        ret    
    }
}
