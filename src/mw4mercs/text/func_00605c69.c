/*
 * FUN_00605c69 (extent 0x605c69-0x60653d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d5ec;
extern char   g_007b556c;
extern int    g_007b8cd8;
extern int    g_007b8cdc;
extern int    g_007b8ce0;
extern int    g_007b8ce4;
extern int    g_007b8d68;
extern int    g_007b8d6c;
extern int    g_007b8d70;
extern int    g_007b8d88;
extern int    g_007b8d8c;
extern int    g_007b8d90;
extern void __cdecl FUN_0040cb70(void);
extern void __cdecl FUN_0041b680(void);
extern void __cdecl FUN_0041b720(void);
extern void __cdecl FUN_0041bb80(void);
extern void __cdecl FUN_0041bd00(void);
extern void __cdecl FUN_00698d20(void);
extern void __cdecl FUN_00698d60(void);
extern void __cdecl FUN_00698f50(void);
extern void __cdecl FUN_00698f80(void);
extern void __cdecl FUN_00699920(void);
extern void __cdecl FUN_00699940(void);
extern void __cdecl FUN_00699960(void);
extern void __cdecl FUN_00699980(void);
extern void __cdecl FUN_006999b0(void);
extern void __cdecl FUN_00699a60(void);
extern void __cdecl FUN_00699a80(void);
extern void __cdecl FUN_00699aa0(void);
extern void __cdecl FUN_00699b80(void);
extern void __cdecl FUN_00699cb0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00605c69(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x170
        fld    dword ptr [ebp + 0x10]
        push    esi
        fabs    
        fcomp    dword ptr [g_0076d5ec]
        fnstsw  ax
        test    ah, 0x41
        jne    L_6536
        mov    esi, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [esi + 0x18]
        mov    eax, dword ptr [eax + 0x30]
        shr    eax, 4
        test    eax, eax
        mov    byte ptr [ebp - 0x60], 0
        jle    L_6536
        push    ebx
        push    edi
        xor    edi, edi
L_5cbc:
        mov    edx, dword ptr [esi + 0x28]
        mov    ecx, dword ptr [edx + 0x10]
        mov    ecx, dword ptr [ecx + 0x2c]
        mov    edx, dword ptr [edx + 0x14]
        mov    eax, edi
        shl    eax, 4
        xor    ebx, ebx
        mov    bl, byte ptr [ecx + eax + 0xf]
        add    ecx, eax
        mov    ebx, dword ptr [edx + ebx*4]
        cmp    ebx, -1
        je    L_6517
        mov    dl, byte ptr [esi + 0x24]
        test    dl, dl
        je    L_5d06
        mov    edx, dword ptr [esi + 0x18]
        mov    edx, dword ptr [edx + 0x2c]
        cmp    byte ptr [edx + eax + 0xd], 0
        je    L_5d06
        mov    edx, dword ptr [esi + 0x18]
        mov    edx, dword ptr [edx + 0x2c]
        cmp    byte ptr [edx + eax + 0xd], 4
        jne    L_6517
L_5d06:
        mov    cl, byte ptr [ecx + 0xd]
        test    cl, cl
        jne    L_5f24
        push    edi
        mov    ecx, esi
        call    FUN_00698d20
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 4], eax
        call    FUN_00698d60
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 8], eax
        call    FUN_00698f50
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp + 0xc], eax
        call    FUN_00698f80
        mov    ecx, dword ptr [g_007b8d8c]
        mov    edx, dword ptr [g_007b8d90]
        mov    edi, eax
        mov    eax, dword ptr [g_007b8d88]
        mov    dword ptr [ebp - 0x2c], eax
        mov    dword ptr [ebp - 0x14], eax
        mov    eax, dword ptr [ebp - 8]
        test    eax, eax
        mov    dword ptr [ebp - 0x28], ecx
        mov    dword ptr [ebp - 0x24], edx
        mov    dword ptr [ebp - 0x10], ecx
        mov    dword ptr [ebp - 0xc], edx
        je    L_5e16
        mov    ecx, dword ptr [ebp - 4]
        fld    dword ptr [esi + 0x10]
        test    ecx, ecx
        push    ecx
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        je    L_5dd7
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        push    ecx
        push    eax
        lea    eax, [ebp - 0xe0]
        push    eax
        call    FUN_00699a60
        fld    dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax]
        add    esp, 0x14
        mov    dword ptr [ebp - 0x14], ecx
        mov    edx, dword ptr [eax + 4]
        mov    ecx, dword ptr [ebp + 0xc]
        mov    dword ptr [ebp - 0x10], edx
        mov    eax, dword ptr [eax + 8]
        mov    edx, dword ptr [ebp - 4]
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    ecx
        push    edi
        mov    dword ptr [ebp - 0xc], eax
        mov    eax, dword ptr [ebp - 8]
        push    edx
        push    eax
        lea    ecx, [ebp - 0x104]
        push    ecx
        call    FUN_006999b0
L_5dbe:
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x2c], edx
        mov    ecx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x28], ecx
        mov    edx, dword ptr [eax + 8]
        add    esp, 0x18
        mov    dword ptr [ebp - 0x24], edx
        jmp    L_5e7b
L_5dd7:
        push    edi
        push    edi
        push    eax
        push    eax
        lea    eax, [ebp - 0x98]
        push    eax
        call    FUN_00699940
        fld    dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax]
        add    esp, 0x14
        mov    dword ptr [ebp - 0x14], ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x10], edx
        mov    eax, dword ptr [eax + 8]
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    edi
        mov    dword ptr [ebp - 0xc], eax
        mov    eax, dword ptr [ebp - 8]
        push    edi
        push    eax
        push    eax
        lea    ecx, [ebp - 0xb0]
        push    ecx
        call    FUN_00699920
        jmp    L_5dbe
L_5e16:
        mov    edi, dword ptr [ebp - 4]
        test    edi, edi
        je    L_5e69
        fld    dword ptr [esi + 0x10]
        mov    eax, dword ptr [ebp + 0xc]
        push    ecx
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    eax
        push    eax
        push    edi
        lea    eax, [ebp - 0xc8]
        push    edi
        push    eax
        call    FUN_00699940
        fld    dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x14], ecx
        mov    edx, dword ptr [eax + 4]
        add    esp, 0x14
        mov    dword ptr [ebp - 0x10], edx
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0xc], eax
        mov    eax, dword ptr [ebp + 0xc]
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    eax
        push    eax
        push    edi
        lea    ecx, [ebp - 0xa4]
        push    edi
        push    ecx
        call    FUN_00699920
        jmp    L_5dbe
L_5e69:
        push    0x78ba04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5e7b
        int 3    
L_5e7b:
        fld    dword ptr [esi + 0x14]
        mov    ecx, dword ptr [ebp + 8]
        mov    al, byte ptr [ebx + ecx + 4]
        fld    st(0)
        test    al, 2
        fmul    dword ptr [ebp - 0x14]
        fstp    dword ptr [ebp - 0x14]
        fld    dword ptr [ebp - 0x10]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x10]
        fld    dword ptr [ebp - 0xc]
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0xc]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        jne    L_5ec3
        mov    edx, dword ptr [ebp - 0x2c]
        or    al, 2
        mov    byte ptr [ebx + ecx + 4], al
        lea    eax, [ebx + ebx*2]
        lea    edi, [ecx + eax*4]
        mov    eax, dword ptr [ebp - 0x28]
        mov    dword ptr [edi + 0x4c], edx
        mov    edx, dword ptr [ebp - 0x24]
        mov    dword ptr [edi + 0x50], eax
        mov    dword ptr [edi + 0x54], edx
        jmp    L_5edd
L_5ec3:
        mov    edx, dword ptr [ebp + 0x10]
        lea    eax, [ebx + ebx*2]
        lea    edi, [ecx + eax*4]
        push    edx
        lea    eax, [ebp - 0x2c]
        lea    ecx, [edi + 0x4c]
        push    eax
        push    ecx
        call    FUN_0040cb70
        mov    ecx, dword ptr [ebp + 8]
L_5edd:
        mov    al, byte ptr [ebx + ecx + 4]
        test    al, 4
        jne    L_5f0b
        mov    edx, dword ptr [ebp - 0x10]
        or    al, 4
        mov    byte ptr [ebx + ecx + 4], al
        mov    ecx, dword ptr [ebp - 0x14]
        mov    eax, dword ptr [ebp - 0xc]
        mov    dword ptr [edi + 0x394], ecx
        mov    dword ptr [edi + 0x398], edx
        mov    dword ptr [edi + 0x39c], eax
        jmp    L_6517
L_5f0b:
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        lea    eax, [ebp - 0x14]
        lea    ecx, [edi + 0x394]
        push    eax
        push    ecx
        call    FUN_0040cb70
        jmp    L_6517
L_5f24:
        cmp    cl, 4
        jne    L_61d0
        push    edi
        mov    ecx, esi
        call    FUN_00698d20
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 8], eax
        call    FUN_00698d60
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 4], eax
        call    FUN_00698f50
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp + 0xc], eax
        call    FUN_00698f80
        mov    ecx, dword ptr [g_007b8cd8]
        mov    edx, dword ptr [g_007b8cdc]
        mov    edi, eax
        mov    eax, dword ptr [g_007b8ce0]
        mov    dword ptr [ebp - 0x44], eax
        mov    eax, dword ptr [g_007b8d6c]
        mov    dword ptr [ebp - 0x4c], ecx
        mov    ecx, dword ptr [g_007b8ce4]
        mov    dword ptr [ebp - 0x1c], eax
        mov    eax, dword ptr [ebp - 4]
        test    eax, eax
        mov    dword ptr [ebp - 0x48], edx
        mov    edx, dword ptr [g_007b8d68]
        mov    dword ptr [ebp - 0x40], ecx
        mov    ecx, dword ptr [g_007b8d70]
        mov    dword ptr [ebp - 0x20], edx
        mov    dword ptr [ebp - 0x18], ecx
        je    L_6055
        mov    ecx, dword ptr [ebp - 8]
        fld    dword ptr [esi + 0x10]
        test    ecx, ecx
        push    ecx
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        je    L_6010
        mov    edx, dword ptr [ebp + 0xc]
        push    edx
        push    edi
        push    ecx
        push    eax
        lea    eax, [ebp - 0x120]
        push    eax
        call    FUN_00699b80
        fld    dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x4c], ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x48], edx
        mov    ecx, dword ptr [eax + 8]
        add    esp, 0x14
        mov    dword ptr [ebp - 0x44], ecx
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp - 8]
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    eax
        push    edi
        mov    dword ptr [ebp - 0x40], edx
        mov    edx, dword ptr [ebp - 4]
        push    ecx
        push    edx
        lea    eax, [ebp - 0x8c]
        push    eax
        call    FUN_00699a80
L_5ffa:
        mov    ecx, dword ptr [eax + 4]
        fld    dword ptr [eax]
        mov    edx, dword ptr [eax + 8]
        add    esp, 0x18
        mov    dword ptr [ebp - 0x1c], ecx
        mov    dword ptr [ebp - 0x18], edx
        jmp    L_60c3
L_6010:
        push    edi
        push    edi
        push    eax
        push    eax
        lea    eax, [ebp - 0x140]
        push    eax
        call    FUN_00699980
        fld    dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x4c], ecx
        mov    edx, dword ptr [eax + 4]
        add    esp, 0x14
        mov    dword ptr [ebp - 0x48], edx
        mov    ecx, dword ptr [eax + 8]
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    edi
        mov    dword ptr [ebp - 0x44], ecx
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp - 4]
        push    edi
        push    eax
        push    eax
        lea    eax, [ebp - 0xbc]
        push    eax
        mov    dword ptr [ebp - 0x40], edx
        call    FUN_00699960
        jmp    L_5ffa
L_6055:
        mov    edi, dword ptr [ebp - 8]
        test    edi, edi
        je    L_60ae
        fld    dword ptr [esi + 0x10]
        mov    eax, dword ptr [ebp + 0xc]
        push    ecx
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    eax
        push    eax
        push    edi
        lea    eax, [ebp - 0x160]
        push    edi
        push    eax
        call    FUN_00699980
        fld    dword ptr [esi + 0x10]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x4c], ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x48], edx
        mov    ecx, dword ptr [eax + 8]
        add    esp, 0x14
        mov    dword ptr [ebp - 0x44], ecx
        mov    edx, dword ptr [eax + 0xc]
        mov    eax, dword ptr [ebp + 0xc]
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    eax
        push    eax
        push    edi
        lea    eax, [ebp - 0xf8]
        push    edi
        push    eax
        mov    dword ptr [ebp - 0x40], edx
        call    FUN_00699960
        jmp    L_5ffa
L_60ae:
        push    0x78ba04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_60c0
        int 3    
L_60c0:
        fld    dword ptr [ebp - 0x20]
L_60c3:
        mov    eax, dword ptr [esi + 0x14]
        mov    edi, dword ptr [ebp + 8]
        mov    dword ptr [ebp - 0x5c], eax
        fld    dword ptr [ebp - 0x5c]
        mov    al, byte ptr [ebx + edi + 4]
        test    al, 0x10
        fmul st(0), st(1)
        fstp    dword ptr [ebp - 0x20]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [ebp - 0x1c]
        fmul    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x1c]
        fld    dword ptr [ebp - 0x18]
        fmul    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x18]
        jne    L_6123
        mov    edx, dword ptr [ebp - 0x4c]
        or    al, 0x10
        mov    byte ptr [ebx + edi + 4], al
        mov    ecx, ebx
        shl    ecx, 4
        lea    eax, [ecx + edi + 0x6dc]
        mov    ecx, dword ptr [ebp - 0x48]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [ebp - 0x40]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ebp - 0x44]
        mov    dword ptr [eax + 0xc], ecx
        lea    ecx, [ebp - 0x4c]
        mov    dword ptr [eax + 8], edx
        call    FUN_0041b720
        jmp    L_6164
L_6123:
        mov    edx, ebx
        shl    edx, 4
        lea    ecx, [edx + edi + 0x6dc]
        mov    eax, ecx
        mov    edx, dword ptr [eax]
        mov    dword ptr [ebp - 0x80], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x7c], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ebp - 0x78], edx
        mov    edx, dword ptr [ebp + 0x10]
        push    edx
        mov    dword ptr [ebp - 0x74], eax
        lea    eax, [ebp - 0x4c]
        push    eax
        lea    edx, [ebp - 0x80]
        push    edx
        mov    dword ptr [ebp + 0xc], ecx
        call    FUN_0041bb80
        mov    ecx, dword ptr [ebp + 0xc]
        call    FUN_0041b680
L_6164:
        mov    al, byte ptr [ebx + edi + 4]
        test    al, 8
        jne    L_6192
        mov    ecx, dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebp - 0x1c]
        or    al, 8
        mov    byte ptr [ebx + edi + 4], al
        lea    eax, [ebx + ebx*2]
        lea    edi, [edi + eax*4 + 0xb3c]
        mov    eax, dword ptr [ebp - 0x18]
        mov    dword ptr [edi], ecx
        mov    dword ptr [edi + 4], edx
        mov    dword ptr [edi + 8], eax
        jmp    L_6517
L_6192:
        fld    dword ptr [ebp - 0x20]
        lea    ecx, [ebx + ebx*2]
        fsub    dword ptr [edi + ecx*4 + 0xb3c]
        lea    eax, [edi + ecx*4 + 0xb3c]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [ebp - 0x1c]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ebp - 0x18]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        jmp    L_6517
L_61d0:
        cmp    cl, 1
        jne    L_631b
        push    edi
        mov    ecx, esi
        call    FUN_00698d20
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp + 0xc], eax
        call    FUN_00698d60
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 8], eax
        call    FUN_00698f50
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 4], eax
        call    FUN_00698f80
        mov    ecx, dword ptr [g_007b8d8c]
        mov    edx, dword ptr [g_007b8d88]
        mov    dword ptr [ebp - 0x54], ecx
        mov    ecx, dword ptr [ebp - 8]
        test    ecx, ecx
        mov    dword ptr [ebp - 0x58], edx
        mov    edx, dword ptr [g_007b8d90]
        mov    dword ptr [ebp - 0x50], edx
        je    L_626a
        mov    edx, dword ptr [ebp + 0xc]
        fld    dword ptr [esi + 0x10]
        test    edx, edx
        push    ecx
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        je    L_6258
        mov    edi, dword ptr [ebp - 4]
        push    edi
        push    eax
        push    edx
        push    ecx
        lea    eax, [ebp - 0xd4]
        push    eax
        call    FUN_006999b0
L_6245:
        mov    ecx, dword ptr [eax + 4]
        fld    dword ptr [eax]
        mov    edx, dword ptr [eax + 8]
        add    esp, 0x18
        mov    dword ptr [ebp - 0x54], ecx
        mov    dword ptr [ebp - 0x50], edx
        jmp    L_62a2
L_6258:
        push    eax
        push    eax
        push    ecx
        push    ecx
        lea    eax, [ebp - 0x110]
        push    eax
        call    FUN_00699920
        jmp    L_6245
L_626a:
        mov    eax, dword ptr [ebp + 0xc]
        test    eax, eax
        je    L_628d
        fld    dword ptr [esi + 0x10]
        push    ecx
        mov    ecx, dword ptr [ebp - 4]
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    ecx
        push    ecx
        push    eax
        push    eax
        lea    eax, [ebp - 0xec]
        push    eax
        call    FUN_00699920
        jmp    L_6245
L_628d:
        push    0x78ba04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_629f
        int 3    
L_629f:
        fld    dword ptr [ebp - 0x58]
L_62a2:
        mov    ecx, dword ptr [ebp + 8]
        mov    al, byte ptr [ebx + ecx + 4]
        test    al, 2
        jne    L_62cd
        or    al, 2
        mov    byte ptr [ebx + ecx + 4], al
        lea    eax, [ebx + ebx*2]
        lea    eax, [ecx + eax*4 + 0x4c]
L_62ba:
        mov    ecx, dword ptr [ebp - 0x54]
        fstp    dword ptr [eax]
        mov    edx, dword ptr [ebp - 0x50]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], edx
        jmp    L_6517
L_62cd:
        mov    dl, byte ptr [g_007b556c]
        test    dl, dl
        je    L_630c
        lea    eax, [ebx + ebx*2]
        fsub    dword ptr [ecx + eax*4 + 0x4c]
        lea    eax, [ecx + eax*4 + 0x4c]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax]
        fstp    dword ptr [eax]
        fld    dword ptr [ebp - 0x54]
        fsub    dword ptr [eax + 4]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax + 4]
        fstp    dword ptr [eax + 4]
        fld    dword ptr [ebp - 0x50]
        fsub    dword ptr [eax + 8]
        fmul    dword ptr [ebp + 0x10]
        fadd    dword ptr [eax + 8]
        fstp    dword ptr [eax + 8]
        jmp    L_6517
L_630c:
        or    al, 2
        lea    edx, [ebx + ebx*2]
        mov    byte ptr [ebx + ecx + 4], al
        lea    eax, [ecx + edx*4 + 0x4c]
        jmp    L_62ba
L_631b:
        cmp    cl, 2
        jne    L_647d
        push    edi
        mov    ecx, esi
        call    FUN_00698d20
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp + 0xc], eax
        call    FUN_00698d60
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 8], eax
        call    FUN_00698f50
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 4], eax
        call    FUN_00698f80
        mov    ecx, dword ptr [g_007b8cd8]
        mov    edx, dword ptr [g_007b8cdc]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    ecx, dword ptr [g_007b8ce0]
        mov    dword ptr [ebp - 0x34], ecx
        mov    ecx, dword ptr [ebp - 8]
        test    ecx, ecx
        mov    dword ptr [ebp - 0x38], edx
        mov    edx, dword ptr [g_007b8ce4]
        mov    dword ptr [ebp - 0x30], edx
        je    L_63c7
        mov    edx, dword ptr [ebp + 0xc]
        fld    dword ptr [esi + 0x10]
        test    edx, edx
        push    ecx
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        je    L_63b5
        mov    edi, dword ptr [ebp - 4]
        push    edi
        push    eax
        push    edx
        push    ecx
        lea    eax, [ebp - 0x130]
        push    eax
        call    FUN_00699aa0
L_6399:
        mov    ecx, dword ptr [eax]
        mov    dword ptr [ebp - 0x3c], ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ebp - 0x38], edx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [ebp - 0x34], ecx
        mov    edx, dword ptr [eax + 0xc]
        add    esp, 0x18
        mov    dword ptr [ebp - 0x30], edx
        jmp    L_63fc
L_63b5:
        push    eax
        push    eax
        push    ecx
        push    ecx
        lea    eax, [ebp - 0x150]
        push    eax
        call    FUN_00699980
        jmp    L_6399
L_63c7:
        mov    eax, dword ptr [ebp + 0xc]
        test    eax, eax
        je    L_63ea
        fld    dword ptr [esi + 0x10]
        push    ecx
        mov    ecx, dword ptr [ebp - 4]
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    ecx
        push    ecx
        push    eax
        push    eax
        lea    eax, [ebp - 0x170]
        push    eax
        call    FUN_00699980
        jmp    L_6399
L_63ea:
        push    0x78ba04
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_63fc
        int 3    
L_63fc:
        mov    edi, dword ptr [ebp + 8]
        mov    al, byte ptr [ebx + edi + 4]
        test    al, 0x10
        jne    L_643b
        or    al, 0x10
        lea    ecx, [ebp - 0x3c]
        mov    byte ptr [ebx + edi + 4], al
        call    FUN_0041b720
        mov    eax, dword ptr [ebp - 0x3c]
        mov    ecx, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ebp - 0x34]
        shl    ebx, 4
        lea    ebx, [ebx + edi + 0x6dc]
        mov    dword ptr [ebx], eax
        mov    eax, dword ptr [ebp - 0x30]
        mov    dword ptr [ebx + 4], ecx
        mov    dword ptr [ebx + 8], edx
        mov    dword ptr [ebx + 0xc], eax
        jmp    L_6517
L_643b:
        shl    ebx, 4
        lea    ebx, [ebx + edi + 0x6dc]
        mov    ecx, ebx
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ecx + 4]
        mov    dword ptr [ebp - 0x70], edx
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [ebp - 0x6c], eax
        mov    eax, dword ptr [ecx + 0xc]
        mov    ecx, dword ptr [ebp + 0x10]
        push    ecx
        mov    dword ptr [ebp - 0x68], edx
        lea    edx, [ebp - 0x3c]
        mov    dword ptr [ebp - 0x64], eax
        push    edx
        lea    eax, [ebp - 0x70]
        push    eax
        mov    ecx, ebx
        call    FUN_0041bd00
        mov    ecx, ebx
        call    FUN_0041b720
        jmp    L_6517
L_647d:
        cmp    cl, 3
        jne    L_6517
        push    edi
        mov    ecx, esi
        call    FUN_00698d20
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp + 0xc], eax
        call    FUN_00698d60
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 8], eax
        call    FUN_00698f50
        push    edi
        mov    ecx, esi
        mov    dword ptr [ebp - 4], eax
        call    FUN_00698f80
        mov    edx, dword ptr [ebp - 8]
        mov    ecx, eax
        xor    eax, eax
        test    edx, edx
        je    L_64d7
        mov    eax, dword ptr [ebp + 0xc]
        fld    dword ptr [esi + 0x10]
        test    eax, eax
        push    ecx
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        je    L_64d1
        mov    edi, dword ptr [ebp - 4]
        push    edi
        push    ecx
        push    eax
        push    edx
        jmp    L_64ec
L_64d1:
        push    ecx
        push    ecx
        push    edx
        push    edx
        jmp    L_64ec
L_64d7:
        mov    ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        je    L_64f4
        fld    dword ptr [esi + 0x10]
        mov    eax, dword ptr [ebp - 4]
        push    ecx
        __emit 0xD9  // FPU dword ptr [esp] (no disp byte, ref D9 1C 24)
__emit 0x1C
__emit 0x24
        push    eax
        push    eax
        push    ecx
        push    ecx
L_64ec:
        call    FUN_00699cb0
        add    esp, 0x14
L_64f4:
        mov    edx, dword ptr [ebp + 8]
        mov    cl, byte ptr [ebx + edx + 4]
        test    cl, 0x20
        jne    L_6510
        or    cl, 0x20
        mov    byte ptr [ebx + edx + 4], cl
        mov    dword ptr [edx + ebx*4 + 0xe84], eax
        jmp    L_6517
L_6510:
        or    dword ptr [edx + ebx*4 + 0xe84], eax
L_6517:
        inc    byte ptr [ebp - 0x60]
        mov    eax, dword ptr [esi + 0x18]
        mov    edi, dword ptr [ebp - 0x60]
        mov    ecx, dword ptr [eax + 0x30]
        and    edi, 0xff
        shr    ecx, 4
        cmp    edi, ecx
        jl    L_5cbc
        pop    edi
        pop    ebx
L_6536:
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    0xc
    }
}
