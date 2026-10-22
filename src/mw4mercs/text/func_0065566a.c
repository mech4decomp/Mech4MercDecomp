/*
 * FUN_0065566a (extent 0x65566a-0x655a63) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d048;
extern float  g_0076d064;
extern float  g_00770168;
extern float  g_0077016c;
extern float  g_0077a1a0;
extern float  g_007880fc;
extern int    g_007f2464;
extern float  g_0080da54;
extern float  g_0080da58;
extern float  g_0080da5c;
extern float  g_0080da60;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d6a90(void);
extern void __cdecl FUN_005d6b10(void);
extern void __cdecl FUN_005d7860(void);
extern void __cdecl FUN_005d7a80(void);
extern void __cdecl FUN_005d8270(void);
extern void __cdecl FUN_005d82d0(void);
extern void __cdecl FUN_006553d0(void);
extern void __cdecl FUN_006559b0(void);
extern void __cdecl FUN_00659520(void);
extern void __cdecl FUN_0068ea20(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_0065566a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        sub    esp, 0x44
        cmp    eax, 0x7d0
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        jl    L_568c
        mov    dword ptr [esp + 0x58], 0x7cf
L_568c:
        fld    dword ptr [g_0080da58]
        mov    eax, dword ptr [esi + 0x20]
        fsub    dword ptr [g_0080da60]
        mov    edi, dword ptr [esi + 0x1c]
        sub    eax, edi
        sar    eax, 2
        fsub    dword ptr [g_00770168]
        xor    ebp, ebp
        test    eax, eax
        mov    dword ptr [esp + 0x1c], eax
        fstp    dword ptr [esp + 0x20]
        fld    dword ptr [g_0080da54]
        fsub    dword ptr [g_0080da5c]
        fsub    dword ptr [g_00770168]
        fstp    dword ptr [esp + 0x18]
        jle    L_5747
L_56cd:
        mov    ecx, dword ptr [esi + 0x1c]
        mov    ebx, dword ptr [ecx + ebp*4]
        test    ebx, ebx
        je    L_5742
        mov    edx, dword ptr [esi + 0x14]
        sub    edx, dword ptr [esi + 0x10]
        xor    edi, edi
        sar    edx, 2
        je    L_5713
L_56e4:
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax + edi*4]
        test    ecx, ecx
        lea    eax, [eax + edi*4]
        je    L_5705
        cmp    dword ptr [ecx + 4], ebx
        je    L_56fd
        mov    edx, ecx
        cmp    dword ptr [edx + 8], ebx
        jne    L_5705
L_56fd:
        push    edi
        mov    ecx, esi
        call    FUN_005d8270
L_5705:
        mov    eax, dword ptr [esi + 0x14]
        sub    eax, dword ptr [esi + 0x10]
        inc    edi
        sar    eax, 2
        cmp    edi, eax
        jb    L_56e4
L_5713:
        push    ebp
        mov    ecx, esi
        call    FUN_0068ea20
        mov    ecx, dword ptr [esi + 0x1c]
        mov    edi, dword ptr [ecx + ebp*4]
        test    edi, edi
        lea    ebx, [ecx + ebp*4]
        je    L_5738
        mov    ecx, edi
        call    FUN_005d6b10
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_5738:
        mov    eax, dword ptr [esp + 0x1c]
        mov    dword ptr [ebx], 0
L_5742:
        inc    ebp
        cmp    ebp, eax
        jl    L_56cd
L_5747:
        mov    edx, dword ptr [esp + 0x58]
        mov    ecx, dword ptr [esi + 0x1c]
        mov    eax, dword ptr [esi + 0x20]
        push    0
        push    edx
        push    ecx
        push    eax
        push    eax
        call    FUN_00659520
        mov    ebx, dword ptr [esp + 0x70]
        add    esp, 0x14
        push    0x42a00000
        push    ebx
        mov    ecx, esi
        mov    dword ptr [esi + 0x20], eax
        call    FUN_005d7860
        fild    dword ptr [esp + 0x58]
        fsqrt    
        fstp    dword ptr [esp + 0x14]
        fild    dword ptr [esp + 0x58]
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x5c], edx
        fdiv    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x14]
        fadd    dword ptr [g_0076d064]
        fdivr    dword ptr [esp + 0x20]
        fst    dword ptr [esp + 0x1c]
        fld    st(1)
        fadd    dword ptr [g_0076d064]
        fdivr    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076d048]
        fnstsw  ax
        test    ah, 1
        je    L_57d2
        fld    dword ptr [esp + 0x20]
        mov    dword ptr [esp + 0x1c], 0x42c80000
        fmul    dword ptr [g_0077a1a0]
        fstp    dword ptr [esp + 0x5c]
L_57d2:
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076d048]
        fnstsw  ax
        test    ah, 1
        je    L_57f7
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        mov    dword ptr [esp + 0x10], 0x42c80000
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [g_0077a1a0]
L_57f7:
        fld    dword ptr [esp + 0x5c]
        mov    edx, dword ptr [g_007f2464]
        fsub    dword ptr [g_0076d064]
        mov    eax, dword ptr [g_0080da60]
        mov    ecx, dword ptr [g_0080da5c]
        push    edx
        fstp    dword ptr [esp + 0x60]
        mov    dword ptr [esp + 0x1c], 0x42a00000
        mov    dword ptr [esp + 0x34], eax
        fsub    dword ptr [g_0076d064]
        mov    dword ptr [esp + 0x30], ecx
        fstp    dword ptr [esp + 0x24]
        fld    dword ptr [g_0080da5c]
        fadd    dword ptr [esp + 0x14]
        fadd    dword ptr [g_0077016c]
        fstp    dword ptr [esp + 0x18]
        fld    dword ptr [g_00770168]
        fdiv    dword ptr [esp + 0x24]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_006f4950
        fld    dword ptr [g_0076c5b0]
        fcomp    dword ptr [esp + 0x20]
        xor    ebp, ebp
        fnstsw  ax
        test    ah, 0x41
        je    L_5980
        fld    dword ptr [esp + 0x1c]
        fadd    dword ptr [g_0077016c]
        fstp    dword ptr [esp + 0x24]
L_587d:
        test    ebx, ebx
        fld    dword ptr [esp + 0x24]
        fadd    dword ptr [g_0080da60]
        fstp    dword ptr [esp + 0x58]
        fld    dword ptr [esp + 0x28]
        fadd    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x18]
        je    L_58a5
        mov    eax, dword ptr [esp + 0x18]
        push    eax
        call    ebx
        add    esp, 4
L_58a5:
        fld    dword ptr [g_0076c5b0]
        xor    edi, edi
        fcomp    dword ptr [esp + 0x5c]
        fnstsw  ax
        test    ah, 0x41
        je    L_595c
        fld    dword ptr [esp + 0x14]
        fsub    dword ptr [esp + 0x2c]
        fstp    dword ptr [esp + 0x34]
L_58c8:
        fld    dword ptr [esp + 0x58]
        mov    ecx, dword ptr [esp + 0x34]
        fsub    dword ptr [esp + 0x30]
        lea    edx, [esp + 0x3c]
        mov    dword ptr [esp + 0x44], ecx
        mov    ecx, dword ptr [esi + 0x38]
        push    edx
        fstp    dword ptr [esp + 0x40]
        mov    dword ptr [esp + 0x44], 0
        call    FUN_006559b0
        test    al, al
        jne    L_5938
        push    0x54
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_592e
        mov    ecx, dword ptr [esp + 0x58]
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [esp + 0x48], ecx
        push    0x42480000
        lea    ecx, [esp + 0x4c]
        push    ecx
        mov    ecx, eax
        mov    dword ptr [esp + 0x54], 0
        mov    dword ptr [esp + 0x58], edx
        call    FUN_005d6a90
        jmp    L_5930
L_592e:
        xor    eax, eax
L_5930:
        push    eax
        mov    ecx, esi
        call    FUN_005d82d0
L_5938:
        fld    dword ptr [esp + 0x58]
        inc    edi
        fadd    dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x38], edi
        fstp    dword ptr [esp + 0x58]
        fild    dword ptr [esp + 0x38]
        fcomp    dword ptr [esp + 0x5c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_58c8
L_595c:
        fld    dword ptr [esp + 0x14]
        inc    ebp
        fadd    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x58], ebp
        fstp    dword ptr [esp + 0x14]
        fild    dword ptr [esp + 0x58]
        fcomp    dword ptr [esp + 0x20]
        fnstsw  ax
        test    ah, 0x41
        jne    L_587d
L_5980:
        call    FUN_006f49a0
        push    0x42b40000
        push    ebx
        mov    ecx, esi
        call    FUN_006553d0
        mov    ecx, esi
        call    FUN_005d7a80
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x44
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
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        fld    dword ptr [edi]
        mov    esi, ecx
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        fld    dword ptr [edi + 8]
        mov    esi, dword ptr [esi + 0x400004]
        lea    eax, [eax + eax*2]
        fmul    dword ptr [g_007880fc]
        shl    eax, 2
        sub    esi, eax
        call    FUN_0075db4a
        mov    edx, dword ptr [esi]
        lea    ecx, [eax + eax*4]
        shl    ecx, 3
        sub    edx, ecx
        mov    ecx, dword ptr [edx + 0x18]
        xor    eax, eax
        cmp    ecx, -1
        pop    edi
        setne    al
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x400004]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + edx*4]
        lea    eax, [eax + eax*4]
        fld    dword ptr [ecx + eax*8 + 0xc]
        ret    8
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        fld    dword ptr [edi]
        mov    esi, ecx
        fmul    dword ptr [g_007880fc]
        call    FUN_0075db4a
        fld    dword ptr [edi + 8]
        mov    esi, dword ptr [esi + 0x400004]
        lea    eax, [eax + eax*2]
        fmul    dword ptr [g_007880fc]
        shl    eax, 2
        sub    esi, eax
        call    FUN_0075db4a
        mov    edx, dword ptr [esi]
        lea    ecx, [eax + eax*4]
        shl    ecx, 3
        sub    edx, ecx
        fld    dword ptr [edx + 0xc]
        pop    edi
        pop    esi
        ret    4
    }
}
