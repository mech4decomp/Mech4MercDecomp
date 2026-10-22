/*
 * FUN_004a7270 (extent 0x4a7270-0x4a8401) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041a160(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_0048bcd0(void);
extern void __cdecl FUN_0048dd20(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_00494990(void);
extern void __cdecl FUN_00495e30(void);

__declspec(naked) void FUN_004a7270(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        sub    esp, 0x12c
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0xa0]
        test    eax, eax
        push    esi
        push    edi
        mov    dword ptr [ebp - 4], ebx
        je    L_83ea
        lea    ecx, [ebp - 0x9c]
        call    FUN_0048bcd0
        mov    edi, dword ptr [ebx + 0x10]
        mov    esi, dword ptr [edi + 0x2b4]
        test    esi, esi
        je    L_83f5
        mov    ecx, dword ptr [ebp + 8]
        lea    eax, [edi + 0x48]
        add    ecx, 8
        push    eax
        push    ecx
        lea    ecx, [ebp - 0x98]
        mov    dword ptr [ebp - 0x80], 0x3f
        mov    dword ptr [ebp - 0x78], 0
        call    FUN_00491670
        mov    edx, dword ptr [ebp + 8]
        xor    eax, eax
        mov    dword ptr [ebp - 0x74], eax
        mov    dword ptr [ebp - 0x70], eax
        mov    eax, dword ptr [edx]
        lea    ecx, [ebx + 0x58]
        lea    edx, [ebp - 0xfc]
        mov    dword ptr [ebp - 0x9c], esi
        mov    dword ptr [ebp - 0xc], eax
        mov    dword ptr [ebp - 8], ecx
        mov    dword ptr [ebp - 0x10], edx
        mov    edx, dword ptr [ebp - 8]
        push    esi
        mov    esi, dword ptr [ebp - 0xc]
        mov    eax, dword ptr [ebp - 0x10]
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
        mov    al, byte ptr [edi + 0x2b2]
        test    al, al
        mov    al, byte ptr [edi + 0x2b3]
        je    L_7c50
        test    al, al
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax + 0x20]
        je    L_7873
        add    ecx, 0x44
        push    ecx
        lea    ecx, [ebp - 0x64]
        call    FUN_00419480
        lea    edx, [ebp - 0xfc]
        push    edx
        lea    eax, [ebp - 0x64]
        push    eax
        lea    ecx, [ebp - 0x58]
        call    FUN_0041c830
        mov    eax, dword ptr [ebx + 0xa0]
        xor    ecx, ecx
        test    eax, eax
        mov    dword ptr [ebp - 0x10], ecx
        jbe    L_83ea
L_74c8:
        mov    edx, dword ptr [ebx + 0x10]
        mov    ebx, dword ptr [edx + 0x270]
        mov    eax, dword ptr [ebp - 4]
        imul    ebx, ecx
        add    ebx, dword ptr [eax + 0xa8]
        fld    dword ptr [ebx + 0x1c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_7857
        fld    dword ptr [ebp - 0x58]
        lea    esi, [ebx + 0x30]
        fsub    dword ptr [esi]
        lea    ecx, [ebx + 0x48]
        push    ecx
        lea    ecx, [ebp - 0xcc]
        fstp    dword ptr [ebp - 0x48]
        fld    dword ptr [ebp - 0x54]
        fsub    dword ptr [esi + 4]
        fstp    dword ptr [ebp - 0x44]
        fld    dword ptr [ebp - 0x50]
        fsub    dword ptr [esi + 8]
        fstp    dword ptr [ebp - 0x40]
        call    FUN_0041a160
        push    0
        push    1
        push    2
        lea    edx, [ebp - 0x48]
        push    edx
        lea    ecx, [ebp - 0xcc]
        call    FUN_0041fde0
        push    esi
        lea    ecx, [ebp - 0xcc]
        call    FUN_0040d030
        lea    eax, [ebp - 0xfc]
        lea    ecx, [ebp - 0xcc]
        lea    edx, [ebp - 0x12c]
        mov    dword ptr [ebp - 0x28], eax
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x4c], edx
        mov    edx, dword ptr [ebp - 0x1c]
        push    esi
        mov    esi, dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0x4c]
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
        lea    eax, [ebp - 0x12c]
        mov    dword ptr [ebp - 0x7c], eax
        fld    dword ptr [ebx + 0x6c]
        fstp    dword ptr [ebp - 0x38]
        fld    dword ptr [ebx + 0x6c]
        lea    ecx, [ebp - 0x38]
        fstp    dword ptr [ebp - 0x34]
        fld    dword ptr [ebx + 0x6c]
        mov    dword ptr [ebp - 0x68], ecx
        mov    eax, dword ptr [ebx + 0x1c]
        mov    edx, dword ptr [ebx + 0x18]
        mov    ecx, eax
        lea    esi, [edi + 0x1ec]
        push    ecx
        fstp    dword ptr [ebp - 0x30]
        mov    ecx, esi
        mov    dword ptr [ebp - 0x3c], edx
        mov    dword ptr [ebp - 0x20], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 0x20]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x204]
        test    al, al
        je    L_7746
        fld    dword ptr [ebp - 0x3c]
        fmul    dword ptr [edi + 0x200]
        fadd    dword ptr [edi + 0x1fc]
        fmulp st(1), st(0)
L_7746:
        mov    edx, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x70]
        mov    ecx, dword ptr [ebx + 0x18]
        lea    eax, [ebx + 0x70]
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, edx
        mov    dword ptr [ebp - 0x24], ecx
        lea    esi, [edi + 0x20c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [ebp - 0x18], edx
        call    FUN_00495e30
        fld    dword ptr [ebp - 0x18]
        mov    edx, dword ptr [esi + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x224]
        test    al, al
        je    L_779b
        fld    dword ptr [ebp - 0x24]
        fmul    dword ptr [edi + 0x220]
        fadd    dword ptr [edi + 0x21c]
        fmulp st(1), st(0)
L_779b:
        mov    ecx, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x74]
        mov    eax, dword ptr [ebx + 0x18]
        mov    edx, ecx
        mov    dword ptr [ebp - 8], ecx
        lea    esi, [edi + 0x22c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x2c], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 8]
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x244]
        test    al, al
        je    L_77ea
        fld    dword ptr [ebp - 0x2c]
        fmul    dword ptr [edi + 0x240]
        fadd    dword ptr [edi + 0x23c]
        fmulp st(1), st(0)
L_77ea:
        mov    eax, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x78]
        mov    edx, dword ptr [ebx + 0x18]
        mov    ecx, eax
        lea    esi, [edi + 0x24c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x14], edx
        mov    dword ptr [ebp - 0xc], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 0xc]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x264]
        test    al, al
        je    L_7839
        fld    dword ptr [ebp - 0x14]
        fmul    dword ptr [edi + 0x260]
        fadd    dword ptr [edi + 0x25c]
        fmulp st(1), st(0)
L_7839:
        mov    ecx, dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebx + 0x7c]
        mov    eax, dword ptr [ebp + 8]
        lea    edx, [ebp - 0x9c]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    ecx, dword ptr [eax + 0x20]
        push    edx
        call    FUN_0048dd20
        mov    ecx, dword ptr [ebp - 0x10]
L_7857:
        mov    edx, dword ptr [ebp - 4]
        mov    eax, dword ptr [edx + 0xa0]
        inc    ecx
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x10], ecx
        mov    ebx, edx
        jb    L_74c8
        jmp    L_83ea
L_7873:
        add    ecx, 0x44
        push    ecx
        lea    ecx, [ebp - 0x64]
        call    FUN_00419480
        lea    edx, [ebp - 0xfc]
        push    edx
        lea    eax, [ebp - 0x64]
        push    eax
        lea    ecx, [ebp - 0x38]
        call    FUN_0041c830
        mov    eax, dword ptr [ebx + 0xa0]
        xor    ecx, ecx
        test    eax, eax
        mov    dword ptr [ebp - 0x20], ecx
        jbe    L_83ea
L_78a5:
        mov    edx, dword ptr [ebx + 0x10]
        mov    ebx, dword ptr [edx + 0x270]
        mov    eax, dword ptr [ebp - 4]
        imul    ebx, ecx
        add    ebx, dword ptr [eax + 0xa8]
        fld    dword ptr [ebx + 0x1c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_7c34
        fld    dword ptr [ebp - 0x38]
        lea    esi, [ebx + 0x30]
        fsub    dword ptr [esi]
        lea    ecx, [ebx + 0x48]
        push    ecx
        lea    ecx, [ebp - 0xcc]
        fstp    dword ptr [ebp - 0x48]
        fld    dword ptr [ebp - 0x34]
        fsub    dword ptr [esi + 4]
        fstp    dword ptr [ebp - 0x44]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [esi + 8]
        fstp    dword ptr [ebp - 0x40]
        call    FUN_0041a160
        push    -1
        push    0
        push    2
        lea    edx, [ebp - 0x48]
        push    edx
        lea    ecx, [ebp - 0xcc]
        call    FUN_0041fde0
        push    esi
        lea    ecx, [ebp - 0xcc]
        call    FUN_0040d030
        lea    eax, [ebp - 0xfc]
        lea    ecx, [ebp - 0xcc]
        lea    edx, [ebp - 0x12c]
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x24], ecx
        mov    dword ptr [ebp - 0x14], edx
        mov    edx, dword ptr [ebp - 0x24]
        push    esi
        mov    esi, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x14]
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
        lea    eax, [ebp - 0x12c]
        mov    dword ptr [ebp - 0x7c], eax
        fld    dword ptr [ebx + 0x6c]
        fstp    dword ptr [ebp - 0x58]
        fld    dword ptr [ebx + 0x6c]
        lea    ecx, [ebp - 0x58]
        fstp    dword ptr [ebp - 0x54]
        fld    dword ptr [ebx + 0x6c]
        mov    dword ptr [ebp - 0x68], ecx
        mov    eax, dword ptr [ebx + 0x1c]
        mov    edx, dword ptr [ebx + 0x18]
        mov    ecx, eax
        lea    esi, [edi + 0x1ec]
        push    ecx
        fstp    dword ptr [ebp - 0x50]
        mov    ecx, esi
        mov    dword ptr [ebp - 0x3c], edx
        mov    dword ptr [ebp - 0x10], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 0x10]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x204]
        test    al, al
        je    L_7b23
        fld    dword ptr [ebp - 0x3c]
        fmul    dword ptr [edi + 0x200]
        fadd    dword ptr [edi + 0x1fc]
        fmulp st(1), st(0)
L_7b23:
        mov    edx, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x70]
        mov    ecx, dword ptr [ebx + 0x18]
        lea    eax, [ebx + 0x70]
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, edx
        mov    dword ptr [ebp - 0x1c], ecx
        lea    esi, [edi + 0x20c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [ebp - 0xc], edx
        call    FUN_00495e30
        fld    dword ptr [ebp - 0xc]
        mov    edx, dword ptr [esi + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x224]
        test    al, al
        je    L_7b78
        fld    dword ptr [ebp - 0x1c]
        fmul    dword ptr [edi + 0x220]
        fadd    dword ptr [edi + 0x21c]
        fmulp st(1), st(0)
L_7b78:
        mov    ecx, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x74]
        mov    eax, dword ptr [ebx + 0x18]
        mov    edx, ecx
        mov    dword ptr [ebp - 8], ecx
        lea    esi, [edi + 0x22c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x28], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 8]
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x244]
        test    al, al
        je    L_7bc7
        fld    dword ptr [ebp - 0x28]
        fmul    dword ptr [edi + 0x240]
        fadd    dword ptr [edi + 0x23c]
        fmulp st(1), st(0)
L_7bc7:
        mov    eax, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x78]
        mov    edx, dword ptr [ebx + 0x18]
        mov    ecx, eax
        lea    esi, [edi + 0x24c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x4c], edx
        mov    dword ptr [ebp - 0x18], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 0x18]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x264]
        test    al, al
        je    L_7c16
        fld    dword ptr [ebp - 0x4c]
        fmul    dword ptr [edi + 0x260]
        fadd    dword ptr [edi + 0x25c]
        fmulp st(1), st(0)
L_7c16:
        mov    ecx, dword ptr [ebp - 0x14]
        fstp    dword ptr [ebx + 0x7c]
        mov    eax, dword ptr [ebp + 8]
        lea    edx, [ebp - 0x9c]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    ecx, dword ptr [eax + 0x20]
        push    edx
        call    FUN_0048dd20
        mov    ecx, dword ptr [ebp - 0x20]
L_7c34:
        mov    edx, dword ptr [ebp - 4]
        mov    eax, dword ptr [edx + 0xa0]
        inc    ecx
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x20], ecx
        mov    ebx, edx
        jb    L_78a5
        jmp    L_83ea
L_7c50:
        test    al, al
        je    L_8048
        mov    eax, dword ptr [ebp + 8]
        mov    ecx, dword ptr [eax + 0x20]
        add    ecx, 0x44
        push    ecx
        lea    ecx, [ebp - 0x64]
        call    FUN_00419480
        lea    edx, [ebp - 0xfc]
        push    edx
        lea    eax, [ebp - 0x64]
        push    eax
        lea    ecx, [ebp - 0x38]
        call    FUN_0041c830
        mov    eax, dword ptr [ebx + 0xa0]
        xor    ecx, ecx
        test    eax, eax
        mov    dword ptr [ebp - 0x20], ecx
        jbe    L_83ea
L_7c90:
        mov    edx, dword ptr [ebx + 0x10]
        mov    ebx, dword ptr [edx + 0x270]
        mov    eax, dword ptr [ebp - 4]
        imul    ebx, ecx
        add    ebx, dword ptr [eax + 0xa8]
        fld    dword ptr [ebx + 0x1c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_802c
        fld    dword ptr [ebp - 0x38]
        lea    ecx, [ebx + 0x48]
        fsub    dword ptr [ebx + 0x30]
        push    ecx
        lea    ecx, [ebp - 0xcc]
        fstp    dword ptr [ebp - 0x48]
        fld    dword ptr [ebp - 0x34]
        fsub    dword ptr [ebx + 0x34]
        fstp    dword ptr [ebp - 0x44]
        fld    dword ptr [ebp - 0x30]
        fsub    dword ptr [ebx + 0x38]
        fstp    dword ptr [ebp - 0x40]
        call    FUN_0041a160
        push    -1
        push    1
        push    2
        lea    edx, [ebp - 0x48]
        push    edx
        lea    ecx, [ebp - 0xcc]
        call    FUN_0041fde0
        mov    eax, dword ptr [ebx + 0x30]
        mov    ecx, dword ptr [ebx + 0x34]
        mov    edx, dword ptr [ebx + 0x38]
        mov    dword ptr [ebp - 0xc0], eax
        mov    dword ptr [ebp - 0xb0], ecx
        mov    dword ptr [ebp - 0xa0], edx
        lea    eax, [ebp - 0xfc]
        lea    ecx, [ebp - 0xcc]
        lea    edx, [ebp - 0x12c]
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x24], ecx
        mov    dword ptr [ebp - 0x14], edx
        mov    edx, dword ptr [ebp - 0x24]
        push    esi
        mov    esi, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x14]
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
        lea    eax, [ebp - 0x12c]
        mov    dword ptr [ebp - 0x7c], eax
        fld    dword ptr [ebx + 0x6c]
        fstp    dword ptr [ebp - 0x58]
        fld    dword ptr [ebx + 0x6c]
        lea    ecx, [ebp - 0x58]
        fstp    dword ptr [ebp - 0x54]
        fld    dword ptr [ebx + 0x6c]
        mov    dword ptr [ebp - 0x68], ecx
        mov    eax, dword ptr [ebx + 0x1c]
        mov    edx, dword ptr [ebx + 0x18]
        mov    ecx, eax
        lea    esi, [edi + 0x1ec]
        push    ecx
        fstp    dword ptr [ebp - 0x50]
        mov    ecx, esi
        mov    dword ptr [ebp - 0x3c], edx
        mov    dword ptr [ebp - 0x10], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 0x10]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x204]
        test    al, al
        je    L_7f1b
        fld    dword ptr [ebp - 0x3c]
        fmul    dword ptr [edi + 0x200]
        fadd    dword ptr [edi + 0x1fc]
        fmulp st(1), st(0)
L_7f1b:
        mov    edx, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x70]
        mov    ecx, dword ptr [ebx + 0x18]
        lea    eax, [ebx + 0x70]
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, edx
        mov    dword ptr [ebp - 0x1c], ecx
        lea    esi, [edi + 0x20c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [ebp - 0xc], edx
        call    FUN_00495e30
        fld    dword ptr [ebp - 0xc]
        mov    edx, dword ptr [esi + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x224]
        test    al, al
        je    L_7f70
        fld    dword ptr [ebp - 0x1c]
        fmul    dword ptr [edi + 0x220]
        fadd    dword ptr [edi + 0x21c]
        fmulp st(1), st(0)
L_7f70:
        mov    ecx, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x74]
        mov    eax, dword ptr [ebx + 0x18]
        mov    edx, ecx
        mov    dword ptr [ebp - 8], ecx
        lea    esi, [edi + 0x22c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x28], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 8]
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x244]
        test    al, al
        je    L_7fbf
        fld    dword ptr [ebp - 0x28]
        fmul    dword ptr [edi + 0x240]
        fadd    dword ptr [edi + 0x23c]
        fmulp st(1), st(0)
L_7fbf:
        mov    eax, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x78]
        mov    edx, dword ptr [ebx + 0x18]
        mov    ecx, eax
        lea    esi, [edi + 0x24c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x4c], edx
        mov    dword ptr [ebp - 0x18], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 0x18]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x264]
        test    al, al
        je    L_800e
        fld    dword ptr [ebp - 0x4c]
        fmul    dword ptr [edi + 0x260]
        fadd    dword ptr [edi + 0x25c]
        fmulp st(1), st(0)
L_800e:
        mov    ecx, dword ptr [ebp - 0x14]
        fstp    dword ptr [ebx + 0x7c]
        mov    eax, dword ptr [ebp + 8]
        lea    edx, [ebp - 0x9c]
        mov    dword ptr [ebp - 0x6c], ecx
        mov    ecx, dword ptr [eax + 0x20]
        push    edx
        call    FUN_0048dd20
        mov    ecx, dword ptr [ebp - 0x20]
L_802c:
        mov    edx, dword ptr [ebp - 4]
        mov    eax, dword ptr [edx + 0xa0]
        inc    ecx
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x20], ecx
        mov    ebx, edx
        jb    L_7c90
        jmp    L_83ea
L_8048:
        mov    eax, dword ptr [ebx + 0xa0]
        xor    ecx, ecx
        test    eax, eax
        mov    dword ptr [ebp - 0x18], ecx
        jbe    L_83ea
L_805b:
        mov    eax, dword ptr [ebx + 0x10]
        mov    ebx, dword ptr [eax + 0x270]
        mov    edx, dword ptr [ebp - 4]
        imul    ebx, ecx
        add    ebx, dword ptr [edx + 0xa8]
        fld    dword ptr [ebx + 0x1c]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 1
        je    L_83d3
        mov    eax, dword ptr [ebx + 0x30]
        mov    ecx, dword ptr [ebx + 0x34]
        mov    edx, dword ptr [ebx + 0x38]
        mov    dword ptr [ebp - 0xc0], eax
        lea    eax, [ebx + 0x48]
        mov    dword ptr [ebp - 0xb0], ecx
        push    eax
        lea    ecx, [ebp - 0xcc]
        mov    dword ptr [ebp - 0xa0], edx
        call    FUN_0041a160
        lea    ecx, [ebp - 0xfc]
        lea    edx, [ebp - 0xcc]
        lea    eax, [ebp - 0x12c]
        mov    dword ptr [ebp - 0x2c], ecx
        mov    dword ptr [ebp - 0x24], edx
        mov    dword ptr [ebp - 0x14], eax
        mov    edx, dword ptr [ebp - 0x24]
        push    esi
        mov    esi, dword ptr [ebp - 0x2c]
        mov    eax, dword ptr [ebp - 0x14]
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
        lea    ecx, [ebp - 0x12c]
        mov    dword ptr [ebp - 0x7c], ecx
        fld    dword ptr [ebx + 0x6c]
        fstp    dword ptr [ebp - 0x38]
        fld    dword ptr [ebx + 0x6c]
        lea    edx, [ebp - 0x38]
        fstp    dword ptr [ebp - 0x34]
        fld    dword ptr [ebx + 0x6c]
        mov    dword ptr [ebp - 0x68], edx
        mov    ecx, dword ptr [ebx + 0x1c]
        mov    eax, dword ptr [ebx + 0x18]
        mov    edx, ecx
        mov    dword ptr [ebp - 0x10], ecx
        lea    esi, [edi + 0x1ec]
        fstp    dword ptr [ebp - 0x30]
        push    edx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x3c], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 0x10]
        mov    ecx, dword ptr [esi + 4]
        lea    eax, [eax + eax*2]
        fsub    dword ptr [ecx + eax*4]
        lea    eax, [ecx + eax*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x204]
        test    al, al
        je    L_82b6
        fld    dword ptr [ebp - 0x3c]
        fmul    dword ptr [edi + 0x200]
        fadd    dword ptr [edi + 0x1fc]
        fmulp st(1), st(0)
L_82b6:
        mov    edx, dword ptr [ebx + 0x18]
        fstp    dword ptr [ebx + 0x70]
        lea    eax, [ebx + 0x70]
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ecx, eax
        lea    esi, [edi + 0x20c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [ebp - 0x1c], edx
        mov    dword ptr [ebp - 0xc], eax
        call    FUN_00495e30
        fld    dword ptr [ebp - 0xc]
        lea    edx, [eax + eax*2]
        mov    eax, dword ptr [esi + 4]
        fsub    dword ptr [eax + edx*4]
        lea    eax, [eax + edx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x224]
        test    al, al
        je    L_830b
        fld    dword ptr [ebp - 0x1c]
        fmul    dword ptr [edi + 0x220]
        fadd    dword ptr [edi + 0x21c]
        fmulp st(1), st(0)
L_830b:
        mov    edx, dword ptr [ebx + 0x1c]
        fstp    dword ptr [ebx + 0x74]
        mov    ecx, dword ptr [ebx + 0x18]
        mov    eax, edx
        mov    dword ptr [ebp - 0x28], ecx
        lea    esi, [edi + 0x22c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [ebp - 8], edx
        call    FUN_00495e30
        fld    dword ptr [ebp - 8]
        mov    edx, dword ptr [esi + 4]
        lea    ecx, [eax + eax*2]
        fsub    dword ptr [edx + ecx*4]
        lea    eax, [edx + ecx*4]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x244]
        test    al, al
        je    L_835a
        fld    dword ptr [ebp - 0x28]
        fmul    dword ptr [edi + 0x240]
        fadd    dword ptr [edi + 0x23c]
        fmulp st(1), st(0)
L_835a:
        mov    edx, dword ptr [edi + 0x254]
        fstp    dword ptr [ebx + 0x78]
        fld    dword ptr [ebx + 0x1c]
        xor    ecx, ecx
        test    edx, edx
        jbe    L_8383
        mov    esi, dword ptr [edi + 0x250]
L_8372:
        fcom    dword ptr [esi]
        fnstsw  ax
        test    ah, 1
        jne    L_8383
        inc    ecx
        add    esi, 0xc
        cmp    ecx, edx
        jb    L_8372
L_8383:
        lea    eax, [ecx + ecx*2]
        mov    ecx, dword ptr [edi + 0x250]
        fsub    dword ptr [ecx + eax*4 - 0xc]
        lea    eax, [ecx + eax*4 - 0xc]
        fmul    dword ptr [eax + 4]
        fadd    dword ptr [eax + 8]
        mov    al, byte ptr [edi + 0x264]
        test    al, al
        je    L_83b5
        fld    dword ptr [edi + 0x260]
        fmul    dword ptr [ebx + 0x18]
        fadd    dword ptr [edi + 0x25c]
        fmulp st(1), st(0)
L_83b5:
        mov    edx, dword ptr [ebp - 0x14]
        fstp    dword ptr [ebx + 0x7c]
        mov    ecx, dword ptr [ebp + 8]
        mov    ecx, dword ptr [ecx + 0x20]
        lea    eax, [ebp - 0x9c]
        push    eax
        mov    dword ptr [ebp - 0x6c], edx
        call    FUN_0048dd20
        mov    ecx, dword ptr [ebp - 0x18]
L_83d3:
        mov    edx, dword ptr [ebp - 4]
        mov    eax, dword ptr [edx + 0xa0]
        inc    ecx
        cmp    ecx, eax
        mov    dword ptr [ebp - 0x18], ecx
        mov    ebx, edx
        jb    L_805b
L_83ea:
        mov    eax, dword ptr [ebp + 8]
        push    eax
        mov    ecx, ebx
        call    FUN_00494990
L_83f5:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    4
        nop    
        nop    
        ret    
    }
}
