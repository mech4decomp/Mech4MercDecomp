/*
 * FUN_0060477b (extent 0x60477b-0x604dca) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d598;
extern float  g_007b220c;
extern void __cdecl FUN_00604ba0(void);

__declspec(naked) void FUN_0060477b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [esp + 4]
        sub    esp, 0x10
        fcomp    dword ptr [g_0076c5b0]
        push    ebx
        push    edi
        mov    ebx, ecx
        fnstsw  ax
        test    ah, 0x41
        jne    L_4909
        fld    dword ptr [esp + 0x1c]
        mov    edi, dword ptr [esp + 0x20]
        test    edi, edi
        fadd    dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x1c]
        jne    L_4827
        mov    byte ptr [ebx + 0x28], 0
L_47b2:
        mov    eax, dword ptr [ebx + 0x20]
        test    eax, eax
        push    esi
        mov    byte ptr [esp + 0xf], 0
        mov    dword ptr [esp + 0x10], 0x4cbebc20
        jle    L_48d4
        mov    ecx, dword ptr [ebx + 0x24]
        shl    ecx, 2
        push    ebp
        mov    ebp, dword ptr [ebx + 0x10]
        mov    dword ptr [esp + 0x18], ecx
        mov    dword ptr [esp + 0x1c], eax
L_47dd:
        mov    eax, dword ptr [ebp + 0x30]
        mov    esi, dword ptr [ecx + eax]
        mov    ecx, dword ptr [esi + 8]
        cmp    ecx, 1
        jne    L_483b
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esi]
        push    ecx
        push    edx
        push    ebp
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        test    al, al
        je    L_48a8
        fld    dword ptr [esi + 0x24]
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        je    L_489d
        fstp    dword ptr [esp + 0x14]
        mov    dword ptr [esi + 8], 2
        jmp    L_48ad
L_4827:
        cmp    edi, 4
        jle    L_47b2
        mov    ecx, ebx
        call    FUN_00604ba0
        pop    edi
        pop    ebx
        add    esp, 0x10
        ret    0xc
L_483b:
        test    ecx, ecx
        jne    L_48ad
        mov    ecx, dword ptr [esi + 0xc]
        cmp    ecx, -1
        je    L_48ad
        mov    edx, dword ptr [ebx + 0x24]
        add    ecx, edx
        mov    edi, dword ptr [eax + ecx*4]
        cmp    dword ptr [edi + 8], 2
        jne    L_48ad
        mov    ecx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esi]
        push    ecx
        push    0
        mov    ecx, esi
        mov    dword ptr [esi + 8], 1
        call    dword ptr [eax + 4]
        fld    dword ptr [edi + 0x24]
        mov    eax, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esi]
        push    eax
        push    ecx
        fstp    dword ptr [esp]
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        test    al, al
        je    L_48a8
        fld    dword ptr [esi + 0x24]
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        je    L_489d
        fstp    dword ptr [esp + 0x14]
        mov    dword ptr [esi + 8], 2
        jmp    L_48ad
L_489d:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esi + 8], 2
        jmp    L_48ad
L_48a8:
        mov    byte ptr [esp + 0x13], 1
L_48ad:
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x18], ecx
        mov    dword ptr [esp + 0x1c], eax
        jne    L_47dd
        mov    al, byte ptr [esp + 0x13]
        test    al, al
        pop    ebp
        jne    L_4901
        mov    edi, dword ptr [esp + 0x24]
L_48d4:
        mov    esi, dword ptr [esp + 0x28]
        mov    edx, dword ptr [ebx]
        push    esi
        push    0xbf800000
        push    0
        mov    ecx, ebx
        call    dword ptr [edx + 0x18]
        mov    al, byte ptr [ebx + 0x29]
        test    al, al
        je    L_48fd
        mov    ecx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [ebx]
        push    esi
        inc    edi
        push    edi
        push    ecx
        mov    ecx, ebx
        call    dword ptr [eax + 0x1c]
L_48fd:
        mov    byte ptr [ebx + 0x28], 1
L_4901:
        mov    ecx, ebx
        call    FUN_00604ba0
        pop    esi
L_4909:
        pop    edi
        pop    ebx
        add    esp, 0x10
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        mov    eax, dword ptr [esp + 0x18]
        test    eax, eax
        push    ebx
        push    edi
        mov    edi, ecx
        mov    dword ptr [esp + 0xc], edi
        jne    L_4937
        mov    byte ptr [edi + 0x28], 0
L_4937:
        mov    eax, dword ptr [edi + 0x20]
        test    eax, eax
        mov    ebx, dword ptr [esp + 0x24]
        mov    byte ptr [esp + 0x20], 0
        mov    dword ptr [esp + 8], 0x4cbebc20
        jle    L_4a54
        mov    edx, dword ptr [edi + 0x24]
        push    ebp
        mov    ebp, dword ptr [edi + 0x10]
        lea    ecx, [edx*4]
        push    esi
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x2c], ecx
        mov    dword ptr [esp + 0x18], eax
        jmp    L_4974
L_4970:
        mov    edx, dword ptr [esp + 0x1c]
L_4974:
        mov    ecx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [ebp + 0x30]
        mov    esi, dword ptr [ecx + eax]
        mov    ecx, dword ptr [esi + 8]
        cmp    ecx, 1
        jne    L_49c5
        mov    eax, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esi]
        push    ebx
        push    eax
        push    ebp
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        test    al, al
        je    L_49be
        fld    dword ptr [esi + 0x24]
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_49b3
        fstp    dword ptr [esp + 0x10]
        mov    dword ptr [esi + 8], 2
        jmp    L_4a30
L_49b3:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esi + 8], 2
        jmp    L_4a30
L_49be:
        mov    byte ptr [esp + 0x28], 1
        jmp    L_4a30
L_49c5:
        test    ecx, ecx
        jne    L_4a30
        mov    ecx, dword ptr [esi + 0xc]
        cmp    ecx, -1
        je    L_4a30
        add    ecx, edx
        mov    edi, dword ptr [eax + ecx*4]
        cmp    dword ptr [edi + 8], 2
        jne    L_4a2c
        mov    edx, dword ptr [esi]
        push    ebx
        push    0
        mov    ecx, esi
        mov    dword ptr [esi + 8], 1
        call    dword ptr [edx + 4]
        fld    dword ptr [edi + 0x24]
        mov    eax, dword ptr [esi]
        push    ebx
        push    ecx
        fstp    dword ptr [esp]
        push    ebp
        mov    ecx, esi
        call    dword ptr [eax + 0x10]
        test    al, al
        je    L_4a27
        fld    dword ptr [esi + 0x24]
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_4a1c
        fstp    dword ptr [esp + 0x10]
        mov    dword ptr [esi + 8], 2
        jmp    L_4a2c
L_4a1c:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esi + 8], 2
        jmp    L_4a2c
L_4a27:
        mov    byte ptr [esp + 0x28], 1
L_4a2c:
        mov    edi, dword ptr [esp + 0x14]
L_4a30:
        mov    ecx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esp + 0x18]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x2c], ecx
        mov    dword ptr [esp + 0x18], eax
        jne    L_4970
        mov    al, byte ptr [esp + 0x28]
        test    al, al
        pop    esi
        pop    ebp
        jne    L_4a63
L_4a54:
        mov    edx, dword ptr [edi]
        push    ebx
        push    0xbf800000
        push    0
        mov    ecx, edi
        call    dword ptr [edx + 0x18]
L_4a63:
        mov    ecx, edi
        call    FUN_00604ba0
        pop    edi
        pop    ebx
        add    esp, 0x10
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
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
        fld    dword ptr [esp + 0x18]
        push    edi
        mov    edi, ecx
        fadd    dword ptr [edi + 0x1c]
        mov    eax, dword ptr [edi + 0x20]
        test    eax, eax
        mov    dword ptr [esp + 0xc], edi
        fstp    dword ptr [edi + 0x1c]
        mov    dword ptr [esp + 4], 0x4cbebc20
        jle    L_4b86
        mov    ecx, dword ptr [edi + 0x24]
        push    ebx
        mov    ebx, dword ptr [edi + 0x10]
        push    ebp
        mov    ebp, dword ptr [esp + 0x2c]
        mov    dword ptr [esp + 0x1c], ecx
        shl    ecx, 2
        push    esi
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x1c], eax
L_4ac3:
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [ebx + 0x30]
        mov    esi, dword ptr [eax + edx]
        cmp    dword ptr [esi + 8], 1
        jne    L_4b02
        mov    eax, dword ptr [esp + 0x28]
        mov    edx, dword ptr [esi]
        push    ebp
        push    eax
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        test    al, al
        je    L_4b02
        fld    dword ptr [esi + 0x24]
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_4af9
        fstp    dword ptr [esp + 0x10]
        jmp    L_4afb
L_4af9:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_4afb:
        mov    dword ptr [esi + 8], 2
L_4b02:
        mov    eax, dword ptr [esi + 8]
        test    eax, eax
        jne    L_4b69
        mov    eax, dword ptr [esi + 0xc]
        cmp    eax, -1
        je    L_4b69
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [ebx + 0x30]
        add    eax, ecx
        mov    edi, dword ptr [edx + eax*4]
        cmp    dword ptr [edi + 8], 2
        jne    L_4b65
        mov    eax, dword ptr [esi]
        push    ebp
        push    0
        mov    ecx, esi
        mov    dword ptr [esi + 8], 1
        call    dword ptr [eax + 4]
        fld    dword ptr [edi + 0x24]
        mov    edx, dword ptr [esi]
        push    ebp
        push    ecx
        fstp    dword ptr [esp]
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x10]
        test    al, al
        je    L_4b65
        fld    dword ptr [esi + 0x24]
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_4b5c
        fstp    dword ptr [esp + 0x10]
        jmp    L_4b5e
L_4b5c:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_4b5e:
        mov    dword ptr [esi + 8], 2
L_4b65:
        mov    edi, dword ptr [esp + 0x18]
L_4b69:
        mov    ecx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x1c]
        add    ecx, 4
        dec    eax
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x1c], eax
        jne    L_4ac3
        pop    esi
        pop    ebp
        pop    ebx
L_4b86:
        mov    ecx, edi
        call    FUN_00604ba0
        pop    edi
        add    esp, 0x14
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
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    edi
        mov    edi, ecx
        fld    dword ptr [edi + 0x1c]
        mov    dword ptr [esp + 0xc], 0
        fsub    dword ptr [edi + 0x18]
        mov    dword ptr [esp + 0x10], 0
        fst    dword ptr [esp + 4]
        fabs    
        fld    dword ptr [g_007b220c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_4bdd
        mov    dword ptr [edi + 0x2c], 0
        pop    edi
        add    esp, 0x10
        ret    
L_4bdd:
        mov    eax, dword ptr [edi + 0x20]
        test    eax, eax
        mov    dl, 1
        jle    L_4c49
        mov    ecx, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [ecx + 0x30]
        push    ebp
        push    esi
        mov    esi, dword ptr [edi + 0x24]
        lea    esi, [ecx + esi*4]
        mov    ebp, eax
L_4bf6:
        mov    ecx, dword ptr [esi]
        cmp    dword ptr [ecx + 8], 1
        jne    L_4c3d
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x18]
        fst    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jne    L_4c3b
        fld    dword ptr [esp + 0xc]
        fdiv    dword ptr [esp + 0x10]
        fsub    dword ptr [esp + 0xc]
        fcom    dword ptr [esp + 0x14]
        fnstsw  ax
        test    ah, 1
        jne    L_4c39
        mov    eax, dword ptr [esp + 0x10]
        fstp    dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x18], eax
        jmp    L_4c3b
L_4c39:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_4c3b:
        xor    dl, dl
L_4c3d:
        add    esi, 4
        dec    ebp
        jne    L_4bf6
        test    dl, dl
        pop    esi
        pop    ebp
        je    L_4c55
L_4c49:
        mov    dword ptr [edi + 0x2c], 0x3f800000
        pop    edi
        add    esp, 0x10
        ret    
L_4c55:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x2c], ecx
        pop    edi
        add    esp, 0x10
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
        push    ebx
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x20]
        xor    ecx, ecx
        xor    ebx, ebx
        cmp    eax, ecx
        mov    byte ptr [edi + 0x28], 0
        jle    L_4d35
        push    ebp
        mov    ebp, dword ptr [esp + 0x18]
        push    esi
        jmp    L_4c91
L_4c8f:
        xor    ecx, ecx
L_4c91:
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [edi + 0x24]
        mov    edx, dword ptr [edi + 0x10]
        fcomp    dword ptr [g_0076d598]
        mov    edx, dword ptr [edx + 0x30]
        add    eax, ebx
        mov    esi, dword ptr [edx + eax*4]
        fnstsw  ax
        test    ah, 0x40
        jne    L_4cfb
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [esi + 0x28]
        fnstsw  ax
        test    ah, 1
        jne    L_4d24
        fld    dword ptr [esi + 0x2c]
        fadd    dword ptr [esi + 0x28]
        fcomp    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        jne    L_4d24
        fld    dword ptr [esp + 0x18]
        mov    eax, dword ptr [esi]
        fsub    dword ptr [esi + 0x28]
        push    ebp
        push    ecx
        mov    ecx, esi
        fdiv    dword ptr [esi + 0x2c]
        mov    dword ptr [esi + 8], 1
        fstp    dword ptr [esp]
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x20]
        mov    dword ptr [edi + 0x1c], ecx
        mov    ecx, edi
        call    FUN_00604ba0
        jmp    L_4d27
L_4cfb:
        cmp    dword ptr [esi + 0xc], -1
        jne    L_4d24
        mov    edx, dword ptr [esi]
        push    ebp
        push    0xbf800000
        mov    ecx, esi
        mov    dword ptr [esi + 8], 1
        call    dword ptr [edx + 4]
        mov    eax, dword ptr [esi + 0x20]
        mov    ecx, edi
        mov    dword ptr [edi + 0x1c], eax
        call    FUN_00604ba0
        jmp    L_4d27
L_4d24:
        mov    dword ptr [esi + 8], ecx
L_4d27:
        mov    eax, dword ptr [edi + 0x20]
        inc    ebx
        cmp    ebx, eax
        jl    L_4c8f
        pop    esi
        pop    ebp
L_4d35:
        pop    edi
        pop    ebx
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        push    edi
        mov    edi, ecx
        mov    ebx, dword ptr [edi + 0x20]
        test    ebx, ebx
        jle    L_4d79
        mov    eax, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [edi + 0x24]
        mov    edx, dword ptr [eax + 0x30]
        push    ebp
        mov    ebp, dword ptr [esp + 0x10]
        push    esi
        lea    esi, [edx + ecx*4]
L_4d5d:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    ebp
        call    dword ptr [eax + 8]
        add    esi, 4
        dec    ebx
        jne    L_4d5d
        pop    esi
        pop    ebp
        mov    dword ptr [edi + 0x2c], 0
        pop    edi
        pop    ebx
        ret    4
L_4d79:
        mov    dword ptr [edi + 0x2c], 0
        pop    edi
        pop    ebx
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
        push    ebx
        mov    ebx, ecx
        push    edi
        mov    edi, dword ptr [ebx + 0x20]
        test    edi, edi
        jle    L_4dc0
        mov    eax, dword ptr [ebx + 0x10]
        mov    ecx, dword ptr [ebx + 0x24]
        mov    edx, dword ptr [eax + 0x30]
        push    esi
        lea    esi, [edx + ecx*4]
L_4da8:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0xc]
        add    esi, 4
        dec    edi
        jne    L_4da8
        pop    esi
        pop    edi
        mov    dword ptr [ebx + 0x2c], 0xbf800000
        pop    ebx
        ret    
L_4dc0:
        pop    edi
        mov    dword ptr [ebx + 0x2c], 0xbf800000
        pop    ebx
        ret    
    }
}
