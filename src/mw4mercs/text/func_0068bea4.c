/*
 * FUN_0068bea4 (extent 0x68bea4-0x68c23d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2438;
extern int    g_007f244c;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_005d9ac0(void);
extern void __cdecl FUN_0068b500(void);
extern void __cdecl FUN_0068c250(void);
extern void __cdecl FUN_0068c280(void);
extern void __cdecl FUN_006b0610(void);
extern void __cdecl FUN_006b06d0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0068be78(void);

__declspec(naked) void FUN_0068bea4(void)
{
    __asm {
        add    byte ptr [eax], al
        add    byte ptr [eax], al
        mov    eax, dword ptr [esp + 0x10]
        add    edi, 4
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        /* __emit: backward jne to 0x68be78; MSVC6 emits 0F 85 rel32, ref uses 75 C2 rel8 */
        __emit 0x75
        __emit 0xC2
        mov    ecx, dword ptr [esi + 0x40]
        mov    eax, dword ptr [esi + 0x44]
        push    ecx
        push    eax
        push    eax
        call    FUN_0068c250
        mov    dword ptr [esi + 0x44], eax
        mov    edi, dword ptr [esi + 4]
        mov    edx, dword ptr [edi]
        add    esp, 0xc
        mov    ecx, edi
        lea    ebp, [esi + 0x34]
        call    dword ptr [edx + 0x168]
        mov    ecx, ebp
        push    eax
        mov    eax, dword ptr [esi + 0x2c]
        push    edi
        push    ebx
        push    eax
        call    FUN_0068b500
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    edx, dword ptr [esp + 0x40]
        sub    esp, 0xc
        mov    ecx, esp
        push    edx
        call    FUN_00551870
        mov    eax, dword ptr [esi + 0x10]
        push    eax
        push    0
        call    FUN_00707e70
        mov    ecx, dword ptr [g_007f2438]
        sub    esp, 8
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        mov    edx, dword ptr [ebp]
        mov    ecx, dword ptr [ebp + 4]
        sub    ecx, edx
        mov    dword ptr [esi + 0x14], eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        lea    eax, [edx - 1]
        xor    ebx, ebx
        test    eax, eax
        mov    dword ptr [esp + 0x28], ebx
        mov    dword ptr [esp + 0x1c], eax
        jle    L_c085
L_bf4e:
        mov    edi, dword ptr [esi + 4]
        mov    eax, dword ptr [edi]
        lea    edx, [ebx + 1]
        mov    ecx, edi
        mov    dword ptr [esp + 0x10], edx
        call    dword ptr [eax + 0x168]
        mov    ecx, dword ptr [esp + 0x2c]
        mov    edx, dword ptr [esp + 0x10]
        push    eax
        push    edi
        push    ecx
        push    edx
        mov    ecx, ebp
        call    FUN_0068b500
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        push    ebx
        mov    ecx, ebp
        call    FUN_0068b500
        sub    esp, 0xc
        mov    ecx, esp
        push    eax
        call    FUN_00551870
        mov    eax, dword ptr [esi + 0x10]
        push    eax
        push    0
        call    FUN_00707e70
        fild    dword ptr [esp + 0x50]
        mov    ecx, dword ptr [g_007f2438]
        sub    esp, 8
        faddp st(1), st(0)
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        mov    edi, dword ptr [esi + 0x44]
        cmp    edi, dword ptr [esi + 0x48]
        mov    dword ptr [esp + 0x18], eax
        je    L_bfd2
        test    edi, edi
        je    L_bfc7
        mov    dword ptr [edi], eax
L_bfc7:
        add    edi, 4
        mov    dword ptr [esi + 0x44], edi
        jmp    L_c073
L_bfd2:
        mov    ebx, dword ptr [esi + 0x40]
        mov    eax, edi
        sub    eax, ebx
        sar    eax, 2
        cmp    eax, 1
        mov    dword ptr [esp + 0x28], 1
        mov    dword ptr [esp + 0x14], eax
        lea    ecx, [esp + 0x28]
        jb    L_bff5
        lea    ecx, [esp + 0x14]
L_bff5:
        add    eax, dword ptr [ecx]
        mov    dword ptr [esp + 0x14], eax
        je    L_c013
        lea    ecx, [eax*4]
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    dword ptr [esp + 0x28], eax
        jmp    L_c01b
L_c013:
        mov    dword ptr [esp + 0x28], 0
L_c01b:
        mov    edx, dword ptr [esp + 0x28]
        mov    eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        push    edi
        push    ebx
        call    FUN_0068c280
        add    esp, 0x10
        test    eax, eax
        je    L_c039
        mov    ecx, dword ptr [esp + 0x18]
        mov    dword ptr [eax], ecx
