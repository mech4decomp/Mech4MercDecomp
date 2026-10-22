/*
 * FUN_00420ae1 (extent 0x420ae1-0x4210fd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern float  g_0076d070;
extern int    g_007b220c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00420d80(void);
extern void __cdecl FUN_00421100(void);

__declspec(naked) void FUN_00420ae1(void)
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
        nop    
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        fcomp    dword ptr [esi]
        fnstsw  ax
        test    ah, 1
        je    L_0b08
        fld    dword ptr [edx]
        jmp    L_0b0a
L_0b08:
        fld    dword ptr [esi]
L_0b0a:
        fstp    dword ptr [ecx]
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0b1d
        fld    dword ptr [edx + 4]
        jmp    L_0b1f
L_0b1d:
        fld    dword ptr [esi]
L_0b1f:
        fstp    dword ptr [ecx + 4]
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [esi + 4]
        fnstsw  ax
        test    ah, 1
        je    L_0b34
        fld    dword ptr [edx + 8]
        jmp    L_0b37
L_0b34:
        fld    dword ptr [esi + 4]
L_0b37:
        fstp    dword ptr [ecx + 8]
        fld    dword ptr [edx + 0xc]
        fcomp    dword ptr [esi + 4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0b4c
        fld    dword ptr [edx + 0xc]
        jmp    L_0b4f
L_0b4c:
        fld    dword ptr [esi + 4]
L_0b4f:
        fstp    dword ptr [ecx + 0xc]
        fld    dword ptr [edx + 0x10]
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 1
        je    L_0b64
        fld    dword ptr [edx + 0x10]
        jmp    L_0b67
L_0b64:
        fld    dword ptr [esi + 8]
L_0b67:
        fstp    dword ptr [ecx + 0x10]
        fld    dword ptr [edx + 0x14]
        fcomp    dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0b83
        fld    dword ptr [edx + 0x14]
        mov    eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop    esi
        ret    8
L_0b83:
        fld    dword ptr [esi + 8]
        mov    eax, ecx
        fstp    dword ptr [ecx + 0x14]
        pop    esi
        ret    8
        nop    
        mov    edx, dword ptr [esp + 4]
        fld    dword ptr [edx]
        fcomp    dword ptr [ecx]
        fnstsw  ax
        test    ah, 1
        je    L_0ba3
        mov    eax, dword ptr [ecx]
        jmp    L_0bb2
L_0ba3:
        fld    dword ptr [edx]
        fcomp    dword ptr [ecx + 4]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0bb4
        mov    eax, dword ptr [ecx + 4]
L_0bb2:
        mov    dword ptr [edx], eax
L_0bb4:
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [ecx + 8]
        fnstsw  ax
        test    ah, 1
        je    L_0bc6
        mov    eax, dword ptr [ecx + 8]
        jmp    L_0bd6
L_0bc6:
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [ecx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0bd9
        mov    eax, dword ptr [ecx + 0xc]
L_0bd6:
        mov    dword ptr [edx + 4], eax
L_0bd9:
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [ecx + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_0bf1
        mov    ecx, dword ptr [ecx + 0x10]
        mov    dword ptr [edx + 8], ecx
        mov    eax, edx
        ret    4
L_0bf1:
        fld    dword ptr [edx + 8]
        fcomp    dword ptr [ecx + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0c04
        mov    eax, dword ptr [ecx + 0x14]
        mov    dword ptr [edx + 8], eax
L_0c04:
        mov    eax, edx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        je    L_0c67
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 1
        jne    L_0c67
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_0c67
        fld    dword ptr [ecx + 0xc]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 1
        jne    L_0c67
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_0c67
        fld    dword ptr [ecx + 0x14]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_0c67
        mov    eax, 1
        ret    4
L_0c67:
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 0x41
        je    L_0cc8
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 1
        jne    L_0cc8
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_0cc8
        fld    dword ptr [ecx + 0xc]
        fcomp    dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 1
        jne    L_0cc8
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [edx + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_0cc8
        fld    dword ptr [ecx + 0x14]
        fcomp    dword ptr [edx + 0x14]
        fnstsw  ax
        test    ah, 1
        jne    L_0cc8
        mov    eax, 1
        ret    4
L_0cc8:
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        fld    dword ptr [ecx]
        mov    edx, dword ptr [esp + 4]
        fcomp    dword ptr [edx + 4]
        fnstsw  ax
        test    ah, 0x41
        je    L_0d28
        fld    dword ptr [ecx + 4]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 1
        jne    L_0d28
        fld    dword ptr [ecx + 8]
        fcomp    dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        je    L_0d28
        fld    dword ptr [ecx + 0xc]
        fcomp    dword ptr [edx + 8]
        fnstsw  ax
        test    ah, 1
        jne    L_0d28
        fld    dword ptr [ecx + 0x10]
        fcomp    dword ptr [edx + 0x14]
        fnstsw  ax
        test    ah, 0x41
        je    L_0d28
        fld    dword ptr [ecx + 0x14]
        fcomp    dword ptr [edx + 0x10]
        fnstsw  ax
        test    ah, 1
        jne    L_0d28
        mov    eax, 1
        ret    4
L_0d28:
        xor    eax, eax
        ret    4
        nop    
        nop    
        nop    
        fld    dword ptr [ecx + 4]
        mov    eax, dword ptr [esp + 4]
        fadd    dword ptr [ecx]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [eax]
        fld    dword ptr [ecx + 0xc]
        fadd    dword ptr [ecx + 8]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ecx + 0x14]
        fadd    dword ptr [ecx + 0x10]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [eax + 8]
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
        nop    
        nop    
        nop    
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
        nop    
        nop    
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [eax]
        push    ebx
        push    esi
        xor    ebx, ebx
        test    edx, edx
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        jbe    L_0dcc
        mov    esi, dword ptr [edi]
L_0d95:
        lea    ecx, [edx + ebx - 1]
        shr    ecx, 1
        fld    dword ptr [esi + ecx*4]
        fsub    dword ptr [esp + 0x14]
        fabs    
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0e8c
        fld    dword ptr [esi + ecx*4]
        fcomp    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 0x41
        jne    L_0dc5
        mov    edx, ecx
        jmp    L_0dc8
L_0dc5:
        lea    ebx, [ecx + 1]
L_0dc8:
        cmp    edx, ebx
        ja    L_0d95
L_0dcc:
        mov    ecx, dword ptr [esp + 0x18]
        mov    esi, dword ptr [edi + 4]
        push    ebp
        mov    ebp, dword ptr [ecx]
        cmp    ebp, esi
        jne    L_0e53
        mov    edx, dword ptr [esp + 0x20]
        add    ebp, edx
        cmp    ebp, esi
        je    L_0e53
        test    ebp, ebp
        jbe    L_0e3f
        lea    eax, [ebp*4]
        push    eax
        call    FUN_004084d0
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx]
        add    esp, 4
        test    edx, edx
        mov    edi, eax
        je    L_0e35
        cmp    ebp, esi
        mov    ecx, ebp
        jb    L_0e0c
        mov    ecx, esi
L_0e0c:
        mov    eax, ecx
        dec    ecx
        test    eax, eax
        je    L_0e26
        lea    eax, [edi + ecx*4]
        sub    edx, edi
        inc    ecx
L_0e19:
        mov    esi, dword ptr [edx + eax]
        mov    dword ptr [eax], esi
        dec    ecx
        sub    eax, 4
        test    ecx, ecx
        ja    L_0e19
L_0e26:
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [ecx]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_0e35:
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edx], edi
        mov    edi, edx
        jmp    L_0e50
L_0e3f:
        mov    eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [edi], 0
L_0e50:
        mov    dword ptr [edi + 4], ebp
L_0e53:
        mov    ecx, dword ptr [esp + 0x1c]
        mov    esi, dword ptr [ecx]
        mov    eax, esi
        sub    eax, ebx
        pop    ebp
        je    L_0e7c
        mov    ecx, dword ptr [edi]
        lea    edx, [eax*4]
        push    edx
        lea    eax, [ecx + ebx*4]
        push    eax
        lea    ecx, [ecx + ebx*4 + 4]
        push    ecx
        call    dword ptr [g_0076b28c]
        add    esp, 0xc
L_0e7c:
        mov    edx, dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x14]
        mov    eax, dword ptr [edi]
        inc    esi
        fstp    dword ptr [eax + ebx*4]
        mov    dword ptr [edx], esi
L_0e8c:
        pop    edi
        pop    esi
        pop    ebx
        ret    
        sub    esp, 0x28
        mov    ecx, dword ptr [esp + 0x30]
        mov    eax, dword ptr [ecx + 4]
        push    ebx
        xor    ebx, ebx
        cmp    eax, ebx
        push    esi
        push    edi
        mov    dword ptr [esp + 0x2c], ebx
        mov    dword ptr [esp + 0x30], ebx
        mov    dword ptr [esp + 0x24], ebx
        mov    dword ptr [esp + 0x28], ebx
        mov    dword ptr [esp + 0x1c], ebx
        mov    dword ptr [esp + 0x20], ebx
        mov    dword ptr [esp + 0xc], ebx
        mov    dword ptr [esp + 0x10], ebx
        mov    dword ptr [esp + 0x14], ebx
        jbe    L_0f84
        mov    esi, dword ptr [ecx]
        mov    edi, eax
L_0ecf:
        mov    eax, dword ptr [g_007b220c]
        mov    edx, dword ptr [esi]
        push    eax
        push    0xa
        lea    ecx, [esp + 0x14]
        push    ecx
        push    edx
        lea    eax, [esp + 0x3c]
        push    eax
        call    FUN_00420d80
        mov    ecx, dword ptr [g_007b220c]
        mov    eax, dword ptr [esi + 4]
        push    ecx
        push    0xa
        lea    edx, [esp + 0x28]
        push    edx
        push    eax
        lea    ecx, [esp + 0x50]
        push    ecx
        call    FUN_00420d80
        mov    edx, dword ptr [g_007b220c]
        mov    ecx, dword ptr [esi + 8]
        push    edx
        push    0xa
        lea    eax, [esp + 0x40]
        push    eax
        push    ecx
        lea    edx, [esp + 0x5c]
        push    edx
        call    FUN_00420d80
        mov    eax, dword ptr [g_007b220c]
        mov    edx, dword ptr [esi + 0xc]
        push    eax
        push    0xa
        lea    ecx, [esp + 0x54]
        push    ecx
        push    edx
        lea    eax, [esp + 0x70]
        push    eax
        call    FUN_00420d80
        mov    ecx, dword ptr [g_007b220c]
        mov    eax, dword ptr [esi + 0x10]
        add    esp, 0x50
        push    ecx
        push    0xa
        lea    edx, [esp + 0x1c]
        push    edx
        push    eax
        lea    ecx, [esp + 0x2c]
        push    ecx
        call    FUN_00420d80
        mov    edx, dword ptr [g_007b220c]
        mov    ecx, dword ptr [esi + 0x14]
        push    edx
        push    0xa
        lea    eax, [esp + 0x30]
        push    eax
        push    ecx
        lea    edx, [esp + 0x40]
        push    edx
        call    FUN_00420d80
        add    esp, 0x28
        add    esi, 0x18
        dec    edi
        jne    L_0ecf
L_0f84:
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x38]
        mov    edi, dword ptr [esi + 4]
        push    ebp
        lea    ebp, [eax + ecx]
        add    ebp, dword ptr [esp + 0x10]
        cmp    ebp, edi
        je    L_1043
        cmp    ebp, ebx
        jbe    L_1033
        mov    edx, ebp
        shl    edx, 4
        push    edx
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebx
        je    L_0fcc
        lea    ecx, [ebp - 1]
        mov    edx, eax
        mov    dword ptr [esp + 0x40], ecx
        mov    dword ptr [esp + 0x40], edx
        jmp    L_0fd2
L_0fcc:
        mov    dword ptr [esp + 0x40], ebx
        mov    edx, ebx
L_0fd2:
        mov    ecx, dword ptr [esi]
        cmp    ecx, ebx
        je    L_102f
        cmp    ebp, edi
        jae    L_0fde
        mov    edi, ebp
L_0fde:
        mov    eax, edi
        dec    edi
        test    eax, eax
        je    L_1020
        mov    eax, edi
        shl    eax, 4
        lea    esi, [eax + edx]
        lea    ebx, [eax + ecx + 0xc]
        mov    eax, ecx
        sub    eax, edx
        mov    dword ptr [esp + 0x1c], eax
        inc    edi
        jmp    L_1000
L_0ffc:
        mov    eax, dword ptr [esp + 0x1c]
L_1000:
        add    eax, esi
        push    eax
        mov    ecx, esi
        call    FUN_00421100
        mov    ecx, dword ptr [ebx]
        mov    dword ptr [esi + 0xc], ecx
        dec    edi
        sub    ebx, 0x10
        sub    esi, 0x10
        test    edi, edi
        ja    L_0ffc
        mov    esi, dword ptr [esp + 0x3c]
        xor    ebx, ebx
L_1020:
        mov    eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        mov    edx, dword ptr [esp + 0x44]
        add    esp, 4
L_102f:
        mov    dword ptr [esi], edx
        jmp    L_1040
L_1033:
        mov    edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [esi], ebx
L_1040:
        mov    dword ptr [esi + 4], ebp
L_1043:
        mov    eax, dword ptr [esi]
        mov    esi, dword ptr [esp + 0x10]
        xor    ecx, ecx
        cmp    esi, ebx
        mov    edx, 0x3f800000
        pop    ebp
        jbe    L_1073
L_1055:
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 4], ebx
        mov    dword ptr [eax + 8], ebx
        mov    esi, dword ptr [esp + 0x2c]
        mov    esi, dword ptr [esi + ecx*4]
        mov    dword ptr [eax + 0xc], esi
        mov    esi, dword ptr [esp + 0xc]
        add    eax, 0x10
        inc    ecx
        cmp    ecx, esi
        jb    L_1055
L_1073:
        mov    esi, dword ptr [esp + 0x10]
        xor    ecx, ecx
        cmp    esi, ebx
        jbe    L_109b
L_107d:
        mov    dword ptr [eax], ebx
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ebx
        mov    esi, dword ptr [esp + 0x24]
        mov    esi, dword ptr [esi + ecx*4]
        mov    dword ptr [eax + 0xc], esi
        mov    esi, dword ptr [esp + 0x10]
        add    eax, 0x10
        inc    ecx
        cmp    ecx, esi
        jb    L_107d
L_109b:
        mov    esi, dword ptr [esp + 0x14]
        xor    ecx, ecx
        cmp    esi, ebx
        jbe    L_10c3
L_10a5:
        mov    dword ptr [eax], ebx
        mov    dword ptr [eax + 4], ebx
        mov    dword ptr [eax + 8], edx
        mov    esi, dword ptr [esp + 0x1c]
        mov    esi, dword ptr [esi + ecx*4]
        mov    dword ptr [eax + 0xc], esi
        mov    esi, dword ptr [esp + 0x14]
        add    eax, 0x10
        inc    ecx
        cmp    ecx, esi
        jb    L_10a5
L_10c3:
        mov    eax, dword ptr [esp + 0x1c]
        cmp    eax, ebx
        je    L_10d4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_10d4:
        mov    eax, dword ptr [esp + 0x24]
        cmp    eax, ebx
        je    L_10e5
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_10e5:
        mov    eax, dword ptr [esp + 0x2c]
        pop    edi
        pop    esi
        cmp    eax, ebx
        pop    ebx
        je    L_10f9
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_10f9:
        add    esp, 0x28
        ret    
    }
}
