/*
 * FUN_007225b0 (extent 0x7225b0-0x7226e2) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0079f62c;
extern float  g_007a53e4;
extern int    g_0085b4a0;
extern char   g_0087bc34;
extern char   g_0087bc35;
extern void __cdecl FUN_0070e1b0(void);
extern void __cdecl FUN_0070e220(void);

__declspec(naked) void FUN_007225b0(void)
{
    __asm {
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_25e8
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_25d4
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        je    L_25d4
        fld    dword ptr [g_0076c5b0]
        ret    8
L_25d4:
        push    2
        push    0x20
        call    FUN_0070e220
        mov    dword ptr [esp + 4], eax
        fld    dword ptr [esp + 4]
        ret    8
L_25e8:
        mov    ecx, dword ptr [esp + 8]
        cmp    ecx, 7
        mov    eax, dword ptr [esp + 4]
        jle    L_2620
        lea    eax, [eax + eax*2]
        lea    ecx, [ecx + eax*4]
        mov    eax, dword ptr [ecx*4 + 0x858184]
        test    eax, eax
        mov    dword ptr [esp + 4], eax
        jl    L_2616
        fild    dword ptr [esp + 4]
        fmul    dword ptr [g_007a53e4]
        jmp    L_2633
L_2616:
        mov    dword ptr [esp + 4], 0xbf800000
        jmp    L_2637
L_2620:
        lea    edx, [eax + eax*2]
        lea    eax, [ecx + edx*4]
        fild    dword ptr [eax*4 + 0x858184]
        fmul    dword ptr [g_0079f62c]
L_2633:
        fstp    dword ptr [esp + 4]
L_2637:
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_264e
        mov    ecx, dword ptr [esp + 4]
        push    2
        push    0x20
        push    ecx
        call    FUN_0070e1b0
L_264e:
        fld    dword ptr [esp + 4]
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
        cmp    dword ptr [g_0085b4a0], 1
        jne    L_2692
        mov    al, byte ptr [g_0087bc34]
        test    al, al
        je    L_2680
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        je    L_2680
        xor    al, al
        ret    8
L_2680:
        push    3
        push    1
        call    FUN_0070e220
        neg    eax
        sbb    eax, eax
        neg    eax
        ret    8
L_2692:
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        xor    edx, edx
        mov    dl, byte ptr [eax + 0x85815b]
        cmp    ecx, edx
        jb    L_26ab
        xor    al, al
        ret    8
L_26ab:
        shl    eax, 5
        mov    al, byte ptr [eax + ecx + 0x858484]
        push    esi
        and    eax, 0x80
        mov    esi, eax
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_26d7
        xor    ecx, ecx
        test    esi, esi
        setne    cl
        push    3
        push    1
        push    ecx
        call    FUN_0070e1b0
L_26d7:
        xor    eax, eax
        test    esi, esi
        setne    al
        pop    esi
        ret    8
    }
}
