/*
 * FUN_006818d0 (extent 0x6818d0-0x681fdd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0077431c;
extern float  g_00798a48;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007f2070;
extern int    g_007f2098;
extern int    g_007f2144;
extern int    g_007f2548;
extern int    g_007f2560;
extern int    g_007f268c;
extern char   g_0080db04;
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004e8dc0(void);
extern void __cdecl FUN_0050e1b0(void);
extern void __cdecl FUN_005ef680(void);
extern void __cdecl FUN_005ef7e0(void);
extern void __cdecl FUN_00681780(void);
extern void __cdecl FUN_00681fe0(void);
extern void __cdecl FUN_00682000(void);
extern void __cdecl FUN_00682020(void);
extern void __cdecl FUN_00682040(void);
extern void __cdecl FUN_00682060(void);
extern void __cdecl FUN_00682150(void);
extern void __cdecl FUN_00682d20(void);
extern void __cdecl FUN_00682f70(void);
extern void __cdecl FUN_006832a0(void);
extern void __cdecl FUN_00683c40(void);
extern void __cdecl FUN_00684580(void);
extern void __cdecl FUN_00684770(void);
extern void __cdecl FUN_006847e0(void);
extern void __cdecl FUN_00684840(void);
extern void __cdecl FUN_00684ab0(void);

__declspec(naked) void FUN_006818d0(void)
{
    __asm {
        sub    esp, 0x58
        mov    eax, dword ptr [esp + 0x5c]
        mov    ecx, dword ptr [esp + 0x64]
        lea    edx, [esp + 0x5c]
        mov    dword ptr [esp + 0x48], ecx
        push    edx
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 8], eax
        mov    dword ptr [esp + 4], 0x798a78
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0xc], 0x798a74
        mov    dword ptr [esp + 0x18], eax
        mov    dword ptr [esp + 0x14], 0x798a70
        mov    dword ptr [esp + 0x3c], eax
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x38], 0x798a6c
        mov    dword ptr [esp + 0x48], eax
        mov    dword ptr [esp + 0x44], 0x798a68
        mov    dword ptr [esp + 0x20], eax
        mov    dword ptr [esp + 0x1c], 0x798a64
        mov    dword ptr [esp + 0x28], eax
        mov    dword ptr [esp + 0x24], 0x798a60
        call    FUN_00682040
        mov    ecx, dword ptr [esp + 0x30]
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        mov    dword ptr [esp + 0x5c], eax
        mov    eax, dword ptr [esp + 0x2c]
        cmp    eax, ecx
        je    L_1978
        lea    ecx, [esp + 0x5c]
        push    ecx
        push    eax
        call    FUN_00682150
        mov    eax, dword ptr [esp + 0x34]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x2c], eax
        jmp    L_198d
L_1978:
        push    1
        lea    edx, [esp + 0x60]
        push    edx
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_00682060
        mov    eax, dword ptr [esp + 0x2c]
L_198d:
        lea    ecx, [esp + 8]
        mov    dword ptr [esp + 0x5c], ecx
        cmp    eax, dword ptr [esp + 0x30]
        je    L_19b6
        lea    edx, [esp + 0x5c]
        push    edx
        push    eax
        call    FUN_00682150
        mov    eax, dword ptr [esp + 0x34]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x2c], eax
        jmp    L_19cb
L_19b6:
        push    1
        lea    ecx, [esp + 0x60]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_00682060
        mov    eax, dword ptr [esp + 0x2c]
L_19cb:
        cmp    eax, dword ptr [esp + 0x30]
        lea    edx, [esp + 0x10]
        mov    dword ptr [esp + 0x5c], edx
        je    L_19f4
        lea    ecx, [esp + 0x5c]
        push    ecx
        push    eax
        call    FUN_00682150
        mov    eax, dword ptr [esp + 0x34]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x2c], eax
        jmp    L_1a09
L_19f4:
        push    1
        lea    edx, [esp + 0x60]
        push    edx
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_00682060
        mov    eax, dword ptr [esp + 0x2c]
L_1a09:
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x5c], ecx
        cmp    eax, dword ptr [esp + 0x30]
        je    L_1a32
        lea    edx, [esp + 0x5c]
        push    edx
        push    eax
        call    FUN_00682150
        mov    eax, dword ptr [esp + 0x34]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x2c], eax
        jmp    L_1a47
L_1a32:
        push    1
        lea    ecx, [esp + 0x60]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_00682060
        mov    eax, dword ptr [esp + 0x2c]
L_1a47:
        cmp    eax, dword ptr [esp + 0x30]
        lea    edx, [esp + 0x40]
        mov    dword ptr [esp + 0x5c], edx
        je    L_1a70
        lea    ecx, [esp + 0x5c]
        push    ecx
        push    eax
        call    FUN_00682150
        mov    eax, dword ptr [esp + 0x34]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x2c], eax
        jmp    L_1a85
L_1a70:
        push    1
        lea    edx, [esp + 0x60]
        push    edx
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_00682060
        mov    eax, dword ptr [esp + 0x2c]
L_1a85:
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x5c], ecx
        cmp    eax, dword ptr [esp + 0x30]
        je    L_1aae
        lea    edx, [esp + 0x5c]
        push    edx
        push    eax
        call    FUN_00682150
        mov    eax, dword ptr [esp + 0x34]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x2c], eax
        jmp    L_1ac3
L_1aae:
        push    1
        lea    ecx, [esp + 0x60]
        push    ecx
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_00682060
        mov    eax, dword ptr [esp + 0x2c]
L_1ac3:
        cmp    eax, dword ptr [esp + 0x30]
        lea    edx, [esp + 0x20]
        mov    dword ptr [esp + 0x5c], edx
        je    L_1aec
        lea    ecx, [esp + 0x5c]
        push    ecx
        push    eax
        call    FUN_00682150
        mov    eax, dword ptr [esp + 0x34]
        add    esp, 8
        add    eax, 4
        mov    dword ptr [esp + 0x2c], eax
        jmp    L_1afd
L_1aec:
        push    1
        lea    edx, [esp + 0x60]
        push    edx
        push    eax
        lea    ecx, [esp + 0x34]
        call    FUN_00682060
L_1afd:
        lea    eax, [esp + 0x5c]
        push    eax
        lea    ecx, [esp + 0x50]
        call    FUN_00682000
        mov    ecx, dword ptr [esp + 0x68]
        push    ecx
        mov    ecx, dword ptr [esp + 0x64]
        lea    edx, [esp + 0x50]
        push    edx
        lea    eax, [esp + 0x30]
        push    eax
        push    ecx
        call    FUN_00681780
        add    esp, 0x10
        lea    ecx, [esp + 0x4c]
        call    FUN_00682020
        lea    ecx, [esp + 0x28]
        call    FUN_00681fe0
        add    esp, 0x58
        ret    0x10
        nop    
        push    esi
        mov    esi, dword ptr [ecx + 4]
        mov    al, byte ptr [esi + 0x34]
        test    al, al
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        jne    L_1b6b
        mov    eax, dword ptr [edi + 0x1ac]
        push    eax
        call    FUN_0050e1b0
        add    esp, 4
        cmp    eax, -1
        je    L_1b6b
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
L_1b6b:
        mov    ecx, dword ptr [esi + 0x14]
        mov    edx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 0xc]
        push    ecx
        mov    ecx, dword ptr [esi + 8]
        push    edx
        mov    edx, dword ptr [esi]
        push    eax
        mov    eax, dword ptr [edx + 0x30]
        push    ecx
        push    eax
        push    edi
        call    FUN_00682f70
        add    esp, 0x18
        neg    al
        sbb    al, al
        pop    edi
        inc    al
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
        mov    eax, dword ptr [ecx + 4]
        mov    eax, dword ptr [eax + 0x38]
        dec    eax
        je    L_1bc4
        dec    eax
        jne    L_1bcd
        mov    ecx, dword ptr [esp + 4]
        push    0
        push    ecx
L_1bb3:
        call    FUN_00683c40
        add    esp, 8
        test    al, al
        jne    L_1bcd
        mov    al, 1
        ret    8
L_1bc4:
        mov    edx, dword ptr [esp + 4]
        push    1
        push    edx
        jmp    L_1bb3
L_1bcd:
        xor    al, al
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
        mov    eax, dword ptr [g_007f2560]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_1c92
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        fld    dword ptr [eax + 0x54]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        je    L_1c1e
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
L_1c1e:
        mov    eax, dword ptr [g_007f2070]
        mov    esi, dword ptr [esi + 4]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        cmp    al, 1
        jne    L_1c5c
        mov    eax, dword ptr [edi + 4]
        mov    cl, byte ptr [eax + 0x35]
        test    cl, cl
        jne    L_1c43
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
L_1c43:
        mov    ecx, dword ptr [eax]
        fld    dword ptr [ecx + 0x30]
        fcomp    dword ptr [g_00798a48]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1c92
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
L_1c5c:
        mov    eax, dword ptr [g_007f2098]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        cmp    al, 1
        jne    L_1c72
        pop    edi
        pop    esi
        ret    8
L_1c72:
        mov    edx, dword ptr [edi + 4]
        mov    al, byte ptr [edx + 0x3c]
        test    al, al
        jne    L_1c92
        mov    eax, dword ptr [g_007f2144]
        push    eax
        mov    ecx, esi
        call    FUN_00415230
        cmp    al, 1
        jne    L_1c92
        pop    edi
        pop    esi
        ret    8
L_1c92:
        pop    edi
        xor    al, al
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0xb4
        push    ebx
        mov    ebx, dword ptr [esp + 0xbc]
        push    esi
        mov    esi, dword ptr [ecx + 4]
        push    edi
        push    ebx
        lea    eax, [esp + 0x78]
        push    esi
        push    eax
        call    FUN_00684ab0
        add    esp, 0xc
        mov    edi, eax
        push    edi
        lea    ecx, [esp + 0x2c]
        call    FUN_00684770
        mov    ecx, dword ptr [edi + 0x44]
        mov    edx, dword ptr [edi + 0x48]
        mov    dword ptr [esp + 0x6c], ecx
        mov    dword ptr [esp + 0x70], edx
        cmp    byte ptr [esi + 0x3e], 1
        jne    L_1d5c
        mov    eax, dword ptr [g_007f2548]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jne    L_1d5c
        mov    ecx, dword ptr [esp + 0x58]
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        lea    ecx, [esp + 0x48]
        call    FUN_004e8dc0
        lea    edx, [esp + 0x10]
        push    edx
        lea    ecx, [esp + 0x20]
        call    FUN_0040c5d0
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx + 0x40]
        lea    eax, [esp + 0x1c]
        push    eax
        push    ebx
        push    edx
        lea    ecx, [esp + 0x80]
        call    FUN_00684580
        lea    ecx, [esp + 0x74]
        call    FUN_006847e0
        mov    eax, dword ptr [esi + 0x18]
        push    0
        push    eax
        lea    ecx, [esp + 0x7c]
        call    FUN_00684840
        test    eax, eax
        jle    L_1d5c
        cmp    eax, 2
        jg    L_1d5c
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        add    esp, 0xb4
        ret    8
L_1d5c:
        mov    edx, dword ptr [esp + 0x70]
        mov    ecx, dword ptr [esi + 0x20]
        mov    eax, dword ptr [esp + 0x6c]
        push    ebp
        push    0
        push    0x7b8d88
        push    edx
        mov    dword ptr [esp + 0x48], ecx
        push    eax
        lea    ecx, [esp + 0x3c]
        push    ecx
        mov    ecx, ebx
        call    FUN_005ef680
        mov    ebp, dword ptr [esp + 0xcc]
        mov    ecx, dword ptr [g_007b8d90]
        mov    edx, dword ptr [g_007b8d88]
        mov    eax, dword ptr [g_007b8d8c]
        lea    edi, [ebp + 0x24]
        mov    dword ptr [edi + 8], ecx
        lea    ecx, [ebp + 0x1c]
        mov    dword ptr [edi], edx
        mov    dword ptr [edi + 4], eax
        call    FUN_0041fd80
        test    eax, eax
        je    L_1e26
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        lea    ecx, [ebp + 0x1c]
        mov    dword ptr [esp + 0x10], eax
        call    FUN_0041fd80
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx + 0x1c]
        xor    edx, 0x85739531
        cmp    eax, edx
        je    L_1e26
        lea    ecx, [ebp + 0x1c]
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xd8]
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx + 0x30]
        add    eax, 0x80
        mov    dword ptr [esp + 0x10], eax
        add    ecx, 0x18
        lea    eax, [esp + 0x20]
        push    eax
        push    edx
        call    FUN_004e8dc0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_0040c5d0
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        lea    edx, [esp + 0x18]
        push    edx
        mov    ecx, edi
        call    FUN_0041c830
        jmp    L_1e5b
L_1e26:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [ecx + 0x30]
        add    ecx, 0x18
        lea    eax, [esp + 0x20]
        push    eax
        push    edx
        call    FUN_004e8dc0
        lea    eax, [esp + 0x20]
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_0040c5d0
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        mov    dword ptr [edi], ecx
        mov    dword ptr [edi + 4], edx
        mov    dword ptr [edi + 8], eax
L_1e5b:
        mov    esi, dword ptr [ebx + 0x184]
        fld    qword ptr [esp + 0x70]
        mov    edi, dword ptr [ebp + 0x10]
        fstp    dword ptr [ebp + 0x30]
        mov    eax, dword ptr [g_007f2548]
        mov    ecx, esi
        mov    edx, 1
        shl    edx, cl
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        or    edi, edx
        mov    dword ptr [ebp + 0x10], edi
        call    FUN_00415230
        cmp    al, 1
        jne    L_1e95
        mov    eax, dword ptr [ebx + 0x224]
        mov    dword ptr [ebp + esi*4 + 0x34], eax
L_1e95:
        pop    ebp
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0xb4
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
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        push    edi
        mov    ecx, ebx
        call    FUN_005ef7e0
        fstp    dword ptr [esp + 0x10]
        mov    edi, dword ptr [esi + 4]
        mov    al, byte ptr [edi + 0x3d]
        test    al, al
        jne    L_1ee7
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1ee7
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    8
L_1ee7:
        mov    al, byte ptr [g_0080db04]
        test    al, al
        je    L_1f30
        mov    eax, dword ptr [g_007f2070]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        je    L_1f30
        fld    dword ptr [edi + 0x2c]
        fadd    dword ptr [esi + 8]
        fadd    dword ptr [esp + 0x10]
        fld    dword ptr [edi + 0x30]
        fmul    dword ptr [g_0077431c]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_1f26
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    8
L_1f26:
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [esi + 8]
        fstp    dword ptr [esi + 8]
L_1f30:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f2070]
        push    esi
        mov    esi, dword ptr [esp + 8]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        je    L_1f89
        mov    eax, dword ptr [esi + 0x78]
        add    esi, 0x78
        mov    ecx, esi
        call    dword ptr [eax + 4]
        test    eax, eax
        je    L_1f89
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        fld    dword ptr [eax + 0x5c]
        mov    ecx, dword ptr [edi + 4]
        mov    edx, dword ptr [ecx]
        fcomp    dword ptr [edx + 0x30]
        fnstsw  ax
        test    ah, 0x41
        jne    L_1f89
        pop    edi
        mov    al, 1
        pop    esi
        ret    8
L_1f89:
        pop    edi
        xor    al, al
        pop    esi
        ret    8
        mov    eax, dword ptr [g_007f268c]
        push    ebx
        push    esi
        mov    esi, dword ptr [ecx + 4]
        push    edi
        mov    edi, dword ptr [esi]
        mov    ebx, dword ptr [edi + 0x40]
        mov    ecx, dword ptr [ebx + 4]
        push    eax
        call    FUN_00415230
        cmp    al, 1
        jne    L_1fd5
        mov    eax, dword ptr [esi + 4]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ebx
        push    ecx
        call    FUN_00682d20
        fstp    dword ptr [esp]
        add    edi, 0x18
        push    edi
        call    FUN_006832a0
        add    esp, 0x10
        cmp    al, 1
        jne    L_1fd5
        pop    edi
        pop    esi
        pop    ebx
        ret    8
L_1fd5:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        ret    8
    }
}
