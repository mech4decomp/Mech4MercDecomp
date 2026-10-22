/*
 * FUN_0059a7bc (extent 0x59a7bc-0x59ae04) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d070;
extern float  g_0076d5f0;
extern float  g_0076d968;
extern float  g_0076d970;
extern float  g_0077d038;
extern float  g_0077de98;
extern float  g_00783768;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db090;
extern int    g_007db098;
extern int    g_007db0ac;
extern int    g_007db0ae;
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040cbb0(void);
extern void __cdecl FUN_0040d030(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041c680(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_0041e710(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fde0(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004dad70(void);
extern void __cdecl FUN_004ea0f0(void);
extern void __cdecl FUN_00507f90(void);
extern void __cdecl FUN_0054a780(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_005922e0(void);
extern void __cdecl FUN_0059afb0(void);
extern void __cdecl FUN_005bf980(void);
extern void __cdecl FUN_005bf9a0(void);
extern void __cdecl FUN_005e7350(void);
extern void __cdecl FUN_005ef720(void);
extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_005f07d0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0075db56(void);
extern void __cdecl FUN_00767400(void);

__declspec(naked) void FUN_0059a7bc(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x1ac
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x78]
        lea    ecx, [edi + 0x78]
        call    dword ptr [eax + 4]
        mov    esi, eax
        mov    cx, word ptr [esi + 0x90]
        cmp    cx, word ptr [g_007db0ac]
        lea    eax, [esi + 0x90]
        mov    dword ptr [esp + 0x3c], eax
        jne    L_a802
        mov    dx, word ptr [eax + 2]
        cmp    dx, word ptr [g_007db0ae]
        je    L_aa83
L_a802:
        push    eax
        call    FUN_004da920
        add    esp, 4
        push    0x8bd5e8
        lea    ecx, [esp + 0x74]
        mov    dword ptr [esp + 0x3c], eax
        call    FUN_00767400
        push    0x8bd5e8
        lea    ecx, [esp + 0x5c]
        call    FUN_00767400
        mov    ebp, dword ptr [edi + 0x198]
        lea    eax, [esp + 0xd8]
        push    eax
        mov    ecx, ebp
        call    FUN_00507f90
        mov    ecx, dword ptr [eax + 0xc]
        mov    ebx, dword ptr [edi + 0x1d4]
        fld    dword ptr [ebx + 0x18]
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        push    ecx
        mov    dword ptr [esp + 0x14], ecx
        lea    ecx, [ebx + 0xc]
        fstp    dword ptr [esp]
        push    ecx
        lea    ecx, [esp + 0x28]
        mov    dword ptr [esp + 0x1c], edx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_0040ca40
        lea    edx, [esp + 0x20]
        push    edx
        push    ebx
        lea    ecx, [esp + 0x48]
        call    FUN_0040cbb0
        fld    dword ptr [esp + 0x40]
        fsub    dword ptr [esp + 0x10]
        lea    eax, [esp + 0xd8]
        push    eax
        mov    ecx, ebp
        fstp    dword ptr [esp + 0x50]
        fld    dword ptr [esp + 0x48]
        fsub    dword ptr [esp + 0x18]
        fstp    dword ptr [esp + 0x54]
        fld    dword ptr [esp + 0x4c]
        fsub    dword ptr [esp + 0x1c]
        fstp    dword ptr [esp + 0x58]
        call    FUN_00507f90
        mov    ecx, dword ptr [eax + 0xc]
        mov    edx, dword ptr [eax + 0x1c]
        mov    eax, dword ptr [eax + 0x2c]
        mov    dword ptr [esp + 0x10], ecx
        push    0x7b9460
        lea    ecx, [esp + 0x8c]
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00419460
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0x14]
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x20], ecx
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    ecx, [esp + 0x8c]
        mov    dword ptr [esp + 0x28], edx
        mov    dword ptr [esp + 0x2c], eax
        call    FUN_0040d030
        push    0
        push    1
        push    2
        lea    edx, [esp + 0x58]
        push    edx
        lea    ecx, [esp + 0x98]
        call    FUN_0041fde0
        mov    ecx, dword ptr [esi + 0x7c]
        mov    eax, dword ptr [esi + 0x78]
        mov    edx, dword ptr [esi + 0x80]
        mov    dword ptr [esp + 0x30], ecx
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x34], edx
        mov    ecx, edi
        call    FUN_005f07d0
        test    eax, eax
        je    L_a94f
        mov    ecx, edi
        call    FUN_005f07d0
        fld    dword ptr [esp + 0x34]
        fadd    dword ptr [eax + 0x440]
        fstp    dword ptr [esp + 0x34]
L_a94f:
        lea    eax, [esp + 0x88]
        push    eax
        lea    ecx, [esp + 0x30]
        push    ecx
        lea    ecx, [esp + 0x78]
        call    FUN_0041c680
        mov    edx, dword ptr [esi + 0x84]
        mov    eax, dword ptr [esi + 0x88]
        mov    ecx, dword ptr [esi + 0x8c]
        mov    dword ptr [esp + 0x58], edx
        mov    edx, dword ptr [esi + 0x30]
        push    edx
        mov    edx, dword ptr [esi + 0x60]
        mov    dword ptr [esp + 0x60], eax
        mov    eax, dword ptr [esi + 0x68]
        push    eax
        mov    eax, dword ptr [esi + 0x5c]
        mov    dword ptr [esp + 0x68], ecx
        mov    ecx, dword ptr [esi + 0x64]
        push    ecx
        push    edx
        push    eax
        mov    ecx, edi
        call    FUN_005f07c0
        mov    ecx, eax
        call    FUN_0059afb0
        push    ecx
        mov    ecx, esp
        push    eax
        call    FUN_004ea0f0
        mov    ecx, dword ptr [esi + 0x58]
        mov    edx, dword ptr [esi + 0x50]
        mov    eax, dword ptr [esi + 0x54]
        push    ecx
        push    edx
        push    eax
        lea    ecx, [esp + 0x7c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x64]
        lea    edx, [esp + 0x98]
        push    edx
        mov    edx, dword ptr [esp + 0x64]
        push    0
        push    -1
        push    4
        push    0
        lea    eax, [esp + 0xc4]
        push    eax
        push    ecx
        push    2
        push    edx
        push    0
        push    2
        push    0xb4
        lea    ecx, [esp + 0x160]
        call    FUN_005922e0
        mov    eax, dword ptr [esp + 0x108]
        push    0
        push    eax
        lea    ecx, [esp + 0x110]
        push    ecx
        lea    ecx, [esp + 0xc4]
        call    FUN_0041e690
        mov    ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov    dl, byte ptr [eax]
        mov    byte ptr [esp + 0x1c], dl
        mov    ax, word ptr [eax + 2]
        push    0
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    edx, [esp + 0xc0]
        push    edx
        mov    word ptr [esp + 0x2a], ax
        call    FUN_004d9910
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    ebp, dword ptr [edx]
        add    esp, 0xc
        xor    ecx, ebp
        mov    ecx, dword ptr [ecx + 0x1c]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x28]
        mov    ecx, dword ptr [edi + 0x17c]
        test    ecx, ecx
        je    L_aa77
        push    3
        call    FUN_0054a780
L_aa77:
        lea    ecx, [esp + 0xb8]
        call    FUN_0041e710
L_aa83:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x1ac
        ret    8
        mov    eax, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov    eax, dword ptr [esp + 0x18]
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 0x20]
        push    ecx
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_005e7350
        mov    edx, dword ptr [esi + 0xe0]
        cmp    dword ptr [edx + 0x14], 6
        jne    L_abc9
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x14]
        mov    cl, byte ptr [esi + 0x14]
        xor    edx, 0x85739531
        mov    al, byte ptr [edx + 0x17fc]
        mov    edx, dword ptr [g_007db090]
        cmp    cl, byte ptr [edx + 0x28]
        sete    bl
        test    al, al
        mov    byte ptr [esp + 0x20], al
        jne    L_ab00
        test    bl, bl
        je    L_abc9
L_ab00:
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        push    0
        mov    edi, eax
        call    FUN_00707e70
        fst    qword ptr [esi + 0x230]
        test    bl, bl
        fsub    qword ptr [esi + 0x228]
        fst    qword ptr [esp + 0x14]
        je    L_ab95
        fld    dword ptr [edi + 0x98]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_abc9
        push    0
        call    FUN_00707e70
        xor    eax, eax
        mov    ax, word ptr [esi + 0x16]
        mov    ecx, 3
        cdq    
        idiv    ecx
        mov    dword ptr [esp + 0x20], edx
        fild    dword ptr [esp + 0x20]
        fmul    dword ptr [g_0077de98]
        faddp st(1), st(0)
        fld    qword ptr [g_0076d968]
        call    FUN_0075db56
        fld    dword ptr [edi + 0x98]
        fsubr    qword ptr [esp + 0x14]
        fdiv    dword ptr [edi + 0x9c]
        fxch    st(1)
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        jne    L_abc9
        pop    edi
        mov    byte ptr [esi + 0x240], 1
        pop    esi
        pop    ebx
        ret    0x14
L_ab95:
        mov    al, byte ptr [esp + 0x20]
        test    al, al
        je    L_abc7
        fld    dword ptr [edi + 0x9c]
        fadd    dword ptr [edi + 0x98]
        fadd    dword ptr [g_0076d5f0]
        fxch    st(1)
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_abc9
        pop    edi
        mov    byte ptr [esi + 0x240], 1
        pop    esi
        pop    ebx
        ret    0x14
L_abc7:
        __emit 0xDD  // fstp st(0)
__emit 0xD8
L_abc9:
        pop    edi
        pop    esi
        pop    ebx
        ret    0x14
        nop    
        push    ecx
        push    ebx
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x78]
        lea    ecx, [esi + 0x78]
        push    edi
        call    dword ptr [eax + 4]
        fld    qword ptr [esp + 0x14]
        mov    edi, dword ptr [esi + 0xe0]
        fsub    qword ptr [esi + 0xe4]
        mov    ebx, eax
        mov    eax, dword ptr [edi + 0x14]
        add    eax, -6
        cmp    eax, 3
        fstp    dword ptr [esp + 0xc]
        ja    L_adec
        jmp    dword ptr [eax*4 + 0x59ae04]
        or    dword ptr [esi + 0x10], 0x40
        mov    byte ptr [esi + 0x180], 0
        jmp    L_adec
        fld    qword ptr [esp + 0x14]
        fsub    qword ptr [esi + 0xec]
        fsubr    dword ptr [ebx + 0x6c]
        fst    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_ac41
        mov    dword ptr [esp + 0xc], 0
L_ac41:
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, esi
        call    FUN_005ef720
        fld    dword ptr [ebx + 0x6c]
        fcomp    dword ptr [g_00783768]
        fnstsw  ax
        test    ah, 0x41
        jne    L_acba
        mov    al, byte ptr [esi + 0x180]
        test    al, al
        jne    L_acba
        fld    qword ptr [esp + 0x14]
        fsub    qword ptr [esi + 0xec]
        fld    dword ptr [ebx + 0x6c]
        fsub    dword ptr [g_0076d070]
        fcompp    
        fnstsw  ax
        test    ah, 0x41
        je    L_acba
        mov    ecx, esi
        call    FUN_005f07c0
        test    eax, eax
        je    L_acb3
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, dword ptr [eax + 0x3b0]
        test    ecx, ecx
        je    L_acb3
        push    0x25
        mov    ecx, esi
        call    FUN_005f07c0
        mov    ecx, dword ptr [eax + 0x3b0]
        call    FUN_00559be0
L_acb3:
        mov    byte ptr [esi + 0x180], 1
L_acba:
        fld    qword ptr [esp + 0x14]
        fsub    qword ptr [esi + 0xec]
        fcomp    dword ptr [ebx + 0x6c]
        fnstsw  ax
        test    ah, 0x41
        jne    L_ade8
        mov    ecx, dword ptr [esi + 0xe0]
        mov    edx, dword ptr [ecx]
        push    0
        push    9
        call    dword ptr [edx + 4]
        lea    edi, [esi + 0x1a4]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_ad00
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005bf9a0
L_ad00:
        mov    byte ptr [esi + 0x180], 0
        jmp    L_ade8
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x238]
        fcomp    qword ptr [g_0077d038]
        fnstsw  ax
        test    ah, 1
        jne    L_adec
        fld    dword ptr [esp + 0xc]
        fadd    st(0), st(0)
        fadd    qword ptr [esi + 0x228]
        fst    qword ptr [esi + 0x228]
        fld    dword ptr [esp + 0xc]
        fadd    qword ptr [esi + 0x230]
        fst    qword ptr [esi + 0x230]
        fsub st(0), st(1)
        fcomp    qword ptr [g_0076d970]
        fnstsw  ax
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        test    ah, 0x41
        je    L_adec
        mov    eax, dword ptr [edi]
        push    0
        push    1
        mov    ecx, edi
        call    dword ptr [eax + 4]
        jmp    L_adec
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x220]
        fld    dword ptr [ebx + 0xa0]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_adb6
        mov    edx, dword ptr [edi]
        push    0
        push    1
        mov    ecx, edi
        call    dword ptr [edx + 4]
        lea    edi, [esi + 0x1a4]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_ade8
        mov    ecx, edi
        call    FUN_0041fd80
        mov    ecx, eax
        call    FUN_005bf9a0
        jmp    L_ade8
L_adb6:
        lea    edi, [esi + 0x1a4]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_ade8
        mov    ecx, edi
        call    FUN_0041fd80
        push    0
        mov    edi, eax
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x220]
        push    ecx
        mov    ecx, edi
        fstp    dword ptr [esp]
        call    FUN_005bf980
L_ade8:
        and    dword ptr [esi + 0x10], 0xffffffbf
L_adec:
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_004dad70
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    8
        // jump-table data @ 0x0059AE04 (7 relocated pointers)
        __emit 0x0B
        __emit 0xAC
        __emit 0x59
        __emit 0x00
        __emit 0x1B
        __emit 0xAC
        __emit 0x59
        __emit 0x00
        __emit 0x6E
        __emit 0xAD
        __emit 0x59
        __emit 0x00
        __emit 0x0C
        __emit 0xAD
        __emit 0x59
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
