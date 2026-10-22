/*
 * FUN_00734470 (extent 0x734470-0x7347ac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d968;
extern float  g_00776110;
extern float  g_0077b648;
extern float  g_007a60fc;
extern float  g_007a6100;
extern float  g_007a6108;
extern int    g_00856b8c;
extern char   g_0087dd0a;
extern char   g_008aa288;
extern void __cdecl FUN_00734470(void);
extern void __cdecl FUN_0075b0d0(void);
extern void __cdecl FUN_0075b4a0(void);
extern void __cdecl FUN_0075b4d0(void);
extern void __cdecl FUN_0075b510(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075dc60(void);

__declspec(naked) void FUN_00734470(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_44d0
        fild    dword ptr [esi + 0xb8]
        push    ebx
        mov    ebx, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [esp + 0x10]
        fmul    dword ptr [esi + 0xd8]
        mov    dword ptr [esi + 0xd0], edi
        mov    dword ptr [esi + 0xd4], ebx
        mov    dword ptr [esi + 0xc0], edi
        mov    dword ptr [esi + 0xc4], ebx
        call    FUN_0075db4a
        fild    dword ptr [esi + 0xbc]
        add    eax, edi
        mov    dword ptr [esi + 0xc8], eax
        fmul    dword ptr [esi + 0xdc]
        call    FUN_0075db4a
        add    eax, ebx
        pop    edi
        mov    dword ptr [esi + 0xcc], eax
        pop    ebx
L_44d0:
        pop    esi
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, dword ptr [esi + 4]
        xor    ebx, ebx
        cmp    edi, ebx
        je    L_47a6
        cmp    byte ptr [g_008aa288], bl
        jne    L_47a6
        mov    eax, dword ptr [esp + 0x14]
        dec    eax
        cmp    eax, 0xf
        ja    L_47a6
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x7347c4]
        jmp    dword ptr [ecx*4 + 0x7347ac]
        fld    dword ptr [esp + 0x18]
        call    FUN_0075db4a
        push    ebx
        push    0x989680
        push    edx
        push    eax
        call    FUN_0075dc60
        push    edx
        push    eax
        push    edi
        call    FUN_0075b0d0
        mov    edx, dword ptr [esi + 0x18]
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    edx
        call    FUN_0075b4a0
        pop    edi
        pop    esi
        pop    ebx
        ret    0x10
        fld    dword ptr [esp + 0x1c]
        call    FUN_0075db4a
        fld    dword ptr [esp + 0x18]
        push    eax
        call    FUN_0075db4a
        push    eax
        mov    ecx, esi
        call    FUN_00734470
        pop    edi
        pop    esi
        pop    ebx
        ret    0x10
        fild    dword ptr [esi + 0xb8]
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x1c]
        mov    dword ptr [esi + 0xd8], eax
        fmul    dword ptr [esp + 0x18]
        mov    dword ptr [esi + 0xdc], ecx
        fiadd    dword ptr [esi + 0xc0]
        call    FUN_0075db4a
        fild    dword ptr [esi + 0xbc]
        mov    dword ptr [esi + 0xc8], eax
        fmul    dword ptr [esp + 0x1c]
        fiadd    dword ptr [esi + 0xc4]
        call    FUN_0075db4a
        pop    edi
        mov    dword ptr [esi + 0xcc], eax
        pop    esi
        pop    ebx
        ret    0x10
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_45d8
        mov    dword ptr [esp + 0x18], 0
L_45d8:
        fld    dword ptr [esp + 0x18]
        fcomp    qword ptr [g_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jne    L_45f1
        mov    dword ptr [esp + 0x18], 0x3f800000
L_45f1:
        cmp    dword ptr [g_00856b8c], ebx
        mov    edx, dword ptr [esp + 0x18]
        mov    dword ptr [esi + 0xe0], edx
        je    L_47a6
        mov    esi, dword ptr [esi + 0xc]
        cmp    esi, ebx
        je    L_47a6
        fld    dword ptr [esp + 0x18]
        mov    byte ptr [g_0087dd0a], 1
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_4641
        push    0xffffd8f0
        push    esi
        call    FUN_0075b4d0
        pop    edi
        pop    esi
        mov    byte ptr [g_0087dd0a], bl
        pop    ebx
        ret    0x10
L_4641:
        fldln2    
        fld    dword ptr [esp + 0x18]
        fyl2x    
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b4d0
        pop    edi
        pop    esi
        mov    byte ptr [g_0087dd0a], bl
        pop    ebx
        ret    0x10
        fld    dword ptr [esp + 0x18]
        fcomp    qword ptr [g_00776110]
        fnstsw  ax
        test    ah, 1
        je    L_4680
        mov    dword ptr [esp + 0x18], 0xbf800000
L_4680:
        fld    dword ptr [esp + 0x18]
        fcomp    qword ptr [g_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4699
        mov    dword ptr [esp + 0x18], 0x3f800000
L_4699:
        mov    eax, dword ptr [esp + 0x18]
        mov    dword ptr [esi + 0xe4], eax
        cmp    dword ptr [g_00856b8c], ebx
        je    L_47a6
        mov    esi, dword ptr [esi + 0xc]
        cmp    esi, ebx
        je    L_47a6
        fld    dword ptr [esp + 0x18]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 0x41
        jne    L_4728
        fcomp    dword ptr [g_007a6108]
        mov    byte ptr [g_0087dd0a], 1
        fnstsw  ax
        test    ah, 1
        jne    L_46fa
        push    0x2710
        push    esi
        call    FUN_0075b510
        pop    edi
        pop    esi
        mov    byte ptr [g_0087dd0a], bl
        pop    ebx
        ret    0x10
L_46fa:
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [esp + 0x18]
        fldln2    
        fxch    st(1)
        fyl2x    
        fmul    qword ptr [g_007a6100]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b510
        pop    edi
        pop    esi
        mov    byte ptr [g_0087dd0a], bl
        pop    ebx
        ret    0x10
L_4728:
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_4792
        fld    dword ptr [esp + 0x18]
        mov    byte ptr [g_0087dd0a], 1
        fcomp    dword ptr [g_007a60fc]
        fnstsw  ax
        test    ah, 0x41
        je    L_4764
        push    0xffffd8f0
        push    esi
        call    FUN_0075b510
        pop    edi
        pop    esi
        mov    byte ptr [g_0087dd0a], bl
        pop    ebx
        ret    0x10
L_4764:
        fld    dword ptr [esp + 0x18]
        fadd    dword ptr [g_0076d064]
        fldln2    
        fxch    st(1)
        fyl2x    
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b510
        pop    edi
        pop    esi
        mov    byte ptr [g_0087dd0a], bl
        pop    ebx
        ret    0x10
L_4792:
        push    ebx
        push    esi
        mov    byte ptr [g_0087dd0a], 1
        call    FUN_0075b510
        mov    byte ptr [g_0087dd0a], bl
L_47a6:
        pop    edi
        pop    esi
        pop    ebx
        ret    0x10
        // jump-table data @ 0x007347AC (0 relocated pointers)
    }
}