L_c039:
        mov    edx, dword ptr [esp + 0x28]
        push    edx
        add    eax, 4
        push    eax
        push    edi
        push    edi
        call    FUN_0068c280
        add    esp, 0x10
        test    ebx, ebx
        mov    edi, eax
        mov    dword ptr [esp + 0x20], ebx
        je    L_c05f
        push    ebx
        call    FUN_004084e0
        add    esp, 4
L_c05f:
        mov    eax, dword ptr [esp + 0x28]
        mov    ecx, dword ptr [esp + 0x14]
        lea    edx, [eax + ecx*4]
        mov    dword ptr [esi + 0x40], eax
        mov    dword ptr [esi + 0x44], edi
        mov    dword ptr [esi + 0x48], edx
L_c073:
        mov    ebx, dword ptr [esp + 0x10]
        cmp    ebx, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0x28], ebx
        jl    L_bf4e
L_c085:
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x14
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
        sub    esp, 0x20
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 0xc]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [esi + 0x14]
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x20], ecx
        mov    cl, byte ptr [esi + 0x1a]
        mov    dword ptr [esp + 0x18], edx
        mov    dl, byte ptr [esi + 0x18]
        mov    dword ptr [esp + 0x1c], eax
        mov    al, byte ptr [esi + 0x19]
        mov    byte ptr [esp + 0x26], cl
        lea    ecx, [esp + 0xc]
        mov    byte ptr [esp + 0x24], dl
        mov    dl, byte ptr [esi + 0x1b]
        mov    byte ptr [esp + 0x25], al
        mov    eax, dword ptr [esi + 0x1c]
        push    ecx
        mov    ecx, edi
        mov    byte ptr [esp + 0x2b], dl
        mov    dword ptr [esp + 0x2c], eax
        mov    dword ptr [esp + 0x10], 0x798c44
        call    FUN_006b0610
        mov    bl, al
        neg    bl
        sbb    bl, bl
        lea    ecx, [esp + 0xc]
        inc    bl
        call    FUN_006b06d0
        test    bl, bl
        je    L_c126
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
        add    esp, 0x20
        ret    4
L_c126:
        mov    edx, dword ptr [edi + 0x28]
        mov    eax, dword ptr [esi + 0x28]
        pop    edi
        cmp    edx, eax
        pop    esi
        sete    al
        pop    ebx
        add    esp, 0x20
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [ecx + 0x34]
        lea    eax, [eax + eax*2]
        mov    edx, dword ptr [ecx + eax*4]
        lea    ecx, [ecx + eax*4]
        mov    eax, dword ptr [esp + 4]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
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
        mov    eax, dword ptr [ecx + 0x34]
        mov    edx, dword ptr [ecx + 0x38]
        sub    edx, eax
        mov    eax, 0x2aaaaaab
        imul    edx
        mov    eax, edx
        sar    eax, 1
        mov    ecx, eax
        shr    ecx, 0x1f
        add    eax, ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007f244c]
        sub    esp, 0xc
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esi + 0x38]
        mov    ecx, dword ptr [esi + 0x34]
        cmp    ecx, eax
        pop    esi
        jae    L_c1e6
L_c1ac:
        mov    edx, dword ptr [ecx + 4]
        fld    dword ptr [ecx]
        mov    dword ptr [esp + 4], edx
        mov    edx, dword ptr [ecx + 8]
        sub    eax, 0xc
        mov    dword ptr [esp + 8], edx
        mov    edx, dword ptr [eax]
        fstp    dword ptr [eax]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    dword ptr [ecx + 8], edx
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esp + 8]
        add    ecx, 0xc
        cmp    ecx, eax
        mov    dword ptr [eax + 8], edx
        jb    L_c1ac
L_c1e6:
        call    FUN_006f49a0
        add    esp, 0xc
        ret    
        nop    
        push    esi
        mov    esi, ecx
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edi + 0x30]
        mov    edx, dword ptr [edi + 0x168]
        mov    ecx, dword ptr [edi + 0x16c]
        sub    ecx, edx
        mov    dword ptr [esi + 0x28], eax
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    ecx, edx
        shr    ecx, 0x1f
        add    edx, ecx
        test    edx, edx
        jle    L_c238
        mov    edi, dword ptr [edi + 0x168]
        push    ebx
        mov    ebx, edx
L_c229:
        mov    edx, dword ptr [esi]
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        add    edi, 0xc
        dec    ebx
        jne    L_c229
        pop    ebx
L_c238:
        pop    edi
        pop    esi
        ret    4
    }
}
