/*
 * FUN_00686793 (extent 0x686793-0x68756f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d598;
extern float  g_0076d970;
extern float  g_00770124;
extern int    g_007b220c;
extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_00587830(void);
extern void __cdecl FUN_005d8500(void);
extern void __cdecl FUN_005d89f0(void);
extern void __cdecl FUN_005d8cc0(void);
extern void __cdecl FUN_00685720(void);
extern void __cdecl FUN_00686640(void);
extern void __cdecl FUN_00686730(void);
extern void __cdecl FUN_00687480(void);
extern void __cdecl FUN_006874b0(void);
extern void __cdecl FUN_006874d0(void);
extern void __cdecl FUN_00687560(void);
extern void __cdecl FUN_00687570(void);
extern void __cdecl FUN_00687580(void);
extern void __cdecl FUN_006876f0(void);
extern void __cdecl FUN_00687730(void);
extern void __cdecl FUN_006877d0(void);
extern void __cdecl FUN_00687800(void);
extern void __cdecl FUN_00687880(void);
extern void __cdecl FUN_00687900(void);
extern void __cdecl FUN_00687ae0(void);
extern void __cdecl FUN_00687c70(void);
extern void __cdecl FUN_0068f180(void);
extern void __cdecl FUN_0068f370(void);
extern void __cdecl FUN_006910a0(void);
extern void __cdecl FUN_006b0150(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00686793(void)
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
        sub    esp, 0x68
        mov    eax, dword ptr [esp + 0x6c]
        push    ebx
        push    ebp
        mov    ebp, ecx
        mov    ecx, dword ptr [g_007f2464]
        push    esi
        push    edi
        xor    edi, edi
        and    eax, 0xfffffffe
        push    ecx
        mov    dword ptr [esp + 0x14], ebp
        mov    dword ptr [esp + 0x40], 0x798bfc
        mov    dword ptr [esp + 0x44], edi
        mov    dword ptr [esp + 0x48], edi
        mov    byte ptr [ebp + 0x40], 0
        mov    dword ptr [ebp + 0x38], edi
        mov    dword ptr [ebp + 0x28], eax
        call    FUN_006f4950
        mov    ecx, dword ptr [ebp + 0x34]
        xor    ebx, ebx
        mov    bx, word ptr [ebp + 0x28]
        lea    esi, [ebp + 0xc]
        lea    edx, [esp + 0x60]
        and    ebx, 0xfffe
        and    ebx, 0xffff
        push    ebx
        push    esi
        push    ebp
        push    edx
        call    FUN_00686640
        push    eax
        lea    ecx, [esp + 0x4c]
        call    FUN_0040c410
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea    ecx, [esp + 0x60]
        call    FUN_0040c9c0
        mov    eax, dword ptr [g_007b220c]
        push    eax
        lea    ecx, [esp + 0x58]
        push    ecx
        lea    edx, [esp + 0x50]
        push    edx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        je    L_6879
        mov    byte ptr [ebp + 0x3c], 0
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        cmp    ecx, edi
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_685c:
        cmp    ecx, edi
        mov    esi, dword ptr [ecx]
        je    L_6869
        push    1
        call    FUN_006877d0
L_6869:
        cmp    esi, edi
        mov    ecx, esi
        jne    L_685c
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_6879:
        lea    eax, [esp + 0x48]
        push    eax
        mov    ecx, esi
        call    FUN_0040c410
        xor    eax, eax
        test    bl, 0x80
        mov    byte ptr [ebp + 0x3f], 0
        je    L_6895
        mov    eax, 0x80
L_6895:
        test    bl, 0x10
        je    L_689f
        add    eax, 0x41
        jmp    L_68e3
L_689f:
        test    bl, 1
        je    L_68a9
        add    eax, 0x60
        jmp    L_68e3
L_68a9:
        test    bl, 2
        je    L_68b3
        add    eax, 0x44
        jmp    L_68e3
L_68b3:
        test    bl, 8
        je    L_68bd
        add    eax, 0x48
        jmp    L_68e3
L_68bd:
        test    bl, 4
        je    L_68c7
        add    eax, 0x60
        jmp    L_68e3
L_68c7:
        test    bl, 0x20
        je    L_68d1
        add    eax, 0x42
        jmp    L_68e3
L_68d1:
        test    bl, 0x40
        je    L_68db
        add    eax, 0x60
        jmp    L_68e3
L_68db:
        test    bh, 1
        je    L_68e3
        add    eax, 0x50
L_68e3:
        fld    dword ptr [ebp + 0x14]
        push    1
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [esi]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [ebp + 8]
        push    eax
        call    FUN_0075db4a
        fld    dword ptr [ebp]
        push    eax
        call    FUN_0075db4a
        mov    ecx, dword ptr [ebp + 0x34]
        push    eax
        call    FUN_005d8cc0
        test    al, al
        je    L_69f4
        push    ebp
        lea    ecx, [esp + 0x64]
        mov    byte ptr [ebp + 0x3c], 1
        call    FUN_0040c410
        mov    edi, dword ptr [ebp + 0x54]
        mov    eax, dword ptr [ebp + 0x58]
        cmp    edi, eax
        lea    esi, [ebp + 0x50]
        mov    dword ptr [esp + 0x6c], ebx
        mov    byte ptr [esp + 0x70], 0
        mov    dword ptr [esp + 0x74], 0xffffffff
        je    L_695b
        lea    ecx, [esp + 0x60]
        push    ecx
        push    edi
        call    FUN_00687c70
        add    esp, 8
        add    edi, 0x18
        mov    dword ptr [esi + 4], edi
        jmp    L_696a
L_695b:
        push    1
        lea    edx, [esp + 0x64]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00687ae0
L_696a:
        lea    eax, [ebp + 0xc]
        push    eax
        lea    ecx, [esp + 0x64]
        call    FUN_0040c410
        mov    edi, dword ptr [esi + 4]
        cmp    edi, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x6c], ebx
        mov    byte ptr [esp + 0x70], 1
        mov    dword ptr [esp + 0x74], 0xffffffff
        je    L_69a6
        lea    eax, [esp + 0x60]
        push    eax
        push    edi
        call    FUN_00687c70
        add    esp, 8
        add    edi, 0x18
        mov    dword ptr [esi + 4], edi
        jmp    L_69b5
L_69a6:
        push    1
        lea    ecx, [esp + 0x64]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00687ae0
L_69b5:
        mov    edx, dword ptr [esi]
        mov    dword ptr [ebp + 0x60], edx
        mov    byte ptr [ebp + 0x3f], 1
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        test    ecx, ecx
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_69d7:
        test    ecx, ecx
        mov    esi, dword ptr [ecx]
        je    L_69e4
        push    1
        call    FUN_006877d0
L_69e4:
        test    esi, esi
        mov    ecx, esi
        jne    L_69d7
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_69f4:
        cmp    dword ptr [ebp + 0x2c], edi
        je    L_743c
        cmp    dword ptr [ebp + 0x30], edi
        je    L_743c
        push    esi
        push    ebp
        lea    ecx, [esp + 0x50]
        mov    dword ptr [ebp + 0x10], edi
        mov    dword ptr [ebp + 4], edi
        call    FUN_0040ca10
        mov    eax, dword ptr [ebp + 0x2c]
        cmp    eax, dword ptr [ebp + 0x30]
        je    L_6a62
        fld    dword ptr [esp + 0x4c]
        fld    dword ptr [esp + 0x50]
        fld    dword ptr [esp + 0x48]
        fmul    dword ptr [esp + 0x48]
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fcomp    dword ptr [g_00770124]
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        je    L_6e75
        mov    ecx, dword ptr [ebp + 0x34]
        push    esi
        push    ebp
        call    FUN_005d89f0
        test    al, al
        jne    L_6e75
L_6a62:
        push    ebp
        lea    ecx, [esp + 0x64]
        mov    byte ptr [ebp + 0x3c], 1
        call    FUN_0040ccd0
        mov    edi, dword ptr [ebp + 0x54]
        mov    eax, dword ptr [ebp + 0x58]
        cmp    edi, eax
        lea    esi, [ebp + 0x50]
        mov    dword ptr [esp + 0x6c], ebx
        mov    byte ptr [esp + 0x70], 0
        mov    dword ptr [esp + 0x74], 0xffffffff
        je    L_6aa4
        lea    ecx, [esp + 0x60]
        push    ecx
        push    edi
        call    FUN_00687c70
        add    esp, 8
        add    edi, 0x18
        mov    dword ptr [esi + 4], edi
        jmp    L_6ab3
L_6aa4:
        push    1
        lea    edx, [esp + 0x64]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00687ae0
L_6ab3:
        mov    ecx, dword ptr [ebp + 0x34]
        push    ebx
        lea    eax, [ebp + 0xc]
        push    eax
        push    ebp
        lea    eax, [esp + 0x6c]
        push    eax
        call    FUN_00686640
        push    eax
        lea    ecx, [esp + 0x58]
        call    FUN_0040c410
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea    ecx, [esp + 0x6c]
        call    FUN_0040c9c0
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        lea    edx, [esp + 0x64]
        push    edx
        lea    eax, [esp + 0x5c]
        push    eax
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_6dcf
        lea    ecx, [esp + 0x54]
        push    ecx
        lea    ecx, [esp + 0x64]
        call    FUN_0040ccd0
        mov    edi, dword ptr [esi + 4]
        cmp    edi, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x6c], ebx
        mov    byte ptr [esp + 0x70], 0
        mov    dword ptr [esp + 0x74], 0xffffffff
        je    L_6b46
        lea    edx, [esp + 0x60]
        push    edx
        push    edi
        call    FUN_00687c70
        add    esp, 8
        add    edi, 0x18
        mov    dword ptr [esi + 4], edi
        jmp    L_6b55
L_6b46:
        push    1
        lea    eax, [esp + 0x64]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00687ae0
L_6b55:
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [g_007f2464]
        lea    edi, [eax + 0x18]
        push    ecx
        mov    dword ptr [ebp + 0x60], edi
        call    FUN_006f4950
        mov    eax, dword ptr [edi + 0xc]
        xor    edi, edi
        test    al, 0x80
        je    L_6b77
        mov    edi, 0x80
L_6b77:
        test    al, 0x10
        je    L_6b80
        add    edi, 0x41
        jmp    L_6bbe
L_6b80:
        test    al, 1
        je    L_6b89
        add    edi, 0x60
        jmp    L_6bbe
L_6b89:
        test    al, 2
        je    L_6b92
        add    edi, 0x44
        jmp    L_6bbe
L_6b92:
        test    al, 8
        je    L_6b9b
        add    edi, 0x48
        jmp    L_6bbe
L_6b9b:
        test    al, 4
        je    L_6ba4
        add    edi, 0x60
        jmp    L_6bbe
L_6ba4:
        test    al, 0x20
        je    L_6bad
        add    edi, 0x42
        jmp    L_6bbe
L_6bad:
        test    al, 0x40
        je    L_6bb6
        add    edi, 0x60
        jmp    L_6bbe
L_6bb6:
        test    ah, 1
        je    L_6bbe
        add    edi, 0x50
L_6bbe:
        push    0x40
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_6bf2
        mov    ecx, dword ptr [ebp + 0x14]
        xor    edx, edx
        mov    dl, byte ptr [ebp + 0x3e]
        push    edx
        mov    edx, dword ptr [ebp + 0xc]
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    edx
        mov    edx, dword ptr [ebp]
        push    ecx
        mov    ecx, dword ptr [ebp + 0x34]
        push    edx
        push    edi
        push    ecx
        mov    ecx, eax
        call    FUN_0068f180
        mov    edi, eax
        jmp    L_6bf4
L_6bf2:
        xor    edi, edi
L_6bf4:
        mov    dword ptr [ebp + 0x64], edi
        call    FUN_006f49a0
        mov    ecx, edi
        call    FUN_006910a0
        mov    al, byte ptr [edi + 0x24]
        test    al, al
        je    L_6d4e
        mov    al, byte ptr [edi + 0x26]
        test    al, al
        je    L_6d18
        test    edi, edi
        je    L_6c2d
        mov    ecx, edi
        call    FUN_0068f370
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6c2d:
        mov    edx, dword ptr [esi + 4]
        mov    eax, dword ptr [esi]
        push    edx
        push    eax
        mov    ecx, esi
        mov    dword ptr [ebp + 0x64], 0
        mov    byte ptr [ebp + 0x3c], 1
        call    FUN_00687800
        push    ebp
        lea    ecx, [esp + 0x64]
        call    FUN_0040ccd0
        mov    edi, dword ptr [esi + 4]
        cmp    edi, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x6c], ebx
        mov    byte ptr [esp + 0x70], 0
        mov    dword ptr [esp + 0x74], 0xffffffff
        je    L_6c7f
        lea    ecx, [esp + 0x60]
        push    ecx
        push    edi
        call    FUN_00687c70
        add    esp, 8
        add    edi, 0x18
        mov    dword ptr [esi + 4], edi
        jmp    L_6c8e
L_6c7f:
        push    1
        lea    edx, [esp + 0x64]
        push    edx
        push    edi
        mov    ecx, esi
        call    FUN_00687ae0
L_6c8e:
        lea    eax, [ebp + 0xc]
        push    eax
        lea    ecx, [esp + 0x64]
        call    FUN_0040ccd0
        mov    edi, dword ptr [esi + 4]
        cmp    edi, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x6c], ebx
        mov    byte ptr [esp + 0x70], 0
        mov    dword ptr [esp + 0x74], 0xffffffff
        je    L_6cca
        lea    eax, [esp + 0x60]
        push    eax
        push    edi
        call    FUN_00687c70
        add    esp, 8
        add    edi, 0x18
        mov    dword ptr [esi + 4], edi
        jmp    L_6cd9
L_6cca:
        push    1
        lea    ecx, [esp + 0x64]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_00687ae0
L_6cd9:
        mov    edx, dword ptr [esi]
        mov    dword ptr [ebp + 0x60], edx
        mov    byte ptr [ebp + 0x3f], 1
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        test    ecx, ecx
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_6cfb:
        test    ecx, ecx
        mov    esi, dword ptr [ecx]
        je    L_6d08
        push    1
        call    FUN_006877d0
L_6d08:
        test    esi, esi
        mov    ecx, esi
        jne    L_6cfb
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_6d18:
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        test    ecx, ecx
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_6d31:
        test    ecx, ecx
        mov    esi, dword ptr [ecx]
        je    L_6d3e
        push    1
        call    FUN_006877d0
L_6d3e:
        test    esi, esi
        mov    ecx, esi
        jne    L_6d31
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_6d4e:
        mov    eax, dword ptr [ebp + 0x2c]
        cmp    eax, dword ptr [ebp + 0x30]
        jne    L_6dae
        test    edi, edi
        je    L_6d6a
        mov    ecx, edi
        call    FUN_0068f370
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6d6a:
        mov    ecx, ebp
        mov    dword ptr [ebp + 0x64], 0
        call    FUN_00687570
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        test    ecx, ecx
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_6d91:
        test    ecx, ecx
        mov    esi, dword ptr [ecx]
        je    L_6d9e
        push    1
        call    FUN_006877d0
L_6d9e:
        test    esi, esi
        mov    ecx, esi
        jne    L_6d91
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_6dae:
        test    edi, edi
        mov    byte ptr [ebp + 0x3c], 0
        je    L_6dc6
        mov    ecx, edi
        call    FUN_0068f370
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_6dc6:
        mov    dword ptr [ebp + 0x64], 0
        jmp    L_6dd3
L_6dcf:
        mov    byte ptr [ebp + 0x3c], 0
L_6dd3:
        mov    ecx, dword ptr [ebp + 0x2c]
        cmp    ecx, dword ptr [ebp + 0x30]
        jne    L_6e75
        lea    eax, [ebp + 0xc]
        push    eax
        lea    ecx, [esp + 0x64]
        mov    byte ptr [ebp + 0x3f], 1
        mov    dword ptr [ebp + 0x68], 7
        mov    byte ptr [ebp + 0x3c], 1
        call    FUN_0040ccd0
        mov    edi, dword ptr [esi + 4]
        cmp    edi, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x6c], ebx
        mov    byte ptr [esp + 0x70], 0
        mov    dword ptr [esp + 0x74], 0xffffffff
        je    L_6e2a
        lea    edx, [esp + 0x60]
        push    edx
        push    edi
        call    FUN_00687c70
        add    esp, 8
        add    edi, 0x18
        mov    dword ptr [esi + 4], edi
        jmp    L_6e39
L_6e2a:
        push    1
        lea    eax, [esp + 0x64]
        push    eax
        push    edi
        mov    ecx, esi
        call    FUN_00687ae0
L_6e39:
        mov    ecx, dword ptr [ebp + 0x54]
        mov    dword ptr [ebp + 0x60], ecx
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        test    ecx, ecx
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_6e58:
        test    ecx, ecx
        mov    esi, dword ptr [ecx]
        je    L_6e65
        push    1
        call    FUN_006877d0
L_6e65:
        test    esi, esi
        mov    ecx, esi
        jne    L_6e58
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_6e75:
        mov    ecx, dword ptr [ebp + 0x34]
        call    FUN_005d8500
        mov    edx, dword ptr [ebp + 0x30]
        push    edx
        mov    ecx, ebp
        call    FUN_00685720
        mov    ecx, dword ptr [ebp + 0x2c]
        fld    dword ptr [ecx + 0x38]
        lea    esi, [ebp + 0x2c]
        fadd    dword ptr [ecx + 0x3c]
        fld    st(1)
        fadd    dword ptr [g_0076d064]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_6eb5
        fld    dword ptr [ecx + 0x38]
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x40
        je    L_6ec4
L_6eb5:
        fstp    dword ptr [ecx + 0x3c]
        mov    dword ptr [ecx + 0x38], 0x3f800000
        mov    dword ptr [ecx + 0x40], ebx
        jmp    L_6ec6
L_6ec4:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_6ec6:
        push    0xc
        call    FUN_004084d0
        xor    edi, edi
        add    esp, 4
        cmp    eax, edi
        je    L_6ee0
        push    esi
        mov    ecx, eax
        call    FUN_00687900
        jmp    L_6ee2
L_6ee0:
        xor    eax, eax
L_6ee2:
        mov    dword ptr [eax], edi
        mov    dword ptr [eax + 4], edi
        mov    esi, dword ptr [esp + 0x44]
        mov    ecx, dword ptr [esp + 0x40]
        inc    esi
        mov    dword ptr [esp + 0x44], esi
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0x40]
        cmp    ecx, edi
        je    L_6f01
        mov    dword ptr [ecx + 4], eax
L_6f01:
        mov    dword ptr [esp + 0x40], eax
        mov    byte ptr [ebp + 0x3c], 0
        mov    dword ptr [esp + 0x1c], edi
L_6f0d:
        mov    eax, dword ptr [ebp + 0x34]
        mov    edx, dword ptr [eax + 0x20]
        mov    ebx, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [esp + 0x1c]
        add    eax, 0x1c
        sub    edx, ebx
        sar    edx, 2
        inc    ecx
        shl    edx, 1
        cmp    ecx, edx
        mov    dword ptr [esp + 0x1c], ecx
        jg    L_718b
        mov    eax, dword ptr [esp + 0x44]
        test    eax, eax
        je    L_718b
        mov    esi, dword ptr [esp + 0x40]
        mov    ecx, eax
        dec    ecx
        mov    dword ptr [esp + 0x44], ecx
        mov    edi, dword ptr [esi]
        test    edi, edi
        je    L_6f6b
L_6f4e:
        mov    eax, dword ptr [esi + 8]
        mov    ecx, dword ptr [edi + 8]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x40]
        call    FUN_00687480
        test    al, al
        je    L_6f65
        mov    esi, edi
L_6f65:
        mov    edi, dword ptr [edi]
        test    edi, edi
        jne    L_6f4e
L_6f6b:
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_6f76
        mov    edx, dword ptr [esi]
        mov    dword ptr [eax], edx
L_6f76:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_6f82
        mov    ecx, dword ptr [esi + 4]
        mov    dword ptr [eax + 4], ecx
L_6f82:
        cmp    dword ptr [esp + 0x40], esi
        jne    L_6f8e
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x40], edx
L_6f8e:
        test    esi, esi
        mov    edi, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x20], edi
        je    L_6fa2
        push    1
        mov    ecx, esi
        call    FUN_006877d0
L_6fa2:
        test    edi, edi
        je    L_718b
        mov    ecx, dword ptr [esp + 0x20]
        cmp    ecx, dword ptr [ebp + 0x30]
        je    L_71c1
        mov    eax, dword ptr [ecx + 0x38]
        mov    esi, dword ptr [ecx + 0x14]
        mov    dword ptr [esp + 0x30], eax
        mov    eax, dword ptr [ecx + 0x18]
        sub    eax, esi
        sar    eax, 2
        test    eax, eax
        mov    dword ptr [esp + 0x34], eax
        mov    dword ptr [esp + 0x28], 0
        jle    L_6f0d
L_6fdd:
        mov    ecx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x28]
        mov    edx, dword ptr [ecx + 0x14]
        mov    edi, dword ptr [edx + eax*4]
        mov    eax, dword ptr [edi + 4]
        cmp    eax, ecx
        jne    L_6ffb
        mov    ecx, dword ptr [edi + 8]
        mov    dword ptr [esp + 0x24], ecx
        jmp    L_6fff
L_6ffb:
        mov    dword ptr [esp + 0x24], eax
L_6fff:
        mov    edx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esp + 0x20]
        mov    dword ptr [esp + 0x18], edx
        mov    ecx, dword ptr [edi + 4]
        xor    ebx, ebx
        cmp    ecx, eax
        setne    bl
        or    edx, 0xffffffff
        xor    ecx, ecx
        lea    esi, [edi + ebx*4 + 0x14]
L_701e:
        test    ecx, ecx
        je    L_7054
        mov    ebp, dword ptr [esp + 0x7c]
        mov    eax, 1
        shl    eax, cl
        test    eax, ebp
        je    L_7050
        cmp    edx, -1
        je    L_704e
        fld    dword ptr [esi]
        lea    eax, [ebx + edx*2]
        fcomp    dword ptr [edi + eax*4 + 0x14]
        fnstsw  ax
        test    ah, 1
        je    L_7050
        cmp    dword ptr [esi], 0xbf800000
        je    L_7050
L_704e:
        mov    edx, ecx
L_7050:
        mov    ebp, dword ptr [esp + 0x10]
L_7054:
        inc    ecx
        add    esi, 8
        cmp    ecx, 9
        jl    L_701e
        mov    esi, 1
        mov    ecx, edx
        shl    esi, cl
        cmp    edx, -1
        mov    dword ptr [esp + 0x2c], esi
        je    L_7171
        lea    ecx, [ebx + edx*2]
        fld    dword ptr [edi + ecx*4 + 0x14]
        fst    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jne    L_7171
        test    esi, esi
        je    L_7171
        fld    dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x24]
        fadd    dword ptr [esp + 0x30]
        push    edx
        mov    ecx, ebp
        fstp    dword ptr [esp + 0x18]
        call    FUN_00685720
        mov    ecx, dword ptr [esp + 0x18]
        fld    dword ptr [ecx + 0x3c]
        lea    edx, [ecx + 0x3c]
        fadd    dword ptr [ecx + 0x38]
        fld    st(1)
        fadd    dword ptr [esp + 0x14]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_70df
        fld    dword ptr [ecx + 0x38]
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        test    ah, 0x40
        je    L_716f
L_70df:
        mov    eax, dword ptr [esp + 0x14]
        fstp    dword ptr [edx]
        mov    dword ptr [ecx + 0x38], eax
        mov    dword ptr [ecx + 0x40], esi
        mov    eax, dword ptr [esp + 0x40]
        test    eax, eax
        je    L_7102
        mov    ecx, dword ptr [esp + 0x18]
L_70f7:
        cmp    dword ptr [eax + 8], ecx
        je    L_711e
        mov    eax, dword ptr [eax]
        test    eax, eax
        jne    L_70f7
L_7102:
        push    0xc
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_7140
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, eax
        call    FUN_00687900
        jmp    L_7142
L_711e:
        lea    ecx, [esp + 0x18]
        push    ecx
        lea    ecx, [esp + 0x40]
        call    FUN_00687880
        test    al, al
        je    L_7171
        lea    edx, [esp + 0x18]
        push    edx
        lea    ecx, [esp + 0x40]
        call    FUN_00687730
        jmp    L_7171
L_7140:
        xor    eax, eax
L_7142:
        mov    dword ptr [eax], 0
        mov    dword ptr [eax + 4], 0
        mov    esi, dword ptr [esp + 0x44]
        mov    edx, dword ptr [esp + 0x40]
        inc    esi
        mov    dword ptr [esp + 0x44], esi
        mov    dword ptr [eax], edx
        mov    ecx, dword ptr [esp + 0x40]
        test    ecx, ecx
        je    L_7169
        mov    dword ptr [ecx + 4], eax
L_7169:
        mov    dword ptr [esp + 0x40], eax
        jmp    L_7171
L_716f:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_7171:
        mov    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x34]
        inc    eax
        cmp    eax, ecx
        mov    dword ptr [esp + 0x28], eax
        jl    L_6fdd
        jmp    L_6f0d
L_718b:
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        test    ecx, ecx
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_71a4:
        test    ecx, ecx
        mov    esi, dword ptr [ecx]
        je    L_71b1
        push    1
        call    FUN_006877d0
L_71b1:
        test    esi, esi
        mov    ecx, esi
        jne    L_71a4
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_71c1:
        mov    esi, dword ptr [ebp + 0x30]
        mov    dword ptr [esp + 0x1c], 0
L_71cc:
        mov    eax, dword ptr [ebp + 0x34]
        mov    edx, dword ptr [eax + 0x20]
        mov    edi, dword ptr [eax + 0x1c]
        mov    ecx, dword ptr [esp + 0x1c]
        add    eax, 0x1c
        sub    edx, edi
        sar    edx, 2
        inc    ecx
        shl    edx, 1
        cmp    ecx, edx
        mov    dword ptr [esp + 0x1c], ecx
        jg    L_7406
        mov    eax, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ecx + 4]
        xor    ebx, ebx
        cmp    edx, esi
        mov    dword ptr [esp + 0x28], ebx
        jne    L_7207
        mov    ecx, dword ptr [ecx + 8]
        jmp    L_7209
L_7207:
        mov    ecx, edx
L_7209:
        mov    ecx, dword ptr [ecx + 0x38]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [eax]
        push    esi
        mov    edi, ecx
        call    FUN_00687560
        push    eax
        mov    eax, dword ptr [esp + 0x80]
        lea    edx, [esp + 0x30]
        push    edx
        push    eax
        mov    ecx, edi
        call    FUN_006874d0
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        je    L_7244
        mov    dword ptr [esp + 0x14], 0
L_7244:
        mov    ecx, dword ptr [esi + 0x18]
        sub    ecx, dword ptr [esi + 0x14]
        and    ecx, 0xfffffffc
        cmp    ecx, 4
        mov    edi, 1
        jle    L_72f7
L_725b:
        mov    edx, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [edx + edi*4]
        push    esi
        call    FUN_00687560
        mov    eax, dword ptr [eax + 0x38]
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x34], eax
        lea    eax, [ecx + edi*4]
        mov    ecx, dword ptr [eax]
        push    esi
        mov    ebx, ecx
        call    FUN_00687560
        push    eax
        mov    eax, dword ptr [esp + 0x80]
        lea    edx, [esp + 0x30]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_006874d0
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        je    L_72a8
        fld    dword ptr [g_0076c5b0]
        jmp    L_72ac
L_72a8:
        fld    dword ptr [esp + 0x34]
L_72ac:
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        je    L_72c4
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_72d5
L_72c4:
        fld    dword ptr [esp + 0x14]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_72df
L_72d5:
        fstp    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x28], edi
        jmp    L_72e1
L_72df:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_72e1:
        mov    ecx, dword ptr [esi + 0x18]
        sub    ecx, dword ptr [esi + 0x14]
        inc    edi
        sar    ecx, 2
        cmp    edi, ecx
        jl    L_725b
        mov    ebx, dword ptr [esp + 0x28]
L_72f7:
        mov    eax, dword ptr [esi + 0x40]
        mov    edx, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [edx + ebx*4]
        push    eax
        push    esi
        push    ecx
        lea    ecx, [esp + 0x6c]
        call    FUN_006874b0
        push    eax
        lea    ecx, [ebp + 0x44]
        call    FUN_00687580
        mov    eax, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [eax + ebx*4]
        push    esi
        call    FUN_00687560
        mov    esi, eax
        cmp    esi, dword ptr [ebp + 0x2c]
        jne    L_71cc
        mov    ecx, dword ptr [esp + 0x7c]
        xor    edi, edi
        xor    eax, eax
        test    cl, 0x10
        je    L_7340
        mov    eax, 0x10
        jmp    L_7392
L_7340:
        test    cl, 1
        je    L_734c
        mov    eax, 1
        jmp    L_7392
L_734c:
        test    cl, 2
        je    L_7358
        mov    eax, 2
        jmp    L_7392
L_7358:
        test    cl, 8
        je    L_7364
        mov    eax, 8
        jmp    L_7392
L_7364:
        test    cl, 4
        je    L_7370
        mov    eax, 4
        jmp    L_7392
L_7370:
        test    cl, 0x20
        je    L_737c
        mov    eax, 0x20
        jmp    L_7392
L_737c:
        test    cl, 0x40
        je    L_7388
        mov    eax, 0x40
        jmp    L_7392
L_7388:
        test    ch, 1
        je    L_7392
        mov    eax, 0x100
L_7392:
        push    eax
        push    esi
        push    edi
        lea    ecx, [esp + 0x6c]
        call    FUN_006874b0
        push    eax
        lea    ecx, [ebp + 0x44]
        call    FUN_00687580
        mov    ecx, ebp
        call    FUN_00686730
        push    0xbf800000
        push    0xbf800000
        push    0xbf800000
        lea    ecx, [esp + 0x6c]
        mov    byte ptr [ebp + 0x3c], 1
        mov    dword ptr [ebp + 0x68], edi
        call    FUN_00587830
        push    eax
        lea    ecx, [ebp + 0x18]
        call    FUN_0040ccd0
        mov    ecx, ebp
        mov    dword ptr [ebp + 0x5c], edi
        call    FUN_006b0150
        mov    al, byte ptr [ebp + 0x3c]
        test    al, al
        je    L_73ee
        mov    ecx, ebp
        call    FUN_00687570
L_73ee:
        call    FUN_006f49a0
        lea    ecx, [esp + 0x3c]
        call    FUN_006876f0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_7406:
        mov    byte ptr [ebp + 0x3c], 0
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        test    ecx, ecx
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_741f:
        test    ecx, ecx
        mov    esi, dword ptr [ecx]
        je    L_742c
        push    1
        call    FUN_006877d0
L_742c:
        test    esi, esi
        mov    ecx, esi
        jne    L_741f
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
L_743c:
        mov    byte ptr [ebp + 0x3c], 0
        mov    dword ptr [ebp + 0x68], edi
        call    FUN_006f49a0
        mov    ecx, dword ptr [esp + 0x40]
        cmp    ecx, edi
        mov    dword ptr [esp + 0x3c], 0x798bfc
        je    L_746b
L_7458:
        cmp    ecx, edi
        mov    esi, dword ptr [ecx]
        je    L_7465
        push    1
        call    FUN_006877d0
L_7465:
        cmp    esi, edi
        mov    ecx, esi
        jne    L_7458
L_746b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x68
        ret    4
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
        mov    eax, dword ptr [esp + 4]
        fld    dword ptr [eax + 0x3c]
        fadd    dword ptr [eax + 0x38]
        mov    eax, dword ptr [esp + 8]
        fld    dword ptr [eax + 0x3c]
        fadd    dword ptr [eax + 0x38]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_74a5
        mov    eax, 1
        ret    8
L_74a5:
        xor    eax, eax
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [edi + 4]
        xor    ebx, ebx
        cmp    eax, ecx
        setne    bl
        or    edx, 0xffffffff
        xor    ecx, ecx
        lea    esi, [edi + ebx*4 + 0x14]
L_74f1:
        test    ecx, ecx
        je    L_751f
        mov    eax, 1
        shl    eax, cl
        test    eax, ebp
        je    L_751f
        cmp    edx, -1
        je    L_751d
        fld    dword ptr [esi]
        lea    eax, [ebx + edx*2]
        fcomp    dword ptr [edi + eax*4 + 0x14]
        fnstsw  ax
        test    ah, 1
        je    L_751f
        cmp    dword ptr [esi], 0xbf800000
        je    L_751f
L_751d:
        mov    edx, ecx
L_751f:
        inc    ecx
        add    esi, 8
        cmp    ecx, 9
        jl    L_74f1
        mov    ecx, edx
        mov    eax, 1
        shl    eax, cl
        cmp    edx, -1
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [ecx], eax
        jne    L_7549
        fld    dword ptr [g_0076d598]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    0xc
L_7549:
        lea    edx, [ebx + edx*2]
        fld    dword ptr [edi + edx*4 + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
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
        mov    eax, dword ptr [ecx + 4]
        cmp    eax, dword ptr [esp + 4]
        jne    L_756c
        mov    eax, dword ptr [ecx + 8]
L_756c:
        ret    4
    }
}
