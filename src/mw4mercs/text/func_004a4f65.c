/*
 * FUN_004a4f65 (extent 0x4a4f65-0x4a5502) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d070;
extern float  g_0076dd60;
extern int    g_007da920;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041c7d0(void);
extern void __cdecl FUN_00495e30(void);
extern void __cdecl FUN_004a4e50(void);
extern void __cdecl FUN_004a99c0(void);
extern void __cdecl FUN_004ac970(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004a4f65(void)
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
        mov    eax, dword ptr [g_007da920]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0xc0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4fa9
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004a4e50
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_4fa9:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
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
        mov    eax, dword ptr [esp + 8]
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        push    ebx
        call    FUN_004a99c0
        fld    dword ptr [esi + 0x90]
        mov    ecx, dword ptr [esi + 0xb0]
        mov    edx, dword ptr [ecx + 0x18]
        mov    cl, byte ptr [edx + ebx]
        lea    eax, [edx + ebx]
        mov    edx, dword ptr [esi + 0xa8]
        or    cl, 2
        mov    byte ptr [eax], cl
        mov    ecx, dword ptr [esi + 0x10]
        mov    edi, dword ptr [ecx + 0x270]
        imul    edi, ebx
        mov    ebx, dword ptr [ecx + 0x2c0]
        mov    eax, dword ptr [edi + edx + 0x18]
        add    edi, edx
        xor    edx, edx
        test    ebx, ebx
        mov    dword ptr [esp + 0x18], eax
        jbe    L_502f
        mov    ebp, dword ptr [ecx + 0x2bc]
L_501d:
        fcom    dword ptr [ebp]
        fnstsw  ax
        test    ah, 1
        jne    L_502f
        inc    edx
        add    ebp, 0xc
        cmp    edx, ebx
        jb    L_501d
L_502f:
        mov    eax, dword ptr [ecx + 0x2bc]
        lea    edx, [edx + edx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea    eax, [eax + edx*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ecx + 0x2d0]
        test    al, al
        je    L_5095
        mov    ebx, dword ptr [ecx + 0x2cc]
        xor    edx, edx
        test    ebx, ebx
        jbe    L_5078
        mov    ebp, dword ptr [ecx + 0x2c8]
L_5062:
        fld    dword ptr [ebp]
        fcomp    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        je    L_5078
        inc    edx
        add    ebp, 0xc
        cmp    edx, ebx
        jb    L_5062
L_5078:
        mov    eax, dword ptr [ecx + 0x2c8]
        fld    dword ptr [esp + 0x18]
        lea    edx, [edx + edx*2]
        fsub    dword ptr [eax + edx*4 - 0xc]
        lea    eax, [eax + edx*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fmulp st(1), st(0)
L_5095:
        mov    edx, dword ptr [edi + 0x18]
        fstp    dword ptr [edi + 0x74]
        fld    dword ptr [esi + 0x90]
        mov    esi, dword ptr [ecx + 0x2e0]
        mov    dword ptr [esp + 0x18], edx
        xor    edx, edx
        test    esi, esi
        jbe    L_50c8
        mov    ebx, dword ptr [ecx + 0x2dc]
L_50b7:
        fcom    dword ptr [ebx]
        fnstsw  ax
        test    ah, 1
        jne    L_50c8
        inc    edx
        add    ebx, 0xc
        cmp    edx, esi
        jb    L_50b7
L_50c8:
        lea    eax, [edx + edx*2]
        mov    edx, dword ptr [ecx + 0x2dc]
        fsub    dword ptr [edx + eax*4 - 0xc]
        lea    eax, [edx + eax*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ecx + 0x2f0]
        test    al, al
        fst    dword ptr [esp + 0x14]
        je    L_511b
        mov    eax, dword ptr [esp + 0x18]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        lea    esi, [ecx + 0x2e4]
        push    eax
        mov    ecx, esi
        call    FUN_00495e30
        fld    dword ptr [esp + 0x18]
        mov    edx, dword ptr [esi + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        fmul    dword ptr [esp + 0x14]
L_511b:
        fmul    dword ptr [edi + 0x74]
        fst    dword ptr [edi + 0x70]
        fld    dword ptr [edi + 0x74]
        fld    st(1)
        fmul st(0), st(2)
        fld    st(1)
        fmul st(0), st(2)
        faddp st(1), st(0)
        fsqrt    
        fstp    dword ptr [edi + 0x68]
        pop    edi
        pop    esi
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    ebp
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        pop    ebx
        ret    8
        nop    
        nop    
        sub    esp, 0x24
        mov    eax, dword ptr [esp + 0x28]
        push    ebx
        mov    ebx, dword ptr [ecx + 0x10]
        push    ebp
        push    esi
        mov    esi, dword ptr [ebx + 0x270]
        imul    esi, eax
        mov    ebp, dword ptr [ecx + 0xb4]
        push    edi
        mov    edi, dword ptr [ecx + 0xa8]
        mov    edx, dword ptr [esi + edi + 0x18]
        add    esi, edi
        mov    dword ptr [esp + 0x14], edx
        mov    edx, dword ptr [esi + 0x1c]
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [esi + 0x6c]
        mov    dword ptr [esp + 0x10], edx
        mov    edx, dword ptr [esp + 0x3c]
        lea    edi, [eax*4]
        fld    dword ptr [esp + 0x10]
        lea    eax, [edi + edi*2]
        fmul    dword ptr [esi + 0x70]
        mov    dword ptr [esp + 0x1c], ecx
        lea    ecx, [ebp + eax*4]
        fstp    dword ptr [esp + 0x28]
        push    edx
        fld    dword ptr [esp + 0x14]
        lea    eax, [esp + 0x2c]
        fmul    dword ptr [esi + 0x74]
        mov    dword ptr [esp + 0x28], edi
        push    eax
        mov    dword ptr [esp + 0x38], 0
        fchs    
        fstp    dword ptr [esp + 0x34]
        inc    edi
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x70]
        mov    edx, dword ptr [esp + 0x3c]
        lea    ecx, [edi + edi*2]
        push    edx
        fchs    
        lea    eax, [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x14]
        lea    ecx, [ebp + ecx*4]
        fmul    dword ptr [esi + 0x74]
        push    eax
        mov    dword ptr [esp + 0x38], 0
        inc    edi
        fchs    
        fstp    dword ptr [esp + 0x34]
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x70]
        mov    edx, dword ptr [esp + 0x3c]
        push    edx
        lea    eax, [esp + 0x2c]
        fchs    
        lea    ecx, [edi + edi*2]
        fstp    dword ptr [esp + 0x2c]
        fld    dword ptr [esp + 0x14]
        lea    ecx, [ebp + ecx*4]
        fmul    dword ptr [esi + 0x74]
        push    eax
        mov    dword ptr [esp + 0x38], 0
        fstp    dword ptr [esp + 0x34]
        call    FUN_0041c7d0
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x70]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0x74]
        mov    edx, dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x2c]
        push    edx
        lea    eax, [esp + 0x2c]
        lea    ecx, [edi + edi*2 + 3]
        lea    ecx, [ebp + ecx*4]
        push    eax
        mov    dword ptr [esp + 0x38], 0
        call    FUN_0041c7d0
        mov    edi, dword ptr [esp + 0x18]
        lea    esi, [ebx + 0x1ec]
        push    edi
        mov    ecx, esi
        call    FUN_00495e30
        fld    dword ptr [esp + 0x18]
        mov    edx, dword ptr [esi + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0x204]
        test    al, al
        je    L_52a9
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [ebx + 0x200]
        fadd    dword ptr [ebx + 0x1fc]
        fmulp st(1), st(0)
L_52a9:
        mov    ecx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x38]
        mov    edx, dword ptr [ecx + 0xb8]
        shl    eax, 4
        lea    esi, [edx + eax]
        lea    ebp, [ebx + 0x20c]
        fstp    dword ptr [esi]
        push    edi
        mov    ecx, ebp
        call    FUN_00495e30
        fld    dword ptr [esp + 0x18]
        mov    ecx, dword ptr [ebp + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0x224]
        test    al, al
        je    L_52ff
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [ebx + 0x220]
        fadd    dword ptr [ebx + 0x21c]
        fmulp st(1), st(0)
L_52ff:
        lea    ebp, [ebx + 0x22c]
        fstp    dword ptr [esi + 4]
        push    edi
        mov    ecx, ebp
        call    FUN_00495e30
        fld    dword ptr [esp + 0x18]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [ebp + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0x244]
        test    al, al
        je    L_5342
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [ebx + 0x240]
        fadd    dword ptr [ebx + 0x23c]
        fmulp st(1), st(0)
L_5342:
        lea    ebp, [ebx + 0x24c]
        fstp    dword ptr [esi + 8]
        push    edi
        mov    ecx, ebp
        call    FUN_00495e30
        fld    dword ptr [esp + 0x18]
        mov    edx, dword ptr [ebp + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0x264]
        test    al, al
        je    L_5385
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [ebx + 0x260]
        fadd    dword ptr [ebx + 0x25c]
        fmulp st(1), st(0)
L_5385:
        mov    eax, dword ptr [ebx + 0x328]
        fstp    dword ptr [esi + 0xc]
        fld    dword ptr [ebx + 0x320]
        mov    ecx, dword ptr [ebx + 0x330]
        mov    edx, dword ptr [ebx + 0x338]
        fst    dword ptr [esp + 0x20]
        mov    dword ptr [esp + 0x3c], eax
        mov    al, byte ptr [ebx + 0x33c]
        test    al, al
        mov    dword ptr [esp + 0x38], ecx
        mov    dword ptr [esp + 0x10], edx
        je    L_5480
        lea    esi, [ebx + 0x2f8]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        push    edi
        mov    ecx, esi
        call    FUN_00495e30
        fld    dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [ebx + 0x318]
        test    al, al
        je    L_5414
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [ebx + 0x310]
        fadd    dword ptr [ebx + 0x314]
        fmul    dword ptr [esp + 0x14]
        fadd    dword ptr [ebx + 0x30c]
        fmul    dword ptr [esp + 0x14]
        fadd    dword ptr [ebx + 0x308]
        fmulp st(1), st(0)
L_5414:
        mov    bl, byte ptr [ebx + 0x33d]
        fsub    dword ptr [g_0076d070]
        fadd    dword ptr [g_0076dd60]
        fstp    dword ptr [esp + 0x18]
        mov    esi, ebx
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, ecx
        and    eax, 0xff
        cdq    
        and    esi, 0xff
        idiv    esi
        mov    dl, al
        mov    al, bl
        imul    dl
        sub    cl, al
        mov    byte ptr [esp + 0x14], dl
        mov    edx, dword ptr [esp + 0x14]
        and    ecx, 0xff
        mov    dword ptr [esp + 0x18], ecx
        fild    dword ptr [esp + 0x18]
        and    edx, 0xff
        fmul    dword ptr [esp + 0x38]
        fadd    dword ptr [esp + 0x20]
        mov    dword ptr [esp + 0x20], edx
        fild    dword ptr [esp + 0x20]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x3c]
        fstp    dword ptr [esp + 0x3c]
L_5480:
        fld    dword ptr [esp + 0x38]
        mov    eax, dword ptr [esp + 0x24]
        mov    ecx, dword ptr [esp + 0x1c]
        fadd st(0), st(1)
        mov    ecx, dword ptr [ecx + 0xbc]
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 0x3c]
        inc    eax
        fld    st(2)
        inc    eax
        fstp    dword ptr [ecx + eax*8 - 0x10]
        pop    edi
        inc    eax
        fst    dword ptr [ecx + eax*8 - 0x14]
        pop    esi
        fld    st(1)
        pop    ebp
        fstp    dword ptr [ecx + eax*8 - 0x10]
        pop    ebx
        fstp    dword ptr [ecx + eax*8 - 0xc]
        fstp    dword ptr [ecx + eax*8 - 8]
        fld    dword ptr [esp + 0x2c]
        fstp    dword ptr [ecx + eax*8 - 4]
        fstp    dword ptr [ecx + eax*8]
        fld    dword ptr [esp + 0x2c]
        fstp    dword ptr [ecx + eax*8 + 4]
        add    esp, 0x24
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
    }
}
