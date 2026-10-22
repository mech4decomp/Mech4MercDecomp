/*
 * FUN_005feeb0 (extent 0x5feeb0-0x5ff715) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d5f0;
extern float  g_00779d28;
extern float  g_0078b358;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern int    g_007dd234;
extern int    g_007f20d0;
extern int    g_007f2458;
extern int    g_007f245c;
extern int    g_007f2500;
extern int    g_007f2d2c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_004f8430(void);
extern void __cdecl FUN_00545880(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_0058f190(void);
extern void __cdecl FUN_00592a70(void);
extern void __cdecl FUN_00593ca0(void);
extern void __cdecl FUN_005ad2e0(void);
extern void __cdecl FUN_005ff6d0(void);
extern void __cdecl FUN_005ff720(void);
extern void __cdecl FUN_005ffba0(void);
extern void __cdecl FUN_005fff20(void);
extern void __cdecl FUN_005fffc0(void);
extern void __cdecl FUN_006004b0(void);
extern void __cdecl FUN_00600570(void);
extern void __cdecl FUN_00600890(void);
extern void __cdecl FUN_006019e0(void);
extern void __cdecl FUN_00601ef0(void);
extern void __cdecl FUN_00602240(void);
extern void __cdecl FUN_00602450(void);
extern void __cdecl FUN_006025c0(void);
extern void __cdecl FUN_00602c60(void);
extern void __cdecl FUN_00602cd0(void);
extern void __cdecl FUN_006100a0(void);
extern void __cdecl FUN_00616ab0(void);
extern void __cdecl FUN_00618120(void);
extern void __cdecl FUN_00622690(void);
extern void __cdecl FUN_0063b370(void);
extern void __cdecl FUN_00647550(void);
extern void __cdecl FUN_0064b810(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00707f50(void);

__declspec(naked) void FUN_005feeb0(void)
{
    __asm {
        sub    esp, 0x94
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    eax, dword ptr [ecx + 0xc]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x4c]
        push    ebx
        push    ebp
        mov    dword ptr [esp + 0x28], eax
        cmp    dword ptr [edx + 0x14], 4
        push    esi
        push    edi
        je    L_f690
        mov    eax, dword ptr [g_007dd234]
        push    eax
        call    FUN_006f4950
        mov    ebp, dword ptr [esp + 0x30]
        mov    esi, dword ptr [ebp + 0x50]
        mov    eax, dword ptr [esi + 0x20]
        xor    bl, bl
        test    eax, eax
        jne    L_ef03
        mov    bl, 1
L_ef03:
        mov    eax, dword ptr [esi + 0x24]
        test    eax, eax
        mov    edi, dword ptr [esp + 0x1c]
        je    L_ef4c
        mov    al, byte ptr [edi + 0x2214]
        test    al, al
        jne    L_ef20
        fld    dword ptr [g_0076c5b0]
        jmp    L_ef2b
L_ef20:
        lea    ecx, [edi + 0x21e8]
        call    FUN_006100a0
L_ef2b:
        mov    eax, dword ptr [esi + 0x28]
        lea    eax, [eax + eax*2]
        lea    ecx, [eax + eax*4]
        shl    ecx, 2
        mov    dword ptr [esp + 0x14], ecx
        fild    dword ptr [esp + 0x14]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_ef4c
        mov    bl, 1
L_ef4c:
        cmp    byte ptr [ebp + 0x17], 1
        jne    L_f134
        mov    eax, dword ptr [esi + 0x38]
        test    eax, eax
        je    L_f0cd
        push    0
        call    FUN_00707e70
        fsub    dword ptr [edi + 0x2260]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_f134
        xor    ebx, ebx
        push    ebx
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x2260]
        mov    esi, dword ptr [esi + 0x40]
        cmp    esi, ebx
        jne    L_f00a
        lea    edx, [esp + 0x10]
        push    edx
        push    ecx
        mov    ecx, esp
        push    0x7dc694
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_004ea0f0
        mov    ecx, edi
        call    FUN_00601ef0
        test    al, al
        jne    L_efc1
        push    ebx
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x2268]
L_efc1:
        mov    eax, dword ptr [esp + 0x10]
L_efc5:
        cmp    eax, 1
        jle    L_f0a8
        push    ebx
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x2264]
        push    ebx
        call    FUN_00707e70
        fsub    dword ptr [edi + 0x2268]
        fcomp    qword ptr [g_00779d28]
        fnstsw  ax
        test    ah, 0x41
        jne    L_f0a8
        mov    ecx, edi
        call    FUN_006019e0
        mov    ecx, ebp
        call    FUN_00545880
        jmp    L_f0a8
L_f00a:
        mov    eax, dword ptr [edi + 0x226c]
        dec    esi
        cmp    eax, esi
        jge    L_f04b
        lea    eax, [esp + 0x10]
        push    eax
        push    ecx
        mov    ecx, esp
        push    0x7dc694
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_004ea0f0
        mov    ecx, edi
        call    FUN_00601ef0
        test    al, al
        jne    L_f042
        push    ebx
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x2268]
L_f042:
        mov    eax, dword ptr [esp + 0x10]
        jmp    L_efc5
L_f04b:
        lea    ecx, [esp + 0x10]
        push    ecx
        push    ecx
        mov    ecx, esp
        push    0x7dc694
        mov    dword ptr [esp + 0x1c], ebx
        call    FUN_004ea0f0
        mov    ecx, edi
        call    FUN_00601ef0
        test    al, al
        jne    L_f078
        push    ebx
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x2264]
L_f078:
        cmp    dword ptr [esp + 0x10], 1
        jle    L_f0a8
        push    ebx
        call    FUN_00707e70
        fsub    dword ptr [edi + 0x2264]
        fcomp    qword ptr [g_00779d28]
        fnstsw  ax
        test    ah, 0x41
        jne    L_f0a8
        mov    ecx, edi
        call    FUN_006019e0
        mov    edx, dword ptr [ebp]
        push    ebx
        mov    ecx, ebp
        call    dword ptr [edx + 0x2c]
L_f0a8:
        push    ebx
        call    FUN_00707e70
        fsub    dword ptr [edi + 0x2264]
        fcomp    qword ptr [g_0078b358]
        fnstsw  ax
        test    ah, 0x41
        jne    L_f134
        mov    eax, dword ptr [ebp]
        push    0
        mov    ecx, ebp
        call    dword ptr [eax + 0x2c]
        jmp    L_f134
L_f0cd:
        test    bl, bl
        je    L_f134
        push    0
        call    FUN_00707e70
        fsub    dword ptr [edi + 0x2260]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_f134
        push    0
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x2260]
        mov    ecx, edi
        call    FUN_00602240
        test    al, al
        jne    L_f110
        push    0
        call    FUN_00707e70
        fstp    dword ptr [edi + 0x2264]
L_f110:
        push    0
        call    FUN_00707e70
        fsub    dword ptr [edi + 0x2264]
        fcomp    qword ptr [g_0078b358]
        fnstsw  ax
        test    ah, 0x41
        jne    L_f134
        mov    edx, dword ptr [ebp]
        push    0
        mov    ecx, ebp
        call    dword ptr [edx + 0x2c]
L_f134:
        mov    al, byte ptr [edi + 0x168]
        test    al, al
        je    L_f1a6
        mov    ecx, edi
        call    FUN_005ffba0
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    esi, eax
        mov    cx, word ptr [esi + 0x118]
        cmp    cx, word ptr [g_007db0ac]
        lea    eax, [esi + 0x118]
        jne    L_f173
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_f17b
L_f173:
        push    eax
        mov    ecx, edi
        call    FUN_005fffc0
L_f17b:
        mov    cx, word ptr [g_007db0ac]
        cmp    word ptr [esi + 0x11c], cx
        lea    eax, [esi + 0x11c]
        jne    L_f19e
        mov    dx, word ptr [g_007db0ae]
        cmp    word ptr [eax + 2], dx
        je    L_f1a6
L_f19e:
        push    eax
        mov    ecx, edi
        call    FUN_00600570
L_f1a6:
        fld    qword ptr [esp + 0xa8]
        mov    ecx, dword ptr [edi + 0x225c]
        test    ecx, ecx
        fsub    qword ptr [edi + 0xe4]
        fstp    dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x14]
        je    L_f1d1
        cmp    byte ptr [ebp + 0x17], 1
        jne    L_f1d1
        push    esi
        call    FUN_00622690
L_f1d1:
        push    esi
        mov    ecx, edi
        call    FUN_006004b0
        push    esi
        mov    ecx, edi
        call    FUN_00600890
        mov    esi, dword ptr [edi + 0x1ec]
        add    edi, 0x1ec
        mov    dword ptr [esp + 0x10], edi
L_f1f1:
        xor    ebp, ebp
        cmp    esi, ebp
        je    L_f208
        mov    ecx, dword ptr [esi]
        cmp    ecx, ebp
        mov    esi, dword ptr [esi + 4]
        je    L_f208
        push    edi
        call    FUN_004154d0
        jmp    L_f1f1
L_f208:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ebx, dword ptr [ecx + 0x10]
        lea    edx, [esp + 0x14]
        push    edx
        lea    eax, [esp + 0x1f]
        xor    ebx, 0x85739531
        mov    esi, dword ptr [ebx + 0x2c]
        push    eax
        lea    ecx, [esp + 0x34]
        mov    dword ptr [esp + 0x2c], ebp
        mov    dword ptr [esp + 0x30], ebp
        mov    dword ptr [esp + 0x1c], ebp
        call    FUN_00580580
        lea    ecx, [esp + 0x1b]
        push    ecx
        lea    ecx, [esp + 0x40]
        call    FUN_00602cd0
        lea    edx, [esp + 0x24]
        push    ebp
        push    edx
        call    FUN_0063b370
        mov    eax, dword ptr [esp + 0x30]
        mov    edi, dword ptr [esp + 0x2c]
        add    esp, 8
        sub    eax, edi
        push    ebp
        sar    eax, 2
        push    eax
        lea    ecx, [esp + 0x44]
        call    FUN_005ff720
        cmp    esi, ebp
        jle    L_f32c
        mov    dword ptr [esp + 0x20], ebp
        mov    dword ptr [esp + 0x14], esi
L_f284:
        mov    edx, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [ebx + 0x28]
        mov    ecx, dword ptr [ecx + edx + 0x14]
        call    FUN_0041fd80
        mov    edi, eax
        test    edi, edi
        je    L_f312
        mov    ecx, dword ptr [esp + 0x10]
        push    edi
        call    FUN_004179b0
        mov    esi, dword ptr [esp + 0x24]
        mov    eax, dword ptr [esp + 0x28]
        xor    ebp, ebp
        cmp    esi, eax
        je    L_f312
L_f2b2:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    0
        push    0x42c80000
        push    edi
        call    dword ptr [eax + 0x5c]
        test    al, al
        jne    L_f306
        mov    ecx, dword ptr [esp + 0x3c]
        mov    edx, dword ptr [esp + 0x40]
        mov    dword ptr [esp + 0x34], ecx
        push    ebp
        lea    ecx, [esp + 0x38]
        mov    dword ptr [esp + 0x3c], edx
        call    FUN_005ff6d0
        mov    ecx, dword ptr [esp + 0x38]
        mov    eax, dword ptr [esp + 0x34]
        lea    edx, [esp + 0x58]
        mov    dword ptr [esp + 0x54], ecx
        push    edx
        lea    ecx, [esp + 0x54]
        mov    dword ptr [esp + 0x54], eax
        call    FUN_00602c60
        mov    ecx, eax
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + 4]
        or    dword ptr [eax], ecx
L_f306:
        mov    eax, dword ptr [esp + 0x28]
        add    esi, 4
        inc    ebp
        cmp    esi, eax
        jne    L_f2b2
L_f312:
        mov    ecx, dword ptr [esp + 0x20]
        mov    eax, dword ptr [esp + 0x14]
        add    ecx, 0x1c
        dec    eax
        mov    dword ptr [esp + 0x20], ecx
        mov    dword ptr [esp + 0x14], eax
        jne    L_f284
L_f32c:
        mov    edi, dword ptr [esp + 0x3c]
        mov    esi, dword ptr [esp + 0x40]
        xor    ebp, ebp
L_f336:
        cmp    dword ptr [esp + 0x44], edi
        jne    L_f342
        cmp    dword ptr [esp + 0x48], esi
        je    L_f372
L_f342:
        mov    ecx, esi
        mov    eax, 1
        shl    eax, cl
        test    dword ptr [edi], eax
        je    L_f360
        mov    edx, dword ptr [esp + 0x24]
        mov    eax, dword ptr [edx + ebp]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        call    FUN_004179b0
L_f360:
        add    ebp, 4
        mov    ecx, esi
        inc    esi
        cmp    ecx, 0x1f
        jne    L_f336
        xor    esi, esi
        add    edi, 4
        jmp    L_f336
L_f372:
        mov    ecx, dword ptr [g_007f20d0]
        test    ecx, ecx
        je    L_f38f
        call    FUN_005ad2e0
        test    eax, eax
        je    L_f38f
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        call    FUN_004179b0
L_f38f:
        mov    edx, dword ptr [g_007f2500]
        inc    edx
        and    edx, 0x80000003
        jns    L_f3a3
        dec    edx
        or    edx, 0xfffffffc
        inc    edx
L_f3a3:
        mov    ebx, dword ptr [esp + 0x1c]
        mov    esi, dword ptr [ebx + 0x27c]
        test    esi, esi
        mov    dword ptr [g_007f2500], edx
        je    L_f3f6
        mov    al, byte ptr [ebx + 0x168]
        test    al, al
        jne    L_f3f6
        call    FUN_00707f50
        push    0
        mov    ecx, esi
        mov    edi, eax
        mov    ebp, edx
        call    FUN_0064b810
        call    FUN_00707f50
        mov    ecx, dword ptr [g_007f2458]
        sub    eax, edi
        sbb    edx, ebp
        add    ecx, eax
        mov    eax, dword ptr [g_007f245c]
        adc    eax, edx
        mov    dword ptr [g_007f2458], ecx
        mov    dword ptr [g_007f245c], eax
L_f3f6:
        mov    al, byte ptr [ebx + 0x21e4]
        test    al, al
        je    L_f662
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x16]
        test    al, al
        je    L_f662
        lea    ecx, [ebx + 0x21b8]
        call    FUN_006100a0
        fld    dword ptr [ebx + 0x2218]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_f662
        mov    ecx, ebx
        call    FUN_005fff20
        mov    esi, dword ptr [g_007dab44]
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [g_007dab40]
        xor    eax, ecx
        mov    edx, dword ptr [eax + 0x18]
        xor    edx, 0x85739531
        je    L_f608
        mov    edx, dword ptr [eax + 0x18]
        xor    edx, 0x85739531
        mov    edi, dword ptr [edx + 0x170]
        test    edi, edi
        je    L_f608
        mov    edx, dword ptr [eax + 0x18]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x170]
        mov    edx, dword ptr [edx + 0x10]
        shr    edx, 0x13
        test    dl, 1
        je    L_f608
        mov    edx, dword ptr [eax + 0x44]
        xor    edi, edi
        xor    edx, 0x85739531
        je    L_f5f3
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        mov    ebp, dword ptr [edx + 0x34]
        test    ebp, ebp
        je    L_f5f3
        mov    eax, dword ptr [eax + 0x44]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x34]
        mov    eax, dword ptr [edx + 0x48]
        test    eax, eax
        je    L_f5f3
        mov    eax, dword ptr [esi]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x34]
        mov    eax, dword ptr [edx + 0x48]
        push    1
        add    eax, 0x34
        push    eax
        lea    ecx, [esp + 0x68]
        call    FUN_004d1f80
        push    0x9c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_f51a
        lea    ecx, [esp + 0x60]
        push    ecx
        mov    ecx, eax
        call    FUN_00592a70
        jmp    L_f51c
L_f51a:
        xor    eax, eax
L_f51c:
        mov    ecx, eax
        call    FUN_00593ca0
        cmp    eax, -1
        je    L_f545
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x34]
        mov    edi, dword ptr [edx + 0x44]
L_f545:
        lea    ecx, [esp + 0x60]
        call    FUN_004d21c0
        cmp    edi, 1
        jl    L_f5f3
        cmp    edi, 3
        jg    L_f5f3
        push    1
        mov    ecx, ebx
        call    FUN_00602450
        mov    esi, dword ptr [g_007dab44]
        mov    eax, dword ptr [esi]
        mov    ecx, dword ptr [g_007dab40]
        xor    eax, ecx
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        je    L_f608
        cmp    edi, 1
        je    L_f608
        mov    eax, dword ptr [esi]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x18]
        xor    ecx, 0x85739531
        mov    esi, dword ptr [ecx + 0x170]
        push    0x64
        call    FUN_004084d0
        add    esp, 4
        lea    edx, [esp + 0x10]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x14], eax
        call    FUN_0058f190
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edi, dword ptr [g_007dab40]
        push    3
        lea    eax, [esp + 0x18]
        push    eax
        mov    eax, dword ptr [edx]
        push    ecx
        xor    eax, edi
        mov    ecx, dword ptr [eax + 0x44]
        xor    ecx, 0x85739531
        call    FUN_00618120
        mov    ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_004084e0
        add    esp, 4
        jmp    L_f5fc
L_f5f3:
        push    0
        mov    ecx, ebx
        call    FUN_00602450
L_f5fc:
        mov    ecx, dword ptr [g_007dab40]
        mov    esi, dword ptr [g_007dab44]
L_f608:
        mov    edi, dword ptr [esp + 0x30]
        xor    eax, eax
        mov    al, byte ptr [ebx + 0x224c]
        mov    edx, eax
        and    edx, 0xff
        mov    dword ptr [edi + 0xac], edx
        mov    edx, dword ptr [esi]
        xor    edx, ecx
        mov    edi, dword ptr [edx + 0x44]
        add    edx, 0x44
        xor    edi, 0x85739531
        je    L_f64e
        mov    ecx, dword ptr [edx]
        push    eax
        xor    ecx, 0x85739531
        call    FUN_00616ab0
        mov    ecx, dword ptr [g_007dab40]
        mov    esi, dword ptr [g_007dab44]
L_f64e:
        mov    eax, dword ptr [esi]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0
        call    dword ptr [edx + 0x2c]
L_f662:
        mov    byte ptr [ebx + 0x168], 0
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 0x3c]
        test    eax, eax
        je    L_f67f
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f67f:
        mov    eax, dword ptr [esp + 0x24]
        test    eax, eax
        je    L_f690
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f690:
        mov    ecx, dword ptr [g_007f2d2c]
        call    FUN_00647550
        mov    esi, dword ptr [esp + 0x1c]
        mov    ecx, esi
        call    FUN_006025c0
        mov    eax, dword ptr [esp + 0xac]
        mov    ecx, dword ptr [esp + 0xa8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004f8430
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x94
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 4]
        push    esi
        mov    esi, dword ptr [esp + 8]
        add    esi, eax
        mov    eax, esi
        cdq    
        and    edx, 0x1f
        add    eax, edx
        mov    edx, dword ptr [ecx]
        sar    eax, 5
        shl    eax, 2
        add    edx, eax
        and    esi, 0x8000001f
        mov    dword ptr [ecx], edx
        jns    L_f70e
        dec    esi
        or    esi, 0xffffffe0
        inc    esi
        jns    L_f70e
        add    esi, 0x20
        mov    eax, edx
        add    eax, -4
        mov    dword ptr [ecx + 4], esi
        mov    dword ptr [ecx], eax
        pop    esi
        ret    4
L_f70e:
        mov    dword ptr [ecx + 4], esi
        pop    esi
        ret    4
    }
}
