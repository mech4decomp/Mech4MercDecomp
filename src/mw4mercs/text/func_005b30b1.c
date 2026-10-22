/*
 * FUN_005b30b1 (extent 0x5b30b1-0x5b3601) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_007860c8;
extern float  g_00786350;
extern int    g_007b220c;
extern int    g_007f20f0;
extern int    g_007f24cc;
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_005b2b50(void);
extern void __cdecl FUN_005b2bb0(void);
extern void __cdecl FUN_005b3610(void);
extern void __cdecl FUN_005b3630(void);
extern void __cdecl FUN_005dcd00(void);
extern void __cdecl FUN_006100d0(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005b30b1(void)
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
        sub    esp, 8
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        call    dword ptr [eax + 0x178]
        mov    ecx, dword ptr [esi + 0x364]
        mov    eax, dword ptr [ecx + 8]
        cmp    eax, 2
        je    L_30ea
        cmp    eax, 9
        je    L_30ea
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 0x38]
        jmp    L_3131
L_30ea:
        mov    eax, dword ptr [ecx + 0x20]
        dec    eax
        je    L_312a
        dec    eax
        je    L_3114
        dec    eax
        jne    L_3131
        mov    eax, dword ptr [esi + 0x6ac]
        mov    ecx, dword ptr [esi + 0x6a8]
        neg    eax
        add    ecx, eax
        mov    dword ptr [esi + 0x6ac], eax
        mov    dword ptr [esi + 0x6a8], ecx
        jmp    L_3131
L_3114:
        mov    dword ptr [esi + 0x6a8], 0
        mov    dword ptr [esi + 0x6ac], 1
        jmp    L_3131
L_312a:
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 0x38]
L_3131:
        mov    eax, dword ptr [g_007f20f0]
        mov    ecx, dword ptr [esi + 0x35c]
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_318e
        push    0
        call    FUN_00707e70
        fstp    qword ptr [esp + 4]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_316f
        mov    dword ptr [eax + 4], 8
        mov    byte ptr [eax], 0
        jmp    L_3171
L_316f:
        xor    eax, eax
L_3171:
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        push    eax
        mov    ecx, esi
        mov    dword ptr [eax + 0x14], 0
        call    FUN_005dcd00
L_318e:
        pop    esi
        add    esp, 8
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
        mov    eax, dword ptr [g_007b220c]
        push    ebx
        push    esi
        push    edi
        mov    esi, ecx
        push    eax
        lea    edi, [esi + 0x36c]
        lea    ebx, [esi + 0x390]
        push    edi
        push    ebx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_31dc
        mov    ecx, dword ptr [ebx]
        mov    edx, dword ptr [ebx + 4]
        mov    eax, dword ptr [ebx + 8]
        mov    dword ptr [edi], ecx
        mov    dword ptr [edi + 4], edx
        mov    dword ptr [edi + 8], eax
        mov    byte ptr [esi + 0x3cc], 1
L_31dc:
        mov    ecx, dword ptr [g_007b220c]
        push    ecx
        lea    edi, [esi + 0x378]
        lea    ebx, [esi + 0x39c]
        push    edi
        push    ebx
        call    FUN_0041c540
        add    esp, 0xc
        test    al, al
        jne    L_320d
        mov    edx, dword ptr [ebx]
        mov    eax, dword ptr [ebx + 4]
        mov    ecx, dword ptr [ebx + 8]
        mov    dword ptr [edi], edx
        mov    dword ptr [edi + 4], eax
        mov    dword ptr [edi + 8], ecx
L_320d:
        fld    dword ptr [esi + 0x3ac]
        fcomp    dword ptr [esi + 0x3a8]
        fnstsw  ax
        test    ah, 0x40
        jne    L_322c
        mov    edx, dword ptr [esi + 0x3ac]
        mov    dword ptr [esi + 0x3a8], edx
L_322c:
        pop    edi
        pop    esi
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        and    esp, 0xfffffff8
        sub    esp, 0x3c
        push    ebx
        push    esi
        mov    esi, ecx
        mov    ebx, dword ptr [esi + 0x364]
        test    ebx, ebx
        push    edi
        jne    L_3270
        mov    al, byte ptr [esi + 0x6d1]
        test    al, al
        jne    L_3270
        mov    al, byte ptr [esi + 0x6d0]
        test    al, al
        je    L_35f8
L_3270:
        mov    edi, dword ptr [esi + 0x35c]
        mov    dword ptr [esp + 0x24], 0
        mov    dword ptr [esp + 0x28], 0
        mov    dword ptr [esp + 0x2c], 0
        mov    eax, dword ptr [edi + 0xd8]
        mov    ecx, dword ptr [eax + 0x8c]
        mov    edx, dword ptr [eax + 0x9c]
        add    eax, 0x80
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x30], ecx
        lea    ecx, [edi + 0x78]
        mov    dword ptr [esp + 0x34], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [esp + 0x38], eax
        call    dword ptr [edx + 4]
        mov    dword ptr [esp + 0x18], eax
        mov    eax, dword ptr [edi + 0x42c]
        mov    dword ptr [esp + 0x10], eax
        mov    al, byte ptr [esi + 0x6d0]
        test    al, al
        je    L_32fb
        lea    edi, [esi + 0x6d4]
        push    edi
        mov    ecx, esi
        call    FUN_005b2bb0
        test    al, al
        jne    L_32f0
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1e0]
L_32f0:
        mov    eax, dword ptr [edi + 8]
        fld    dword ptr [edi]
        mov    dword ptr [esp + 0x44], eax
        jmp    L_3317
L_32fb:
        mov    eax, dword ptr [esi + 0x6a8]
        mov    edx, dword ptr [ebx]
        push    eax
        lea    ecx, [esp + 0x40]
        push    ecx
        mov    ecx, ebx
        call    dword ptr [edx + 0x2c]
        fld    dword ptr [eax]
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x44], edx
L_3317:
        fsub    dword ptr [esp + 0x30]
        mov    eax, dword ptr [esp + 0x18]
        fld    dword ptr [esp + 0x44]
        fsub    dword ptr [esp + 0x38]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp    st(2)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [eax + 0x2bc]
        fld    st(1)
        fcomp    qword ptr [g_00786350]
        fnstsw  ax
        test    ah, 1
        jne    L_3363
        fld    st(0)
        fmul st(0), st(1)
        fxch    st(1)
        fxch    st(2)
        fcompp    
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 1
        je    L_33d1
        jmp    L_3367
L_3363:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_3367:
        mov    al, byte ptr [esi + 0x6d0]
        test    al, al
        je    L_337a
        mov    ecx, esi
        call    FUN_005b2b50
        jmp    L_33d1
L_337a:
        mov    edi, dword ptr [esi + 0x6ac]
        test    edi, edi
        jle    L_33a6
        mov    ecx, dword ptr [esi + 0x364]
        mov    edx, dword ptr [esi + 0x6a8]
        mov    eax, dword ptr [ecx]
        lea    ebx, [edx + edi]
        call    dword ptr [eax + 0x30]
        cmp    eax, ebx
        jle    L_33a4
        mov    dword ptr [esi + 0x6a8], ebx
        jmp    L_33d1
L_33a4:
        test    edi, edi
L_33a6:
        jge    L_33bd
        mov    ecx, dword ptr [esi + 0x6a8]
        lea    eax, [ecx + edi]
        test    eax, eax
        jle    L_33bd
        mov    dword ptr [esi + 0x6a8], eax
        jmp    L_33d1
L_33bd:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        mov    edx, dword ptr [esi]
        push    0
        push    eax
        push    ecx
        mov    ecx, esi
        call    dword ptr [edx + 0x15c]
L_33d1:
        mov    al, byte ptr [esi + 0x6d0]
        test    al, al
        je    L_33fb
        mov    edx, dword ptr [esi + 0x6d4]
        mov    eax, dword ptr [esi + 0x6d8]
        mov    ecx, dword ptr [esi + 0x6dc]
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x28], eax
        mov    dword ptr [esp + 0x2c], ecx
        jmp    L_3426
L_33fb:
        mov    eax, dword ptr [esi + 0x6a8]
        mov    ecx, dword ptr [esi + 0x364]
        mov    edx, dword ptr [ecx]
        push    eax
        lea    eax, [esp + 0x40]
        push    eax
        call    dword ptr [edx + 0x2c]
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x24], ecx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [esp + 0x28], edx
        mov    eax, dword ptr [eax + 8]
        mov    dword ptr [esp + 0x2c], eax
L_3426:
        mov    al, byte ptr [esi + 0x6d1]
        test    al, al
        je    L_352a
        fld    qword ptr [g_007860c8]
        push    0
        fadd    qword ptr [esi + 0x6c8]
        fstp    qword ptr [esp + 0x1c]
        call    FUN_00707e70
        fcomp    qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        jne    L_3463
        mov    ecx, dword ptr [esi + 0x6a4]
        mov    byte ptr [ecx + 0x548], 0
L_3463:
        mov    edx, dword ptr [esp + 0x34]
        mov    ecx, dword ptr [esi + 0x35c]
        push    0
        push    edx
        mov    edx, dword ptr [esp + 0x40]
        lea    eax, [esp + 0x17]
        push    eax
        mov    eax, dword ptr [esp + 0x3c]
        push    ecx
        push    edx
        push    eax
        call    FUN_006100d0
        mov    ecx, dword ptr [esi + 0x6a4]
        fadd    dword ptr [ecx + 0x540]
        add    esp, 0x18
        fcomp    dword ptr [esp + 0x34]
        fnstsw  ax
        test    ah, 0x41
        je    L_34ae
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x1dc]
        jmp    L_359c
L_34ae:
        mov    eax, 0xbf800000
        push    0
        mov    dword ptr [esi + 0x390], eax
        mov    dword ptr [esi + 0x394], eax
        mov    dword ptr [esi + 0x398], eax
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x18]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_3509
        push    0
        push    3
        mov    ecx, eax
        call    FUN_005b3610
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x1c]
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, esi
        mov    dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_3509:
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esp + 0x1c]
        xor    eax, eax
        mov    dword ptr [eax + 8], ecx
        push    eax
        mov    ecx, esi
        mov    dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
L_352a:
        mov    eax, 0xbf800000
        push    0
        mov    dword ptr [esi + 0x390], eax
        mov    dword ptr [esi + 0x394], eax
        mov    dword ptr [esi + 0x398], eax
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x18]
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_356a
        push    0
        push    2
        mov    ecx, eax
        call    FUN_005b3610
        mov    edi, eax
        jmp    L_356c
L_356a:
        xor    edi, edi
L_356c:
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x1c]
        sub    esp, 0xc
        mov    dword ptr [edi + 8], eax
        mov    dword ptr [edi + 0xc], ecx
        lea    edx, [esp + 0x30]
        mov    ecx, esp
        push    edx
        call    FUN_0040c5d0
        mov    ecx, edi
        call    FUN_005b3630
        push    edi
        mov    ecx, esi
        mov    byte ptr [edi + 0x24], 0
        call    FUN_005dcd00
L_359c:
        mov    eax, dword ptr [esi + 0x3b8]
        push    0
        mov    dword ptr [esi + 0x3ac], eax
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov    ecx, dword ptr [esi + 0x3b8]
        mov    dword ptr [esp + 0x18], ecx
        mov    ecx, dword ptr [g_007f24cc]
        call    FUN_00416110
        test    eax, eax
        je    L_35d9
        push    0
        push    8
        mov    ecx, eax
        call    FUN_005b3610
        jmp    L_35db
L_35d9:
        xor    eax, eax
L_35db:
        mov    edx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [eax + 0xc], ecx
        push    eax
        mov    ecx, esi
        mov    dword ptr [eax + 0x14], edx
        call    FUN_005dcd00
L_35f8:
        pop    edi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
