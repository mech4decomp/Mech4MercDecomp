/*
 * FUN_004a54d4 (extent 0x4a54d4-0x4a5a01) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0048bcf0(void);
extern void __cdecl FUN_0048e890(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_00494990(void);
extern void __cdecl FUN_004a5140(void);
extern void __cdecl FUN_004ac970(void);

__declspec(naked) void FUN_004a54d4(void)
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
        mov    eax, dword ptr [ecx + 0xb0]
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x18]
        push    ebx
        mov    bl, byte ptr [eax + edx]
        add    eax, edx
        and    bl, 0xfd
        push    edx
        mov    byte ptr [eax], bl
        call    FUN_004ac970
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
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0xb8
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0xa0]
        test    eax, eax
        je    L_59df
        lea    ecx, [ebp - 0x88]
        call    FUN_0048bcf0
        mov    eax, dword ptr [edi + 0xb0]
        mov    ebx, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x88], eax
        mov    eax, dword ptr [edi + 0x10]
        mov    dword ptr [ebp - 0x2c], eax
        add    eax, 0x48
        push    eax
        lea    ecx, [ebx + 8]
        push    ecx
        lea    ecx, [ebp - 0x84]
        call    FUN_00491670
        mov    edx, dword ptr [ebx + 4]
        mov    eax, dword ptr [ebx]
        mov    dword ptr [ebp - 0x6c], edx
        lea    ecx, [edi + 0x58]
        lea    edx, [ebp - 0xb8]
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0x34], ecx
        mov    dword ptr [ebp - 0x30], edx
        mov    edx, dword ptr [ebp - 0x34]
        push    esi
        mov    esi, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0x30]
        fld    dword ptr [edx]
        fmul    dword ptr [esi]
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 4]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 4]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 4]
        fxch    st(1)
        fstp    dword ptr [eax + 8]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 8]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fadd    dword ptr [esi + 0xc]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x18]
        fxch    st(1)
        fstp    dword ptr [eax + 0xc]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x10]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x14]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x10]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x14]
        fxch    st(1)
        fstp    dword ptr [eax + 0x18]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x18]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x10]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fadd    dword ptr [esi + 0x1c]
        fld    dword ptr [edx + 0x20]
        fmul    dword ptr [esi + 0x28]
        fxch    st(1)
        fstp    dword ptr [eax + 0x1c]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 4]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x14]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x20]
        fld    dword ptr [edx + 0x24]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 8]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x18]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x24]
        fld    dword ptr [edx + 0x28]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0xc]
        fmul    dword ptr [esi + 0x20]
        fxch    st(2)
        faddp st(1), st(0)
        fld    dword ptr [edx + 0x1c]
        fmul    dword ptr [esi + 0x24]
        fxch    st(1)
        fstp    dword ptr [eax + 0x28]
        fld    dword ptr [edx + 0x2c]
        fmul    dword ptr [esi + 0x28]
        fxch    st(2)
        faddp st(1), st(0)
        faddp st(1), st(0)
        fadd    dword ptr [esi + 0x2c]
        fstp    dword ptr [eax + 0x2c]
        pop    esi
        lea    eax, [ebp - 0xb8]
        mov    dword ptr [ebp - 0x68], eax
        mov    eax, dword ptr [ebp - 0x2c]
        mov    cl, byte ptr [eax + 0x2b2]
        test    cl, cl
        mov    cl, byte ptr [eax + 0x2b3]
        je    L_5897
        test    cl, cl
        mov    ecx, dword ptr [ebx + 0x20]
        je    L_57d8
        add    ecx, 0x44
        push    ecx
        lea    ecx, [ebp - 0x24]
        call    FUN_00419480
        lea    edx, [ebp - 0xb8]
        push    edx
        lea    eax, [ebp - 0x24]
        push    eax
        lea    ecx, [ebp - 0xc]
        call    FUN_0041c830
        mov    eax, dword ptr [edi + 0xa0]
        xor    ebx, ebx
        test    eax, eax
        jbe    L_59cd
L_5753:
        mov    ecx, dword ptr [edi + 0x10]
        mov    ecx, dword ptr [ecx + 0x270]
        mov    eax, dword ptr [edi + 0xa8]
        imul    ecx, ebx
        fld    dword ptr [ecx + eax + 0x1c]
        fcomp    dword ptr [g_0076d064]
        add    ecx, eax
        fnstsw  ax
        test    ah, 1
        je    L_57c8
        fld    dword ptr [ebp - 0xc]
        lea    esi, [ecx + 0x30]
        fsub    dword ptr [esi]
        add    ecx, 0x48
        push    ecx
        lea    ecx, [ebp - 0x64]
        fstp    dword ptr [ebp - 0x18]
        fld    dword ptr [ebp - 8]
        fsub    dword ptr [esi + 4]
        fstp    dword ptr [ebp - 0x14]
        fld    dword ptr [ebp - 4]
        fsub    dword ptr [esi + 8]
        fstp    dword ptr [ebp - 0x10]
        call    FUN_0041a160
        push    0
        push    1
        push    2
        lea    edx, [ebp - 0x18]
        push    edx
        lea    ecx, [ebp - 0x64]
        call    FUN_0041fde0
        push    esi
        lea    ecx, [ebp - 0x64]
        call    FUN_0040d030
        lea    eax, [ebp - 0x64]
        push    eax
        push    ebx
        mov    ecx, edi
        call    FUN_004a5140
L_57c8:
        mov    eax, dword ptr [edi + 0xa0]
        inc    ebx
        cmp    ebx, eax
        jb    L_5753
        jmp    L_59cd
L_57d8:
        add    ecx, 0x44
        push    ecx
        lea    ecx, [ebp - 0x24]
        call    FUN_00419480
        lea    edx, [ebp - 0xb8]
        push    edx
        lea    eax, [ebp - 0x24]
        push    eax
        lea    ecx, [ebp - 0x18]
        call    FUN_0041c830
        mov    eax, dword ptr [edi + 0xa0]
        xor    ebx, ebx
        test    eax, eax
        jbe    L_59cd
L_5807:
        mov    ecx, dword ptr [edi + 0x10]
        mov    esi, dword ptr [ecx + 0x270]
        mov    eax, dword ptr [edi + 0xa8]
        imul    esi, ebx
        fld    dword ptr [esi + eax + 0x1c]
        fcomp    dword ptr [g_0076d064]
        add    esi, eax
        fnstsw  ax
        test    ah, 1
        je    L_5883
        fld    dword ptr [ebp - 0x18]
        lea    edx, [esi + 0x48]
        fsub    dword ptr [esi + 0x30]
        push    edx
        lea    ecx, [ebp - 0x64]
        fstp    dword ptr [ebp - 0xc]
        fld    dword ptr [ebp - 0x14]
        fsub    dword ptr [esi + 0x34]
        fstp    dword ptr [ebp - 8]
        fld    dword ptr [ebp - 0x10]
        fsub    dword ptr [esi + 0x38]
        fstp    dword ptr [ebp - 4]
        call    FUN_0041a160
        push    -1
        push    0
        push    2
        lea    eax, [ebp - 0xc]
        push    eax
        lea    ecx, [ebp - 0x64]
        call    FUN_0041fde0
        mov    ecx, dword ptr [esi + 0x30]
        mov    edx, dword ptr [esi + 0x34]
        mov    eax, dword ptr [esi + 0x38]
        mov    dword ptr [ebp - 0x58], ecx
        lea    ecx, [ebp - 0x64]
        push    ecx
        push    ebx
        mov    ecx, edi
        mov    dword ptr [ebp - 0x48], edx
        mov    dword ptr [ebp - 0x38], eax
        call    FUN_004a5140
L_5883:
        mov    eax, dword ptr [edi + 0xa0]
        inc    ebx
        cmp    ebx, eax
        jb    L_5807
        jmp    L_59cd
L_5897:
        test    cl, cl
        je    L_5967
        mov    eax, dword ptr [ebx + 0x20]
        mov    edx, dword ptr [eax + 0x50]
        add    eax, 0x44
        mov    dword ptr [ebp - 0x18], edx
        mov    ecx, dword ptr [eax + 0x1c]
        mov    dword ptr [ebp - 0x14], ecx
        mov    edx, dword ptr [eax + 0x2c]
        lea    eax, [ebp - 0xb8]
        push    eax
        lea    ecx, [ebp - 0x18]
        push    ecx
        lea    ecx, [ebp - 0xc]
        mov    dword ptr [ebp - 0x10], edx
        call    FUN_0041c830
        mov    eax, dword ptr [edi + 0xa0]
        xor    ebx, ebx
        test    eax, eax
        jbe    L_59cd
L_58da:
        mov    edx, dword ptr [edi + 0x10]
        mov    esi, dword ptr [edx + 0x270]
        mov    eax, dword ptr [edi + 0xa8]
        imul    esi, ebx
        fld    dword ptr [esi + eax + 0x1c]
        fcomp    dword ptr [g_0076d064]
        add    esi, eax
        fnstsw  ax
        test    ah, 1
        je    L_5956
        fld    dword ptr [ebp - 0xc]
        lea    eax, [esi + 0x48]
        fsub    dword ptr [esi + 0x30]
        push    eax
        lea    ecx, [ebp - 0x64]
        fstp    dword ptr [ebp - 0x24]
        fld    dword ptr [ebp - 8]
        fsub    dword ptr [esi + 0x34]
        fstp    dword ptr [ebp - 0x20]
        fld    dword ptr [ebp - 4]
        fsub    dword ptr [esi + 0x38]
        fstp    dword ptr [ebp - 0x1c]
        call    FUN_0041a160
        push    -1
        push    1
        push    2
        lea    ecx, [ebp - 0x24]
        push    ecx
        lea    ecx, [ebp - 0x64]
        call    FUN_0041fde0
        mov    edx, dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x38]
        mov    eax, dword ptr [esi + 0x34]
        mov    dword ptr [ebp - 0x58], edx
        lea    edx, [ebp - 0x64]
        push    edx
        mov    dword ptr [ebp - 0x38], ecx
        push    ebx
        mov    ecx, edi
        mov    dword ptr [ebp - 0x48], eax
        call    FUN_004a5140
L_5956:
        mov    eax, dword ptr [edi + 0xa0]
        inc    ebx
        cmp    ebx, eax
        jb    L_58da
        jmp    L_59cd
L_5967:
        mov    eax, dword ptr [edi + 0xa0]
        xor    ebx, ebx
        test    eax, eax
        jbe    L_59cd
L_5973:
        mov    eax, dword ptr [edi + 0x10]
        mov    esi, dword ptr [eax + 0x270]
        mov    eax, dword ptr [edi + 0xa8]
        imul    esi, ebx
        fld    dword ptr [esi + eax + 0x1c]
        fcomp    dword ptr [g_0076d064]
        add    esi, eax
        fnstsw  ax
        test    ah, 1
        je    L_59c2
        lea    ecx, [esi + 0x48]
        push    ecx
        lea    ecx, [ebp - 0x64]
        call    FUN_0041a160
        mov    edx, dword ptr [esi + 0x30]
        mov    ecx, dword ptr [esi + 0x38]
        mov    eax, dword ptr [esi + 0x34]
        mov    dword ptr [ebp - 0x58], edx
        lea    edx, [ebp - 0x64]
        push    edx
        mov    dword ptr [ebp - 0x38], ecx
        push    ebx
        mov    ecx, edi
        mov    dword ptr [ebp - 0x48], eax
        call    FUN_004a5140
L_59c2:
        mov    eax, dword ptr [edi + 0xa0]
        inc    ebx
        cmp    ebx, eax
        jb    L_5973
L_59cd:
        mov    ecx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ecx + 0x20]
        lea    eax, [ebp - 0x88]
        push    eax
        call    FUN_0048e890
L_59df:
        mov    edx, dword ptr [ebp + 8]
        push    edx
        mov    ecx, edi
        call    FUN_00494990
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
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
        ret    
    }
}
