/*
 * FUN_005ca652 (extent 0x5ca652-0x5cac7a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076d598;
extern float  g_007704c0;
extern float  g_007748c8;
extern float  g_00779d28;
extern float  g_00787938;
extern float  g_0078793c;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_0040c610(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00547bc0(void);
extern void __cdecl FUN_00566570(void);
extern void __cdecl FUN_00580540(void);
extern void __cdecl FUN_00580560(void);
extern void __cdecl FUN_005805a0(void);
extern void __cdecl FUN_005809d0(void);
extern void __cdecl FUN_005b9560(void);
extern void __cdecl FUN_005c0d10(void);
extern void __cdecl FUN_005cb1e0(void);
extern void __cdecl FUN_005cb200(void);
extern void __cdecl FUN_005cb500(void);
extern void __cdecl FUN_005cbb00(void);
extern void __cdecl FUN_005fb8e0(void);
extern void __cdecl FUN_005fbb00(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005ca652(void)
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
        sub    esp, 0x48
        push    ebx
        push    esi
        lea    ebx, [ecx + 0x1c8]
        push    edi
        lea    eax, [esp + 0x3c]
        push    eax
        mov    ecx, ebx
        mov    dword ptr [esp + 0x18], ebx
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005fbb00
        fld    dword ptr [eax]
        mov    esi, dword ptr [esp + 0x58]
        fld    dword ptr [esi]
        mov    ecx, dword ptr [eax + 4]
        mov    edx, dword ptr [eax + 8]
        fsub st(0), st(1)
        mov    dword ptr [esp + 0x1c], ecx
        mov    dword ptr [esp + 0x20], edx
        fstp    dword ptr [esp + 0x24]
        lea    ecx, [esp + 0x24]
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x28]
        fld    dword ptr [esi + 8]
        fsub    dword ptr [esp + 0x20]
        fstp    dword ptr [esp + 0x2c]
        call    FUN_0040cb00
        mov    eax, dword ptr [esp + 0x5c]
        mov    edi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        cmp    edi, eax
        fstp    dword ptr [esp + 0xc]
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x5c], eax
        je    L_a7e3
        push    ebp
L_a6e2:
        mov    ebp, dword ptr [edi]
        mov    ecx, ebp
        call    FUN_005fb8e0
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jne    L_a7c7
        lea    eax, [esp + 0x4c]
        push    eax
        mov    ecx, ebp
        call    FUN_005fbb00
        mov    ecx, dword ptr [eax]
        mov    dword ptr [esp + 0x28], ecx
        mov    edx, dword ptr [eax + 4]
        push    esi
        lea    ecx, [esp + 0x2c]
        mov    dword ptr [esp + 0x30], edx
        mov    eax, dword ptr [eax + 8]
        push    ecx
        lea    ecx, [esp + 0x3c]
        mov    dword ptr [esp + 0x38], eax
        call    FUN_0040ca10
        lea    ebx, [esi + 0xc]
        push    ebx
        lea    ecx, [esp + 0x38]
        call    FUN_0040c610
        fst    dword ptr [esp + 0x5c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_a753
        mov    dword ptr [esp + 0x5c], 0
        jmp    L_a768
L_a753:
        fld    dword ptr [esp + 0x5c]
        fcomp    dword ptr [esi + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_a768
        mov    edx, dword ptr [esi + 0x18]
        mov    dword ptr [esp + 0x5c], edx
L_a768:
        mov    eax, dword ptr [esp + 0x5c]
        push    eax
        push    ebx
        lea    ecx, [esp + 0x48]
        call    FUN_0040ca40
        lea    ecx, [esp + 0x40]
        push    ecx
        push    esi
        lea    ecx, [esp + 0x24]
        call    FUN_0040cbb0
        fld    dword ptr [esi]
        fsub    dword ptr [esp + 0x1c]
        fld    dword ptr [esi + 4]
        fsub    dword ptr [esp + 0x20]
        fld    dword ptr [esi + 8]
        fsub    dword ptr [esp + 0x24]
        fld    st(0)
        fmul st(0), st(1)
        fld    st(2)
        fmul st(0), st(3)
        faddp st(1), st(0)
        fld    st(3)
        fmul st(0), st(4)
        faddp st(1), st(0)
        fstp    st(3)
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fcom    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_a7c5
        fstp    dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], ebp
        jmp    L_a7c7
L_a7c5:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_a7c7:
        mov    eax, dword ptr [esp + 0x60]
        add    edi, 4
        cmp    edi, eax
        jne    L_a6e2
        mov    eax, dword ptr [esp + 0x14]
        test    eax, eax
        pop    ebp
        jne    L_a7ea
        mov    ebx, dword ptr [esp + 0x14]
L_a7e3:
        mov    ecx, ebx
        call    FUN_0041fd80
L_a7ea:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x48
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
        push    ebp
        mov    ebp, esp
        sub    esp, 0x68
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x170]
        mov    ecx, dword ptr [eax + 0xd8]
        push    esi
        add    ecx, 0x80
        push    edi
        push    ecx
        lea    ecx, [ebp - 0x50]
        mov    dword ptr [ebp - 0x24], ebx
        call    FUN_00419480
        lea    esi, [ebx + 0x1c8]
        mov    ecx, esi
        mov    dword ptr [ebp - 0x20], 0x3f800000
        mov    dword ptr [ebp - 0x1c], 0xbf800000
        mov    dword ptr [ebp - 0x18], esi
        call    FUN_0041fd80
        test    eax, eax
        je    L_a8a5
        mov    ecx, esi
        call    FUN_0041fd80
        mov    eax, dword ptr [eax + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [ebp - 0x68]
        call    FUN_00419480
        lea    edx, [ebp - 0x68]
        push    edx
        lea    eax, [ebp - 0x50]
        push    eax
        lea    ecx, [ebp - 0x5c]
        call    FUN_0040ca10
        lea    ecx, [ebp - 0x5c]
        call    FUN_0040cb00
        fstp    dword ptr [ebp - 0x20]
        mov    eax, dword ptr [ebp - 0x20]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 0x1c], eax
        fld    dword ptr [ebp - 0x1c]
        fstp    dword ptr [ebp - 0x20]
        mov    ecx, esi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005fb8e0
        fstp    dword ptr [ebp - 0x1c]
L_a8a5:
        push    0
        call    FUN_00707e70
        fsub    qword ptr [g_00779d28]
        fld    dword ptr [ebx + 0x1d8]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_a93e
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx]
        xor    eax, edx
        mov    edx, dword ptr [eax + 0x10]
        xor    edx, 0x85739531
        je    L_a93e
        mov    ecx, dword ptr [ebx + 0x1d4]
        cmp    ecx, -1
        je    L_a93e
        push    ecx
        mov    ecx, dword ptr [eax + 0x10]
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    esi, eax
        test    esi, esi
        je    L_a93e
        mov    eax, dword ptr [esi + 0x10]
        shr    eax, 0x13
        and    al, 1
        cmp    al, 1
        je    L_a93e
        mov    edi, dword ptr [ebx + 0x170]
        cmp    esi, edi
        je    L_a93e
        test    edi, edi
        je    L_a940
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x60]
        mov    edx, eax
        mov    eax, dword ptr [edi]
        mov    ecx, edi
        mov    dword ptr [ebp - 0x14], edx
        call    dword ptr [eax + 0x60]
        mov    ecx, dword ptr [ebp - 0x14]
        cmp    ecx, eax
        jne    L_a940
        mov    edx, dword ptr [ebx]
        mov    ecx, ebx
        call    dword ptr [edx + 0xc8]
        cmp    al, 1
        jne    L_a940
L_a93e:
        xor    esi, esi
L_a940:
        lea    eax, [ebp - 1]
        push    eax
        lea    ecx, [ebp - 0x44]
        mov    dword ptr [ebp - 0x10], esi
        call    FUN_00580540
        mov    edx, dword ptr [ebx + 0x170]
        lea    ecx, [ebp - 0x44]
        push    ecx
        mov    ecx, dword ptr [edx + 0x3d4]
        call    FUN_005b9560
        push    eax
        call    FUN_005c0d10
        add    esp, 8
        lea    eax, [ebp - 1]
        push    eax
        lea    ecx, [ebp - 0x38]
        call    FUN_005cb1e0
        mov    edi, dword ptr [ebp - 0x44]
        cmp    edi, dword ptr [ebp - 0x40]
        je    L_ab8c
        lea    ecx, [edi + 4]
        mov    dword ptr [ebp - 0x14], ecx
L_a98b:
        mov    ecx, dword ptr [ebp - 0x18]
        call    FUN_0041fd80
        test    eax, eax
        je    L_aa35
        mov    ecx, dword ptr [ebp - 0x18]
        call    FUN_0041fd80
        cmp    dword ptr [edi], eax
        jne    L_aa35
        mov    ecx, dword ptr [ebp - 0x18]
        mov    dword ptr [ebp - 0xc], 0x3f800000
        call    FUN_0041fd80
        cmp    eax, esi
        jne    L_a9e3
        test    esi, esi
        fld    dword ptr [g_0078793c]
        fmul    dword ptr [ebp - 0xc]
        fstp    dword ptr [ebp - 0xc]
        je    L_a9e3
        cmp    byte ptr [esi + 0xdc], 1
        jne    L_a9e3
        fld    dword ptr [ebp - 0xc]
        fmul    dword ptr [g_007748c8]
        fstp    dword ptr [ebp - 0xc]
L_a9e3:
        mov    eax, dword ptr [ebp - 0x34]
        cmp    eax, dword ptr [ebp - 0x30]
        je    L_aa12
        lea    edx, [ebp - 0xc]
        push    edx
        push    eax
        call    FUN_005cbb00
        mov    ecx, dword ptr [ebp - 0x34]
        mov    eax, dword ptr [ebp - 0x14]
        add    ecx, 4
        add    esp, 8
        add    edi, 4
        add    eax, 4
        mov    dword ptr [ebp - 0x34], ecx
        mov    dword ptr [ebp - 0x14], eax
        jmp    L_ab81
L_aa12:
        push    1
        lea    ecx, [ebp - 0xc]
        push    ecx
        push    eax
        lea    ecx, [ebp - 0x38]
        call    FUN_00566570
        mov    eax, dword ptr [ebp - 0x14]
        mov    ecx, dword ptr [ebp - 0x34]
        add    edi, 4
        add    eax, 4
        mov    dword ptr [ebp - 0x14], eax
        jmp    L_ab81
L_aa35:
        mov    ecx, dword ptr [ebx + 0x170]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [edi]
        call    dword ptr [edx + 0x60]
        mov    ebx, eax
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0x60]
        cmp    eax, ebx
        je    L_ab5a
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x60]
        test    eax, eax
        je    L_ab5a
        mov    ecx, esi
        call    FUN_005fb8e0
        fcomp    dword ptr [ebp - 0x1c]
        fnstsw  ax
        test    ah, 1
        jne    L_ab5a
        mov    ecx, esi
        call    FUN_005fb8e0
        fcomp    dword ptr [g_0076d598]
        fnstsw  ax
        test    ah, 0x40
        jne    L_ab5a
        mov    eax, dword ptr [esi + 0xd8]
        add    eax, 0x80
        push    eax
        lea    ecx, [ebp - 0x5c]
        call    FUN_00419480
        lea    ecx, [ebp - 0x5c]
        push    ecx
        lea    edx, [ebp - 0x50]
        push    edx
        lea    ecx, [ebp - 0x68]
        call    FUN_0040ca10
        lea    ecx, [ebp - 0x68]
        call    FUN_0040cb00
        fstp    dword ptr [ebp - 0x28]
        mov    eax, dword ptr [ebp - 0x28]
        sar    eax, 1
        add    eax, 0x1fc00000
        mov    dword ptr [ebp - 0x2c], eax
        fld    dword ptr [ebp - 0x2c]
        fadd    dword ptr [g_007704c0]
        mov    eax, dword ptr [edi]
        mov    ebx, dword ptr [ebp - 0x24]
        fdivr    dword ptr [ebp - 0x20]
        mov    edx, dword ptr [ebx + 0x1d4]
        fmul    dword ptr [g_00787938]
        fstp    dword ptr [ebp - 8]
        mov    ecx, dword ptr [eax + 0x30]
        cmp    ecx, edx
        jne    L_ab1b
        fld    dword ptr [g_0078793c]
        fmul    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 8]
        mov    cl, byte ptr [eax + 0xdc]
        cmp    cl, 1
        jne    L_ab1b
        fld    dword ptr [ebx + 0x1bc]
        fmul    dword ptr [ebp - 8]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 8]
L_ab1b:
        mov    ecx, dword ptr [ebp - 0x34]
        cmp    ecx, dword ptr [ebp - 0x30]
        je    L_ab37
        test    ecx, ecx
        je    L_ab2f
        mov    edx, dword ptr [ebp - 8]
        mov    dword ptr [ecx], edx
        mov    ecx, dword ptr [ebp - 0x34]
L_ab2f:
        add    ecx, 4
        mov    dword ptr [ebp - 0x34], ecx
        jmp    L_ab49
L_ab37:
        push    1
        lea    eax, [ebp - 8]
        push    eax
        push    ecx
        lea    ecx, [ebp - 0x38]
        call    FUN_00566570
        mov    ecx, dword ptr [ebp - 0x34]
L_ab49:
        mov    eax, dword ptr [ebp - 0x14]
        mov    esi, dword ptr [ebp - 0x10]
        add    edi, 4
        add    eax, 4
        mov    dword ptr [ebp - 0x14], eax
        jmp    L_ab81
L_ab5a:
        mov    ecx, dword ptr [ebp - 0x40]
        mov    eax, dword ptr [ebp - 0x14]
        cmp    eax, ecx
        je    L_ab6f
        push    edi
        push    ecx
        push    eax
        call    FUN_005809d0
        add    esp, 0xc
L_ab6f:
        mov    eax, dword ptr [ebp - 0x40]
        mov    ecx, dword ptr [ebp - 0x34]
        mov    esi, dword ptr [ebp - 0x10]
        mov    ebx, dword ptr [ebp - 0x24]
        sub    eax, 4
        mov    dword ptr [ebp - 0x40], eax
L_ab81:
        cmp    edi, dword ptr [ebp - 0x40]
        jne    L_a98b
        jmp    L_ab8f
L_ab8c:
        mov    ecx, dword ptr [ebp - 0x34]
L_ab8f:
        mov    edi, dword ptr [ebp - 0x38]
        cmp    edi, ecx
        jne    L_ab9a
        mov    ebx, edi
        jmp    L_abb9
L_ab9a:
        lea    edx, [edi + 4]
        cmp    edx, ecx
        mov    esi, edi
        je    L_abb7
L_aba3:
        fld    dword ptr [esi]
        fcomp    dword ptr [edx]
        fnstsw  ax
        test    ah, 1
        je    L_abb0
        mov    esi, edx
L_abb0:
        add    edx, 4
        cmp    edx, ecx
        jne    L_aba3
L_abb7:
        mov    ebx, esi
L_abb9:
        cmp    ebx, ecx
        jne    L_abd6
        lea    ecx, [ebp - 0x38]
        call    FUN_005cb200
        lea    ecx, [ebp - 0x44]
        call    FUN_00580560
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
L_abd6:
        xor    esi, esi
        cmp    edi, ecx
        mov    edx, edi
        je    L_abf1
L_abde:
        fld    dword ptr [edx]
        fcomp    dword ptr [ebx]
        fnstsw  ax
        test    ah, 0x40
        jne    L_abf1
        add    edx, 4
        inc    esi
        cmp    edx, ecx
        jne    L_abde
L_abf1:
        mov    edi, dword ptr [ebp - 0x18]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_ac41
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, dword ptr [ebp - 0x44]
        cmp    dword ptr [ecx + esi*4], eax
        jne    L_ac41
        mov    eax, dword ptr [ebp - 0x38]
        mov    edx, dword ptr [ebp - 0x30]
        sub    edx, eax
        sar    edx, 2
        push    edx
        push    eax
        lea    ecx, [ebp - 0x30]
        call    FUN_00547bc0
        mov    eax, dword ptr [ebp - 0x44]
        mov    ecx, dword ptr [ebp - 0x3c]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        lea    ecx, [ebp - 0x3c]
        call    FUN_005805a0
        pop    edi
        pop    esi
        xor    eax, eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
L_ac41:
        mov    eax, dword ptr [ebp - 0x38]
        mov    ecx, dword ptr [ebp - 0x30]
        mov    edx, dword ptr [ebp - 0x44]
        mov    esi, dword ptr [edx + esi*4]
        sub    ecx, eax
        sar    ecx, 2
        push    ecx
        push    eax
        call    FUN_005cb500
        mov    eax, dword ptr [ebp - 0x44]
        mov    edx, dword ptr [ebp - 0x3c]
        sub    edx, eax
        add    esp, 8
        sar    edx, 2
        push    edx
        push    eax
        lea    ecx, [ebp - 0x3c]
        call    FUN_005805a0
        pop    edi
        mov    eax, esi
        pop    esi
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    
    }
}
