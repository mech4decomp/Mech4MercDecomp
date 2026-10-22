/*
 * FUN_005b2c7b (extent 0x5b2c7b-0x5b2f1c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0077de8c;
extern float  g_007860d0;
extern int    g_007b220c;
extern int    g_0080da54;
extern int    g_0080da58;
extern int    g_0080da5c;
extern int    g_0080da60;
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_007047f0(void);

__declspec(naked) void FUN_005b2c7b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0x6e0]
        test    al, al
        je    L_2c8f
        mov    al, 1
        ret    4
L_2c8f:
        mov    al, byte ptr [ecx + 0x6d1]
        test    al, al
        jne    L_2cb8
        mov    al, byte ptr [ecx + 0x6d0]
        test    al, al
        jne    L_2cb8
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x1e8]
        neg    al
        sbb    eax, eax
        inc    eax
        ret    4
L_2cb8:
        xor    al, al
        ret    4
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0x10
        mov    eax, dword ptr [g_007b220c]
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        push    eax
        lea    ecx, [ebp - 0x10]
        push    ecx
        lea    esi, [edi + 0x6e4]
        push    esi
        mov    dword ptr [ebp - 0x10], 0xbf800000
        mov    dword ptr [ebp - 0xc], 0xbf800000
        mov    dword ptr [ebp - 8], 0xbf800000
        call    FUN_0041c540
        mov    ebx, dword ptr [ebp + 8]
        add    esp, 0xc
        test    al, al
        jne    L_2d0b
        mov    edx, dword ptr [edi]
        push    ebx
        mov    ecx, edi
        call    dword ptr [edx + 0x1e4]
L_2d0b:
        cmp    byte ptr [edi + 0x6e0], 1
        je    L_2d39
        mov    eax, dword ptr [edi + 0x364]
        test    eax, eax
        jne    L_2f13
        fld    dword ptr [edi + 0x3b8]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_2f13
L_2d39:
        mov    eax, dword ptr [g_007b220c]
        push    eax
        lea    ecx, [ebp - 0x10]
        push    ecx
        push    esi
        mov    dword ptr [ebp - 0x10], 0xbf800000
        mov    dword ptr [ebp - 0xc], 0xbf800000
        mov    dword ptr [ebp - 8], 0xbf800000
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_2e1a
        mov    ecx, dword ptr [edi + 0x364]
        test    ecx, ecx
        je    L_2e1a
        mov    edx, dword ptr [edi + 0x170]
        mov    eax, dword ptr [edx + 0xd8]
        fld    dword ptr [eax + 0x8c]
        add    eax, 0x80
        fld    dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [ebp - 8], eax
        fst    dword ptr [ebp - 0xc]
        mov    al, byte ptr [ecx + 0x1a]
        fstp    dword ptr [edi + 0x6e8]
        cmp    al, 1
        je    L_2df1
        fsubr    dword ptr [esi]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [ebp - 0xc]
        fld    dword ptr [esi + 8]
        fsub    dword ptr [ebp - 8]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    dword ptr [ebp + 8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    eax, dword ptr [ebp + 8]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 4], eax
        fld    dword ptr [ebp - 4]
        fcomp    dword ptr [g_0077de8c]
        fnstsw  ax
        test    ah, 1
        je    L_2f13
        jmp    L_2df3
L_2df1:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_2df3:
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x1c4]
        mov    eax, 0xbf800000
        mov    byte ptr [edi + 0x6e0], 0
        pop    edi
        mov    dword ptr [esi], eax
        mov    dword ptr [esi + 4], eax
        mov    dword ptr [esi + 8], eax
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
L_2e1a:
        fld    dword ptr [ebx]
        mov    eax, dword ptr [ebx + 4]
        fst    dword ptr [ebp + 8]
        mov    dword ptr [esi + 4], eax
        fstp    dword ptr [esi]
        fld    dword ptr [ebx + 8]
        fst    dword ptr [ebp - 4]
        fstp    dword ptr [esi + 8]
        call    FUN_007047f0
        and    eax, 3
        cmp    eax, 3
        ja    L_2e92
        jmp    dword ptr [eax*4 + 0x5b2f1c]
        fld    dword ptr [ebp + 8]
        fadd    dword ptr [g_007860d0]
        fstp    dword ptr [esi]
        fld    dword ptr [ebp - 4]
        fadd    dword ptr [g_007860d0]
        jmp    L_2e8f
        fld    dword ptr [ebp + 8]
        fsub    dword ptr [g_007860d0]
        fstp    dword ptr [esi]
        fld    dword ptr [ebp - 4]
        fadd    dword ptr [g_007860d0]
        jmp    L_2e8f
        fld    dword ptr [ebp + 8]
        fadd    dword ptr [g_007860d0]
        jmp    L_2e84
        fld    dword ptr [ebp + 8]
        fsub    dword ptr [g_007860d0]
L_2e84:
        fstp    dword ptr [esi]
        fld    dword ptr [ebp - 4]
        fsub    dword ptr [g_007860d0]
L_2e8f:
        fstp    dword ptr [esi + 8]
L_2e92:
        fld    dword ptr [esi]
        fcomp    dword ptr [g_0080da60]
        fnstsw  ax
        test    ah, 1
        je    L_2eab
        mov    ecx, dword ptr [g_0080da60]
        mov    dword ptr [esi], ecx
        jmp    L_2ec2
L_2eab:
        fld    dword ptr [esi]
        fcomp    dword ptr [g_0080da58]
        fnstsw  ax
        test    ah, 0x41
        jne    L_2ec2
        mov    edx, dword ptr [g_0080da58]
        mov    dword ptr [esi], edx
L_2ec2:
        fld    dword ptr [esi + 8]
        fcomp    dword ptr [g_0080da5c]
        fnstsw  ax
        test    ah, 1
        je    L_2edc
        mov    eax, dword ptr [g_0080da5c]
        mov    dword ptr [esi + 8], eax
        jmp    L_2ef5
L_2edc:
        fld    dword ptr [esi + 8]
        fcomp    dword ptr [g_0080da54]
        fnstsw  ax
        test    ah, 0x41
        jne    L_2ef5
        mov    ecx, dword ptr [g_0080da54]
        mov    dword ptr [esi + 8], ecx
L_2ef5:
        mov    edx, dword ptr [edi]
        mov    ecx, edi
        call    dword ptr [edx + 0x1c4]
        mov    eax, dword ptr [edi]
        push    0
        push    1
        push    0x3e8
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x1bc]
L_2f13:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
        // jump-table data @ 0x005B2F1C (0 relocated pointers)
    }
}
