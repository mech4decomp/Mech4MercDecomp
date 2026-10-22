/*
 * FUN_004bc8ed (extent 0x4bc8ed-0x4bcd4b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern int    g_007da9e8;
extern float  g_007daac8;
extern int    g_007daad0;
extern int    g_007daad4;
extern int    g_007daadc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c8460(void);
extern void __cdecl FUN_006f4710(void);

__declspec(naked) void FUN_004bc8ed(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x18]
        shr    eax, 0xa
        and    eax, 1
        mov    edx, dword ptr [eax*4 + 0x7b35e0]
        mov    dword ptr [ecx + 0x13c], edx
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
        sub    esp, 0x1c
        mov    eax, dword ptr [esp + 0x20]
        mov    edx, dword ptr [eax + 0x9c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax + 0x8c]
        mov    eax, dword ptr [eax + 0xac]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [edi + 0x8c]
        mov    dword ptr [esp + 0x18], edx
        mov    edx, dword ptr [edi + 0x9c]
        mov    dword ptr [esp + 0x20], ecx
        lea    ecx, [esp + 0x20]
        mov    dword ptr [esp + 0x24], edx
        push    ecx
        mov    dword ptr [esp + 0x20], eax
        mov    eax, dword ptr [edi + 0xac]
        lea    edx, [esp + 0x18]
        push    edx
        lea    ecx, [esp + 0x1c]
        mov    dword ptr [esp + 0x30], eax
        call    FUN_0040ca10
        fld    dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp st(1), st(0)
        fadd    dword ptr [g_007daac8]
        fst    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_c9a7
        mov    dword ptr [esp + 0x10], 0
L_c9a7:
        mov    esi, dword ptr [edi + 0x158]
        xor    edx, edx
        test    esi, esi
        jbe    L_ca71
        mov    ebx, dword ptr [edi + 0x154]
        xor    ecx, ecx
L_c9bf:
        fld    dword ptr [ebx + ecx*8]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        je    L_c9dc
        fld    dword ptr [ebx + ecx*8 + 4]
        fcomp    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 1
        je    L_c9f3
L_c9dc:
        inc    edx
        mov    ecx, edx
        and    ecx, 0xffff
        cmp    ecx, esi
        jb    L_c9bf
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
        ret    0xc
L_c9f3:
        mov    ebx, dword ptr [edi + 0x144]
        mov    esi, edx
        and    esi, 0xffff
        cmp    word ptr [edi + 0x150], dx
        mov    ebp, dword ptr [ebx + esi*4]
        je    L_ca50
        mov    word ptr [edi + 0x150], dx
        mov    edi, dword ptr [edi + 0x148]
        cmp    esi, edi
        jae    L_ca22
        mov    ecx, ebp
        jmp    L_ca4d
L_ca22:
        test    dl, 0xf0
        je    L_ca50
        mov    eax, esi
        and    eax, 0xf
        cmp    eax, edi
        jae    L_ca3c
        mov    eax, dword ptr [ebx + eax*4]
        test    eax, eax
        je    L_ca3c
        mov    ecx, eax
        call    dword ptr [eax + 0x1c]
L_ca3c:
        shr    esi, 4
        and    esi, 0xf
        cmp    esi, edi
        jae    L_ca50
        mov    ecx, dword ptr [ebx + esi*4]
        test    ecx, ecx
        je    L_ca50
L_ca4d:
        call    dword ptr [ecx + 0x1c]
L_ca50:
        mov    esi, dword ptr [esp + 0x30]
        push    esi
        mov    ecx, ebp
        call    dword ptr [ebp + 0x130]
        cmp    eax, -1
        je    L_ca71
        push    eax
        mov    eax, dword ptr [esp + 0x38]
        push    eax
        push    esi
        mov    ecx, ebp
        call    dword ptr [ebp + 0x13c]
L_ca71:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1c
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x50
        push    ebx
        push    ebp
        push    esi
        mov    esi, ecx
        push    edi
        lea    ecx, [esp + 0x28]
        call    FUN_00491280
        mov    edi, dword ptr [esi + 0x140]
        mov    ebx, dword ptr [esp + 0x68]
        push    edi
        push    ebx
        lea    ecx, [esp + 0x30]
        mov    dword ptr [esp + 0x48], 0
        call    FUN_00491670
        add    edi, 0x18
        push    edi
        add    ebx, 0x18
        lea    eax, [esp + 0x44]
        push    ebx
        push    eax
        call    FUN_004c8460
        mov    ecx, dword ptr [esp + 0x70]
        add    ecx, 0x80
        add    esp, 0xc
        push    ecx
        lea    ecx, [esp + 0x14]
        call    FUN_00419480
        mov    edx, dword ptr [esi + 0x8c]
        mov    eax, dword ptr [esi + 0x9c]
        mov    ecx, dword ptr [esi + 0xac]
        mov    dword ptr [esp + 0x1c], edx
        lea    edx, [esp + 0x1c]
        mov    dword ptr [esp + 0x20], eax
        push    edx
        lea    eax, [esp + 0x14]
        mov    dword ptr [esp + 0x28], ecx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_0040ca10
        fld    dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        fld    dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        faddp st(1), st(0)
        fld    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x10]
        faddp st(1), st(0)
        fadd    dword ptr [g_007daac8]
        fst    dword ptr [esp + 0x68]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_cb44
        mov    dword ptr [esp + 0x68], 0
L_cb44:
        mov    edi, dword ptr [esi + 0x158]
        xor    ecx, ecx
        test    edi, edi
        jbe    L_cc24
        mov    ebx, dword ptr [esi + 0x154]
L_cb5a:
        xor    edx, edx
        mov    dx, word ptr [esi + 0x150]
        fld    dword ptr [ebx + edx*8]
        fcomp    dword ptr [esp + 0x68]
        fnstsw  ax
        lea    edx, [ebx + edx*8]
        test    ah, 0x41
        je    L_cb82
        fld    dword ptr [edx + 4]
        fcomp    dword ptr [esp + 0x68]
        fnstsw  ax
        test    ah, 1
        je    L_cb98
L_cb82:
        inc    ecx
        mov    eax, ecx
        and    eax, 0xffff
        cmp    eax, edi
        jb    L_cb5a
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x50
        ret    0xc
L_cb98:
        mov    ebx, dword ptr [esi + 0x144]
        xor    eax, eax
        mov    ax, word ptr [esi + 0x150]
        mov    edx, eax
        and    edx, 0xffff
        cmp    ax, cx
        mov    ebp, dword ptr [ebx + edx*4]
        je    L_cc03
        mov    edi, ecx
        mov    word ptr [esi + 0x150], cx
        mov    esi, dword ptr [esi + 0x148]
        and    edi, 0xffff
        cmp    edi, esi
        jae    L_cbd5
        mov    ecx, dword ptr [ebx + edi*4]
        jmp    L_cc00
L_cbd5:
        test    cl, 0xf0
        je    L_cc03
        mov    eax, edi
        and    eax, 0xf
        cmp    eax, esi
        jae    L_cbef
        mov    eax, dword ptr [ebx + eax*4]
        test    eax, eax
        je    L_cbef
        mov    ecx, eax
        call    dword ptr [eax + 0x1c]
L_cbef:
        shr    edi, 4
        and    edi, 0xf
        cmp    edi, esi
        jae    L_cc03
        mov    ecx, dword ptr [ebx + edi*4]
        test    ecx, ecx
        je    L_cc03
L_cc00:
        call    dword ptr [ecx + 0x1c]
L_cc03:
        mov    esi, dword ptr [esp + 0x64]
        push    esi
        mov    ecx, ebp
        call    dword ptr [ebp + 0x130]
        cmp    eax, -1
        je    L_cc24
        push    eax
        lea    eax, [esp + 0x2c]
        push    eax
        push    esi
        mov    ecx, ebp
        call    dword ptr [ebp + 0x13c]
L_cc24:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x50
        ret    0xc
        nop    
        nop    
        xor    eax, eax
        mov    ax, word ptr [ecx + 0x14c]
        test    ax, ax
        jbe    L_cc5c
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        and    eax, 0xffff
        push    edi
        mov    edi, eax
L_cc4d:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x24]
        add    esi, 4
        dec    edi
        jne    L_cc4d
        pop    edi
        pop    esi
L_cc5c:
        ret    
        nop    
        nop    
        nop    
        xor    eax, eax
        mov    ax, word ptr [ecx + 0x14c]
        test    ax, ax
        jbe    L_cc9a
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    ebp
        mov    ebp, dword ptr [esp + 0xc]
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        and    eax, 0xffff
        push    edi
        mov    edi, eax
L_cc87:
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    ebx
        push    ebp
        call    dword ptr [eax + 0x28]
        add    esi, 4
        dec    edi
        jne    L_cc87
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
L_cc9a:
        ret    8
        nop    
        nop    
        nop    
        push    edi
        xor    edi, edi
        mov    di, word ptr [ecx + 0x14c]
        test    di, di
        jbe    L_ccdd
        push    ebx
        mov    ebx, dword ptr [esp + 0x14]
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        push    esi
        mov    esi, dword ptr [ecx + 0x144]
        and    edi, 0xffff
L_ccc6:
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [ecx]
        push    ebx
        push    ebp
        push    edx
        call    dword ptr [eax + 0x2c]
        add    esi, 4
        dec    edi
        jne    L_ccc6
        pop    esi
        pop    ebp
        pop    ebx
L_ccdd:
        pop    edi
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
        mov    eax, dword ptr [g_007da9e8]
        push    esi
        push    eax
        push    0
        push    0x7713b0
        call    FUN_006f4710
        push    0x18
        mov    dword ptr [g_007daad0], eax
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_cd3f
        mov    ecx, dword ptr [g_007daadc]
        push    ecx
        push    0x771390
        push    0x85
        mov    ecx, esi
        call    FUN_004151c0
        mov    dword ptr [esi + 0x14], 0x4bcee0
        mov    dword ptr [g_007daad4], esi
        pop    esi
        ret    
L_cd3f:
        mov    dword ptr [g_007daad4], 0
        pop    esi
        ret    
    }
}
